/*
 * Copyright 2020 Red Hat Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) OR AUTHOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */
#include "qmd.h"
#include "cla0c0qmd.h"

#define NVA0C0_QMDV00_06_VAL(a...) NVQMD_VAL(NVA0C0, QMDV00_06, ##a)
#define NVA0C0_QMDV00_06_DEF(a...) NVQMD_DEF(NVA0C0, QMDV00_06, ##a)
#define NVA0C0_QMDV00_06_IDX(a...) NVQMD_IDX(NVA0C0, QMDV00_06, ##a)

void
NVA0C0QmdDump_V00_06(uint32_t *qmd)
{
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_V1_A, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_V1_B, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_V1_C, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_V1_D, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_V1_E, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_V1_F, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_V1_G, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_V1_H, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_A_A, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_V1_I, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_V1_J, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_A, "0x%x");
   NVA0C0_QMDV00_06_DEF(qmd, QMD_RESERVED_V1_K, FALSE, TRUE);
   NVA0C0_QMDV00_06_DEF(qmd, QMD_RESERVED_V1_L, FALSE, TRUE);
   NVA0C0_QMDV00_06_DEF(qmd, SEMAPHORE_RELEASE_ENABLE0, FALSE, TRUE);
   NVA0C0_QMDV00_06_DEF(qmd, SEMAPHORE_RELEASE_ENABLE1, FALSE, TRUE);
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_B, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_V1_M, "0x%x");
   NVA0C0_QMDV00_06_DEF(qmd, QMD_RESERVED_V1_N, FALSE, TRUE);
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_V1_O, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_C, "0x%x");
   NVA0C0_QMDV00_06_DEF(qmd, INVALIDATE_TEXTURE_HEADER_CACHE, FALSE, TRUE);
   NVA0C0_QMDV00_06_DEF(qmd, INVALIDATE_TEXTURE_SAMPLER_CACHE, FALSE, TRUE);
   NVA0C0_QMDV00_06_DEF(qmd, INVALIDATE_TEXTURE_DATA_CACHE, FALSE, TRUE);
   NVA0C0_QMDV00_06_DEF(qmd, INVALIDATE_SHADER_DATA_CACHE, FALSE, TRUE);
   NVA0C0_QMDV00_06_DEF(qmd, INVALIDATE_INSTRUCTION_CACHE, FALSE, TRUE);
   NVA0C0_QMDV00_06_DEF(qmd, INVALIDATE_SHADER_CONSTANT_CACHE, FALSE, TRUE);
   NVA0C0_QMDV00_06_VAL(qmd, PROGRAM_OFFSET, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_V1_P, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_V1_Q, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_D, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_V1_R, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_V1_S, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_E, "0x%x");
   NVA0C0_QMDV00_06_DEF(qmd, RELEASE_MEMBAR_TYPE, FE_NONE, FE_SYSMEMBAR);
   NVA0C0_QMDV00_06_DEF(qmd, CWD_MEMBAR_TYPE, L1_NONE, L1_SYSMEMBAR, L1_MEMBAR);
   NVA0C0_QMDV00_06_DEF(qmd, QMD_RESERVED_V1_T, FALSE, TRUE);
   NVA0C0_QMDV00_06_DEF(qmd, QMD_RESERVED_V1_U, FALSE, TRUE);
   NVA0C0_QMDV00_06_DEF(qmd, THROTTLED, FALSE, TRUE);
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_E2_A, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_E2_B, "0x%x");
   NVA0C0_QMDV00_06_DEF(qmd, API_VISIBLE_CALL_LIMIT, _32, NO_CHECK);
   NVA0C0_QMDV00_06_DEF(qmd, SHARED_MEMORY_BANK_MAPPING, FOUR_BYTES_PER_BANK,
                                                         EIGHT_BYTES_PER_BANK);
   NVA0C0_QMDV00_06_DEF(qmd, SAMPLER_INDEX, INDEPENDENTLY, VIA_HEADER_INDEX);
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_E3_A, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, CTA_RASTER_WIDTH, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, CTA_RASTER_HEIGHT, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, CTA_RASTER_DEPTH, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, CTA_RASTER_WIDTH_RESUME, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, CTA_RASTER_HEIGHT_RESUME, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, CTA_RASTER_DEPTH_RESUME, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_V1_V, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_F, "0x%x");
   NVA0C0_QMDV00_06_DEF(qmd, QMD_RESERVED_V1_W, FALSE, TRUE);
   NVA0C0_QMDV00_06_VAL(qmd, SHARED_MEMORY_SIZE, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_G, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_VERSION, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_MAJOR_VERSION, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_H, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, CTA_THREAD_DIMENSION0, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, CTA_THREAD_DIMENSION1, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, CTA_THREAD_DIMENSION2, "0x%x");
   for (int i = 0; i < 8; i++)
      NVA0C0_QMDV00_06_IDX(qmd, CONSTANT_BUFFER_VALID, i, FALSE, TRUE);
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_I, "0x%x");
   NVA0C0_QMDV00_06_DEF(qmd, L1_CONFIGURATION,
                             DIRECTLY_ADDRESSABLE_MEMORY_SIZE_16KB,
                             DIRECTLY_ADDRESSABLE_MEMORY_SIZE_32KB,
                             DIRECTLY_ADDRESSABLE_MEMORY_SIZE_48KB);
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_V1_X, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_V1_Y, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, RELEASE0_ADDRESS_LOWER, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, RELEASE0_ADDRESS_UPPER, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_J, "0x%x");
   NVA0C0_QMDV00_06_DEF(qmd, RELEASE0_REDUCTION_OP, RED_ADD,
                                                    RED_MIN,
                                                    RED_MAX,
                                                    RED_INC,
                                                    RED_DEC,
                                                    RED_AND,
                                                    RED_OR,
                                                    RED_XOR);
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_K, "0x%x");
   NVA0C0_QMDV00_06_DEF(qmd, RELEASE0_REDUCTION_FORMAT, UNSIGNED_32, SIGNED_32);
   NVA0C0_QMDV00_06_DEF(qmd, RELEASE0_REDUCTION_ENABLE, FALSE, TRUE);
   NVA0C0_QMDV00_06_DEF(qmd, RELEASE0_STRUCTURE_SIZE, FOUR_WORDS, ONE_WORD);
   NVA0C0_QMDV00_06_VAL(qmd, RELEASE0_PAYLOAD, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, RELEASE1_ADDRESS_LOWER, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, RELEASE1_ADDRESS_UPPER, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_L, "0x%x");
   NVA0C0_QMDV00_06_DEF(qmd, RELEASE1_REDUCTION_OP, RED_ADD,
                                                    RED_MIN,
                                                    RED_MAX,
                                                    RED_INC,
                                                    RED_DEC,
                                                    RED_AND,
                                                    RED_OR,
                                                    RED_XOR);
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_M, "0x%x");
   NVA0C0_QMDV00_06_DEF(qmd, RELEASE1_REDUCTION_FORMAT, UNSIGNED_32, SIGNED_32);
   NVA0C0_QMDV00_06_DEF(qmd, RELEASE1_REDUCTION_ENABLE, FALSE, TRUE);
   NVA0C0_QMDV00_06_DEF(qmd, RELEASE1_STRUCTURE_SIZE, FOUR_WORDS, ONE_WORD);
   NVA0C0_QMDV00_06_VAL(qmd, RELEASE1_PAYLOAD, "0x%x");
   for (int i = 0; i < 8; i++) {
      NVA0C0_QMDV00_06_VAL(qmd, CONSTANT_BUFFER_ADDR_LOWER, i, "0x%x");
      NVA0C0_QMDV00_06_VAL(qmd, CONSTANT_BUFFER_ADDR_UPPER, i, "0x%x");
      NVA0C0_QMDV00_06_VAL(qmd, CONSTANT_BUFFER_RESERVED_ADDR, i, "0x%x");
      NVA0C0_QMDV00_06_IDX(qmd, CONSTANT_BUFFER_INVALIDATE, i, FALSE, TRUE);
      NVA0C0_QMDV00_06_VAL(qmd, CONSTANT_BUFFER_SIZE, i, "0x%x");
   }
   NVA0C0_QMDV00_06_VAL(qmd, SHADER_LOCAL_MEMORY_LOW_SIZE, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_RESERVED_N, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, BARRIER_COUNT, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, SHADER_LOCAL_MEMORY_HIGH_SIZE, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, REGISTER_COUNT, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, SHADER_LOCAL_MEMORY_CRS_SIZE, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, SASS_VERSION, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_SPARE_A, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_SPARE_B, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_SPARE_C, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_SPARE_D, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_SPARE_E, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_SPARE_F, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_SPARE_G, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_SPARE_H, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_SPARE_I, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_SPARE_J, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_SPARE_K, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_SPARE_L, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_SPARE_M, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, QMD_SPARE_N, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, DEBUG_ID_UPPER, "0x%x");
   NVA0C0_QMDV00_06_VAL(qmd, DEBUG_ID_LOWER, "0x%x");
}