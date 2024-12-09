/****************************************************************************
 * ./tmp/da1470x_src1.h
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

#ifndef __DA1470X_SRC1_H
#define __DA1470X_SRC1_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470x_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470X_SRC1_SRC1_COEF0A_SET1_OFFSET  0x0034 /* SRC coefficient 10 set 1 */
#define DA1470X_SRC1_SRC1_COEF10_SET1_OFFSET  0x0020 /* SRC coefficient 1,0 set 1 */
#define DA1470X_SRC1_SRC1_COEF32_SET1_OFFSET  0x0024 /* SRC coefficient 3,2 set 1 */
#define DA1470X_SRC1_SRC1_COEF54_SET1_OFFSET  0x0028 /* SRC coefficient 5,4 set 1 */
#define DA1470X_SRC1_SRC1_COEF76_SET1_OFFSET  0x002C /* SRC coefficient 7,6 set 1 */
#define DA1470X_SRC1_SRC1_COEF98_SET1_OFFSET  0x0030 /* SRC coefficient 9,8 set 1 */
#define DA1470X_SRC1_SRC1_CTRL_OFFSET         0x0000 /* SRC control register */
#define DA1470X_SRC1_SRC1_IN1_OFFSET          0x000C /* SRC data in 1 */
#define DA1470X_SRC1_SRC1_IN2_OFFSET          0x0010 /* SRC data in 2 */
#define DA1470X_SRC1_SRC1_IN_FS_OFFSET        0x0004 /* SRC Sample input rate */
#define DA1470X_SRC1_SRC1_MUX_OFFSET          0x001C /* SRC mux register */
#define DA1470X_SRC1_SRC1_OUT1_OFFSET         0x0014 /* SRC data out 1 */
#define DA1470X_SRC1_SRC1_OUT2_OFFSET         0x0018 /* SRC data out 2 */
#define DA1470X_SRC1_SRC1_OUT_FS_OFFSET       0x0008 /* SRC Sample output rate */

/* Register addresses *******************************************************/

#define DA1470X_SRC1_BASE                     0x50030100 /* SRC1 registers */

#define DA1470X_SRC1_SRC1_COEF0A_SET1         (DA1470X_SRC1_BASE + DA1470X_SRC1_SRC1_COEF0A_SET1_OFFSET) /* SRC coefficient 10 set 1 */
#define DA1470X_SRC1_SRC1_COEF10_SET1         (DA1470X_SRC1_BASE + DA1470X_SRC1_SRC1_COEF10_SET1_OFFSET) /* SRC coefficient 1,0 set 1 */
#define DA1470X_SRC1_SRC1_COEF32_SET1         (DA1470X_SRC1_BASE + DA1470X_SRC1_SRC1_COEF32_SET1_OFFSET) /* SRC coefficient 3,2 set 1 */
#define DA1470X_SRC1_SRC1_COEF54_SET1         (DA1470X_SRC1_BASE + DA1470X_SRC1_SRC1_COEF54_SET1_OFFSET) /* SRC coefficient 5,4 set 1 */
#define DA1470X_SRC1_SRC1_COEF76_SET1         (DA1470X_SRC1_BASE + DA1470X_SRC1_SRC1_COEF76_SET1_OFFSET) /* SRC coefficient 7,6 set 1 */
#define DA1470X_SRC1_SRC1_COEF98_SET1         (DA1470X_SRC1_BASE + DA1470X_SRC1_SRC1_COEF98_SET1_OFFSET) /* SRC coefficient 9,8 set 1 */
#define DA1470X_SRC1_SRC1_CTRL                (DA1470X_SRC1_BASE + DA1470X_SRC1_SRC1_CTRL_OFFSET) /* SRC control register */
#define DA1470X_SRC1_SRC1_IN1                 (DA1470X_SRC1_BASE + DA1470X_SRC1_SRC1_IN1_OFFSET) /* SRC data in 1 */
#define DA1470X_SRC1_SRC1_IN2                 (DA1470X_SRC1_BASE + DA1470X_SRC1_SRC1_IN2_OFFSET) /* SRC data in 2 */
#define DA1470X_SRC1_SRC1_IN_FS               (DA1470X_SRC1_BASE + DA1470X_SRC1_SRC1_IN_FS_OFFSET) /* SRC Sample input rate */
#define DA1470X_SRC1_SRC1_MUX                 (DA1470X_SRC1_BASE + DA1470X_SRC1_SRC1_MUX_OFFSET) /* SRC mux register */
#define DA1470X_SRC1_SRC1_OUT1                (DA1470X_SRC1_BASE + DA1470X_SRC1_SRC1_OUT1_OFFSET) /* SRC data out 1 */
#define DA1470X_SRC1_SRC1_OUT2                (DA1470X_SRC1_BASE + DA1470X_SRC1_SRC1_OUT2_OFFSET) /* SRC data out 2 */
#define DA1470X_SRC1_SRC1_OUT_FS              (DA1470X_SRC1_BASE + DA1470X_SRC1_SRC1_OUT_FS_OFFSET) /* SRC Sample output rate */

