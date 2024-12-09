/****************************************************************************
 * ./tmp/da1470x_otpc.h
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

#ifndef __DA1470X_OTPC_H
#define __DA1470X_OTPC_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470x_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470X_OTPC_OTPC_MODE_OFFSET         0x0000 /* Mode register */
#define DA1470X_OTPC_OTPC_PADDR_OFFSET        0x0008 /* The address of the word that will be programmed, when the PROG mode is used. */
#define DA1470X_OTPC_OTPC_PWORD_OFFSET        0x000C /* The 32-bit word that will be programmed, when the PROG mode is used. */
#define DA1470X_OTPC_OTPC_STAT_OFFSET         0x0004 /* Status register */
#define DA1470X_OTPC_OTPC_TIM1_OFFSET         0x0010 /* Various timing parameters of the OTP cell. */
#define DA1470X_OTPC_OTPC_TIM2_OFFSET         0x0014 /* Various timing parameters of the OTP cell. */

/* Register addresses *******************************************************/

#define DA1470X_OTPC_BASE                     0x30070000 /* OTPC registers */

#define DA1470X_OTPC_OTPC_MODE                (DA1470X_OTPC_BASE + DA1470X_OTPC_OTPC_MODE_OFFSET) /* Mode register */
#define DA1470X_OTPC_OTPC_PADDR               (DA1470X_OTPC_BASE + DA1470X_OTPC_OTPC_PADDR_OFFSET) /* The address of the word that will be programmed, when the PROG mode is used. */
#define DA1470X_OTPC_OTPC_PWORD               (DA1470X_OTPC_BASE + DA1470X_OTPC_OTPC_PWORD_OFFSET) /* The 32-bit word that will be programmed, when the PROG mode is used. */
#define DA1470X_OTPC_OTPC_STAT                (DA1470X_OTPC_BASE + DA1470X_OTPC_OTPC_STAT_OFFSET) /* Status register */
#define DA1470X_OTPC_OTPC_TIM1                (DA1470X_OTPC_BASE + DA1470X_OTPC_OTPC_TIM1_OFFSET) /* Various timing parameters of the OTP cell. */
#define DA1470X_OTPC_OTPC_TIM2                (DA1470X_OTPC_BASE + DA1470X_OTPC_OTPC_TIM2_OFFSET) /* Various timing parameters of the OTP cell. */

/* Register bit definitions *************************************************/


/* OTPC_MODE Register */

#define OTPC_OTPC_MODE_PRG_SEL_MASK           (0x3 << 6) /* Defines the part of the OTP cell that is programmed by the controller during the */
#define OTPC_OTPC_MODE_PRG_SEL_POS            (6) /* Defines the part of the OTP cell that is programmed by the controller during the */
#define OTPC_OTPC_MODE_HT_MARG_EN             (1U << 5) /* Defines the temperature condition under which is performed a margin read. It aff */
#define OTPC_OTPC_MODE_USE_TST_ROW            (1U << 4) /* Selects the memory area of the OTP cell that will be used. 0 - Uses the main mem */
#define OTPC_OTPC_MODE_MODE_MASK              (0x7 << 0) /* Defines the mode of operation of the OTPC controller. The encoding of the modes  */
#define OTPC_OTPC_MODE_MODE_POS               (0) /* Defines the mode of operation of the OTPC controller. The encoding of the modes  */

/* OTPC_PADDR Register */

#define OTPC_OTPC_PADDR_MASK                  (0x3FF << 0) /* The OTPC_PADDR_REG and the OTPC_PWORD_REG consist the PBUF buffer that keeps the */
#define OTPC_OTPC_PADDR_POS                   (0) /* The OTPC_PADDR_REG and the OTPC_PWORD_REG consist the PBUF buffer that keeps the */

/* OTPC_PWORD Register */

#define OTPC_OTPC_PWORD_MASK                  (0xFFFFFFFF << 0) /* The OTPC_PADDR_REG and the OTPC_PWORD_REG consist the PBUF buffer that keeps the */
#define OTPC_OTPC_PWORD_POS                   (0) /* The OTPC_PADDR_REG and the OTPC_PWORD_REG consist the PBUF buffer that keeps the */

/* OTPC_STAT Register */

#define OTPC_OTPC_STAT_MRDY                   (1U << 2) /* Indicates the progress of the transition from a mode of operation to a new mode  */
#define OTPC_OTPC_STAT_PBUF_EMPTY             (1U << 1) /* Indicates the status of the programming buffer (PBUF). 0 : The PBUF contains the */
#define OTPC_OTPC_STAT_PRDY                   (1U << 0) /* Indicates the state of the programming process. 0: The controller is busy. A pro */

