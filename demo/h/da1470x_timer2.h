/****************************************************************************
 * ./tmp/da1470x_timer2.h
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

#ifndef __DA1470X_TIMER2_H
#define __DA1470X_TIMER2_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470x_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470X_TIMER2_TIMER2_CAPTURE_GPIO1_OFFSET    0x0020 /* Timer value for event on GPIO1 */
#define DA1470X_TIMER2_TIMER2_CAPTURE_GPIO2_OFFSET    0x0024 /* Timer value for event on GPIO2 */
#define DA1470X_TIMER2_TIMER2_CLEAR_IRQ_PULSE_OFFSET  0x0058 /* Timer clear pulse interrupt */
#define DA1470X_TIMER2_TIMER2_CLEAR_IRQ_OFFSET        0x0054 /* Timer clear interrupt */
#define DA1470X_TIMER2_TIMER2_CTRL_OFFSET             0x0000 /* Timer control register */
#define DA1470X_TIMER2_TIMER2_GPIO1_CONF_OFFSET       0x000C /* Timer gpio1 selection */
#define DA1470X_TIMER2_TIMER2_GPIO2_CONF_OFFSET       0x0010 /* Timer gpio2 selection */
#define DA1470X_TIMER2_TIMER2_PRESCALER_VAL_OFFSET    0x0028 /* Timer prescaler counter value */
#define DA1470X_TIMER2_TIMER2_PULSE_CNT_CTRL_OFFSET   0x0044 /* Timer pulse counter ctrl register */
#define DA1470X_TIMER2_TIMER2_PWM_CTRL_OFFSET         0x002C /* Timer pwm frequency register */
#define DA1470X_TIMER2_TIMER2_SETTINGS_OFFSET         0x0014 /* Timer reload value and Delay in shot mode */
#define DA1470X_TIMER2_TIMER2_SHOTWIDTH_OFFSET        0x0018 /* Timer Shot duration in shot mode */
#define DA1470X_TIMER2_TIMER2_STATUS_OFFSET           0x0008 /* Timer status register */
#define DA1470X_TIMER2_TIMER2_TIMER_VAL_OFFSET        0x0004 /* Timer counter value */

/* Register addresses *******************************************************/

#define DA1470X_TIMER2_BASE                           0x50010100 /* TIMER2 registers */

#define DA1470X_TIMER2_TIMER2_CAPTURE_GPIO1           (DA1470X_TIMER2_BASE + DA1470X_TIMER2_TIMER2_CAPTURE_GPIO1_OFFSET) /* Timer value for event on GPIO1 */
#define DA1470X_TIMER2_TIMER2_CAPTURE_GPIO2           (DA1470X_TIMER2_BASE + DA1470X_TIMER2_TIMER2_CAPTURE_GPIO2_OFFSET) /* Timer value for event on GPIO2 */
#define DA1470X_TIMER2_TIMER2_CLEAR_IRQ_PULSE         (DA1470X_TIMER2_BASE + DA1470X_TIMER2_TIMER2_CLEAR_IRQ_PULSE_OFFSET) /* Timer clear pulse interrupt */
#define DA1470X_TIMER2_TIMER2_CLEAR_IRQ               (DA1470X_TIMER2_BASE + DA1470X_TIMER2_TIMER2_CLEAR_IRQ_OFFSET) /* Timer clear interrupt */
#define DA1470X_TIMER2_TIMER2_CTRL                    (DA1470X_TIMER2_BASE + DA1470X_TIMER2_TIMER2_CTRL_OFFSET) /* Timer control register */
#define DA1470X_TIMER2_TIMER2_GPIO1_CONF              (DA1470X_TIMER2_BASE + DA1470X_TIMER2_TIMER2_GPIO1_CONF_OFFSET) /* Timer gpio1 selection */
#define DA1470X_TIMER2_TIMER2_GPIO2_CONF              (DA1470X_TIMER2_BASE + DA1470X_TIMER2_TIMER2_GPIO2_CONF_OFFSET) /* Timer gpio2 selection */
#define DA1470X_TIMER2_TIMER2_PRESCALER_VAL           (DA1470X_TIMER2_BASE + DA1470X_TIMER2_TIMER2_PRESCALER_VAL_OFFSET) /* Timer prescaler counter value */
#define DA1470X_TIMER2_TIMER2_PULSE_CNT_CTRL          (DA1470X_TIMER2_BASE + DA1470X_TIMER2_TIMER2_PULSE_CNT_CTRL_OFFSET) /* Timer pulse counter ctrl register */
#define DA1470X_TIMER2_TIMER2_PWM_CTRL                (DA1470X_TIMER2_BASE + DA1470X_TIMER2_TIMER2_PWM_CTRL_OFFSET) /* Timer pwm frequency register */
#define DA1470X_TIMER2_TIMER2_SETTINGS                (DA1470X_TIMER2_BASE + DA1470X_TIMER2_TIMER2_SETTINGS_OFFSET) /* Timer reload value and Delay in shot mode */
#define DA1470X_TIMER2_TIMER2_SHOTWIDTH               (DA1470X_TIMER2_BASE + DA1470X_TIMER2_TIMER2_SHOTWIDTH_OFFSET) /* Timer Shot duration in shot mode */
#define DA1470X_TIMER2_TIMER2_STATUS                  (DA1470X_TIMER2_BASE + DA1470X_TIMER2_TIMER2_STATUS_OFFSET) /* Timer status register */
#define DA1470X_TIMER2_TIMER2_TIMER_VAL               (DA1470X_TIMER2_BASE + DA1470X_TIMER2_TIMER2_TIMER_VAL_OFFSET) /* Timer counter value */