/* Register bit definitions *************************************************/


/* SRC1_COEF0A_SET1 Register */

#define SRC1_SRC_COEF10_MASK                  (0xFFFF << 0) /* Coefficient 10 */
#define SRC1_SRC_COEF10_POS                   (0) /* Coefficient 10 */

/* SRC1_COEF10_SET1 Register */

#define SRC1_SRC_COEF1_MASK                   (0xFFFF << 16) /* Coefficient 1 */
#define SRC1_SRC_COEF1_POS                    (16) /* Coefficient 1 */
#define SRC1_SRC_COEF0_MASK                   (0xFFFF << 0) /* Coefficient 0 */
#define SRC1_SRC_COEF0_POS                    (0) /* Coefficient 0 */

/* SRC1_COEF32_SET1 Register */

#define SRC1_SRC_COEF3_MASK                   (0xFFFF << 16) /* Coefficient 3 */
#define SRC1_SRC_COEF3_POS                    (16) /* Coefficient 3 */
#define SRC1_SRC_COEF2_MASK                   (0xFFFF << 0) /* Coefficient 2 */
#define SRC1_SRC_COEF2_POS                    (0) /* Coefficient 2 */

/* SRC1_COEF54_SET1 Register */

#define SRC1_SRC_COEF5_MASK                   (0xFFFF << 16) /* Coefficient 5 */
#define SRC1_SRC_COEF5_POS                    (16) /* Coefficient 5 */
#define SRC1_SRC_COEF4_MASK                   (0xFFFF << 0) /* Coefficient 4 */
#define SRC1_SRC_COEF4_POS                    (0) /* Coefficient 4 */

/* SRC1_COEF76_SET1 Register */

#define SRC1_SRC_COEF7_MASK                   (0xFFFF << 16) /* Coefficient 7 */
#define SRC1_SRC_COEF7_POS                    (16) /* Coefficient 7 */
#define SRC1_SRC_COEF6_MASK                   (0xFFFF << 0) /* Coefficient 6 */
#define SRC1_SRC_COEF6_POS                    (0) /* Coefficient 6 */

/* SRC1_COEF98_SET1 Register */

#define SRC1_SRC_COEF9_MASK                   (0xFFFF << 16) /* Coefficient 9 */
#define SRC1_SRC_COEF9_POS                    (16) /* Coefficient 9 */
#define SRC1_SRC_COEF8_MASK                   (0xFFFF << 0) /* Coefficient 8 */
#define SRC1_SRC_COEF8_POS                    (0) /* Coefficient 8 */

/* SRC1_CTRL Register */

