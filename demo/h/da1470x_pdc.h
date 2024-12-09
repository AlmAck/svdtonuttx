/****************************************************************************
 * ./tmp/da1470x_pdc.h
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

#ifndef __DA1470X_PDC_H
#define __DA1470X_PDC_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470x_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470X_PDC_PDC_ACKNOWLEDGE_OFFSET    0x0080 /* Clear a pending PDC bit */
#define DA1470X_PDC_PDC_CTRL0_OFFSET          0x0000 /* PDC control register */
#define DA1470X_PDC_PDC_CTRL10_OFFSET         0x0028 /* PDC control register */
#define DA1470X_PDC_PDC_CTRL11_OFFSET         0x002C /* PDC control register */
#define DA1470X_PDC_PDC_CTRL12_OFFSET         0x0030 /* PDC control register */
#define DA1470X_PDC_PDC_CTRL13_OFFSET         0x0034 /* PDC control register */
#define DA1470X_PDC_PDC_CTRL14_OFFSET         0x0038 /* PDC control register */
#define DA1470X_PDC_PDC_CTRL15_OFFSET         0x003C /* PDC control register */
#define DA1470X_PDC_PDC_CTRL1_OFFSET          0x0004 /* PDC control register */
#define DA1470X_PDC_PDC_CTRL2_OFFSET          0x0008 /* PDC control register */
#define DA1470X_PDC_PDC_CTRL3_OFFSET          0x000C /* PDC control register */
#define DA1470X_PDC_PDC_CTRL4_OFFSET          0x0010 /* PDC control register */
#define DA1470X_PDC_PDC_CTRL5_OFFSET          0x0014 /* PDC control register */
#define DA1470X_PDC_PDC_CTRL6_OFFSET          0x0018 /* PDC control register */
#define DA1470X_PDC_PDC_CTRL7_OFFSET          0x001C /* PDC control register */
#define DA1470X_PDC_PDC_CTRL8_OFFSET          0x0020 /* PDC control register */
#define DA1470X_PDC_PDC_CTRL9_OFFSET          0x0024 /* PDC control register */
#define DA1470X_PDC_PDC_PENDING_CM33_OFFSET   0x008C /* Shows any pending IRQ to CM33 */
#define DA1470X_PDC_PDC_PENDING_CMAC_OFFSET   0x0090 /* Shows any pending IRQ to CMAC */
#define DA1470X_PDC_PDC_PENDING_OFFSET        0x0084 /* Shows any pending wakup event */
#define DA1470X_PDC_PDC_PENDING_SNC_OFFSET    0x0088 /* Shows any pending IRQ to SNC */
#define DA1470X_PDC_PDC_SET_PENDING_OFFSET    0x0094 /* Set a pending PDC bit */

/* Register addresses *******************************************************/

#define DA1470X_PDC_BASE                      0x50000200 /* PDC registers */

