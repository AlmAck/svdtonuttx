/****************************************************************************
 * ./tmp/da1470_gpu_core.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __DA1470_GPU_CORE_H
#define __DA1470_GPU_CORE_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470_GPU_CORE_D2_CACHECTL_OFFSET        0x00C4 /* #49: cache control register
  Internal caches can be enabled/disabled and flushe */
#define DA1470_GPU_CORE_D2_COLKEY_OFFSET          0x00E8 /* #58: Color key value
  The R, G and B components of the internal color represent */
#define DA1470_GPU_CORE_D2_COLOR1_OFFSET          0x0064 /* #25: Base color register
  All color registers are *write only*, reading will re */
#define DA1470_GPU_CORE_D2_COLOR2_OFFSET          0x0068 /* #26: Secondary color register
  Secondary color is relevant only when rendering  */
#define DA1470_GPU_CORE_D2_CONTROL_OFFSET         0x0000 /* #0: geometry control register 
  This register controls the pixel enumeration an */
#define DA1470_GPU_CORE_D2_CONTROL2_OFFSET        0x0004 /* #1: surface control register
  This register controls the colorization, texturin */
#define DA1470_GPU_CORE_D2_CONTROL3_OFFSET        0x0008 /* #2: burst length limit control register
  This register controls the burst lengt */