#define SRC1_SRC_PDM_DO_DEL_MASK              (0x3 << 30) /* PDM_DO output delay line (typical) 0: no delay 1: 8 ns 2: 12 ns 3: 16 ns */
#define SRC1_SRC_PDM_DO_DEL_POS               (30) /* PDM_DO output delay line (typical) 0: no delay 1: 8 ns 2: 12 ns 3: 16 ns */
#define SRC1_SRC_PDM_MODE_MASK                (0x3 << 28) /* PDM Output mode selection on PDM_DO1 00: No output 01: Right channel (data from  */
#define SRC1_SRC_PDM_MODE_POS                 (28) /* PDM Output mode selection on PDM_DO1 00: No output 01: Right channel (data from  */
#define SRC1_SRC_PDM_DI_DEL_MASK              (0x3 << 26) /* PDM_DI input delay line (typical) 0: no delay 1: 4 ns 2: 8 ns 3: 12 ns */
#define SRC1_SRC_PDM_DI_DEL_POS               (26) /* PDM_DI input delay line (typical) 0: no delay 1: 4 ns 2: 8 ns 3: 12 ns */
#define SRC1_SRC_OUT_FLOWCLR                  (1U << 25) /* Writing a 1 clears the SRC1_OUT Overflow/underflow bits 23-22. No more over/unde */
#define SRC1_SRC_IN_FLOWCLR                   (1U << 24) /* Writing a 1 clears the SRC1_IN Overflow/underflow bits 21-20. No more over/under */
#define SRC1_SRC_OUT_UNFLOW                   (1U << 23) /* 1 = SRC1_OUT Underflow occurred */
#define SRC1_SRC_OUT_OVFLOW                   (1U << 22) /* 1 = SRC1_OUT Overflow occurred */
#define SRC1_SRC_IN_UNFLOW                    (1U << 21) /* 1 = SRC1_IN Underflow occurred */
#define SRC1_SRC_IN_OVFLOW                    (1U << 20) /* 1 = SRC1_IN Overflow occurred */
#define SRC1_SRC_RESYNC                       (1U << 19) /* 1 = SRC will restart synchronisation */
#define SRC1_SRC_OUT_OK                       (1U << 18) /* SRC1_OUT Status 0: acquisition in progress 1: acquisition ready (In manual mode  */
#define SRC1_SRC_OUT_US_MASK                  (0x3 << 16) /* SRC1_OUT UpSampling IIR filters setting 00: for sample rates up-to 48kHz 01: for */
#define SRC1_SRC_OUT_US_POS                   (16) /* SRC1_OUT UpSampling IIR filters setting 00: for sample rates up-to 48kHz 01: for */
#define SRC1_SRC_OUT_CAL_BYPASS               (1U << 14) /* SRC1_OUT1 upsampiling filter bypass 0:Do not bypass 1:Bypass filter */
#define SRC1_SRC_OUT_AMODE                    (1U << 13) /* SRC1_OUT1 Automatic Conversion mode 0:Manual mode 1:Automatic mode */
#define SRC1_SRC_PDM_OUT_INV                  (1U << 12) /* Swap the left and the right output PDM channel */
#define SRC1_SRC_FIFO_DIRECTION               (1U << 11) /* 0 = SRC fifo is used to store samples from memory to SRC 1 = SRC fifo is used to */
#define SRC1_SRC_FIFO_ENABLE                  (1U << 10) /* 0 = fifo disable. On each src request, one sample is serviced 1 = fifo enable. F */
#define SRC1_SRC_OUT_DSD_MODE                 (1U << 9) /* 0 = SRC1 OUT PDM mode 1 = SRC1 OUT DSD mode */
#define SRC1_SRC_IN_DSD_MODE                  (1U << 8) /* 0: SRC1 IN PDM mode 1: SRC1 IN DSD mode */
#define SRC1_SRC_DITHER_DISABLE               (1U << 7) /* Dithering feature 0: Enable 1: Disable */
#define SRC1_SRC_IN_OK                        (1U << 6) /* SRC1_IN status 0: Acquisition in progress 1: Acquisition ready */
#define SRC1_SRC_IN_DS_MASK                   (0x3 << 4) /* SRC1_IN UpSampling IIR filters setting 00: for sample rates up-to 48kHz 01: for  */
#define SRC1_SRC_IN_DS_POS                    (4) /* SRC1_IN UpSampling IIR filters setting 00: for sample rates up-to 48kHz 01: for  */
#define SRC1_SRC_PDM_IN_INV                   (1U << 3) /* Swap the left and the right input PDM channel */
#define SRC1_SRC_IN_CAL_BYPASS                (1U << 2) /* SRC1_IN upsampeling filter bypass 0: Do not bypass 1: Bypass filter */
#define SRC1_SRC_IN_AMODE                     (1U << 1) /* SRC1_IN Automatic conversion mode 0: Manual mode 1: Automatic mode */
#define SRC1_SRC_EN                           (1U << 0) /* SRC1_IN and SRC1_OUT enable 0: disabled 1: enabled */