#define DA1470X_PDC_PDC_ACKNOWLEDGE           (DA1470X_PDC_BASE + DA1470X_PDC_PDC_ACKNOWLEDGE_OFFSET) /* Clear a pending PDC bit */
#define DA1470X_PDC_PDC_CTRL0                 (DA1470X_PDC_BASE + DA1470X_PDC_PDC_CTRL0_OFFSET) /* PDC control register */
#define DA1470X_PDC_PDC_CTRL10                (DA1470X_PDC_BASE + DA1470X_PDC_PDC_CTRL10_OFFSET) /* PDC control register */
#define DA1470X_PDC_PDC_CTRL11                (DA1470X_PDC_BASE + DA1470X_PDC_PDC_CTRL11_OFFSET) /* PDC control register */
#define DA1470X_PDC_PDC_CTRL12                (DA1470X_PDC_BASE + DA1470X_PDC_PDC_CTRL12_OFFSET) /* PDC control register */
#define DA1470X_PDC_PDC_CTRL13                (DA1470X_PDC_BASE + DA1470X_PDC_PDC_CTRL13_OFFSET) /* PDC control register */
#define DA1470X_PDC_PDC_CTRL14                (DA1470X_PDC_BASE + DA1470X_PDC_PDC_CTRL14_OFFSET) /* PDC control register */
#define DA1470X_PDC_PDC_CTRL15                (DA1470X_PDC_BASE + DA1470X_PDC_PDC_CTRL15_OFFSET) /* PDC control register */
#define DA1470X_PDC_PDC_CTRL1                 (DA1470X_PDC_BASE + DA1470X_PDC_PDC_CTRL1_OFFSET) /* PDC control register */
#define DA1470X_PDC_PDC_CTRL2                 (DA1470X_PDC_BASE + DA1470X_PDC_PDC_CTRL2_OFFSET) /* PDC control register */
#define DA1470X_PDC_PDC_CTRL3                 (DA1470X_PDC_BASE + DA1470X_PDC_PDC_CTRL3_OFFSET) /* PDC control register */
#define DA1470X_PDC_PDC_CTRL4                 (DA1470X_PDC_BASE + DA1470X_PDC_PDC_CTRL4_OFFSET) /* PDC control register */
#define DA1470X_PDC_PDC_CTRL5                 (DA1470X_PDC_BASE + DA1470X_PDC_PDC_CTRL5_OFFSET) /* PDC control register */
#define DA1470X_PDC_PDC_CTRL6                 (DA1470X_PDC_BASE + DA1470X_PDC_PDC_CTRL6_OFFSET) /* PDC control register */
#define DA1470X_PDC_PDC_CTRL7                 (DA1470X_PDC_BASE + DA1470X_PDC_PDC_CTRL7_OFFSET) /* PDC control register */
#define DA1470X_PDC_PDC_CTRL8                 (DA1470X_PDC_BASE + DA1470X_PDC_PDC_CTRL8_OFFSET) /* PDC control register */
#define DA1470X_PDC_PDC_CTRL9                 (DA1470X_PDC_BASE + DA1470X_PDC_PDC_CTRL9_OFFSET) /* PDC control register */
#define DA1470X_PDC_PDC_PENDING_CM33          (DA1470X_PDC_BASE + DA1470X_PDC_PDC_PENDING_CM33_OFFSET) /* Shows any pending IRQ to CM33 */
#define DA1470X_PDC_PDC_PENDING_CMAC          (DA1470X_PDC_BASE + DA1470X_PDC_PDC_PENDING_CMAC_OFFSET) /* Shows any pending IRQ to CMAC */
#define DA1470X_PDC_PDC_PENDING               (DA1470X_PDC_BASE + DA1470X_PDC_PDC_PENDING_OFFSET) /* Shows any pending wakup event */
#define DA1470X_PDC_PDC_PENDING_SNC           (DA1470X_PDC_BASE + DA1470X_PDC_PDC_PENDING_SNC_OFFSET) /* Shows any pending IRQ to SNC */
#define DA1470X_PDC_PDC_SET_PENDING           (DA1470X_PDC_BASE + DA1470X_PDC_PDC_SET_PENDING_OFFSET) /* Set a pending PDC bit */

/* Register bit definitions *************************************************/


/* PDC_ACKNOWLEDGE Register */

#define PDC_PDC_ACKNOWLEDGE_MASK              (0x1F << 0) /* Writing to this field acknowledges the PDC IRQ request. The data controls which  */
#define PDC_PDC_ACKNOWLEDGE_POS               (0) /* Writing to this field acknowledges the PDC IRQ request. The data controls which  */

/* PDC_CTRL0 Register */

#define PDC_PDC_MASTER_MASK                   (0x3 << 11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_PDC_MASTER_POS                    (11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_EN_SNC                            (1U << 10) /* If set, enables PD_SNC. This bit is implied when PDC_MASTER=SNC */
#define PDC_EN_TMR                            (1U << 8) /* If set, enables PD_TMR */
#define PDC_EN_XTAL                           (1U << 7) /* If set, the XTAL32M will be started */
#define PDC_TRIG_ID_MASK                      (0x1F << 2) /* Selects which individual bit from the selected bank is used for wakeup. When TRI */
#define PDC_TRIG_ID_POS                       (2) /* Selects which individual bit from the selected bank is used for wakeup. When TRI */
#define PDC_TRIG_SELECT_MASK                  (0x3 << 0) /* Selects which bank is used as wakeup trigger. 0b00: selects GPIO port0 through t */
#define PDC_TRIG_SELECT_POS                   (0) /* Selects which bank is used as wakeup trigger. 0b00: selects GPIO port0 through t */

