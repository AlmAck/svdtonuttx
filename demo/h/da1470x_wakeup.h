/****************************************************************************
 * ./tmp/da1470x_wakeup.h
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

#ifndef __DA1470X_WAKEUP_H
#define __DA1470X_WAKEUP_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470x_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470X_WAKEUP_WKUP_CLEAR_P0_OFFSET      0x002C /* Clear event register for P0 */
#define DA1470X_WAKEUP_WKUP_CLEAR_P1_OFFSET      0x0030 /* Clear event register for P1 */
#define DA1470X_WAKEUP_WKUP_CLEAR_P2_OFFSET      0x0034 /* Clear event register for P2 */
#define DA1470X_WAKEUP_WKUP_CTRL_OFFSET          0x0000 /* Control register for the wakeup counter */
#define DA1470X_WAKEUP_WKUP_POL_P0_OFFSET        0x0014 /* select the sesitivity polarity for each P0 input */
#define DA1470X_WAKEUP_WKUP_POL_P1_OFFSET        0x0018 /* select the sesitivity polarity for each P1 input */
#define DA1470X_WAKEUP_WKUP_POL_P2_OFFSET        0x001C /* select the sesitivity polarity for each P2 input */
#define DA1470X_WAKEUP_WKUP_RESET_IRQ_OFFSET     0x0004 /* Reset wakeup interrupt */
#define DA1470X_WAKEUP_WKUP_SEL1_GPIO_P0_OFFSET  0x0044 /* Configure to generate level or edge sensitive IRQ on P0 events */
#define DA1470X_WAKEUP_WKUP_SEL1_GPIO_P1_OFFSET  0x0048 /* Configure to generate level or edge sensitive IRQ on P1 events */
#define DA1470X_WAKEUP_WKUP_SEL1_GPIO_P2_OFFSET  0x004C /* Configure to generate level or edge sensitive IRQ on P2 events */
#define DA1470X_WAKEUP_WKUP_SELECT_P0_OFFSET     0x0008 /* Select which inputs from P0 port can trigger wkup counter */
#define DA1470X_WAKEUP_WKUP_SELECT_P1_OFFSET     0x000C /* Select which inputs from P1 port can trigger wkup counter */
#define DA1470X_WAKEUP_WKUP_SELECT_P2_OFFSET     0x0010 /* Select which inputs from P2 port can trigger wkup counter */
#define DA1470X_WAKEUP_WKUP_SEL_GPIO_P0_OFFSET   0x0038 /* Enable fast wakeup and enable GPIO_P0_IRQ */
#define DA1470X_WAKEUP_WKUP_SEL_GPIO_P1_OFFSET   0x003C /* Enable fast wakeup and enable GPIO_P1_IRQ */
#define DA1470X_WAKEUP_WKUP_SEL_GPIO_P2_OFFSET   0x0040 /* Enable fast wakeup and enable GPIO_P2_IRQ */
#define DA1470X_WAKEUP_WKUP_STATUS_P0_OFFSET     0x0020 /* Event status register for P0 */
#define DA1470X_WAKEUP_WKUP_STATUS_P1_OFFSET     0x0024 /* Event status register for P1 */
#define DA1470X_WAKEUP_WKUP_STATUS_P2_OFFSET     0x0028 /* Event status register for P2 */

/* Register addresses *******************************************************/

#define DA1470X_WAKEUP_BASE                      0x50000900 /* WAKEUP registers */

