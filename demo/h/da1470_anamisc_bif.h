/****************************************************************************
 * ./tmp/da1470_anamisc_bif.h
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

#ifndef __DA1470_ANAMISC_BIF_H
#define __DA1470_ANAMISC_BIF_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470_ANAMISC_BIF_CLK_CAL_IRQ_OFFSET  0x001C /* Select clock for oscillator calibration */
#define DA1470_ANAMISC_BIF_CLK_REF_CNT_OFFSET  0x0014 /* Count value for oscillator calibration */
#define DA1470_ANAMISC_BIF_CLK_REF_SEL_OFFSET  0x0010 /* Select clock for oscillator calibration */
#define DA1470_ANAMISC_BIF_CLK_REF_VAL_OFFSET  0x0018 /* DIVN reference cycles, lower 16 bits */

/* Register addresses *******************************************************/

#define DA1470_ANAMISC_BIF_BASE                0x50050600 /* ANAMISC_BIF registers */

#define DA1470_ANAMISC_BIF_CLK_CAL_IRQ         (DA1470_ANAMISC_BIF_BASE + DA1470_ANAMISC_BIF_CLK_CAL_IRQ_OFFSET) /* Select clock for oscillator calibration */
#define DA1470_ANAMISC_BIF_CLK_REF_CNT         (DA1470_ANAMISC_BIF_BASE + DA1470_ANAMISC_BIF_CLK_REF_CNT_OFFSET) /* Count value for oscillator calibration */
#define DA1470_ANAMISC_BIF_CLK_REF_SEL         (DA1470_ANAMISC_BIF_BASE + DA1470_ANAMISC_BIF_CLK_REF_SEL_OFFSET) /* Select clock for oscillator calibration */
#define DA1470_ANAMISC_BIF_CLK_REF_VAL         (DA1470_ANAMISC_BIF_BASE + DA1470_ANAMISC_BIF_CLK_REF_VAL_OFFSET) /* DIVN reference cycles, lower 16 bits */

/* Register bit definitions *************************************************/


/* CLK_CAL_IRQ Register */

#define CLK_CAL_IRQ_CLR                        (1U << 2) /* Clear the IRQ. 1: Clear the IRQ 0: No effect. Read out 0 always. */
#define CLK_CAL_IRQ_STATUS                     (1U << 1) /* Shows the IRQ bit status. */
#define CLK_CAL_IRQ_EN                         (1U << 0) /* Enable clk calibration IRQ. 0: Disabled. 1*: Enabled.  *Note: If IRQ feature is  */

/* CLK_REF_CNT Register */

#define REF_CNT_VAL_MASK                       (0xFFFF << 0) /* Indicates the calibration time, with a decrement counter to 1. */
#define REF_CNT_VAL_POS                        (0) /* Indicates the calibration time, with a decrement counter to 1. */

/* CLK_REF_SEL Register */

#define CAL_CLK_SEL_MASK                       (0x7 << 5) /* Select calibration clock input to be used in calibration: 0x0 : DIVN clock 0x1 : */
#define CAL_CLK_SEL_POS                        (5) /* Select calibration clock input to be used in calibration: 0x0 : DIVN clock 0x1 : */
#define EXT_CNT_EN_SEL                         (1U << 4) /* 0 : Enable XTAL_CNT counter by the REF_CLK selected by REF_CLK_SEL. 1 : Enable X */
#define REF_CAL_START                          (1U << 3) /* Writing a '1' starts a calibration. This bit is cleared when calibration is fini */
#define REF_CLK_SEL_MASK                       (0x7 << 0) /* Select reference clock input for calibration: 0x0 : RCLP 0x1 : RCHS 0x2 : XTAL32 */
#define REF_CLK_SEL_POS                        (0) /* Select reference clock input for calibration: 0x0 : RCLP 0x1 : RCHS 0x2 : XTAL32 */

/* CLK_REF_VAL Register */

#define XTAL_CNT_VAL_MASK                      (0xFFFFFFFF << 0) /* Returns the number of DIVN clock cycles counted during the calibration time, def */
#define XTAL_CNT_VAL_POS                       (0) /* Returns the number of DIVN clock cycles counted during the calibration time, def */

#endif /* __DA1470_ANAMISC_BIF_H */