/* PDC_CTRL10 Register */

#define PDC_PDC_MASTER_MASK                   (0x3 << 11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_PDC_MASTER_POS                    (11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_EN_SNC                            (1U << 10) /* If set, enables PD_SNC. This bit is implied when PDC_MASTER=SNC */
#define PDC_EN_TMR                            (1U << 8) /* If set, enables PD_TMR */
#define PDC_EN_XTAL                           (1U << 7) /* If set, the XTAL32M will be started */
#define PDC_TRIG_ID_MASK                      (0x1F << 2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_ID_POS                       (2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_SELECT_MASK                  (0x3 << 0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */
#define PDC_TRIG_SELECT_POS                   (0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */

/* PDC_CTRL11 Register */

#define PDC_PDC_MASTER_MASK                   (0x3 << 11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_PDC_MASTER_POS                    (11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_EN_SNC                            (1U << 10) /* If set, enables PD_SNC. This bit is implied when PDC_MASTER=SNC */
#define PDC_EN_TMR                            (1U << 8) /* If set, enables PD_TMR */
#define PDC_EN_XTAL                           (1U << 7) /* If set, the XTAL32M will be started */
#define PDC_TRIG_ID_MASK                      (0x1F << 2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_ID_POS                       (2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_SELECT_MASK                  (0x3 << 0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */
#define PDC_TRIG_SELECT_POS                   (0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */

/* PDC_CTRL12 Register */

#define PDC_PDC_MASTER_MASK                   (0x3 << 11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_PDC_MASTER_POS                    (11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_EN_SNC                            (1U << 10) /* If set, enables PD_SNC. This bit is implied when PDC_MASTER=SNC */
#define PDC_EN_TMR                            (1U << 8) /* If set, enables PD_TMR */
#define PDC_EN_XTAL                           (1U << 7) /* If set, the XTAL32M will be started */
#define PDC_TRIG_ID_MASK                      (0x1F << 2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_ID_POS                       (2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_SELECT_MASK                  (0x3 << 0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */
#define PDC_TRIG_SELECT_POS                   (0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */

/* PDC_CTRL13 Register */

#define PDC_PDC_MASTER_MASK                   (0x3 << 11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_PDC_MASTER_POS                    (11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_EN_SNC                            (1U << 10) /* If set, enables PD_SNC. This bit is implied when PDC_MASTER=SNC */
#define PDC_EN_TMR                            (1U << 8) /* If set, enables PD_TMR */
#define PDC_EN_XTAL                           (1U << 7) /* If set, the XTAL32M will be started */
#define PDC_TRIG_ID_MASK                      (0x1F << 2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_ID_POS                       (2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_SELECT_MASK                  (0x3 << 0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */
#define PDC_TRIG_SELECT_POS                   (0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */

/* PDC_CTRL14 Register */

#define PDC_PDC_MASTER_MASK                   (0x3 << 11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_PDC_MASTER_POS                    (11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_EN_SNC                            (1U << 10) /* If set, enables PD_SNC. This bit is implied when PDC_MASTER=SNC */
#define PDC_EN_TMR                            (1U << 8) /* If set, enables PD_TMR */
#define PDC_EN_XTAL                           (1U << 7) /* If set, the XTAL32M will be started */
#define PDC_TRIG_ID_MASK                      (0x1F << 2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_ID_POS                       (2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_SELECT_MASK                  (0x3 << 0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */
#define PDC_TRIG_SELECT_POS                   (0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */

/* PDC_CTRL15 Register */

#define PDC_PDC_MASTER_MASK                   (0x3 << 11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_PDC_MASTER_POS                    (11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_EN_SNC                            (1U << 10) /* If set, enables PD_SNC. This bit is implied when PDC_MASTER=SNC */
#define PDC_EN_TMR                            (1U << 8) /* If set, enables PD_TMR */
#define PDC_EN_XTAL                           (1U << 7) /* If set, the XTAL32M will be started */
#define PDC_TRIG_ID_MASK                      (0x1F << 2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_ID_POS                       (2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_SELECT_MASK                  (0x3 << 0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */
#define PDC_TRIG_SELECT_POS                   (0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */

/* PDC_CTRL1 Register */

#define PDC_PDC_MASTER_MASK                   (0x3 << 11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_PDC_MASTER_POS                    (11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_EN_SNC                            (1U << 10) /* If set, enables PD_SNC. This bit is implied when PDC_MASTER=SNC */
#define PDC_EN_TMR                            (1U << 8) /* If set, enables PD_TMR */
#define PDC_EN_XTAL                           (1U << 7) /* If set, the XTAL32M will be started */
#define PDC_TRIG_ID_MASK                      (0x1F << 2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_ID_POS                       (2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_SELECT_MASK                  (0x3 << 0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */
#define PDC_TRIG_SELECT_POS                   (0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */

/* PDC_CTRL2 Register */

#define PDC_PDC_MASTER_MASK                   (0x3 << 11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_PDC_MASTER_POS                    (11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_EN_SNC                            (1U << 10) /* If set, enables PD_SNC. This bit is implied when PDC_MASTER=SNC */
#define PDC_EN_TMR                            (1U << 8) /* If set, enables PD_TMR */
#define PDC_EN_XTAL                           (1U << 7) /* If set, the XTAL32M will be started */
#define PDC_TRIG_ID_MASK                      (0x1F << 2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_ID_POS                       (2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_SELECT_MASK                  (0x3 << 0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */
#define PDC_TRIG_SELECT_POS                   (0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */

/* PDC_CTRL3 Register */

#define PDC_PDC_MASTER_MASK                   (0x3 << 11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_PDC_MASTER_POS                    (11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_EN_SNC                            (1U << 10) /* If set, enables PD_SNC. This bit is implied when PDC_MASTER=SNC */
#define PDC_EN_TMR                            (1U << 8) /* If set, enables PD_TMR */
#define PDC_EN_XTAL                           (1U << 7) /* If set, the XTAL32M will be started */
#define PDC_TRIG_ID_MASK                      (0x1F << 2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_ID_POS                       (2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_SELECT_MASK                  (0x3 << 0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */
#define PDC_TRIG_SELECT_POS                   (0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */

/* PDC_CTRL4 Register */

#define PDC_PDC_MASTER_MASK                   (0x3 << 11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_PDC_MASTER_POS                    (11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_EN_SNC                            (1U << 10) /* If set, enables PD_SNC. This bit is implied when PDC_MASTER=SNC */
#define PDC_EN_TMR                            (1U << 8) /* If set, enables PD_TMR */
#define PDC_EN_XTAL                           (1U << 7) /* If set, the XTAL32M will be started */
#define PDC_TRIG_ID_MASK                      (0x1F << 2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_ID_POS                       (2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_SELECT_MASK                  (0x3 << 0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */
#define PDC_TRIG_SELECT_POS                   (0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */

/* PDC_CTRL5 Register */

#define PDC_PDC_MASTER_MASK                   (0x3 << 11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_PDC_MASTER_POS                    (11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_EN_SNC                            (1U << 10) /* If set, enables PD_SNC. This bit is implied when PDC_MASTER=SNC */
#define PDC_EN_TMR                            (1U << 8) /* If set, enables PD_TMR */
#define PDC_EN_XTAL                           (1U << 7) /* If set, the XTAL32M will be started */
#define PDC_TRIG_ID_MASK                      (0x1F << 2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_ID_POS                       (2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_SELECT_MASK                  (0x3 << 0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */
#define PDC_TRIG_SELECT_POS                   (0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */

/* PDC_CTRL6 Register */

#define PDC_PDC_MASTER_MASK                   (0x3 << 11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_PDC_MASTER_POS                    (11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_EN_SNC                            (1U << 10) /* If set, enables PD_SNC. This bit is implied when PDC_MASTER=SNC */
#define PDC_EN_TMR                            (1U << 8) /* If set, enables PD_TMR */
#define PDC_EN_XTAL                           (1U << 7) /* If set, the XTAL32M will be started */
#define PDC_TRIG_ID_MASK                      (0x1F << 2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_ID_POS                       (2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_SELECT_MASK                  (0x3 << 0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */
#define PDC_TRIG_SELECT_POS                   (0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */

