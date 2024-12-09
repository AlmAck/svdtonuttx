/****************************************************************************
 * ./tmp/da1470x_vad.h
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

#ifndef __DA1470X_VAD_H
#define __DA1470X_VAD_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470x_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470X_VAD_VAD_CTRL0_OFFSET          0x0000 /* VAD Control Register 0 */
#define DA1470X_VAD_VAD_CTRL1_OFFSET          0x0004 /* VAD Control Register 1 */
#define DA1470X_VAD_VAD_CTRL2_OFFSET          0x0008 /* VAD Control Register 2 */
#define DA1470X_VAD_VAD_CTRL3_OFFSET          0x000C /* VAD Control Register 3 */
#define DA1470X_VAD_VAD_CTRL4_OFFSET          0x0010 /* VAD Control Register 4 */
#define DA1470X_VAD_VAD_STATUS_OFFSET         0x0020 /* VAD Status Register */

/* Register addresses *******************************************************/

#define DA1470X_VAD_BASE                      0x50000C00 /* VAD registers */

#define DA1470X_VAD_VAD_CTRL0                 (DA1470X_VAD_BASE + DA1470X_VAD_VAD_CTRL0_OFFSET) /* VAD Control Register 0 */
#define DA1470X_VAD_VAD_CTRL1                 (DA1470X_VAD_BASE + DA1470X_VAD_VAD_CTRL1_OFFSET) /* VAD Control Register 1 */
#define DA1470X_VAD_VAD_CTRL2                 (DA1470X_VAD_BASE + DA1470X_VAD_VAD_CTRL2_OFFSET) /* VAD Control Register 2 */
#define DA1470X_VAD_VAD_CTRL3                 (DA1470X_VAD_BASE + DA1470X_VAD_VAD_CTRL3_OFFSET) /* VAD Control Register 3 */
#define DA1470X_VAD_VAD_CTRL4                 (DA1470X_VAD_BASE + DA1470X_VAD_VAD_CTRL4_OFFSET) /* VAD Control Register 4 */
#define DA1470X_VAD_VAD_STATUS                (DA1470X_VAD_BASE + DA1470X_VAD_VAD_STATUS_OFFSET) /* VAD Status Register */

/* Register bit definitions *************************************************/


/* VAD_CTRL0 Register */

#define VAD_VAD_VTRACK_MASK                   (0x3 << 6) /* Voice Tracking parameter: This parameter allows to set the adaptation speed of t */
#define VAD_VAD_VTRACK_POS                    (6) /* Voice Tracking parameter: This parameter allows to set the adaptation speed of t */
#define VAD_VAD_NTRACK_MASK                   (0x7 << 3) /* Background Noise Tracking parameter: This parameter allows to set the speed of t */
#define VAD_VAD_NTRACK_POS                    (3) /* Background Noise Tracking parameter: This parameter allows to set the speed of t */
#define VAD_VAD_PWR_LVL_SNSTVTY_MASK          (0x7 << 0) /* Power Level Sensitivity: Ratio between ambient noise and voice level to be detec */
#define VAD_VAD_PWR_LVL_SNSTVTY_POS           (0) /* Power Level Sensitivity: Ratio between ambient noise and voice level to be detec */

/* VAD_CTRL1 Register */

#define VAD_VAD_MINDELAY_MASK                 (0x3 << 3) /* Minimum Delay: This parameter allows to set the minimum time before a detection  */
#define VAD_VAD_MINDELAY_POS                  (3) /* Minimum Delay: This parameter allows to set the minimum time before a detection  */
#define VAD_VAD_MINEVENT_MASK                 (0x7 << 0) /* Minimum Event Duration: This parameter allows to set the Minimum vocal signal du */
#define VAD_VAD_MINEVENT_POS                  (0) /* Minimum Event Duration: This parameter allows to set the Minimum vocal signal du */

/* VAD_CTRL2 Register */

#define VAD_VAD_NFI_DET_MASK                  (0x3F << 0) /* NFI Detection: This parameter defines the NFI threshold above which an IRQ is se */
#define VAD_VAD_NFI_DET_POS                   (0) /* NFI Detection: This parameter defines the NFI threshold above which an IRQ is se */

/* VAD_CTRL3 Register */

#define VAD_VAD_SB                            (1U << 7) /* Stand-by mode 0: The VAD block is activated (sleep or listening mode) 1: The VAD */
#define VAD_VAD_SLEEP                         (1U << 6) /* Sleep mode 0: If SB = 0, The VAD block is in listening mode 1: If SB = 0, The VA */
#define VAD_VAD_MCLK_DIV_MASK                 (0x7 << 3) /* Clock selection - refer to table 3.3* 000: Division ration = 1 001: Division rat */
#define VAD_VAD_MCLK_DIV_POS                  (3) /* Clock selection - refer to table 3.3* 000: Division ration = 1 001: Division rat */

/* VAD_CTRL4 Register */

#define VAD_VAD_IRQ_MODE                      (1U << 2) /* IRQ mode selection 0: The generated IRQ is a high level 1: The generated IRQ is  */
#define VAD_VAD_IRQ_FLAG                      (1U << 1) /* Interrupt ReQuest flag: IRQ_FLAG is set to 1 when a voice detection event occurs */

/* VAD_STATUS Register */

#define VAD_VAD_NFI_RD_MASK                   (0x3F << 0) /* VAD NFI output read-out value. */
#define VAD_VAD_NFI_RD_POS                    (0) /* VAD NFI output read-out value. */

#endif /* __DA1470X_VAD_H */