#define DA1470_GPU_CORE_D2_DLISTSTART_OFFSET      0x00C8 /* #50: Displaylist start address
  Setting a new displaylist base address (writing */
#define DA1470_GPU_CORE_D2_HWREVISION_OFFSET      0x00F0 /* #1: hardware version and feature set ID
  Read this (constant) register to ident */
#define DA1470_GPU_CORE_D2_IRQCTL_OFFSET          0x00C0 /* #48: interrupt control register
  DAVE2 features three sources for interrupts. T */
#define DA1470_GPU_CORE_D2_L1BAND_OFFSET          0x0058 /* #22: Limiter1 band width parameter
  Postfilter
 First two limiter outputs can b */
#define DA1470_GPU_CORE_D2_L1START_OFFSET         0x0010 /* #4: Limiter1 start value
  All limiter registers are *write only*, reading will  */
#define DA1470_GPU_CORE_D2_L1XADD_OFFSET          0x0028 /* #10: Limiter1 X-Axis increment
  The xadd value is the 16:16 fixedpoint differen */
#define DA1470_GPU_CORE_D2_L1YADD_OFFSET          0x0040 /* #16: Limiter1 Y-Axis increment
  The yadd value is the 16:16 fixedpoint differen */
#define DA1470_GPU_CORE_D2_L2BAND_OFFSET          0x005C /* #23: Limiter2 band width parameter
  see &lt;D2_L1BAND&gt; */
#define DA1470_GPU_CORE_D2_L2START_OFFSET         0x0014 /* #5: Limiter2 start value
  see &lt;D2_L1START&gt; */
#define DA1470_GPU_CORE_D2_L2XADD_OFFSET          0x002C /* #11: Limiter2 X-Axis increment
  see &lt;D2_L1XADD&gt; */
#define DA1470_GPU_CORE_D2_L2YADD_OFFSET          0x0044 /* #17: Limiter2 Y-Axis increment
  see &lt;D2_L1YADD&gt; */
#define DA1470_GPU_CORE_D2_L3START_OFFSET         0x0018 /* #6: Limiter3 start value
  see &lt;D2_L1START&gt; */
#define DA1470_GPU_CORE_D2_L3XADD_OFFSET          0x0030 /* #12: Limiter3 X-Axis increment */
#define DA1470_GPU_CORE_D2_L3YADD_OFFSET          0x0048 /* #18: Limiter3 Y-Axis increment
  see &lt;D2_L1YADD&gt; */
#define DA1470_GPU_CORE_D2_L4START_OFFSET         0x001C /* #7: Limiter4 start value
  see &lt;D2_L1START&gt; */
#define DA1470_GPU_CORE_D2_L4XADD_OFFSET          0x0034 /* #13: Limiter4 X-Axis increment
  see &lt;D2_L1XADD&gt; */
#define DA1470_GPU_CORE_D2_L4YADD_OFFSET          0x004C /* #19: Limiter4 Y-Axis increment
  see &lt;D2_L1YADD&gt; */
#define DA1470_GPU_CORE_D2_L5START_OFFSET         0x0020 /* #8: Limiter5 start value
  see &lt;D2_L1START&gt; */
#define DA1470_GPU_CORE_D2_L5XADD_OFFSET          0x0038 /* #14: Limiter5 X-Axis increment
  see &lt;D2_L1XADD&gt; */
#define DA1470_GPU_CORE_D2_L5YADD_OFFSET          0x0050 /* #20: Limiter5 Y-Axis increment
  see &lt;D2_L1YADD&gt; */
#define DA1470_GPU_CORE_D2_L6START_OFFSET         0x0024 /* #9: Limiter6 start value
  see &lt;D2_L1START&gt; */
#define DA1470_GPU_CORE_D2_L6XADD_OFFSET          0x003C /* #15: Limiter6 X-Axis increment
  see &lt;D2_L1XADD&gt; */
#define DA1470_GPU_CORE_D2_L6YADD_OFFSET          0x0054 /* #21: Limiter6 Y-Axis increment
  see &lt;D2_L1YADD&gt; */
#define DA1470_GPU_CORE_D2_LUSTART_OFFSET         0x0090 /* #36: U Limiter start value
  The start value is a 16:16 fixedpoint number valid  */
#define DA1470_GPU_CORE_D2_LUXADD_OFFSET          0x0094 /* #37: U Limiter X-Axis increment
  The add value for U is the 16:16 fixedpoint di */
#define DA1470_GPU_CORE_D2_LUYADD_OFFSET          0x0098 /* #38: U Limiter Y-Axis increment
  The add value for U is the 16:16 fixedpoint di */
#define DA1470_GPU_CORE_D2_LVSTARTF_OFFSET        0x00A0 /* #40: V Limiter start value fractional part
  The start value is a 32:16 fixedpoi */
#define DA1470_GPU_CORE_D2_LVSTARTI_OFFSET        0x009C /* #39: V Limiter start value integer part */
#define DA1470_GPU_CORE_D2_LVXADDI_OFFSET         0x00A4 /* #41: V Limiter X-Axis increment integer part
  The add value for V is the 32:16  */
#define DA1470_GPU_CORE_D2_LVYADDI_OFFSET         0x00A8 /* #42: V Limiter Y-Axis increment integer part
  The add value for V is the 32:16  */
#define DA1470_GPU_CORE_D2_LVYXADDF_OFFSET        0x00AC /* #43: V Limiter X and Y increment fractional parts */
#define DA1470_GPU_CORE_D2_ORIGIN_OFFSET          0x0080 /* #32: address of the first pixel in framebuffer
  Writing to &lt;D2_ORIGIN&gt; wi */
#define DA1470_GPU_CORE_D2_PATTERN_OFFSET         0x0074 /* #29: Pattern register
  Each bit in the pattern register is interpreted as a ref */
#define DA1470_GPU_CORE_D2_PERFCOUNT1_OFFSET      0x00CC /* #51: Performance counter
  Writing to the D2_PERFCOUNT1 register resets the firs */
#define DA1470_GPU_CORE_D2_PERFCOUNT2_OFFSET      0x00D0 /* #52: Performance counter
  Writing to the D2_PERFCOUNT2 register resets the seco */
#define DA1470_GPU_CORE_D2_PERFTRIGGER_OFFSET     0x00D4 /* #53: Performance counters control register
  Select the internal event that will */
#define DA1470_GPU_CORE_D2_PITCH_OFFSET           0x007C /* #31: framebuffer pitch and spanstore delay */
#define DA1470_GPU_CORE_D2_SIZE_OFFSET            0x0078 /* #30: bounding box dimension */
#define DA1470_GPU_CORE_D2_STATUS_OFFSET          0x00F4 /* #0: status control register
  The current dave status can be polled by reading t */
#define DA1470_GPU_CORE_D2_TEXCLUT_OFFSET         0x00D8 /* #54: Color Lookup Table for the indexed texture format 16x24bit
  Triggers a wri */
#define DA1470_GPU_CORE_D2_TEXCLUT_ADDR_OFFSET    0x00DC /* #55: Color Lookup Table write address for the indexed texture format 256x32bit
  */
#define DA1470_GPU_CORE_D2_TEXCLUT_DATA_OFFSET    0x00E0 /* #56: Color Lookup Table write data for the indexed texture format 256x32bit
  Wr */
#define DA1470_GPU_CORE_D2_TEXCLUT_OFFSET_OFFSET  0x00E4 /* #57: Offset to the texture index for the indexed texture formats i8, i4, i2 and  */
#define DA1470_GPU_CORE_D2_TEXMASK_OFFSET         0x00B8 /* #46: Texture size or texture address mask
  Depending on the clamping mode this  */
#define DA1470_GPU_CORE_D2_TEXORIGIN_OFFSET       0x00BC /* #47: Texture base address
  All texture registers are *write only*, reading will */
#define DA1470_GPU_CORE_D2_TEXPITCH_OFFSET        0x00B4 /* #45: Texels per texture line
  Pitch is equal or bigger than texture width. */

/* Register addresses *******************************************************/

#define DA1470_GPU_CORE_BASE                      0x51001200 /* GPU_CORE registers */

#define DA1470_GPU_CORE_D2_CACHECTL               (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_CACHECTL_OFFSET) /* #49: cache control register
  Internal caches can be enabled/disabled and flushe */
#define DA1470_GPU_CORE_D2_COLKEY                 (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_COLKEY_OFFSET) /* #58: Color key value
  The R, G and B components of the internal color represent */
#define DA1470_GPU_CORE_D2_COLOR1                 (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_COLOR1_OFFSET) /* #25: Base color register
  All color registers are *write only*, reading will re */
#define DA1470_GPU_CORE_D2_COLOR2                 (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_COLOR2_OFFSET) /* #26: Secondary color register
  Secondary color is relevant only when rendering  */
#define DA1470_GPU_CORE_D2_CONTROL                (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_CONTROL_OFFSET) /* #0: geometry control register 
  This register controls the pixel enumeration an */
#define DA1470_GPU_CORE_D2_CONTROL2               (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_CONTROL2_OFFSET) /* #1: surface control register
  This register controls the colorization, texturin */
#define DA1470_GPU_CORE_D2_CONTROL3               (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_CONTROL3_OFFSET) /* #2: burst length limit control register
  This register controls the burst lengt */
#define DA1470_GPU_CORE_D2_DLISTSTART             (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_DLISTSTART_OFFSET) /* #50: Displaylist start address
  Setting a new displaylist base address (writing */
#define DA1470_GPU_CORE_D2_HWREVISION             (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_HWREVISION_OFFSET) /* #1: hardware version and feature set ID
  Read this (constant) register to ident */
#define DA1470_GPU_CORE_D2_IRQCTL                 (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_IRQCTL_OFFSET) /* #48: interrupt control register
  DAVE2 features three sources for interrupts. T */
#define DA1470_GPU_CORE_D2_L1BAND                 (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_L1BAND_OFFSET) /* #22: Limiter1 band width parameter
  Postfilter
 First two limiter outputs can b */
#define DA1470_GPU_CORE_D2_L1START                (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_L1START_OFFSET) /* #4: Limiter1 start value
  All limiter registers are *write only*, reading will  */
#define DA1470_GPU_CORE_D2_L1XADD                 (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_L1XADD_OFFSET) /* #10: Limiter1 X-Axis increment
  The xadd value is the 16:16 fixedpoint differen */
#define DA1470_GPU_CORE_D2_L1YADD                 (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_L1YADD_OFFSET) /* #16: Limiter1 Y-Axis increment
  The yadd value is the 16:16 fixedpoint differen */
#define DA1470_GPU_CORE_D2_L2BAND                 (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_L2BAND_OFFSET) /* #23: Limiter2 band width parameter
  see &lt;D2_L1BAND&gt; */
#define DA1470_GPU_CORE_D2_L2START                (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_L2START_OFFSET) /* #5: Limiter2 start value
  see &lt;D2_L1START&gt; */
#define DA1470_GPU_CORE_D2_L2XADD                 (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_L2XADD_OFFSET) /* #11: Limiter2 X-Axis increment
  see &lt;D2_L1XADD&gt; */
#define DA1470_GPU_CORE_D2_L2YADD                 (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_L2YADD_OFFSET) /* #17: Limiter2 Y-Axis increment
  see &lt;D2_L1YADD&gt; */
#define DA1470_GPU_CORE_D2_L3START                (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_L3START_OFFSET) /* #6: Limiter3 start value
  see &lt;D2_L1START&gt; */
#define DA1470_GPU_CORE_D2_L3XADD                 (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_L3XADD_OFFSET) /* #12: Limiter3 X-Axis increment */
#define DA1470_GPU_CORE_D2_L3YADD                 (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_L3YADD_OFFSET) /* #18: Limiter3 Y-Axis increment
  see &lt;D2_L1YADD&gt; */
#define DA1470_GPU_CORE_D2_L4START                (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_L4START_OFFSET) /* #7: Limiter4 start value
  see &lt;D2_L1START&gt; */
#define DA1470_GPU_CORE_D2_L4XADD                 (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_L4XADD_OFFSET) /* #13: Limiter4 X-Axis increment
  see &lt;D2_L1XADD&gt; */
#define DA1470_GPU_CORE_D2_L4YADD                 (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_L4YADD_OFFSET) /* #19: Limiter4 Y-Axis increment
  see &lt;D2_L1YADD&gt; */
#define DA1470_GPU_CORE_D2_L5START                (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_L5START_OFFSET) /* #8: Limiter5 start value
  see &lt;D2_L1START&gt; */
#define DA1470_GPU_CORE_D2_L5XADD                 (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_L5XADD_OFFSET) /* #14: Limiter5 X-Axis increment
  see &lt;D2_L1XADD&gt; */
#define DA1470_GPU_CORE_D2_L5YADD                 (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_L5YADD_OFFSET) /* #20: Limiter5 Y-Axis increment
  see &lt;D2_L1YADD&gt; */
#define DA1470_GPU_CORE_D2_L6START                (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_L6START_OFFSET) /* #9: Limiter6 start value
  see &lt;D2_L1START&gt; */
#define DA1470_GPU_CORE_D2_L6XADD                 (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_L6XADD_OFFSET) /* #15: Limiter6 X-Axis increment
  see &lt;D2_L1XADD&gt; */
#define DA1470_GPU_CORE_D2_L6YADD                 (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_L6YADD_OFFSET) /* #21: Limiter6 Y-Axis increment
  see &lt;D2_L1YADD&gt; */
#define DA1470_GPU_CORE_D2_LUSTART                (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_LUSTART_OFFSET) /* #36: U Limiter start value
  The start value is a 16:16 fixedpoint number valid  */
#define DA1470_GPU_CORE_D2_LUXADD                 (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_LUXADD_OFFSET) /* #37: U Limiter X-Axis increment
  The add value for U is the 16:16 fixedpoint di */
#define DA1470_GPU_CORE_D2_LUYADD                 (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_LUYADD_OFFSET) /* #38: U Limiter Y-Axis increment
  The add value for U is the 16:16 fixedpoint di */
#define DA1470_GPU_CORE_D2_LVSTARTF               (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_LVSTARTF_OFFSET) /* #40: V Limiter start value fractional part
  The start value is a 32:16 fixedpoi */
#define DA1470_GPU_CORE_D2_LVSTARTI               (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_LVSTARTI_OFFSET) /* #39: V Limiter start value integer part */
#define DA1470_GPU_CORE_D2_LVXADDI                (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_LVXADDI_OFFSET) /* #41: V Limiter X-Axis increment integer part
  The add value for V is the 32:16  */
#define DA1470_GPU_CORE_D2_LVYADDI                (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_LVYADDI_OFFSET) /* #42: V Limiter Y-Axis increment integer part
  The add value for V is the 32:16  */
#define DA1470_GPU_CORE_D2_LVYXADDF               (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_LVYXADDF_OFFSET) /* #43: V Limiter X and Y increment fractional parts */
#define DA1470_GPU_CORE_D2_ORIGIN                 (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_ORIGIN_OFFSET) /* #32: address of the first pixel in framebuffer
  Writing to &lt;D2_ORIGIN&gt; wi */
#define DA1470_GPU_CORE_D2_PATTERN                (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_PATTERN_OFFSET) /* #29: Pattern register
  Each bit in the pattern register is interpreted as a ref */
#define DA1470_GPU_CORE_D2_PERFCOUNT1             (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_PERFCOUNT1_OFFSET) /* #51: Performance counter
  Writing to the D2_PERFCOUNT1 register resets the firs */
#define DA1470_GPU_CORE_D2_PERFCOUNT2             (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_PERFCOUNT2_OFFSET) /* #52: Performance counter
  Writing to the D2_PERFCOUNT2 register resets the seco */
#define DA1470_GPU_CORE_D2_PERFTRIGGER            (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_PERFTRIGGER_OFFSET) /* #53: Performance counters control register
  Select the internal event that will */
#define DA1470_GPU_CORE_D2_PITCH                  (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_PITCH_OFFSET) /* #31: framebuffer pitch and spanstore delay */
#define DA1470_GPU_CORE_D2_SIZE                   (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_SIZE_OFFSET) /* #30: bounding box dimension */
#define DA1470_GPU_CORE_D2_STATUS                 (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_STATUS_OFFSET) /* #0: status control register
  The current dave status can be polled by reading t */
#define DA1470_GPU_CORE_D2_TEXCLUT                (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_TEXCLUT_OFFSET) /* #54: Color Lookup Table for the indexed texture format 16x24bit
  Triggers a wri */
#define DA1470_GPU_CORE_D2_TEXCLUT_ADDR           (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_TEXCLUT_ADDR_OFFSET) /* #55: Color Lookup Table write address for the indexed texture format 256x32bit
  */
#define DA1470_GPU_CORE_D2_TEXCLUT_DATA           (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_TEXCLUT_DATA_OFFSET) /* #56: Color Lookup Table write data for the indexed texture format 256x32bit
  Wr */
#define DA1470_GPU_CORE_D2_TEXCLUT_OFFSET         (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_TEXCLUT_OFFSET_OFFSET) /* #57: Offset to the texture index for the indexed texture formats i8, i4, i2 and  */
#define DA1470_GPU_CORE_D2_TEXMASK                (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_TEXMASK_OFFSET) /* #46: Texture size or texture address mask
  Depending on the clamping mode this  */
#define DA1470_GPU_CORE_D2_TEXORIGIN              (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_TEXORIGIN_OFFSET) /* #47: Texture base address
  All texture registers are *write only*, reading will */
#define DA1470_GPU_CORE_D2_TEXPITCH               (DA1470_GPU_CORE_BASE + DA1470_GPU_CORE_D2_TEXPITCH_OFFSET) /* #45: Texels per texture line
  Pitch is equal or bigger than texture width. */

/* Register bit definitions *************************************************/


/* D2_CACHECTL Register */

#define GPU_CORE_D2C_CACHECTL_FLUSH_TX            (1U << 3) /* Flush texture cache */
#define GPU_CORE_D2C_CACHECTL_ENABLE_TX           (1U << 2) /* Texture cache enable */
#define GPU_CORE_D2C_CACHECTL_FLUSH_FB            (1U << 1) /* Flush framebuffer cache */
#define GPU_CORE_D2C_CACHECTL_ENABLE_FB           (1U << 0) /* Framebuffer cache enable */

/* D2_COLKEY Register */

#define GPU_CORE_COLKEY_RGB_MASK                  (0xFFFFFF << 0) /* Color Key Value RGB888 */
#define GPU_CORE_COLKEY_RGB_POS                   (0) /* Color Key Value RGB888 */

/* D2_COLOR1 Register */

#define GPU_CORE_COLOR1_MASK                      (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_COLOR1_POS                       (0) /* No description available. */

/* D2_COLOR2 Register */

#define GPU_CORE_COLOR2_MASK                      (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_COLOR2_POS                       (0) /* No description available. */

/* D2_CONTROL Register */

#define GPU_CORE_D2C_LIMITERPRECISION             (1U << 24) /* increase precision of limiters from 16.16 to 10.22 */
#define GPU_CORE_D2C_SPANSTORE                    (1U << 23) /* nextline span start is always equal or left to current-line span start */
#define GPU_CORE_D2C_SPANABORT                    (1U << 22) /* shape is horizontally convex. only a single span per scanline */
#define GPU_CORE_D2C_UNIONCD                      (1U << 21) /* combine outputs C & D as union (output is final) */
#define GPU_CORE_D2C_UNIONAB                      (1U << 20) /* combine outputs A & B as union (output is called C) */
#define GPU_CORE_D2C_UNION56                      (1U << 19) /* combine limter 5 & 6 as union (output is called D) */
#define GPU_CORE_D2C_UNION34                      (1U << 18) /* combine limter 3 & 4 as union (output is called B) */
#define GPU_CORE_D2C_UNION12                      (1U << 17) /* combine limter 1 & 2 as union (output is called A) */
#define GPU_CORE_D2C_BAND2ENABLE                  (1U << 16) /* enable band postprocess for limiter 2 (see <D2_L2BAND>) */
#define GPU_CORE_D2C_BAND1ENABLE                  (1U << 15) /* enable band postprocess for limiter 1 (see <D2_L1BAND>) */
#define GPU_CORE_D2C_LIM6THRESHOLD                (1U << 14) /* enable limiter 6 threshold mode */
#define GPU_CORE_D2C_LIM5THRESHOLD                (1U << 13) /* enable limiter 5 threshold mode */
#define GPU_CORE_D2C_LIM4THRESHOLD                (1U << 12) /* enable limiter 4 threshold mode */
#define GPU_CORE_D2C_LIM3THRESHOLD                (1U << 11) /* enable limiter 3 threshold mode */
#define GPU_CORE_D2C_LIM2THRESHOLD                (1U << 10) /* enable limiter 2 threshold mode */
#define GPU_CORE_D2C_LIM1THRESHOLD                (1U << 9) /* enable limiter 1 threshold mode */
#define GPU_CORE_D2C_QUAD3ENABLE                  (1U << 8) /* enable quadratic coupling of limiters 5 and 6 */
#define GPU_CORE_D2C_QUAD2ENABLE                  (1U << 7) /* enable quadratic coupling of limiters 3 and 4 */
#define GPU_CORE_D2C_QUAD1ENABLE                  (1U << 6) /* enable quadratic coupling of limiters 1 and 2 */
#define GPU_CORE_D2C_LIM6ENABLE                   (1U << 5) /* enable limiter 6 */
#define GPU_CORE_D2C_LIM5ENABLE                   (1U << 4) /* enable limiter 5 */
#define GPU_CORE_D2C_LIM4ENABLE                   (1U << 3) /* enable limiter 4 */
#define GPU_CORE_D2C_LIM3ENABLE                   (1U << 2) /* enable limiter 3 */
#define GPU_CORE_D2C_LIM2ENABLE                   (1U << 1) /* enable limiter 2 */
#define GPU_CORE_D2C_LIM1ENABLE                   (1U << 0) /* enable limiter 1 */

/* D2_CONTROL2 Register */

#define GPU_CORE_D2C_RLEFORMAT2                   (1U << 31) /* bit1 of RLE texel format */
#define GPU_CORE_D2C_RLEFORMAT1                   (1U << 30) /* bit0 of RLE texel format */
#define GPU_CORE_D2C_BDIA                         (1U << 29) /* dst factor for alpha channel will be inverted (meaning 1-a or 1-1 depending on B */
#define GPU_CORE_D2C_BSIA                         (1U << 28) /* src factor for alpha channel will be inverted (meaning 1-a or 1-1 depending on B */
#define GPU_CORE_D2C_CLUTFORMAT1                  (1U << 27) /* bit0 of the CLUT entry format */
#define GPU_CORE_D2C_COLKEY_ENABLE                (1U << 26) /* enable color keying (see also <D2_COLKEY> and feature bits of <D2_HWREVISION>) */
#define GPU_CORE_D2C_CLUT_ENABLE                  (1U << 25) /* enable the use of the CLUT (see also feature bits of <D2_HWREVISION>); if disabl */
#define GPU_CORE_D2C_RLE_ENABLE                   (1U << 24) /* enable RLE decoder (see also feature bits of <D2_HWREVISION>) */
#define GPU_CORE_D2C_WRITEALPHA2                  (1U << 23) /* bit1 of the 'alpha source' (depends on USE_ACB) */
#define GPU_CORE_D2C_WRITEALPHA1                  (1U << 22) /* bit0 of the 'alpha source' (depends on USE_ACB) */
#define GPU_CORE_D2C_WRITEFORMAT2                 (1U << 21) /* bit1 of the framebuffer format descriptor */
#define GPU_CORE_D2C_WRITEFORMAT1                 (1U << 20) /* bit0 of the framebuffer format descriptor */
#define GPU_CORE_D2C_READFORMAT2                  (1U << 19) /* bit1 of the texture format descriptor */
#define GPU_CORE_D2C_READFORMAT1                  (1U << 18) /* bit0 of the texture format descriptor */
#define GPU_CORE_D2C_TEXTUREFILTERY               (1U << 17) /* linear filtering on texture v axis */
#define GPU_CORE_D2C_TEXTUREFILTERX               (1U << 16) /* linear filtering on texture u axis */
#define GPU_CORE_D2C_TEXTURECLAMPY                (1U << 15) /* clamp instead of mask v coordinate */
#define GPU_CORE_D2C_TEXTURECLAMPX                (1U << 14) /* clamp instead of mask u coordinate */
#define GPU_CORE_D2C_BC2                          (1U << 13) /* blending for color channels is done with <D2_COLOR2> instead of the real dst val */
#define GPU_CORE_D2C_BDI                          (1U << 12) /* dst factor for color channels will be inverted (meaning 1-a or 1-1 depending on  */
#define GPU_CORE_D2C_BSI                          (1U << 11) /* src factor for color channels will be inverted (meaning 1-a or 1-1 depending on  */
#define GPU_CORE_D2C_BDF                          (1U << 10) /* dst factor for color channels is alpha (factor is 1 per default) */
#define GPU_CORE_D2C_BSF                          (1U << 9) /* src factor for color channels is alpha (factor is 1 per default) */
#define GPU_CORE_D2C_WRITEFORMAT3                 (1U << 8) /* bit2 of the framebuffer format descriptor */
#define GPU_CORE_D2C_BDFA                         (1U << 7) /* dst factor for alpha channel is alpha (factor is 1 per default) */
#define GPU_CORE_D2C_BSFA                         (1U << 6) /* src factor for alpha channel is alpha (factor is 1 per default) */
#define GPU_CORE_D2C_READFORMAT4                  (1U << 5) /* bit3 of the texture format descriptor */
#define GPU_CORE_D2C_READFORMAT3                  (1U << 4) /* bit2 of the texture format descriptor */
#define GPU_CORE_USE_ACB                          (1U << 3) /* use full alpha channel blending, else use write-alpha mode */
#define GPU_CORE_D2C_PATTERNSOURCEL5              (1U << 2) /* Limiter 5 is used as pattern index instead of the default U-Limiter */
#define GPU_CORE_D2C_TEXTUREENABLE                (1U << 1) /* Pixel source is read from texture and used as an alpha to blend between <D2_COLO */
#define GPU_CORE_D2C_PATTERNENABLE                (1U << 0) /* Pixel source is a pattern color (blend of <D2_COLOR1> and <D2_COLOR2> depending  */

/* D2_CONTROL3 Register */

#define GPU_CORE_BURSTLENGTH_MDL_MASK             (0x7 << 24) /* Log2 of the burst length limit for MDL read */
#define GPU_CORE_BURSTLENGTH_MDL_POS              (24) /* Log2 of the burst length limit for MDL read */
#define GPU_CORE_BURSTLENGTH_MTX_MASK             (0x7 << 16) /* Log2 of the burst length limit for MTX read */
#define GPU_CORE_BURSTLENGTH_MTX_POS              (16) /* Log2 of the burst length limit for MTX read */
#define GPU_CORE_BURSTLENGTH_MFBW_MASK            (0x7 << 8) /* Log2 of the burst length limit for MFB write */
#define GPU_CORE_BURSTLENGTH_MFBW_POS             (8) /* Log2 of the burst length limit for MFB write */
#define GPU_CORE_BURSTLENGTH_MFBR_MASK            (0x7 << 0) /* Log2 of the burst length limit for MFB read */
#define GPU_CORE_BURSTLENGTH_MFBR_POS             (0) /* Log2 of the burst length limit for MFB read */

/* D2_DLISTSTART Register */

#define GPU_CORE_DLISTSTART_MASK                  (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_DLISTSTART_POS                   (0) /* No description available. */

/* D2_HWREVISION Register */

#define GPU_CORE_FB_BURSTSPLITTING                (1U << 28) /* bursts can be split with respect to burst length limit */
#define GPU_CORE_FB_ALPHACHANNELBLENDING          (1U << 27) /* full alpha channel blending available */
#define GPU_CORE_FB_HILIMITERPRECISION            (1U << 26) /* increasable precision of limiters available */
#define GPU_CORE_FB_COLORKEY                      (1U << 25) /* color keying available */
#define GPU_CORE_FB_TEXCLUT256                    (1U << 24) /* extend CLUT to 256x32bit ARGB8888 */
#define GPU_CORE_FB_RLEUNIT                       (1U << 23) /* RLE texture decoder available */
#define GPU_CORE_FB_FBPREFETCH                    (1U << 22) /* Framebuffer prefetch available */
#define GPU_CORE_FB_TEXCLUT                       (1U << 21) /* Color Lookup Table 16x24bit for indexed textureformat available */
#define GPU_CORE_FB_PERFCOUNT                     (1U << 20) /* Two performance counters available */
#define GPU_CORE_FB_TXCACHE                       (1U << 19) /* Texture Cache available */
#define GPU_CORE_FB_FBCACHE                       (1U << 18) /* Framebuffer Cache available */
#define GPU_CORE_FB_DLR                           (1U << 17) /* DisplayListReader available */
#define GPU_CORE_FB_SWDAVE                        (1U << 16) /* Software D/AVE */
#define GPU_CORE_HWTYPE_MASK                      (0xF << 12) /* D/AVE Type */
#define GPU_CORE_HWTYPE_POS                       (12) /* D/AVE Type */
#define GPU_CORE_HWBRANCH_MASK                    (0xF << 8) /* Branch number */
#define GPU_CORE_HWBRANCH_POS                     (8) /* Branch number */
#define GPU_CORE_HWREVISION_MASK                  (0xFF << 0) /* Revision number */
#define GPU_CORE_HWREVISION_POS                   (0) /* Revision number */

/* D2_IRQCTL Register */

#define GPU_CORE_D2IRQCTL_CLR_BUS_ERROR           (1U << 5) /* Clear Interrupt 'Bus error' */
#define GPU_CORE_D2IRQCTL_ENABLE_BUS_ERROR        (1U << 4) /* Interruptmask enable 'Bus error' */
#define GPU_CORE_D2IRQCTL_CLR_FINISH_DLIST        (1U << 3) /* Clear Interrupt 'Displaylist is finished'. Make sure to clear the IRQ before sta */
#define GPU_CORE_D2IRQCTL_CLR_FINISH_ENUM         (1U << 2) /* Clear Interrupt 'Enumeration is finished' */
#define GPU_CORE_D2IRQCTL_ENABLE_FINISH_DLIST     (1U << 1) /* Interruptmask enable 'Displaylist is finished' */
#define GPU_CORE_D2IRQCTL_ENABLE_FINISH_ENUM      (1U << 0) /* Interruptmask enable 'Enumeration is finished' */

/* D2_L1BAND Register */

#define GPU_CORE_L1BAND_MASK                      (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_L1BAND_POS                       (0) /* No description available. */

/* D2_L1START Register */

#define GPU_CORE_L1START_MASK                     (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_L1START_POS                      (0) /* No description available. */

/* D2_L1XADD Register */

#define GPU_CORE_L1XADD_MASK                      (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_L1XADD_POS                       (0) /* No description available. */

/* D2_L1YADD Register */

#define GPU_CORE_L1YADD_MASK                      (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_L1YADD_POS                       (0) /* No description available. */

/* D2_L2BAND Register */

#define GPU_CORE_L2BAND_MASK                      (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_L2BAND_POS                       (0) /* No description available. */

/* D2_L2START Register */

#define GPU_CORE_L2START_MASK                     (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_L2START_POS                      (0) /* No description available. */

/* D2_L2XADD Register */

#define GPU_CORE_L2XADD_MASK                      (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_L2XADD_POS                       (0) /* No description available. */

/* D2_L2YADD Register */

#define GPU_CORE_L2YADD_MASK                      (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_L2YADD_POS                       (0) /* No description available. */

/* D2_L3START Register */

#define GPU_CORE_L3START_MASK                     (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_L3START_POS                      (0) /* No description available. */

/* D2_L3XADD Register */

#define GPU_CORE_L3XADD_MASK                      (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_L3XADD_POS                       (0) /* No description available. */

/* D2_L3YADD Register */

#define GPU_CORE_L3YADD_MASK                      (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_L3YADD_POS                       (0) /* No description available. */

/* D2_L4START Register */

#define GPU_CORE_L4START_MASK                     (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_L4START_POS                      (0) /* No description available. */

/* D2_L4XADD Register */

#define GPU_CORE_L4XADD_MASK                      (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_L4XADD_POS                       (0) /* No description available. */

/* D2_L4YADD Register */

#define GPU_CORE_L4YADD_MASK                      (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_L4YADD_POS                       (0) /* No description available. */

/* D2_L5START Register */

#define GPU_CORE_L5START_MASK                     (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_L5START_POS                      (0) /* No description available. */

/* D2_L5XADD Register */

#define GPU_CORE_L5XADD_MASK                      (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_L5XADD_POS                       (0) /* No description available. */

/* D2_L5YADD Register */

#define GPU_CORE_L5YADD_MASK                      (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_L5YADD_POS                       (0) /* No description available. */

/* D2_L6START Register */

#define GPU_CORE_L6START_MASK                     (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_L6START_POS                      (0) /* No description available. */

/* D2_L6XADD Register */

#define GPU_CORE_L6XADD_MASK                      (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_L6XADD_POS                       (0) /* No description available. */

/* D2_L6YADD Register */

#define GPU_CORE_L6YADD_MASK                      (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_L6YADD_POS                       (0) /* No description available. */

/* D2_LUSTART Register */

#define GPU_CORE_LUSTART_MASK                     (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_LUSTART_POS                      (0) /* No description available. */

/* D2_LUXADD Register */

#define GPU_CORE_LUXADD_MASK                      (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_LUXADD_POS                       (0) /* No description available. */

/* D2_LUYADD Register */

#define GPU_CORE_LUYADD_MASK                      (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_LUYADD_POS                       (0) /* No description available. */

/* D2_LVSTARTF Register */

#define GPU_CORE_LVSTARTF_MASK                    (0xFFFF << 0) /* fractional part. */
#define GPU_CORE_LVSTARTF_POS                     (0) /* fractional part. */

/* D2_LVSTARTI Register */

#define GPU_CORE_LVSTARTI_MASK                    (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_LVSTARTI_POS                     (0) /* No description available. */

/* D2_LVXADDI Register */

#define GPU_CORE_LVXADDI_MASK                     (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_LVXADDI_POS                      (0) /* No description available. */

/* D2_LVYADDI Register */

#define GPU_CORE_LVYADDI_MASK                     (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_LVYADDI_POS                      (0) /* No description available. */

/* D2_LVYXADDF Register */

#define GPU_CORE_D2_LVYADDI_FRAC_MASK             (0xFFFF << 16) /* Y increment fractional part for <D2_LVYADDI>. */
#define GPU_CORE_D2_LVYADDI_FRAC_POS              (16) /* Y increment fractional part for <D2_LVYADDI>. */
#define GPU_CORE_D2_LVXADDI_FRAC_MASK             (0xFFFF << 0) /* X increment fractional part for <D2_LVXADDI>. */
#define GPU_CORE_D2_LVXADDI_FRAC_POS              (0) /* X increment fractional part for <D2_LVXADDI>. */

/* D2_ORIGIN Register */

#define GPU_CORE_ORIGIN_MASK                      (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_ORIGIN_POS                       (0) /* No description available. */

/* D2_PATTERN Register */

#define GPU_CORE_PATTERN_MASK                     (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_PATTERN_POS                      (0) /* No description available. */

/* D2_PERFCOUNT1 Register */

#define GPU_CORE_PERFCOUNT1_MASK                  (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_PERFCOUNT1_POS                   (0) /* No description available. */

/* D2_PERFCOUNT2 Register */

#define GPU_CORE_PERFCOUNT2_MASK                  (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_PERFCOUNT2_POS                   (0) /* No description available. */

/* D2_PERFTRIGGER Register */

#define GPU_CORE_PERFTRIGGER2_MASK                (0xFFFF << 16) /* Select the internal event that will increment D2_PERFCOUNT2 register. */
#define GPU_CORE_PERFTRIGGER2_POS                 (16) /* Select the internal event that will increment D2_PERFCOUNT2 register. */
#define GPU_CORE_PERFTRIGGER1_MASK                (0xFFFF << 0) /* Select the internal event that will increment D2_PERFCOUNT1 register. */
#define GPU_CORE_PERFTRIGGER1_POS                 (0) /* Select the internal event that will increment D2_PERFCOUNT1 register. */

/* D2_PITCH Register */

#define GPU_CORE_SSD_MASK                         (0xFFFF << 16) /* spanstore delay, the number of scanlines to delay spanstore operations. */
#define GPU_CORE_SSD_POS                          (16) /* spanstore delay, the number of scanlines to delay spanstore operations. */
#define GPU_CORE_PITCH_MASK                       (0xFFFF << 0) /* the width (in pixels) of one framebuffer scanline. A negative width can be used  */
#define GPU_CORE_PITCH_POS                        (0) /* the width (in pixels) of one framebuffer scanline. A negative width can be used  */

/* D2_SIZE Register */

#define GPU_CORE_SIZEY_MASK                       (0xFFFF << 16) /* the height (in pixels) of the primitives bounding box. */
#define GPU_CORE_SIZEY_POS                        (16) /* the height (in pixels) of the primitives bounding box. */
#define GPU_CORE_SIZEX_MASK                       (0xFFFF << 0) /* the width (in pixels) of the primitives bounding box. */
#define GPU_CORE_SIZEX_POS                        (0) /* the width (in pixels) of the primitives bounding box. */

/* D2_STATUS Register */

#define GPU_CORE_D2C_IRQ_BUS_ERROR_SRC_MASK       (0x7 << 8) /* source interface of bus error */
#define GPU_CORE_D2C_IRQ_BUS_ERROR_SRC_POS        (8) /* source interface of bus error */
#define GPU_CORE_D2C_IRQ_BUS_ERROR                (1U << 6) /* IRQ on bus error */
#define GPU_CORE_D2C_IRQ_DLIST                    (1U << 5) /* IRQ on display list finish */
#define GPU_CORE_D2C_IRQ_ENUM                     (1U << 4) /* IRQ on enumeration finish */
#define GPU_CORE_D2C_DLISTACTIVE                  (1U << 3) /* display list active, cant direct access hwregs */
#define GPU_CORE_D2C_CACHE_DIRTY                  (1U << 2) /* framebuffer cache dirty, cant flip frame */
#define GPU_CORE_D2C_BUSY_WRITE                   (1U << 1) /* framebuffer writeback busy, cant change framebuffer type */
#define GPU_CORE_D2C_BUSY_ENUM                    (1U << 0) /* enumeration unit busy, cant start new primitive */

/* D2_TEXCLUT Register */

#define GPU_CORE_TEXCLUT_INDEX_MASK               (0xFF << 24) /* Index of the CLUT entry, that shall be written */
#define GPU_CORE_TEXCLUT_INDEX_POS                (24) /* Index of the CLUT entry, that shall be written */
#define GPU_CORE_TEXCLUT_RGB_MASK                 (0xFFFFFF << 0) /* Color Value RGB888 */
#define GPU_CORE_TEXCLUT_RGB_POS                  (0) /* Color Value RGB888 */

/* D2_TEXCLUT_ADDR Register */

#define GPU_CORE_TEXCLUT_ADDR_MASK                (0xFF << 0) /* write address */
#define GPU_CORE_TEXCLUT_ADDR_POS                 (0) /* write address */

/* D2_TEXCLUT_DATA Register */

#define GPU_CORE_TEXCLUT_ARGB_MASK                (0xFFFFFFFF << 0) /* Color value ARGB8888 if CLUTFORMAT = argb8888 */
#define GPU_CORE_TEXCLUT_ARGB_POS                 (0) /* Color value ARGB8888 if CLUTFORMAT = argb8888 */

/* D2_TEXCLUT_OFFSET Register */

#define GPU_CORE_TEXCLUT_OFFSET_MASK              (0xFF << 0) /* index offset */
#define GPU_CORE_TEXCLUT_OFFSET_POS               (0) /* index offset */

/* D2_TEXMASK Register */

#define GPU_CORE_TEXVMASK_MASK                    (0x1FFFFF << 11) /* V mask. */
#define GPU_CORE_TEXVMASK_POS                     (11) /* V mask. */
#define GPU_CORE_TEXUMASK_MASK                    (0x7FF << 0) /* U mask. */
#define GPU_CORE_TEXUMASK_POS                     (0) /* U mask. */

/* D2_TEXORIGIN Register */

#define GPU_CORE_TEXORIGIN_MASK                   (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_TEXORIGIN_POS                    (0) /* No description available. */

/* D2_TEXPITCH Register */

#define GPU_CORE_TEXPITCH_MASK                    (0xFFFFFFFF << 0) /* No description available. */
#define GPU_CORE_TEXPITCH_POS                     (0) /* No description available. */

#endif /* __DA1470_GPU_CORE_H */