/* SRC1_IN1 Register */

#define SRC1_SRC_IN_MASK                      (0xFFFFFFFF << 0) /* SRC1_IN1 */
#define SRC1_SRC_IN_POS                       (0) /* SRC1_IN1 */

/* SRC1_IN2 Register */

#define SRC1_SRC_IN_MASK                      (0xFFFFFFFF << 0) /* SRC1_IN2 */
#define SRC1_SRC_IN_POS                       (0) /* SRC1_IN2 */

/* SRC1_IN_FS Register */

#define SRC1_SRC_IN_FS_MASK                   (0xFFFFFF << 0) /* SRC_IN Sample rate SRC_IN_FS = SRC_DIV*4096*Sample_rate/100 Sample_rate upper li */
#define SRC1_SRC_IN_FS_POS                    (0) /* SRC_IN Sample rate SRC_IN_FS = SRC_DIV*4096*Sample_rate/100 Sample_rate upper li */

/* SRC1_MUX Register */

#define SRC1_PDM1_MUX_IN                      (1U << 6) /* PDM1 input mux 0 = SRC1_MUX_IN 1 = PDM input */
#define SRC1_PCM1_MUX_IN_MASK                 (0x7 << 3) /* PCM1 input mux 0 = off 1 = SRC1 output 2 = PCM output registers 3 = SRC2 output */
#define SRC1_PCM1_MUX_IN_POS                  (3) /* PCM1 input mux 0 = off 1 = SRC1 output 2 = PCM output registers 3 = SRC2 output */
#define SRC1_SRC1_MUX_IN_MASK                 (0x7 << 0) /* SRC1 input mux 0 = off 1 = PCM output 2 = SRC1 input registers 3 = SDADC output */
#define SRC1_SRC1_MUX_IN_POS                  (0) /* SRC1 input mux 0 = off 1 = PCM output 2 = SRC1 input registers 3 = SDADC output */

/* SRC1_OUT1 Register */

#define SRC1_SRC_OUT_MASK                     (0xFFFFFFFF << 0) /* SRC1_OUT1 */
#define SRC1_SRC_OUT_POS                      (0) /* SRC1_OUT1 */

/* SRC1_OUT2 Register */

#define SRC1_SRC_OUT_MASK                     (0xFFFFFFFF << 0) /* SRC1_OUT2 */
#define SRC1_SRC_OUT_POS                      (0) /* SRC1_OUT2 */

/* SRC1_OUT_FS Register */

#define SRC1_SRC_OUT_FS_MASK                  (0xFFFFFF << 0) /* SRC_OUT Sample rate SRC_OUT_FS = SRC_DIV*4096*Sample_rate/100 Sample_rate upper  */
#define SRC1_SRC_OUT_FS_POS                   (0) /* SRC_OUT Sample rate SRC_OUT_FS = SRC_DIV*4096*Sample_rate/100 Sample_rate upper  */

#endif /* __DA1470X_SRC1_H */
