/****************************************************************************
 * ./tmp/da1470x_pcm1.h
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

#ifndef __DA1470X_PCM1_H
#define __DA1470X_PCM1_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470x_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470X_PCM1_PCM1_CTRL_OFFSET         0x0000 /* PCM1 Control register */
#define DA1470X_PCM1_PCM1_IN1_OFFSET          0x0004 /* PCM1 data in 1 */
#define DA1470X_PCM1_PCM1_IN2_OFFSET          0x0008 /* PCM1 data in 2 */
#define DA1470X_PCM1_PCM1_OUT1_OFFSET         0x000C /* PCM1 data out 1 */
#define DA1470X_PCM1_PCM1_OUT2_OFFSET         0x0010 /* PCM1 data out 2 */

/* Register addresses *******************************************************/

#define DA1470X_PCM1_BASE                     0x50030300 /* PCM1 registers */

#define DA1470X_PCM1_PCM1_CTRL                (DA1470X_PCM1_BASE + DA1470X_PCM1_PCM1_CTRL_OFFSET) /* PCM1 Control register */
#define DA1470X_PCM1_PCM1_IN1                 (DA1470X_PCM1_BASE + DA1470X_PCM1_PCM1_IN1_OFFSET) /* PCM1 data in 1 */
#define DA1470X_PCM1_PCM1_IN2                 (DA1470X_PCM1_BASE + DA1470X_PCM1_PCM1_IN2_OFFSET) /* PCM1 data in 2 */
#define DA1470X_PCM1_PCM1_OUT1                (DA1470X_PCM1_BASE + DA1470X_PCM1_PCM1_OUT1_OFFSET) /* PCM1 data out 1 */
#define DA1470X_PCM1_PCM1_OUT2                (DA1470X_PCM1_BASE + DA1470X_PCM1_PCM1_OUT2_OFFSET) /* PCM1 data out 2 */

/* Register bit definitions *************************************************/


/* PCM1_CTRL Register */

#define PCM1_PCM_FSC_DIV_MASK                 (0xFFF << 20) /* PCM Framesync divider, Values 7-0xFFF. To divide by N, write N-1. (Minimum value */
#define PCM1_PCM_FSC_DIV_POS                  (20) /* PCM Framesync divider, Values 7-0xFFF. To divide by N, write N-1. (Minimum value */
#define PCM1_PCM_FSC_EDGE                     (1U << 16) /* 0: shift channels 1, 2, 3, 4, 5, 6, 7, 8 after PCM_FSC edge 1: shift channels 1, */
#define PCM1_PCM_CH_DEL_MASK                  (0x1F << 11) /* Channel delay in multiples of 8 bits */
#define PCM1_PCM_CH_DEL_POS                   (11) /* Channel delay in multiples of 8 bits */
#define PCM1_PCM_CLK_BIT                      (1U << 10) /* 0:One clock cycle per data bit 1:Two cloc cycles per data bit */
#define PCM1_PCM_FSCINV                       (1U << 9) /* 0: PCM FSC 1: PCM FSC inverted */
#define PCM1_PCM_CLKINV                       (1U << 8) /* 0:PCM CLK 1:PCM CLK inverted */
#define PCM1_PCM_PPOD                         (1U << 7) /* 0:PCM DO push pull 1:PCM DO open drain */
#define PCM1_PCM_FSCDEL                       (1U << 6) /* 0:PCM FSC starts one cycle before MSB bit 1:PCM FSC starts at the same time as M */
#define PCM1_PCM_FSCLEN_MASK                  (0xF << 2) /* 0:PCM FSC length equal to 1 data bit N:PCM FSC length equal to N*8 */
#define PCM1_PCM_FSCLEN_POS                   (2) /* 0:PCM FSC length equal to 1 data bit N:PCM FSC length equal to N*8 */
#define PCM1_PCM_MASTER                       (1U << 1) /* 0:PCM interface in slave mode 1:PCM interface in master mode */
#define PCM1_PCM_EN                           (1U << 0) /* 0:PCM interface disabled 1:PCM interface enabled */

/* PCM1_IN1 Register */

#define PCM1_PCM_IN_MASK                      (0xFFFFFFFF << 0) /* PCM1_IN1 bits 31-0 */
#define PCM1_PCM_IN_POS                       (0) /* PCM1_IN1 bits 31-0 */

/* PCM1_IN2 Register */

#define PCM1_PCM_IN_MASK                      (0xFFFFFFFF << 0) /* PCM1_IN2 bits 31-0 */
#define PCM1_PCM_IN_POS                       (0) /* PCM1_IN2 bits 31-0 */

/* PCM1_OUT1 Register */

#define PCM1_PCM_OUT_MASK                     (0xFFFFFFFF << 0) /* PCM1_OUT1 bits 31-0 */
#define PCM1_PCM_OUT_POS                      (0) /* PCM1_OUT1 bits 31-0 */

/* PCM1_OUT2 Register */

#define PCM1_PCM_OUT_MASK                     (0xFFFFFFFF << 0) /* PCM1_OUT2 bits 31-0 */
#define PCM1_PCM_OUT_POS                      (0) /* PCM1_OUT2 bits 31-0 */

#endif /* __DA1470X_PCM1_H */
