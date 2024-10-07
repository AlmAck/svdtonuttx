/****************************************************************************
 * ./tmp/da1470_dsidphy_reg.h
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

#ifndef __DA1470_DSIDPHY_REG_H
#define __DA1470_DSIDPHY_REG_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470_DSIDPHY_REG_DPHY_BIST_DC_OUT_OFFSET          0x0018 /* No description available. */
#define DA1470_DSIDPHY_REG_DPHY_BIST_ENBL_OFFSET            0x0010 /* No description available. */
#define DA1470_DSIDPHY_REG_DPHY_BIST_PATTERN_OFFSET         0x0014 /* No description available. */
#define DA1470_DSIDPHY_REG_DPHY_CLK_DATA_LANE_PROG_OFFSET   0x000C /* No description available. */
#define DA1470_DSIDPHY_REG_DPHY_GLOBAL_CTRL_OFFSET          0x0000 /* No description available. */
#define DA1470_DSIDPHY_REG_DPHY_PLL_CONTROL_OFFSET          0x0004 /* PLL control */
#define DA1470_DSIDPHY_REG_DPHY_STATUS_OFFSET               0x0008 /* No description available. */
#define DA1470_DSIDPHY_REG_DPHY_TX_RCAL_OFFSET              0x001C /* On-chip termination control */
#define DA1470_DSIDPHY_REG_DSI2_DPHY_CLK_RST_N_CTRL_OFFSET  0x0020 /* No description available. */
#define DA1470_DSIDPHY_REG_DSI2_ERROR_STATUS_OFFSET         0x0024 /* No description available. */
#define DA1470_DSIDPHY_REG_DSI2_INTERRUPT_EN_OFFSET         0x0028 /* No description available. */
#define DA1470_DSIDPHY_REG_DSI2_MEMCTRL_OFFSET              0x0034 /* No description available. */
#define DA1470_DSIDPHY_REG_DSI2_TRIGGER_OFFSET              0x0030 /* No description available. */
#define DA1470_DSIDPHY_REG_DSI2_ULPS_CFG_OFFSET             0x002C /* No description available. */

/* Register addresses *******************************************************/

#define DA1470_DSIDPHY_REG_BASE                             0x51001500 /* DSIDPHY_REG registers */

#define DA1470_DSIDPHY_REG_DPHY_BIST_DC_OUT                 (DA1470_DSIDPHY_REG_BASE + DA1470_DSIDPHY_REG_DPHY_BIST_DC_OUT_OFFSET) /* No description available. */
#define DA1470_DSIDPHY_REG_DPHY_BIST_ENBL                   (DA1470_DSIDPHY_REG_BASE + DA1470_DSIDPHY_REG_DPHY_BIST_ENBL_OFFSET) /* No description available. */
#define DA1470_DSIDPHY_REG_DPHY_BIST_PATTERN                (DA1470_DSIDPHY_REG_BASE + DA1470_DSIDPHY_REG_DPHY_BIST_PATTERN_OFFSET) /* No description available. */
#define DA1470_DSIDPHY_REG_DPHY_CLK_DATA_LANE_PROG          (DA1470_DSIDPHY_REG_BASE + DA1470_DSIDPHY_REG_DPHY_CLK_DATA_LANE_PROG_OFFSET) /* No description available. */
#define DA1470_DSIDPHY_REG_DPHY_GLOBAL_CTRL                 (DA1470_DSIDPHY_REG_BASE + DA1470_DSIDPHY_REG_DPHY_GLOBAL_CTRL_OFFSET) /* No description available. */
#define DA1470_DSIDPHY_REG_DPHY_PLL_CONTROL                 (DA1470_DSIDPHY_REG_BASE + DA1470_DSIDPHY_REG_DPHY_PLL_CONTROL_OFFSET) /* PLL control */
#define DA1470_DSIDPHY_REG_DPHY_STATUS                      (DA1470_DSIDPHY_REG_BASE + DA1470_DSIDPHY_REG_DPHY_STATUS_OFFSET) /* No description available. */
#define DA1470_DSIDPHY_REG_DPHY_TX_RCAL                     (DA1470_DSIDPHY_REG_BASE + DA1470_DSIDPHY_REG_DPHY_TX_RCAL_OFFSET) /* On-chip termination control */
#define DA1470_DSIDPHY_REG_DSI2_DPHY_CLK_RST_N_CTRL         (DA1470_DSIDPHY_REG_BASE + DA1470_DSIDPHY_REG_DSI2_DPHY_CLK_RST_N_CTRL_OFFSET) /* No description available. */
#define DA1470_DSIDPHY_REG_DSI2_ERROR_STATUS                (DA1470_DSIDPHY_REG_BASE + DA1470_DSIDPHY_REG_DSI2_ERROR_STATUS_OFFSET) /* No description available. */
#define DA1470_DSIDPHY_REG_DSI2_INTERRUPT_EN                (DA1470_DSIDPHY_REG_BASE + DA1470_DSIDPHY_REG_DSI2_INTERRUPT_EN_OFFSET) /* No description available. */
#define DA1470_DSIDPHY_REG_DSI2_MEMCTRL                     (DA1470_DSIDPHY_REG_BASE + DA1470_DSIDPHY_REG_DSI2_MEMCTRL_OFFSET) /* No description available. */
#define DA1470_DSIDPHY_REG_DSI2_TRIGGER                     (DA1470_DSIDPHY_REG_BASE + DA1470_DSIDPHY_REG_DSI2_TRIGGER_OFFSET) /* No description available. */
#define DA1470_DSIDPHY_REG_DSI2_ULPS_CFG                    (DA1470_DSIDPHY_REG_BASE + DA1470_DSIDPHY_REG_DSI2_ULPS_CFG_OFFSET) /* No description available. */