/* Register bit definitions *************************************************/


/* TIMER2_CAPTURE_GPIO1 Register */

#define TIMER2_TIM_CAPTURE_GPIO1_MASK                 (0xFFFFFF << 0) /* Gives the Capture time for event on GPIO1 */
#define TIMER2_TIM_CAPTURE_GPIO1_POS                  (0) /* Gives the Capture time for event on GPIO1 */

/* TIMER2_CAPTURE_GPIO2 Register */

#define TIMER2_TIM_CAPTURE_GPIO2_MASK                 (0xFFFFFF << 0) /* Gives the Capture time for event on GPIO2 */
#define TIMER2_TIM_CAPTURE_GPIO2_POS                  (0) /* Gives the Capture time for event on GPIO2 */

/* TIMER2_CLEAR_IRQ_PULSE Register */

#define TIMER2_TIM_CLEAR_PULSE_IRQ                    (1U << 0) /* Write any value will clear irq pulse interrupt */

/* TIMER2_CLEAR_IRQ Register */

#define TIMER2_TIM_CLEAR_IRQ                          (1U << 0) /* Write any value clear interrupt */

/* TIMER2_CTRL Register */

#define TIMER2_TIM_EDGE_DET_CNT_FALL_EN               (1U << 19) /* Select on which edge the edge detection should react; 0: the counter is triggere */
#define TIMER2_TIM_EDGE_DET_CNT_EN                    (1U << 18) /* Enable edge detection counter */
#define TIMER2_TIM_CLK_EN                             (1U << 8) /* Timer clock enable 1 = clock enabled 0 = clock disabled */
#define TIMER2_TIM_SYS_CLK_EN                         (1U << 7) /* Select clock 1 = Timer uses the DIVN clock 0 = Timer uses the lp clock  NOTE: wh */
#define TIMER2_TIM_FREE_RUN_MODE_EN                   (1U << 6) /* Valid when timer counts up, if it is '1' timer does not zero when reaches to rel */
#define TIMER2_TIM_IRQ_EN                             (1U << 5) /* Interrupt mask 1 = timer IRQ is unmasked 0 = timer IRQ is masked */
#define TIMER2_TIM_IN2_EVENT_FALL_EN                  (1U << 4) /* Event input 2 edge type 1 = falling edge 0 = rising edge */
#define TIMER2_TIM_IN1_EVENT_FALL_EN                  (1U << 3) /* Event input 1 edge type 1 = falling edge 0 = rising edge */
#define TIMER2_TIM_COUNT_DOWN_EN                      (1U << 2) /* Timer count direction 1 = down 0 = up  NOTE: only change this bit when timer is  */
#define TIMER2_TIM_ONESHOT_MODE_EN                    (1U << 1) /* Timer mode 1 = One shot enabled 0 = Counter enabled */
#define TIMER2_TIM_EN                                 (1U << 0) /* Timer enable 1 = On 0 = Off */

/* TIMER2_GPIO1_CONF Register */

#define TIMER2_TIM_GPIO1_CONF_MASK                    (0x3F << 0) /* Select one of the 32 GPIOs as IN1, Valid values 0-32. 0: Disable input 1: P0_00  */
#define TIMER2_TIM_GPIO1_CONF_POS                     (0) /* Select one of the 32 GPIOs as IN1, Valid values 0-32. 0: Disable input 1: P0_00  */

/* TIMER2_GPIO2_CONF Register */

#define TIMER2_TIM_GPIO2_CONF_MASK                    (0x3F << 0) /* Select one of the 32 GPIOs as IN2, Valid values 0-32. 0: Disable input 1: P0_00  */
#define TIMER2_TIM_GPIO2_CONF_POS                     (0) /* Select one of the 32 GPIOs as IN2, Valid values 0-32. 0: Disable input 1: P0_00  */

/* TIMER2_PRESCALER_VAL Register */

