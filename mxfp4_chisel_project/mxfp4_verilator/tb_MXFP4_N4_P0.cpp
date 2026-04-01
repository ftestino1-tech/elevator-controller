// =============================================================================
// Testbench Verilator — MXFP4DotProductEngine N=4, pipeline_depth=0
// Compila e lancia con: make
// =============================================================================

#include "VMXFP4DotProductEngine.h"
#include "verilated.h"
#include <iostream>
#include <cassert>
#include <cstdint>

// N=4: outWidth = 8 + log2(4) = 10 bit
static const int OUT_WIDTH = 10;

// Estensione di segno da OUT_WIDTH bit a int64
int64_t signExtend(uint64_t val) {
    uint64_t mask = (1ULL << OUT_WIDTH) - 1;
    val = val & mask;
    if (val & (1ULL << (OUT_WIDTH - 1)))
        return (int64_t)(val - (1ULL << OUT_WIDTH));
    return (int64_t)val;
}

static int passed = 0, failed = 0;

void check(const char* name, int64_t got, int64_t expected) {
    if (got == expected) {
        std::cout << "  [PASS] " << name << " = " << got << "\n";
        passed++;
    } else {
        std::cout << "  [FAIL] " << name
                  << " got=" << got << " expected=" << expected << "\n";
        failed++;
    }
}

void checkPositive(const char* name, int64_t got) {
    if (got > 0) {
        std::cout << "  [PASS] " << name << " = " << got << " (> 0)\n";
        passed++;
    } else {
        std::cout << "  [FAIL] " << name << " = " << got << " (atteso > 0)\n";
        failed++;
    }
}

void tick(VMXFP4DotProductEngine* dut) {
    dut->clock = 0; dut->eval();
    dut->clock = 1; dut->eval();
}

void setVec(VMXFP4DotProductEngine* dut,
            uint8_t a0, uint8_t a1, uint8_t a2, uint8_t a3,
            uint8_t b0, uint8_t b1, uint8_t b2, uint8_t b3) {
    dut->io_vecA_0 = a0; dut->io_vecA_1 = a1;
    dut->io_vecA_2 = a2; dut->io_vecA_3 = a3;
    dut->io_vecB_0 = b0; dut->io_vecB_1 = b1;
    dut->io_vecB_2 = b2; dut->io_vecB_3 = b3;
}

int main(int argc, char** argv) {
    VerilatedContext* ctx = new VerilatedContext;
    ctx->commandArgs(argc, argv);
    VMXFP4DotProductEngine* dut = new VMXFP4DotProductEngine(ctx);

    dut->reset = 1;
    dut->clock = 0;
    dut->io_scaleA = 127;
    dut->io_scaleB = 127;
    dut->eval();
    tick(dut);
    dut->reset = 0;

    std::cout << "\n=== Verilator Testbench — MXFP4DotProductEngine N=4 P=0 ===\n";
    std::cout << "    outWidth=" << OUT_WIDTH << " bit (sign extension applicata)\n";

    // Test 1: vecA=vecB=[1.0 x4] → atteso dotProduct=256, combinedScale=254
    std::cout << "\n[TEST 1] vecA=vecB=[1.0 x4] (0x2)\n";
    setVec(dut, 0x2,0x2,0x2,0x2, 0x2,0x2,0x2,0x2);
    dut->io_scaleA = 127; dut->io_scaleB = 127;
    tick(dut);
    check("dotProduct",    signExtend(dut->io_dotProduct), 256);
    check("combinedScale", (int64_t)dut->io_combinedScale, 254);

    // Test 2: vecA=[1.0 x4] vecB=[-1.0 x4] → atteso dotProduct=-256
    std::cout << "\n[TEST 2] vecA=[1.0 x4] (0x2) vecB=[-1.0 x4] (0xA)\n";
    setVec(dut, 0x2,0x2,0x2,0x2, 0xA,0xA,0xA,0xA);
    dut->io_scaleA = 127; dut->io_scaleB = 127;
    tick(dut);
    check("dotProduct",    signExtend(dut->io_dotProduct), -256);
    check("combinedScale", (int64_t)dut->io_combinedScale, 254);

    // Test 3: vecA=[0.0 x4] vecB=[1.0 x4] → atteso dotProduct=0
    std::cout << "\n[TEST 3] vecA=[0.0 x4] (0x0) vecB=[1.0 x4]\n";
    setVec(dut, 0x0,0x0,0x0,0x0, 0x2,0x2,0x2,0x2);
    dut->io_scaleA = 127; dut->io_scaleB = 127;
    tick(dut);
    check("dotProduct",    signExtend(dut->io_dotProduct), 0);

    // Test 4: vecA=[1.5 x4] vecB=[1.0 x4] → atteso dotProduct=384
    std::cout << "\n[TEST 4] vecA=[1.5 x4] (0x3) vecB=[1.0 x4] (0x2)\n";
    setVec(dut, 0x3,0x3,0x3,0x3, 0x2,0x2,0x2,0x2);
    dut->io_scaleA = 127; dut->io_scaleB = 127;
    tick(dut);
    check("dotProduct",    signExtend(dut->io_dotProduct), 384);

    // Test 5: vecA=vecB=[2.0 x4] → dotProduct > 0, combinedScale=254
    std::cout << "\n[TEST 5] vecA=vecB=[2.0 x4] (0x4)\n";
    setVec(dut, 0x4,0x4,0x4,0x4, 0x4,0x4,0x4,0x4);
    dut->io_scaleA = 127; dut->io_scaleB = 127;
    tick(dut);
    check("combinedScale", (int64_t)dut->io_combinedScale, 254);
    checkPositive("dotProduct", signExtend(dut->io_dotProduct));

    // Test 6: scaleA=130, scaleB=125 → combinedScale=255
    std::cout << "\n[TEST 6] scaleA=130 scaleB=125\n";
    setVec(dut, 0x2,0x2,0x2,0x2, 0x2,0x2,0x2,0x2);
    dut->io_scaleA = 130; dut->io_scaleB = 125;
    tick(dut);
    check("combinedScale", (int64_t)dut->io_combinedScale, 255);

    std::cout << "\n=== Risultato: " << passed << " PASS, "
              << failed << " FAIL ===\n";

    dut->final();
    delete dut;
    delete ctx;
    return failed > 0 ? 1 : 0;
}
