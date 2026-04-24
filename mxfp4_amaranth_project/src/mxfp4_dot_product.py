from amaranth import *
from amaranth.sim import Simulator, Tick
import math


class MXFP4Multiplier(Elaboratable):
    def __init__(self):
        self.a        = Signal(4)
        self.b        = Signal(4)
        self.sign     = Signal(1)
        self.exp_out  = Signal(3)
        self.mant_out = Signal(4)

    def elaborate(self, platform):
        m = Module()

        sign_a = self.a[3]
        exp_a  = self.a[1:3]
        mant_a = self.a[0]
        sign_b = self.b[3]
        exp_b  = self.b[1:3]
        mant_b = self.b[0]

        mant_eff_a = Signal(2)
        mant_eff_b = Signal(2)
        exp_a_3    = Signal(3)
        exp_b_3    = Signal(3)

        with m.If((exp_a == 0) & (mant_a == 0)):
            m.d.comb += mant_eff_a.eq(0)
        with m.Else():
            m.d.comb += mant_eff_a.eq(Cat(mant_a, Const(1, 1)))

        with m.If((exp_b == 0) & (mant_b == 0)):
            m.d.comb += mant_eff_b.eq(0)
        with m.Else():
            m.d.comb += mant_eff_b.eq(Cat(mant_b, Const(1, 1)))

        m.d.comb += exp_a_3.eq(Cat(exp_a, Const(0, 1)))
        m.d.comb += exp_b_3.eq(Cat(exp_b, Const(0, 1)))

        product = Signal(4)
        m.d.comb += product.eq(mant_eff_a * mant_eff_b)

        m.d.comb += [
            self.sign.eq(sign_a ^ sign_b),
            self.exp_out.eq(exp_a_3 + exp_b_3),
            self.mant_out.eq(product),
        ]
        return m


class ExponentAligner(Elaboratable):
    def __init__(self, n):
        self.n       = n
        self.signs   = [Signal(1, name=f"sign_{i}")   for i in range(n)]
        self.exps    = [Signal(3, name=f"exp_{i}")    for i in range(n)]
        self.mants   = [Signal(4, name=f"mant_{i}")   for i in range(n)]
        self.aligned = [Signal(8, name=f"aligned_{i}") for i in range(n)]

    def elaborate(self, platform):
        m = Module()

        exp_max     = Signal(3, name="exp_max")
        current_max = self.exps[0]
        for i in range(1, self.n):
            new_max = Signal(3, name=f"max_{i}")
            with m.If(self.exps[i] > current_max):
                m.d.comb += new_max.eq(self.exps[i])
            with m.Else():
                m.d.comb += new_max.eq(current_max)
            current_max = new_max
        m.d.comb += exp_max.eq(current_max)

        for i in range(self.n):
            shift    = Signal(3, name=f"shift_{i}")
            mant_ext = Signal(8, name=f"mant_ext_{i}")
            shifted  = Signal(8, name=f"shifted_{i}")
            negated  = Signal(8, name=f"negated_{i}")

            m.d.comb += [
                shift.eq(exp_max - self.exps[i]),
                mant_ext.eq(Cat(Const(0, 4), self.mants[i])),
                shifted.eq(mant_ext >> shift),
                negated.eq((~shifted + 1)[:8]),
            ]
            with m.If(self.signs[i]):
                m.d.comb += self.aligned[i].eq(negated)
            with m.Else():
                m.d.comb += self.aligned[i].eq(shifted)

        return m