#define TIMER2_TIM_PRESCALER_VAL_MASK                 (0x1F << 0) /* Gives the current prescaler counter value */
#define TIMER2_TIM_PRESCALER_VAL_POS                  (0) /* Gives the current prescaler counter value */

/* TIMER2_PULSE_CNT_CTRL Register */

#define TIMER2_PULSE_CNT_GPIO_SEL_MASK                (0x3F << 24) /* Select one of the 32 GPIOs as input for the pulse counter, Valid values 0-32. 0: */
#define TIMER2_PULSE_CNT_GPIO_SEL_POS                 (24) /* Select one of the 32 GPIOs as input for the pulse counter, Valid values 0-32. 0: */
#define TIMER2_PULSE_CNT_THRESHOLD_MASK               (0xFFFFFF << 0) /* Select after how many pulses an irq is fired for the pulse counter  NOTE: Only c */
#define TIMER2_PULSE_CNT_THRESHOLD_POS                (0) /* Select after how many pulses an irq is fired for the pulse counter  NOTE: Only c */

/* TIMER2_PWM_CTRL Register */

#define TIMER2_TIM_PWM_DC_MASK                        (0xFFFF << 16) /* Defines the PWM duty cycle. TIM_PWM_DC / ( TIM_PWM_FREQ+1) */
#define TIMER2_TIM_PWM_DC_POS                         (16) /* Defines the PWM duty cycle. TIM_PWM_DC / ( TIM_PWM_FREQ+1) */
#define TIMER2_TIM_PWM_FREQ_MASK                      (0xFFFF << 0) /* Defines the PWM frequency. Timer clock frequency / (TIM_PWM_FREQ+1) Timer clock  */
#define TIMER2_TIM_PWM_FREQ_POS                       (0) /* Defines the PWM frequency. Timer clock frequency / (TIM_PWM_FREQ+1) Timer clock  */

/* TIMER2_SETTINGS Register */

#define TIMER2_TIM_PRESCALER_MASK                     (0x1F << 24) /* Defines the timer count frequency. CLOCK frequency / (TIM_PRESCALER+1) */
#define TIMER2_TIM_PRESCALER_POS                      (24) /* Defines the timer count frequency. CLOCK frequency / (TIM_PRESCALER+1) */
#define TIMER2_TIM_RELOAD_MASK                        (0xFFFFFF << 0) /* Reload or max value in timer mode, Delay phase duration in oneshot mode. Actual  */
#define TIMER2_TIM_RELOAD_POS                         (0) /* Reload or max value in timer mode, Delay phase duration in oneshot mode. Actual  */

/* TIMER2_SHOTWIDTH Register */

#define TIMER2_TIM_SHOTWIDTH_MASK                     (0xFFFFFF << 0) /* Shot phase duration in oneshot mode */
#define TIMER2_TIM_SHOTWIDTH_POS                      (0) /* Shot phase duration in oneshot mode */

/* TIMER2_STATUS Register */

#define TIMER2_TIM_IRQ_PULSE_STATUS                   (1U << 14) /* Status bit of IRQ pulse counter. When the pulse counter reaches the theshold val */
#define TIMER2_TIM_SWITCHED_TO_DIVN_CLK               (1U << 11) /* Indicates that timer clock has been switched to divn clock */
#define TIMER2_TIM_PWM_BUSY                           (1U << 10) /* Busy with synchronizing PWM_FREQ_REG and PWM_DC_REG. Do not write a new value to */
#define TIMER2_TIM_TIMER_BUSY                         (1U << 9) /* Busy with synchronizing PRESCALER_REG, RELOAD_REG and SHOTWIDTH_REG. Do not writ */
#define TIMER2_TIM_IRQ_STATUS                         (1U << 8) /* IRQ status bit. When an irq has occured, this bit is 1. */
#define TIMER2_TIM_ONESHOT_PHASE_MASK                 (0x3 << 2) /* OneShot phase 0 = Wait for event 1 = Delay phase 2 = Start Shot 3 = Shot phase */
#define TIMER2_TIM_ONESHOT_PHASE_POS                  (2) /* OneShot phase 0 = Wait for event 1 = Delay phase 2 = Start Shot 3 = Shot phase */
#define TIMER2_TIM_IN2_STATE                          (1U << 1) /* Gives the logic level of the IN1 */
#define TIMER2_TIM_IN1_STATE                          (1U << 0) /* Gives the logic level of the IN2 */

/* TIMER2_TIMER_VAL Register */

#define TIMER2_TIM_TIMER_VALUE_MASK                   (0xFFFFFF << 0) /* Gives the current timer value */
#define TIMER2_TIM_TIMER_VALUE_POS                    (0) /* Gives the current timer value */

#endif /* __DA1470X_TIMER2_H */