/* Register bit definitions *************************************************/


/* DPHY_BIST_DC_OUT Register */

#define DSIDPHY_REG_DPHY_BIST_DC_OUT_MASK                   (0x3F << 0) /* Output signal used in the DC test modes. */
#define DSIDPHY_REG_DPHY_BIST_DC_OUT_POS                    (0) /* Output signal used in the DC test modes. */

/* DPHY_BIST_ENBL Register */

#define DSIDPHY_REG_DPHY_BIST_ENBL_MASK                     (0x3F << 0) /* Six-bit signal that enables the testing modes [000000] Testing Disabled [000001] */
#define DSIDPHY_REG_DPHY_BIST_ENBL_POS                      (0) /* Six-bit signal that enables the testing modes [000000] Testing Disabled [000001] */

/* DPHY_BIST_PATTERN Register */

#define DSIDPHY_REG_DPHY_BIST_PATTERN_MASK                  (0xFFFFFFFF << 0) /* This is the programmable test pattern used by BIST pattern generator and pattern */
#define DSIDPHY_REG_DPHY_BIST_PATTERN_POS                   (0) /* This is the programmable test pattern used by BIST pattern generator and pattern */

/* DPHY_CLK_DATA_LANE_PROG Register */

#define DSIDPHY_REG_UC_PRG_HS_TRAIL_MASK                    (0x1F << 21) /* Clock Lane: Bits used to program T_CLK_TRAIL time in the end of high speed trans */
#define DSIDPHY_REG_UC_PRG_HS_TRAIL_POS                     (21) /* Clock Lane: Bits used to program T_CLK_TRAIL time in the end of high speed trans */
#define DSIDPHY_REG_UC_PRG_HS_ZERO_MASK                     (0x7F << 14) /* Clock Lane: Bits used to program T_CLK_ZERO time in the beginning of high speed  */
#define DSIDPHY_REG_UC_PRG_HS_ZERO_POS                      (14) /* Clock Lane: Bits used to program T_CLK_ZERO time in the beginning of high speed  */
#define DSIDPHY_REG_UC_PRG_HS_PREPARE                       (1U << 13) /* Clock Lane: Bit used to program T_CLK_PREPARE time in the beginning of high spee */
#define DSIDPHY_REG_U_PRG_HS_TRAIL_MASK                     (0x1F << 8) /* Data Lane: Bits used to program T_HS_TRAIL time in the end of high speed transmi */
#define DSIDPHY_REG_U_PRG_HS_TRAIL_POS                      (8) /* Data Lane: Bits used to program T_HS_TRAIL time in the end of high speed transmi */
#define DSIDPHY_REG_U_PRG_HS_ZERO_MASK                      (0x3F << 2) /* Data Lane: Bits used to program T_HS_ZERO time in the beginning of high speed tr */
#define DSIDPHY_REG_U_PRG_HS_ZERO_POS                       (2) /* Data Lane: Bits used to program T_HS_ZERO time in the beginning of high speed tr */
#define DSIDPHY_REG_U_PRG_HS_PREPARE_MASK                   (0x3 << 0) /* Data Lane: Bits used to program T_HS_PREPARE time in the beginning of high speed */
#define DSIDPHY_REG_U_PRG_HS_PREPARE_POS                    (0) /* Data Lane: Bits used to program T_HS_PREPARE time in the beginning of high speed */