class AdderTree(Elaboratable):
    def __init__(self, n, pipeline_depth):
        self.n              = n
        self.pipeline_depth = pipeline_depth
        self.tree_depth     = int(math.log2(n))
        self.out_width      = 8 + self.tree_depth
        self.inputs         = [Signal(8, name=f"in_{i}") for i in range(n)]
        self.result         = Signal(self.out_width, name="result")

    def elaborate(self, platform):
        m = Module()

        def maybe_reg(sig, level_idx):
            insert = False
            if self.pipeline_depth == 1:
                insert = (level_idx == self.tree_depth // 2)
            elif self.pipeline_depth == 2:
                insert = (level_idx == self.tree_depth // 3) or \
                         (level_idx == (self.tree_depth * 2) // 3)
            if insert:
                reg = Signal(self.out_width, name=f"pipe_l{level_idx}_{sig.name}")
                m.d.sync += reg.eq(sig)
                return reg
            return sig

        def build_tree(nodes, level):
            if len(nodes) == 1:
                return nodes[0]
            next_level = []
            for i in range(0, len(nodes), 2):
                s = Signal(self.out_width, name=f"sum_l{level}_p{i//2}")
                m.d.comb += s.eq(nodes[i] + nodes[i+1])
                next_level.append(maybe_reg(s, level))
            return build_tree(next_level, level + 1)

        ext_inputs = []
        for i, inp in enumerate(self.inputs):
            ext      = Signal(self.out_width, name=f"ext_{i}")
            sign_bit = inp[7]
            fill     = Signal(self.out_width - 8, name=f"fill_{i}")
            m.d.comb += fill.eq(Mux(sign_bit, (1 << (self.out_width - 8)) - 1, 0))
            m.d.comb += ext.eq(Cat(inp, fill))
            ext_inputs.append(ext)

        m.d.comb += self.result.eq(build_tree(ext_inputs, 0))
        return m


class SharedScaleIntegrator(Elaboratable):
    def __init__(self, out_width):
        self.out_width      = out_width
        self.tree_sum       = Signal(out_width)
        self.scale_a        = Signal(8)
        self.scale_b        = Signal(8)
        self.dot_product    = Signal(out_width)
        self.combined_scale = Signal(9)

    def elaborate(self, platform):
        m = Module()
        scale_a_9 = Signal(9)
        scale_b_9 = Signal(9)
        m.d.comb += [
            scale_a_9.eq(Cat(self.scale_a, Const(0, 1))),
            scale_b_9.eq(Cat(self.scale_b, Const(0, 1))),
            self.dot_product.eq(self.tree_sum),
            self.combined_scale.eq(scale_a_9 + scale_b_9),
        ]
        return m


class MXFP4DotProductEngine(Elaboratable):
    def __init__(self, n, pipeline_depth=0):
        assert n > 0 and (n & (n-1)) == 0
        assert 0 <= pipeline_depth <= 2

        self.n              = n
        self.pipeline_depth = pipeline_depth
        self.tree_depth     = int(math.log2(n))
        self.out_width      = 8 + self.tree_depth

        self.vec_a          = [Signal(4, name=f"vecA_{i}") for i in range(n)]
        self.vec_b          = [Signal(4, name=f"vecB_{i}") for i in range(n)]
        self.scale_a        = Signal(8, name="scaleA")
        self.scale_b        = Signal(8, name="scaleB")
        self.dot_product    = Signal(self.out_width, name="dotProduct")
        self.combined_scale = Signal(9, name="combinedScale")

    def elaborate(self, platform):
        m = Module()

        # Dichiara esplicitamente il dominio sync anche per pipeline_depth=0,
        # cosi' add_clock() funziona sempre nel testbench.
        m.domains += ClockDomain("sync")

        muls = [MXFP4Multiplier() for _ in range(self.n)]
        for i, mul in enumerate(muls):
            m.submodules[f"mul_{i}"] = mul
            m.d.comb += [mul.a.eq(self.vec_a[i]), mul.b.eq(self.vec_b[i])]

        aligner = ExponentAligner(self.n)
        m.submodules.aligner = aligner
        for i, mul in enumerate(muls):
            m.d.comb += [
                aligner.signs[i].eq(mul.sign),
                aligner.exps[i].eq(mul.exp_out),
                aligner.mants[i].eq(mul.mant_out),
            ]

        tree = AdderTree(self.n, self.pipeline_depth)
        m.submodules.adder_tree = tree
        for i in range(self.n):
            m.d.comb += tree.inputs[i].eq(aligner.aligned[i])

        integ = SharedScaleIntegrator(self.out_width)
        m.submodules.integrator = integ
        m.d.comb += [
            integ.tree_sum.eq(tree.result),
            integ.scale_a.eq(self.scale_a),
            integ.scale_b.eq(self.scale_b),
        ]

        m.d.comb += [
            self.dot_product.eq(integ.dot_product),
            self.combined_scale.eq(integ.combined_scale),
        ]
        return m