/* PDC_CTRL7 Register */

#define PDC_PDC_MASTER_MASK                   (0x3 << 11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_PDC_MASTER_POS                    (11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_EN_SNC                            (1U << 10) /* If set, enables PD_SNC. This bit is implied when PDC_MASTER=SNC */
#define PDC_EN_TMR                            (1U << 8) /* If set, enables PD_TMR */
#define PDC_EN_XTAL                           (1U << 7) /* If set, the XTAL32M will be started */
#define PDC_TRIG_ID_MASK                      (0x1F << 2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_ID_POS                       (2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_SELECT_MASK                  (0x3 << 0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */
#define PDC_TRIG_SELECT_POS                   (0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */

/* PDC_CTRL8 Register */

#define PDC_PDC_MASTER_MASK                   (0x3 << 11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_PDC_MASTER_POS                    (11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_EN_SNC                            (1U << 10) /* If set, enables PD_SNC. This bit is implied when PDC_MASTER=SNC */
#define PDC_EN_TMR                            (1U << 8) /* If set, enables PD_TMR */
#define PDC_EN_XTAL                           (1U << 7) /* If set, the XTAL32M will be started */
#define PDC_TRIG_ID_MASK                      (0x1F << 2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_ID_POS                       (2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_SELECT_MASK                  (0x3 << 0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */
#define PDC_TRIG_SELECT_POS                   (0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */

/* PDC_CTRL9 Register */

#define PDC_PDC_MASTER_MASK                   (0x3 << 11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_PDC_MASTER_POS                    (11) /* Chooses which master is triggered when waking up 0x0: entry is disabled. 0x1: PD */
#define PDC_EN_SNC                            (1U << 10) /* If set, enables PD_SNC. This bit is implied when PDC_MASTER=SNC */
#define PDC_EN_TMR                            (1U << 8) /* If set, enables PD_TMR */
#define PDC_EN_XTAL                           (1U << 7) /* If set, the XTAL32M will be started */
#define PDC_TRIG_ID_MASK                      (0x1F << 2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_ID_POS                       (2) /* For description, see PDC_CTRL0_REG.TRIG_ID */
#define PDC_TRIG_SELECT_MASK                  (0x3 << 0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */
#define PDC_TRIG_SELECT_POS                   (0) /* For description, see PDC_CTRL0_REG.TRIG_SELECT */

/* PDC_PENDING_CM33 Register */

#define PDC_PDC_PENDING_MASK                  (0xFFFF << 0) /* Indicates which IRQ ids are pending towards the CM33 */
#define PDC_PDC_PENDING_POS                   (0) /* Indicates which IRQ ids are pending towards the CM33 */

/* PDC_PENDING_CMAC Register */

#define PDC_PDC_PENDING_MASK                  (0xFFFF << 0) /* Indicates which IRQ ids are pending towards the CMAC */
#define PDC_PDC_PENDING_POS                   (0) /* Indicates which IRQ ids are pending towards the CMAC */

/* PDC_PENDING Register */

#define PDC_PDC_PENDING_MASK                  (0xFFFF << 0) /* Indicates which IRQ ids are pending */
#define PDC_PDC_PENDING_POS                   (0) /* Indicates which IRQ ids are pending */

/* PDC_PENDING_SNC Register */

#define PDC_PDC_PENDING_MASK                  (0xFFFF << 0) /* Indicates which IRQ ids are pending towards the SensorNodeController */
#define PDC_PDC_PENDING_POS                   (0) /* Indicates which IRQ ids are pending towards the SensorNodeController */

/* PDC_SET_PENDING Register */

#define PDC_PDC_SET_PENDING_MASK              (0x1F << 0) /* Writing to this field sets the PDC wake-up request and IRQ. The data controls wh */
#define PDC_PDC_SET_PENDING_POS               (0) /* Writing to this field sets the PDC wake-up request and IRQ. The data controls wh */

#endif /* __DA1470X_PDC_H */