/* DPHY_GLOBAL_CTRL Register */

#define DSIDPHY_REG_ULPS_PLL_CTRL                           (1U << 5) /* When the PHY enters ULPS, this input determines if the PLL will be powered down  */
#define DSIDPHY_REG_ULPS_PHY_CTRL                           (1U << 4) /* When the PHY enters ULPS, this input determines if the PHY will be powered down  */
#define DSIDPHY_REG_LOCK_BYP                                (1U << 3) /* When clock lane exits from ULPS, this input determines if the PLL LOCK signal wi */
#define DSIDPHY_REG_AUTO_PD_EN                              (1U << 2) /* Powers down inactive lanes reported by CFG_NUM_LANES input bus. 1b0: inactive la */
#define DSIDPHY_REG_PHY_PD                                  (1U << 1) /* Power Down input for PHY. When high, all blocks are powered down */
#define DSIDPHY_REG_PLL_PD                                  (1U << 0) /* Power-down signal When high, the PLL is powered down */

/* DPHY_PLL_CONTROL Register */

#define DSIDPHY_REG_PLL_LOCK_LATCH                          (1U << 20) /* Enable signal to use latched LOCK signal 1b0: LOCK<= Normal LOCK signal [Default */
#define DSIDPHY_REG_PLL_BYPASS                              (1U << 19) /* Enable signal to bypass PLL: 1b0: CLKOUT<= CLKREF * ( M / ( N * O )) 1b1: CLKOUT */
#define DSIDPHY_REG_PLL_TST_MASK                            (0xF << 15) /* Test Pins. Should be connected to chip configuration registers. 4'b1001: TST_PLL */
#define DSIDPHY_REG_PLL_TST_POS                             (15) /* Test Pins. Should be connected to chip configuration registers. 4'b1001: TST_PLL */
#define DSIDPHY_REG_PLL_CM_MASK                             (0xFF << 7) /* Control M (feedback) divider */
#define DSIDPHY_REG_PLL_CM_POS                              (7) /* Control M (feedback) divider */
#define DSIDPHY_REG_PLL_CN_MASK                             (0x1F << 2) /* Control N (input) divider */
#define DSIDPHY_REG_PLL_CN_POS                              (2) /* Control N (input) divider */
#define DSIDPHY_REG_PLL_CO_MASK                             (0x3 << 0) /* Control O (output) divider */
#define DSIDPHY_REG_PLL_CO_POS                              (0) /* Control O (output) divider */

/* DPHY_STATUS Register */

#define DSIDPHY_REG_PLL_LOCK                                (1U << 0) /* Lock Detect output. Asserted when PLL is frequency locked */

/* DPHY_TX_RCAL Register */

#define DSIDPHY_REG_TX_RCAL                                 (1U << 0) /* On-chip termination control bits for manual calibration of HS-TX. Only active wh */

/* DSI2_DPHY_CLK_RST_N_CTRL Register */

#define DSIDPHY_REG_DPHY_TX_ESC_CLK_DIV                     (1U << 1) /* 0: div/4, required with RCHS of 64MHz 1: div/6, required with RCHS of 92MHz */
#define DSIDPHY_REG_DSI2_RESET_N                            (1U << 0) /* Hold the DSI2 in reset. This should be set to 'b0 when configuring the DSI2 to a */

/* DSI2_ERROR_STATUS Register */

#define DSIDPHY_REG_ROW_ACCESS_ERROR                        (1U << 11) /* There was a row access error in the memory. A read and a write took place at the */
#define DSIDPHY_REG_HOST_BTA_TIMEOUT                        (1U << 10) /* Host BTA timeout has occurred. */
#define DSIDPHY_REG_LS_RX_TIMEOUT                           (1U << 9) /* Low Power RX timeout has occurred */
#define DSIDPHY_REG_HS_TX_TIMEOUT                           (1U << 8) /* High Speed transmit has timed out. */
#define DSIDPHY_REG_CRC_ERROR                               (1U << 7) /* CRC calculated on the received data does not match the CRC the transmitter sent  */
#define DSIDPHY_REG_ECC_TWO_BIT_ERROR                       (1U << 6) /* Single bit error in the packet header was detected and corrected. */
#define DSIDPHY_REG_ECC_ONE_BIT_ERROR                       (1U << 5) /* Two packet header bit errors were detected and not corrected */
#define DSIDPHY_REG_VID_ERROR_BLANKING                      (1U << 4) /* Only asserted if cfg_vid_video_mode is set to Burst Mode and cfg_vid_bllp_mode i */
#define DSIDPHY_REG_VID_ERROR_FIFO_UNDERFLOW                (1U << 3) /* Asserted if internal video FIFO underflows. The video rate might be lower than t */
#define DSIDPHY_REG_VID_ERROR_FIFO_OVERFLOW                 (1U << 2) /* Asserted if internal video FIFO overflows. The video rate might be higher than t */
#define DSIDPHY_REG_VID_ERROR_SYNC_PULSE                    (1U << 1) /* Only asserted if cfg_vid_video_mode is set to Non-Burst mode with Sync Pulses. N */
#define DSIDPHY_REG_VID_ERROR                               (1U << 0) /* Asserted if an error occurs during operation. Signal is asserted if any of the o */