#define DA1470X_WAKEUP_WKUP_CLEAR_P0             (DA1470X_WAKEUP_BASE + DA1470X_WAKEUP_WKUP_CLEAR_P0_OFFSET) /* Clear event register for P0 */
#define DA1470X_WAKEUP_WKUP_CLEAR_P1             (DA1470X_WAKEUP_BASE + DA1470X_WAKEUP_WKUP_CLEAR_P1_OFFSET) /* Clear event register for P1 */
#define DA1470X_WAKEUP_WKUP_CLEAR_P2             (DA1470X_WAKEUP_BASE + DA1470X_WAKEUP_WKUP_CLEAR_P2_OFFSET) /* Clear event register for P2 */
#define DA1470X_WAKEUP_WKUP_CTRL                 (DA1470X_WAKEUP_BASE + DA1470X_WAKEUP_WKUP_CTRL_OFFSET) /* Control register for the wakeup counter */
#define DA1470X_WAKEUP_WKUP_POL_P0               (DA1470X_WAKEUP_BASE + DA1470X_WAKEUP_WKUP_POL_P0_OFFSET) /* select the sesitivity polarity for each P0 input */
#define DA1470X_WAKEUP_WKUP_POL_P1               (DA1470X_WAKEUP_BASE + DA1470X_WAKEUP_WKUP_POL_P1_OFFSET) /* select the sesitivity polarity for each P1 input */
#define DA1470X_WAKEUP_WKUP_POL_P2               (DA1470X_WAKEUP_BASE + DA1470X_WAKEUP_WKUP_POL_P2_OFFSET) /* select the sesitivity polarity for each P2 input */
#define DA1470X_WAKEUP_WKUP_RESET_IRQ            (DA1470X_WAKEUP_BASE + DA1470X_WAKEUP_WKUP_RESET_IRQ_OFFSET) /* Reset wakeup interrupt */
#define DA1470X_WAKEUP_WKUP_SEL1_GPIO_P0         (DA1470X_WAKEUP_BASE + DA1470X_WAKEUP_WKUP_SEL1_GPIO_P0_OFFSET) /* Configure to generate level or edge sensitive IRQ on P0 events */
#define DA1470X_WAKEUP_WKUP_SEL1_GPIO_P1         (DA1470X_WAKEUP_BASE + DA1470X_WAKEUP_WKUP_SEL1_GPIO_P1_OFFSET) /* Configure to generate level or edge sensitive IRQ on P1 events */
#define DA1470X_WAKEUP_WKUP_SEL1_GPIO_P2         (DA1470X_WAKEUP_BASE + DA1470X_WAKEUP_WKUP_SEL1_GPIO_P2_OFFSET) /* Configure to generate level or edge sensitive IRQ on P2 events */
#define DA1470X_WAKEUP_WKUP_SELECT_P0            (DA1470X_WAKEUP_BASE + DA1470X_WAKEUP_WKUP_SELECT_P0_OFFSET) /* Select which inputs from P0 port can trigger wkup counter */
#define DA1470X_WAKEUP_WKUP_SELECT_P1            (DA1470X_WAKEUP_BASE + DA1470X_WAKEUP_WKUP_SELECT_P1_OFFSET) /* Select which inputs from P1 port can trigger wkup counter */
#define DA1470X_WAKEUP_WKUP_SELECT_P2            (DA1470X_WAKEUP_BASE + DA1470X_WAKEUP_WKUP_SELECT_P2_OFFSET) /* Select which inputs from P2 port can trigger wkup counter */
#define DA1470X_WAKEUP_WKUP_SEL_GPIO_P0          (DA1470X_WAKEUP_BASE + DA1470X_WAKEUP_WKUP_SEL_GPIO_P0_OFFSET) /* Enable fast wakeup and enable GPIO_P0_IRQ */
#define DA1470X_WAKEUP_WKUP_SEL_GPIO_P1          (DA1470X_WAKEUP_BASE + DA1470X_WAKEUP_WKUP_SEL_GPIO_P1_OFFSET) /* Enable fast wakeup and enable GPIO_P1_IRQ */
#define DA1470X_WAKEUP_WKUP_SEL_GPIO_P2          (DA1470X_WAKEUP_BASE + DA1470X_WAKEUP_WKUP_SEL_GPIO_P2_OFFSET) /* Enable fast wakeup and enable GPIO_P2_IRQ */
#define DA1470X_WAKEUP_WKUP_STATUS_P0            (DA1470X_WAKEUP_BASE + DA1470X_WAKEUP_WKUP_STATUS_P0_OFFSET) /* Event status register for P0 */
#define DA1470X_WAKEUP_WKUP_STATUS_P1            (DA1470X_WAKEUP_BASE + DA1470X_WAKEUP_WKUP_STATUS_P1_OFFSET) /* Event status register for P1 */
#define DA1470X_WAKEUP_WKUP_STATUS_P2            (DA1470X_WAKEUP_BASE + DA1470X_WAKEUP_WKUP_STATUS_P2_OFFSET) /* Event status register for P2 */

/* Register bit definitions *************************************************/


/* WKUP_CLEAR_P0 Register */

#define WAKEUP_WKUP_CLEAR_P0_MASK                (0xFFFFFFFF << 0) /* Clear latched value of the GPIOs P0 when corresponding bit is 1 */
#define WAKEUP_WKUP_CLEAR_P0_POS                 (0) /* Clear latched value of the GPIOs P0 when corresponding bit is 1 */