/* OTPC_TIM1 Register */

#define OTPC_OTPC_TIM1_US_T_CSP_MASK          (0x7F << 24) /* The number of microseconds (minus one) that are required after the selection of  */
#define OTPC_OTPC_TIM1_US_T_CSP_POS           (24) /* The number of microseconds (minus one) that are required after the selection of  */
#define OTPC_OTPC_TIM1_US_T_CS_MASK           (0xF << 20) /* The number of microseconds (minus one) that are required after the selection of  */
#define OTPC_OTPC_TIM1_US_T_CS_POS            (20) /* The number of microseconds (minus one) that are required after the selection of  */
#define OTPC_OTPC_TIM1_US_T_PL_MASK           (0xF << 16) /* The number of microseconds (minus one) that are required until to be enabled the */
#define OTPC_OTPC_TIM1_US_T_PL_POS            (16) /* The number of microseconds (minus one) that are required until to be enabled the */
#define OTPC_OTPC_TIM1_CC_T_RD_MASK           (0xF << 12) /* Defines the number of hclk_c clock periods that give a time interval at least hi */
#define OTPC_OTPC_TIM1_CC_T_RD_POS            (12) /* Defines the number of hclk_c clock periods that give a time interval at least hi */
#define OTPC_OTPC_TIM1_CC_T_20NS_MASK         (0x7 << 8) /* The number of hclk_c clock periods (minus one) that give a time interval that is */
#define OTPC_OTPC_TIM1_CC_T_20NS_POS          (8) /* The number of hclk_c clock periods (minus one) that give a time interval that is */
#define OTPC_OTPC_TIM1_CC_T_1US_MASK          (0xFF << 0) /* The number of hclk_c clock periods (minus one) that give a time interval equal t */
#define OTPC_OTPC_TIM1_CC_T_1US_POS           (0) /* The number of hclk_c clock periods (minus one) that give a time interval equal t */

/* OTPC_TIM2 Register */

#define OTPC_OTPC_TIM2_US_ADD_CC_EN           (1U << 31) /* Adds an additional hclk_c clock cycle at all the time intervals that count in mi */
#define OTPC_OTPC_TIM2_US_T_SAS_MASK          (0x3 << 29) /* The number of microseconds (minus one) that are required after the exit from the */
#define OTPC_OTPC_TIM2_US_T_SAS_POS           (29) /* The number of microseconds (minus one) that are required after the exit from the */
#define OTPC_OTPC_TIM2_US_T_PPH_MASK          (0x1F << 24) /* The number of microseconds (minus one) that are required after the last programm */
#define OTPC_OTPC_TIM2_US_T_PPH_POS           (24) /* The number of microseconds (minus one) that are required after the last programm */
#define OTPC_OTPC_TIM2_US_T_VDS_MASK          (0x7 << 21) /* The number of microseconds (minus one) that are required after the enabling of t */
#define OTPC_OTPC_TIM2_US_T_VDS_POS           (21) /* The number of microseconds (minus one) that are required after the enabling of t */
#define OTPC_OTPC_TIM2_US_T_PPS_MASK          (0x1F << 16) /* The number of microseconds (minus one) that are required after the enabling of t */
#define OTPC_OTPC_TIM2_US_T_PPS_POS           (16) /* The number of microseconds (minus one) that are required after the enabling of t */
#define OTPC_OTPC_TIM2_US_T_PPR_MASK          (0x7F << 8) /* The number of microseconds (minus one) for recovery after a programming sequence */
#define OTPC_OTPC_TIM2_US_T_PPR_POS           (8) /* The number of microseconds (minus one) for recovery after a programming sequence */
#define OTPC_OTPC_TIM2_US_T_PWI_MASK          (0x7 << 5) /* The number of microseconds (minus one) between two consecutive programming pulse */
#define OTPC_OTPC_TIM2_US_T_PWI_POS           (5) /* The number of microseconds (minus one) between two consecutive programming pulse */
#define OTPC_OTPC_TIM2_US_T_PW_MASK           (0x1F << 0) /* The number of microseconds (minus one) that lasts the programming of each bit. I */
#define OTPC_OTPC_TIM2_US_T_PW_POS            (0) /* The number of microseconds (minus one) that lasts the programming of each bit. I */

#endif /* __DA1470X_OTPC_H */