/* DSI2_INTERRUPT_EN Register */

#define DSIDPHY_REG_ROW_ACCESS_ERROR_IRQ_EN                 (1U << 11) /* Enable Row Access Error IRQ */
#define DSIDPHY_REG_HOST_BTA_TIMEOUT_IRQ_EN                 (1U << 10) /* Enable BTA timeout IRQ */
#define DSIDPHY_REG_LP_RX_TIMEOUT_IRQ_EN                    (1U << 9) /* Enable Low Power RX timeout IRQ */
#define DSIDPHY_REG_HS_TX_TIMEOUT_IRQ_EN                    (1U << 8) /* Enable High Speed TX timeout IRQ */
#define DSIDPHY_REG_CRC_ERROR_IRQ_EN                        (1U << 7) /* Enable CRC error IRQ */
#define DSIDPHY_REG_ECC_TWO_BIT_ERROR_IRQ_EN                (1U << 6) /* Enable ECC 2 bit error IRQ */
#define DSIDPHY_REG_ECC_ONE_BIT_ERROR_IRQ_EN                (1U << 5) /* Enable ECC 1 bit error IRQ */
#define DSIDPHY_REG_VID_ERROR_BLANKING_IRQ_EN               (1U << 4) /* Enable VID blanking error IRQ */
#define DSIDPHY_REG_VID_ERROR_FIFO_UNDERFLOW_IRQ_EN         (1U << 3) /* Enable VID FIFO underflow IRQ */
#define DSIDPHY_REG_VID_ERROR_FIFO_OVERFLOW_IRQ_EN          (1U << 2) /* Enable VID FIFO overflow IRQ */
#define DSIDPHY_REG_VID_ERROR_SYNC_PULSE_IRQ_EN             (1U << 1) /* Enable VID sync pulse error IRQ */
#define DSIDPHY_REG_VID_ERROR_IRQ_EN                        (1U << 0) /* Enable VID error IRQ */

/* DSI2_MEMCTRL Register */

#define DSIDPHY_REG_DSI2_MS_MASK                            (0xF << 1) /* No description available. */
#define DSIDPHY_REG_DSI2_MS_POS                             (1) /* No description available. */
#define DSIDPHY_REG_DSI2_MSE                                (1U << 0) /* No description available. */

/* DSI2_TRIGGER Register */

#define DSIDPHY_REG_TRIGGER_DATA_MASK                       (0x3 << 0) /* Transmit trigger. The format of trigger_send is as follows: 1b00 = Trigger 0 (Re */
#define DSIDPHY_REG_TRIGGER_DATA_POS                        (0) /* Transmit trigger. The format of trigger_send is as follows: 1b00 = Trigger 0 (Re */

/* DSI2_ULPS_CFG Register */

#define DSIDPHY_REG_ULPS_ACTIVE_MASK                        (0x3 << 4) /* Ultra Low Power State status. Bits assert high to indicate that the correspondin */
#define DSIDPHY_REG_ULPS_ACTIVE_POS                         (4) /* Ultra Low Power State status. Bits assert high to indicate that the correspondin */
#define DSIDPHY_REG_ULPS_CLK_ACTIVE                         (1U << 3) /* Ultra Low Power State clock lane status. Asserted high to indicate that the cloc */
#define DSIDPHY_REG_ULPS_ENABLE_MASK                        (0x3 << 1) /* Ultra-Low Power State enable. When asserted (active high) the controller instruc */
#define DSIDPHY_REG_ULPS_ENABLE_POS                         (1) /* Ultra-Low Power State enable. When asserted (active high) the controller instruc */
#define DSIDPHY_REG_ULPS_CLK_ENABLE                         (1U << 0) /* Ultra-Low Power State enable for clock lane. When set (1'b1) the controller inst */

#endif /* __DA1470_DSIDPHY_REG_H */