/* WKUP_CLEAR_P1 Register */

#define WAKEUP_WKUP_CLEAR_P1_MASK                (0xFFFFFFFF << 0) /* Clear latched value of the GPIOs P1 when corresponding bit is 1 */
#define WAKEUP_WKUP_CLEAR_P1_POS                 (0) /* Clear latched value of the GPIOs P1 when corresponding bit is 1 */

/* WKUP_CLEAR_P2 Register */

#define WAKEUP_WKUP_CLEAR_P2_MASK                (0x7FFF << 0) /* Clear latched value of the GPIOs P2 when corresponding bit is 1 */
#define WAKEUP_WKUP_CLEAR_P2_POS                 (0) /* Clear latched value of the GPIOs P2 when corresponding bit is 1 */

/* WKUP_CTRL Register */

#define WAKEUP_WKUP_ENABLE_IRQ                   (1U << 7) /* 0: no interrupt will be enabled 1: if you have an event an IRQ will be generated */
#define WAKEUP_WKUP_SFT_KEYHIT                   (1U << 6) /* 0 = no effect 1 = emulate key hit. First make this bit 0 before any new key hit  */
#define WAKEUP_WKUP_DEB_VALUE_MASK               (0x3F << 0) /* Wakeup debounce time. If set to 0, no debouncing will be done. Debounce time: N* */
#define WAKEUP_WKUP_DEB_VALUE_POS                (0) /* Wakeup debounce time. If set to 0, no debouncing will be done. Debounce time: N* */

/* WKUP_POL_P0 Register */

#define WAKEUP_WKUP_POL_P0_MASK                  (0xFFFFFFFF << 0) /* 0: enabled input P0_xx will give an event if that input goes high 1: enabled inp */
#define WAKEUP_WKUP_POL_P0_POS                   (0) /* 0: enabled input P0_xx will give an event if that input goes high 1: enabled inp */

/* WKUP_POL_P1 Register */

#define WAKEUP_WKUP_POL_P1_MASK                  (0xFFFFFFFF << 0) /* 0: enabled input P1_xx will give an event if that input goes high 1: enabled inp */
#define WAKEUP_WKUP_POL_P1_POS                   (0) /* 0: enabled input P1_xx will give an event if that input goes high 1: enabled inp */

/* WKUP_POL_P2 Register */

#define WAKEUP_WKUP_POL_P2_MASK                  (0x7FFF << 0) /* 0: enabled input P2_xx will give an event if that input goes high 1: enabled inp */
#define WAKEUP_WKUP_POL_P2_POS                   (0) /* 0: enabled input P2_xx will give an event if that input goes high 1: enabled inp */

/* WKUP_RESET_IRQ Register */

#define WAKEUP_WKUP_IRQ_RST_MASK                 (0xFFFF << 0) /* Writing any value to this register will reset the interrupt. Reading always retu */
#define WAKEUP_WKUP_IRQ_RST_POS                  (0) /* Writing any value to this register will reset the interrupt. Reading always retu */

/* WKUP_SEL1_GPIO_P0 Register */

#define WAKEUP_WKUP_SEL1_GPIO_P0_MASK            (0xFFFFFFFF << 0) /* 0 (level sensitive): If WKUP_SEL_GPIO_P0_REG[x] is 1, generate GPIO_P0_IRQ based */
#define WAKEUP_WKUP_SEL1_GPIO_P0_POS             (0) /* 0 (level sensitive): If WKUP_SEL_GPIO_P0_REG[x] is 1, generate GPIO_P0_IRQ based */

/* WKUP_SEL1_GPIO_P1 Register */

#define WAKEUP_WKUP_SEL1_GPIO_P1_MASK            (0xFFFFFFFF << 0) /* 0 (level sensitive): If WKUP_SEL_GPIO_P1_REG[x] is 1, generate GPIO_P1_IRQ based */
#define WAKEUP_WKUP_SEL1_GPIO_P1_POS             (0) /* 0 (level sensitive): If WKUP_SEL_GPIO_P1_REG[x] is 1, generate GPIO_P1_IRQ based */

/* WKUP_SEL1_GPIO_P2 Register */

