package MXFP4DotProduct;

import Vector::*;
import FIFO::*;

typedef Bit#(4) MXFP4Elem;

typedef struct {
    Bit#(1) sign;
    Bit#(3) exp;
    Bit#(4) mant;
} MulResult deriving (Bits, Eq, FShow);

typedef Int#(8) AlignedVal;

// =============================================================================
// Moltiplicatore MXFP4 — evita operatori ternari annidati
// =============================================================================
function MulResult mxfp4Mul(MXFP4Elem a, MXFP4Elem b);
    Bit#(1) signA = a[3];
    Bit#(2) expA  = a[2:1];
    Bit#(1) mantA = a[0];
    Bit#(1) signB = b[3];
    Bit#(2) expB  = b[2:1];
    Bit#(1) mantB = b[0];

    // Bit implicito: usa concatenazione esplicita
    Bit#(2) mantEffA;
    if ((expA == 0) && (mantA == 0))
        mantEffA = 2'b00;
    else
        mantEffA = {1'b1, mantA};

    Bit#(2) mantEffB;
    if ((expB == 0) && (mantB == 0))
        mantEffB = 2'b00;
    else
        mantEffB = {1'b1, mantB};

    Bit#(1) signOut = signA ^ signB;
    Bit#(3) expOut  = zeroExtend(expA) + zeroExtend(expB);
    // Prodotto 2bit x 2bit con larghezza esplicita
    Bit#(4) mantOut = ({2'b00, mantEffA} * {2'b00, mantEffB})[3:0];

    return MulResult { sign: signOut, exp: expOut, mant: mantOut };
endfunction

// =============================================================================
// Allineamento esponenti
// =============================================================================
function Bit#(3) getMulExp(MulResult r);
    return r.exp;
endfunction

function AlignedVal alignOne(Bit#(3) expMax, MulResult r);
    Bit#(3) shift   = expMax - r.exp;
    Bit#(8) mantExt = {r.mant, 4'b0000};
    Bit#(8) shifted = mantExt >> shift;
    Int#(8) val     = unpack(shifted);
    if (r.sign == 1'b1)
        return -val;
    else
        return val;
endfunction

function Vector#(n, AlignedVal)
    alignExponents(Vector#(n, MulResult) results)
    provisos(Add#(1, k, n));
    Bit#(3) expMax = fold(max, map(getMulExp, results));
    function AlignedVal doAlign(MulResult r) = alignOne(expMax, r);
    return map(doAlign, results);
endfunction

// =============================================================================
// Adder tree
// =============================================================================
function Vector#(TDiv#(n,2), Int#(w))
    sumPairs(Vector#(n, Int#(w)) v)
    provisos(Add#(TDiv#(n,2), k, n));
    function Int#(w) addPair(Tuple2#(Int#(w), Int#(w)) p) =
        tpl_1(p) + tpl_2(p);
    return map(addPair, zip(take(v), drop(v)));
endfunction

function Int#(w) adderTree4(Vector#(4, Int#(w)) v);
    Vector#(2, Int#(w)) l2 = sumPairs(v);
    return l2[0] + l2[1];
endfunction

function Int#(w) adderTree8(Vector#(8, Int#(w)) v);
    return adderTree4(sumPairs(v));
endfunction

function Int#(w) adderTree32(Vector#(32, Int#(w)) v);
    return adderTree4(sumPairs(sumPairs(sumPairs(v))));
endfunction

// =============================================================================
// Interfaccia
// =============================================================================
interface MXFP4DotProductIfc#(numeric type n, numeric type outW);
    method Action loadInputs(
        Vector#(n, MXFP4Elem) vecA,
        Vector#(n, MXFP4Elem) vecB,
        Bit#(8) scaleA,
        Bit#(8) scaleB
    );
    method Int#(outW) getDotProduct();
    method Bit#(9)    getCombinedScale();
    method Bool       resultReady();
endinterface

// =============================================================================
// N=4, pd=0
// =============================================================================
module mkMXFP4DotProduct_N4_P0(MXFP4DotProductIfc#(4, 10));
    Reg#(Vector#(4, MXFP4Elem)) rVecA   <- mkReg(replicate(0));
    Reg#(Vector#(4, MXFP4Elem)) rVecB   <- mkReg(replicate(0));
    Reg#(Bit#(8))                rScaleA <- mkReg(0);
    Reg#(Bit#(8))                rScaleB <- mkReg(0);
    Reg#(Bool)                   rValid  <- mkReg(False);

    method Action loadInputs(va, vb, sa, sb);
        rVecA <= va; rVecB <= vb; rScaleA <= sa; rScaleB <= sb; rValid <= True;
    endmethod

    method Int#(10) getDotProduct();
        Vector#(4, MulResult)  muls = zipWith(mxfp4Mul, rVecA, rVecB);
        Vector#(4, AlignedVal) al   = alignExponents(muls);
        return adderTree4(map(signExtend, al));
    endmethod

    method Bit#(9) getCombinedScale() =
        zeroExtend(rScaleA) + zeroExtend(rScaleB);

    method Bool resultReady() = rValid;
endmodule

// =============================================================================
// N=4, pd=1
// =============================================================================
module mkMXFP4DotProduct_N4_P1(MXFP4DotProductIfc#(4, 10));
    Reg#(Vector#(4, MXFP4Elem)) rVecA   <- mkReg(replicate(0));
    Reg#(Vector#(4, MXFP4Elem)) rVecB   <- mkReg(replicate(0));
    Reg#(Bit#(8))                rScaleA <- mkReg(0);
    Reg#(Bit#(8))                rScaleB <- mkReg(0);
    Reg#(Vector#(2, Int#(10)))   rPipe   <- mkReg(replicate(0));
    Reg#(Bool)                   rValid  <- mkReg(False);
    Reg#(Bool)                   rPipeV  <- mkReg(False);

    rule stage1 (rValid);
        Vector#(4, MulResult)  muls = zipWith(mxfp4Mul, rVecA, rVecB);
        Vector#(4, AlignedVal) al   = alignExponents(muls);
        rPipe  <= sumPairs(map(signExtend, al));
        rPipeV <= True;
    endrule

    method Action loadInputs(va, vb, sa, sb);
        rVecA <= va; rVecB <= vb; rScaleA <= sa; rScaleB <= sb; rValid <= True;
    endmethod

    method Int#(10) getDotProduct() = rPipe[0] + rPipe[1];

    method Bit#(9) getCombinedScale() =
        zeroExtend(rScaleA) + zeroExtend(rScaleB);

    method Bool resultReady() = rPipeV;
endmodule

// =============================================================================
// N=8, pd=0
// =============================================================================
module mkMXFP4DotProduct_N8_P0(MXFP4DotProductIfc#(8, 11));
    Reg#(Vector#(8, MXFP4Elem)) rVecA   <- mkReg(replicate(0));
    Reg#(Vector#(8, MXFP4Elem)) rVecB   <- mkReg(replicate(0));
    Reg#(Bit#(8))                rScaleA <- mkReg(0);
    Reg#(Bit#(8))                rScaleB <- mkReg(0);
    Reg#(Bool)                   rValid  <- mkReg(False);

    method Action loadInputs(va, vb, sa, sb);
        rVecA <= va; rVecB <= vb; rScaleA <= sa; rScaleB <= sb; rValid <= True;
    endmethod

    method Int#(11) getDotProduct();
        Vector#(8, MulResult)  muls = zipWith(mxfp4Mul, rVecA, rVecB);
        Vector#(8, AlignedVal) al   = alignExponents(muls);
        return adderTree8(map(signExtend, al));
    endmethod

    method Bit#(9) getCombinedScale() =
        zeroExtend(rScaleA) + zeroExtend(rScaleB);

    method Bool resultReady() = rValid;
endmodule

// =============================================================================
// N=32, pd=0
// =============================================================================
module mkMXFP4DotProduct_N32_P0(MXFP4DotProductIfc#(32, 13));
    Reg#(Vector#(32, MXFP4Elem)) rVecA   <- mkReg(replicate(0));
    Reg#(Vector#(32, MXFP4Elem)) rVecB   <- mkReg(replicate(0));
    Reg#(Bit#(8))                 rScaleA <- mkReg(0);
    Reg#(Bit#(8))                 rScaleB <- mkReg(0);
    Reg#(Bool)                    rValid  <- mkReg(False);

    method Action loadInputs(va, vb, sa, sb);
        rVecA <= va; rVecB <= vb; rScaleA <= sa; rScaleB <= sb; rValid <= True;
    endmethod

    method Int#(13) getDotProduct();
        Vector#(32, MulResult)  muls = zipWith(mxfp4Mul, rVecA, rVecB);
        Vector#(32, AlignedVal) al   = alignExponents(muls);
        return adderTree32(map(signExtend, al));
    endmethod

    method Bit#(9) getCombinedScale() =
        zeroExtend(rScaleA) + zeroExtend(rScaleB);

    method Bool resultReady() = rValid;
endmodule

endpackage