#define WAKEUP_WKUP_SEL1_GPIO_P2_MASK            (0x7FFF << 0) /* 0 (level sensitive): If WKUP_SEL_GPIO_P2_REG[x] is 1, generate GPIO_P2_IRQ based */
#define WAKEUP_WKUP_SEL1_GPIO_P2_POS             (0) /* 0 (level sensitive): If WKUP_SEL_GPIO_P2_REG[x] is 1, generate GPIO_P2_IRQ based */

/* WKUP_SELECT_P0 Register */

#define WAKEUP_WKUP_SELECT_P0_MASK               (0xFFFFFFFF << 0) /* 0: input P0_xx is not enabled for wakeup event 1: input P0_xx is enabled for wak */
#define WAKEUP_WKUP_SELECT_P0_POS                (0) /* 0: input P0_xx is not enabled for wakeup event 1: input P0_xx is enabled for wak */

/* WKUP_SELECT_P1 Register */

#define WAKEUP_WKUP_SELECT_P1_MASK               (0xFFFFFFFF << 0) /* 0: input P1_xx is not enabled for wakeup event 1: input P1_xx is enabled for wak */
#define WAKEUP_WKUP_SELECT_P1_POS                (0) /* 0: input P1_xx is not enabled for wakeup event 1: input P1_xx is enabled for wak */

/* WKUP_SELECT_P2 Register */

#define WAKEUP_WKUP_SELECT_P2_MASK               (0x7FFF << 0) /* 0: input P2_xx is not enabled for wakeup event 1: input P2_xx is enabled for wak */
#define WAKEUP_WKUP_SELECT_P2_POS                (0) /* 0: input P2_xx is not enabled for wakeup event 1: input P2_xx is enabled for wak */

/* WKUP_SEL_GPIO_P0 Register */

#define WAKEUP_WKUP_SEL_GPIO_P0_MASK             (0xFFFFFFFF << 0) /* 0: No GPIO_P0_IRQ on input P0_x. Fast wake-up is not enabled if the correspondin */
#define WAKEUP_WKUP_SEL_GPIO_P0_POS              (0) /* 0: No GPIO_P0_IRQ on input P0_x. Fast wake-up is not enabled if the correspondin */

/* WKUP_SEL_GPIO_P1 Register */

#define WAKEUP_WKUP_SEL_GPIO_P1_MASK             (0xFFFFFFFF << 0) /* 0: No GPIO_P1_IRQ on input P1_x. Fast wake-up is not enabled if the correspondin */
#define WAKEUP_WKUP_SEL_GPIO_P1_POS              (0) /* 0: No GPIO_P1_IRQ on input P1_x. Fast wake-up is not enabled if the correspondin */

/* WKUP_SEL_GPIO_P2 Register */

#define WAKEUP_WKUP_SEL_GPIO_P2_MASK             (0x7FFF << 0) /* 0: No GPIO_P2_IRQ on input P2_x. Fast wake-up is not enabled if the correspondin */
#define WAKEUP_WKUP_SEL_GPIO_P2_POS              (0) /* 0: No GPIO_P2_IRQ on input P2_x. Fast wake-up is not enabled if the correspondin */

/* WKUP_STATUS_P0 Register */

#define WAKEUP_WKUP_STAT_P0_MASK                 (0xFFFFFFFF << 0) /* Contains the latched value of any toggle of the GPIOs Port P0. WKUP_STAT_P0[0] - */
#define WAKEUP_WKUP_STAT_P0_POS                  (0) /* Contains the latched value of any toggle of the GPIOs Port P0. WKUP_STAT_P0[0] - */

/* WKUP_STATUS_P1 Register */

#define WAKEUP_WKUP_STAT_P1_MASK                 (0xFFFFFFFF << 0) /* Contains the latched value of any toggle of the GPIOs Port P1. WKUP_STAT_P1[0] - */
#define WAKEUP_WKUP_STAT_P1_POS                  (0) /* Contains the latched value of any toggle of the GPIOs Port P1. WKUP_STAT_P1[0] - */

/* WKUP_STATUS_P2 Register */

#define WAKEUP_WKUP_STAT_P2_MASK                 (0x7FFF << 0) /* Contains the latched value of any toggle of the GPIOs Port P2. WKUP_STAT_P2[0] - */
#define WAKEUP_WKUP_STAT_P2_POS                  (0) /* Contains the latched value of any toggle of the GPIOs Port P2. WKUP_STAT_P2[0] - */

#endif /* __DA1470X_WAKEUP_H */
