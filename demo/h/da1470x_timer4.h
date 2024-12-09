/****************************************************************************
 * ./tmp/da1470x_timer4.h
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

#ifndef __DA1470X_TIMER4_H
#define __DA1470X_TIMER4_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470x_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470X_TIMER4_TIMER4_CAPTURE_GPIO1_OFFSET     0x0020 /* Timer value for event on GPIO1 */
#define DA1470X_TIMER4_TIMER4_CAPTURE_GPIO2_OFFSET     0x0024 /* Timer value for event on GPIO2 */
#define DA1470X_TIMER4_TIMER4_CAPTURE_GPIO3_OFFSET     0x003C /* Timer value for event on GPIO1 */
#define DA1470X_TIMER4_TIMER4_CAPTURE_GPIO4_OFFSET     0x0040 /* Timer value for event on GPIO1 */
#define DA1470X_TIMER4_TIMER4_CLEAR_GPIO_EVENT_OFFSET  0x0050 /* Timer clear gpio event register */
#define DA1470X_TIMER4_TIMER4_CLEAR_IRQ_PULSE_OFFSET   0x0058 /* Timer clear pulse interrupt */
#define DA1470X_TIMER4_TIMER4_CLEAR_IRQ_OFFSET         0x0054 /* Timer clear interrupt */
#define DA1470X_TIMER4_TIMER4_CTRL_OFFSET              0x0000 /* Timer control register */
#define DA1470X_TIMER4_TIMER4_GPIO1_CONF_OFFSET        0x000C /* Timer gpio1 selection */
#define DA1470X_TIMER4_TIMER4_GPIO2_CONF_OFFSET        0x0010 /* Timer gpio2 selection */
#define DA1470X_TIMER4_TIMER4_GPIO3_CONF_OFFSET        0x0034 /* Timer gpio3 selection */
#define DA1470X_TIMER4_TIMER4_GPIO4_CONF_OFFSET        0x0038 /* Timer gpio4 selection */
#define DA1470X_TIMER4_TIMER4_ONESHOT_TRIGGER_OFFSET   0x0048 /* Timer oneshot trigger register */
#define DA1470X_TIMER4_TIMER4_PRESCALER_VAL_OFFSET     0x0028 /* Timer prescaler counter valuew */
#define DA1470X_TIMER4_TIMER4_PULSE_CNT_CTRL_OFFSET    0x0044 /* Timer pulse counter ctrl register */
#define DA1470X_TIMER4_TIMER4_PWM_CTRL_OFFSET          0x002C /* Timer pwm frequency register */
#define DA1470X_TIMER4_TIMER4_SETTINGS_OFFSET          0x0014 /* Timer reload value and Delay in shot mode */
#define DA1470X_TIMER4_TIMER4_SHOTWIDTH_OFFSET         0x0018 /* Timer Shot duration in shot mode */
#define DA1470X_TIMER4_TIMER4_STATUS_OFFSET            0x0008 /* Timer status register */
#define DA1470X_TIMER4_TIMER4_TIMER_VAL_OFFSET         0x0004 /* Timer counter value */

/* Register addresses *******************************************************/

#define DA1470X_TIMER4_BASE                            0x50010300 /* TIMER4 registers */

#define DA1470X_TIMER4_TIMER4_CAPTURE_GPIO1            (DA1470X_TIMER4_BASE + DA1470X_TIMER4_TIMER4_CAPTURE_GPIO1_OFFSET) /* Timer value for event on GPIO1 */
#define DA1470X_TIMER4_TIMER4_CAPTURE_GPIO2            (DA1470X_TIMER4_BASE + DA1470X_TIMER4_TIMER4_CAPTURE_GPIO2_OFFSET) /* Timer value for event on GPIO2 */
#define DA1470X_TIMER4_TIMER4_CAPTURE_GPIO3            (DA1470X_TIMER4_BASE + DA1470X_TIMER4_TIMER4_CAPTURE_GPIO3_OFFSET) /* Timer value for event on GPIO1 */
#define DA1470X_TIMER4_TIMER4_CAPTURE_GPIO4            (DA1470X_TIMER4_BASE + DA1470X_TIMER4_TIMER4_CAPTURE_GPIO4_OFFSET) /* Timer value for event on GPIO1 */
#define DA1470X_TIMER4_TIMER4_CLEAR_GPIO_EVENT         (DA1470X_TIMER4_BASE + DA1470X_TIMER4_TIMER4_CLEAR_GPIO_EVENT_OFFSET) /* Timer clear gpio event register */
#define DA1470X_TIMER4_TIMER4_CLEAR_IRQ_PULSE          (DA1470X_TIMER4_BASE + DA1470X_TIMER4_TIMER4_CLEAR_IRQ_PULSE_OFFSET) /* Timer clear pulse interrupt */
#define DA1470X_TIMER4_TIMER4_CLEAR_IRQ                (DA1470X_TIMER4_BASE + DA1470X_TIMER4_TIMER4_CLEAR_IRQ_OFFSET) /* Timer clear interrupt */
#define DA1470X_TIMER4_TIMER4_CTRL                     (DA1470X_TIMER4_BASE + DA1470X_TIMER4_TIMER4_CTRL_OFFSET) /* Timer control register */
#define DA1470X_TIMER4_TIMER4_GPIO1_CONF               (DA1470X_TIMER4_BASE + DA1470X_TIMER4_TIMER4_GPIO1_CONF_OFFSET) /* Timer gpio1 selection */
#define DA1470X_TIMER4_TIMER4_GPIO2_CONF               (DA1470X_TIMER4_BASE + DA1470X_TIMER4_TIMER4_GPIO2_CONF_OFFSET) /* Timer gpio2 selection */
#define DA1470X_TIMER4_TIMER4_GPIO3_CONF               (DA1470X_TIMER4_BASE + DA1470X_TIMER4_TIMER4_GPIO3_CONF_OFFSET) /* Timer gpio3 selection */
#define DA1470X_TIMER4_TIMER4_GPIO4_CONF               (DA1470X_TIMER4_BASE + DA1470X_TIMER4_TIMER4_GPIO4_CONF_OFFSET) /* Timer gpio4 selection */
#define DA1470X_TIMER4_TIMER4_ONESHOT_TRIGGER          (DA1470X_TIMER4_BASE + DA1470X_TIMER4_TIMER4_ONESHOT_TRIGGER_OFFSET) /* Timer oneshot trigger register */
#define DA1470X_TIMER4_TIMER4_PRESCALER_VAL            (DA1470X_TIMER4_BASE + DA1470X_TIMER4_TIMER4_PRESCALER_VAL_OFFSET) /* Timer prescaler counter valuew */
#define DA1470X_TIMER4_TIMER4_PULSE_CNT_CTRL           (DA1470X_TIMER4_BASE + DA1470X_TIMER4_TIMER4_PULSE_CNT_CTRL_OFFSET) /* Timer pulse counter ctrl register */
#define DA1470X_TIMER4_TIMER4_PWM_CTRL                 (DA1470X_TIMER4_BASE + DA1470X_TIMER4_TIMER4_PWM_CTRL_OFFSET) /* Timer pwm frequency register */
#define DA1470X_TIMER4_TIMER4_SETTINGS                 (DA1470X_TIMER4_BASE + DA1470X_TIMER4_TIMER4_SETTINGS_OFFSET) /* Timer reload value and Delay in shot mode */
#define DA1470X_TIMER4_TIMER4_SHOTWIDTH                (DA1470X_TIMER4_BASE + DA1470X_TIMER4_TIMER4_SHOTWIDTH_OFFSET) /* Timer Shot duration in shot mode */
#define DA1470X_TIMER4_TIMER4_STATUS                   (DA1470X_TIMER4_BASE + DA1470X_TIMER4_TIMER4_STATUS_OFFSET) /* Timer status register */
#define DA1470X_TIMER4_TIMER4_TIMER_VAL                (DA1470X_TIMER4_BASE + DA1470X_TIMER4_TIMER4_TIMER_VAL_OFFSET) /* Timer counter value */

/* Register bit definitions *************************************************/


/* TIMER4_CAPTURE_GPIO1 Register */

#define TIMER4_TIM_CAPTURE_GPIO1_MASK                  (0xFFFFFF << 0) /* Gives the Capture time for event on GPIO1 */
#define TIMER4_TIM_CAPTURE_GPIO1_POS                   (0) /* Gives the Capture time for event on GPIO1 */

/* TIMER4_CAPTURE_GPIO2 Register */

#define TIMER4_TIM_CAPTURE_GPIO2_MASK                  (0xFFFFFF << 0) /* Gives the Capture time for event on GPIO2 */
#define TIMER4_TIM_CAPTURE_GPIO2_POS                   (0) /* Gives the Capture time for event on GPIO2 */

/* TIMER4_CAPTURE_GPIO3 Register */

#define TIMER4_TIM_CAPTURE_GPIO3_MASK                  (0xFFFFFF << 0) /* Gives the Capture time for event on GPIO3 */
#define TIMER4_TIM_CAPTURE_GPIO3_POS                   (0) /* Gives the Capture time for event on GPIO3 */

/* TIMER4_CAPTURE_GPIO4 Register */

#define TIMER4_TIM_CAPTURE_GPIO4_MASK                  (0xFFFFFF << 0) /* Gives the Capture time for event on GPIO4 */
#define TIMER4_TIM_CAPTURE_GPIO4_POS                   (0) /* Gives the Capture time for event on GPIO4 */

/* TIMER4_CLEAR_GPIO_EVENT Register */

#define TIMER4_TIM_CLEAR_GPIO4_EVENT                   (1U << 3) /* 1 = Clear GPIO4 event. Return always 0 */
#define TIMER4_TIM_CLEAR_GPIO3_EVENT                   (1U << 2) /* 1 = Clear GPIO3 event. Return always 0 */
#define TIMER4_TIM_CLEAR_GPIO2_EVENT                   (1U << 1) /* 1 = Clear GPIO2 event. Return always 0 */
#define TIMER4_TIM_CLEAR_GPIO1_EVENT                   (1U << 0) /* 1 = Clear GPIO1 event. Return always 0 */

/* TIMER4_CLEAR_IRQ_PULSE Register */

#define TIMER4_TIM_CLEAR_PULSE_IRQ                     (1U << 0) /* Write any value will clear irq pulse interrupt */

/* TIMER4_CLEAR_IRQ Register */

#define TIMER4_TIM_CLEAR_IRQ                           (1U << 0) /* Write any value clear interrupt */

/* TIMER4_CTRL Register */

#define TIMER4_TIM_SINGLE_EVENT_CAPTURE                (1U << 20) /* When this bit is set, only the first event on captimer1 is captured */
#define TIMER4_TIM_EDGE_DET_CNT_FALL_EN                (1U << 19) /* Select on which edge the edge detection should react; 0: the counter is triggere */
#define TIMER4_TIM_EDGE_DET_CNT_EN                     (1U << 18) /* Enable edge detection counter. NOTE: In sleep only 80 MHz can be reached at 900  */
#define TIMER4_TIM_ONESHOT_SWITCH                      (1U << 17) /* Automatically switch after the completion of the pulse output without the CPU pr */
#define TIMER4_TIM_ONESHOT_TRIGGER_MASK                (0x3 << 15) /* Oneshot trigger source 00: Select external GPIO as the trigger for one shot 01:  */
#define TIMER4_TIM_ONESHOT_TRIGGER_POS                 (15) /* Oneshot trigger source 00: Select external GPIO as the trigger for one shot 01:  */
#define TIMER4_TIM_CAP_GPIO4_IRQ_EN                    (1U << 14) /* 0 = Event on GPIO4 does not create a CAPTIM interrrupt 1 = Event on GPIO4 create */
#define TIMER4_TIM_CAP_GPIO3_IRQ_EN                    (1U << 13) /* 0 = Event on GPIO3 does not create a CAPTIM interrrupt 1 = Event on GPIO3 create */
#define TIMER4_TIM_CAP_GPIO2_IRQ_EN                    (1U << 12) /* 0 = Event on GPIO2 does not create a CAPTIM interrrupt 1 = Event on GPIO2 create */
#define TIMER4_TIM_CAP_GPIO1_IRQ_EN                    (1U << 11) /* 0 = Event on GPIO1 does not create a CAPTIM interrrupt 1 = Event on GPIO1 create */
#define TIMER4_TIM_IN4_EVENT_FALL_EN                   (1U << 10) /* Event input 4 edge type 1 = falling edge 0 = rising edge */
#define TIMER4_TIM_IN3_EVENT_FALL_EN                   (1U << 9) /* Event input 3 edge type 1 = falling edge 0 = rising edge */
#define TIMER4_TIM_CLK_EN                              (1U << 8) /* Timer clock enable 1 = clock enabled 0 = clock disabled */
#define TIMER4_TIM_SYS_CLK_EN                          (1U << 7) /* Select clock 1 = Timer uses the DIVN clock 0 = Timer uses the lp clock   NOTE: w */
#define TIMER4_TIM_FREE_RUN_MODE_EN                    (1U << 6) /* Valid when timer counts up, if it is 1 timer does not zero when reaches to reloa */
#define TIMER4_TIM_IRQ_EN                              (1U << 5) /* Interrupt mask 1 = timer IRQ is unmasked 0 = timer IRQ is masked */
#define TIMER4_TIM_IN2_EVENT_FALL_EN                   (1U << 4) /* Event input 2 edge type 1 = falling edge 0 = rising edge */
#define TIMER4_TIM_IN1_EVENT_FALL_EN                   (1U << 3) /* Event input 1 edge type 1 = falling edge 0 = rising edge */
#define TIMER4_TIM_COUNT_DOWN_EN                       (1U << 2) /* Timer count direction 1 = down 0 = up NOTE: only change counter direction when t */
#define TIMER4_TIM_ONESHOT_MODE_EN                     (1U << 1) /* Timer mode 1 = One shot enabled 0 = Counter enabled */
#define TIMER4_TIM_EN                                  (1U << 0) /* Timer enable 1 = On 0 = Off */

/* TIMER4_GPIO1_CONF Register */

#define TIMER4_TIM_GPIO1_CONF_MASK                     (0x3F << 0) /* Select one of the 32 GPIOs as IN1, Valid values 0-32. 0: Disable input 1: P0_00  */
#define TIMER4_TIM_GPIO1_CONF_POS                      (0) /* Select one of the 32 GPIOs as IN1, Valid values 0-32. 0: Disable input 1: P0_00  */

/* TIMER4_GPIO2_CONF Register */

#define TIMER4_TIM_GPIO2_CONF_MASK                     (0x3F << 0) /* Select one of the 32 GPIOs as IN2, Valid values 0-32. 0: Disable input 1: P0_00  */
#define TIMER4_TIM_GPIO2_CONF_POS                      (0) /* Select one of the 32 GPIOs as IN2, Valid values 0-32. 0: Disable input 1: P0_00  */

/* TIMER4_GPIO3_CONF Register */

#define TIMER4_TIM_GPIO3_CONF_MASK                     (0x3F << 0) /* Select one of the 32 GPIOs as IN3, Valid value 0-32. 1 for the first gpio, 32 fo */
#define TIMER4_TIM_GPIO3_CONF_POS                      (0) /* Select one of the 32 GPIOs as IN3, Valid value 0-32. 1 for the first gpio, 32 fo */

/* TIMER4_GPIO4_CONF Register */

#define TIMER4_TIM_GPIO4_CONF_MASK                     (0x3F << 0) /* Select one of the 32 GPIOs as IN4, Valid values 0-32. 0: Disable input 1: P0_00  */
#define TIMER4_TIM_GPIO4_CONF_POS                      (0) /* Select one of the 32 GPIOs as IN4, Valid values 0-32. 0: Disable input 1: P0_00  */

/* TIMER4_ONESHOT_TRIGGER Register */

#define TIMER4_TIM_ONESHOT_TRIGGER_SW                  (1U << 0) /* trigger oneshot */

/* TIMER4_PRESCALER_VAL Register */

#define TIMER4_TIM_PRESCALER_VAL_MASK                  (0x1F << 0) /* Gives the current prescaler counter value */
#define TIMER4_TIM_PRESCALER_VAL_POS                   (0) /* Gives the current prescaler counter value */

/* TIMER4_PULSE_CNT_CTRL Register */

#define TIMER4_PULSE_CNT_GPIO_SEL_MASK                 (0x3F << 24) /* Select one of the 32 GPIOs as input for the pulse counter, Valid values 0-32. 0: */
#define TIMER4_PULSE_CNT_GPIO_SEL_POS                  (24) /* Select one of the 32 GPIOs as input for the pulse counter, Valid values 0-32. 0: */
#define TIMER4_PULSE_CNT_THRESHOLD_MASK                (0xFFFFFF << 0) /* Select after how many pulses an irq is fired for the pulse counter n-2.  NOTE: O */
#define TIMER4_PULSE_CNT_THRESHOLD_POS                 (0) /* Select after how many pulses an irq is fired for the pulse counter n-2.  NOTE: O */

/* TIMER4_PWM_CTRL Register */

#define TIMER4_TIM_PWM_DC_MASK                         (0xFFFF << 16) /* Defines the PWM duty cycle. TIM_PWM_DC / ( TIM_PWM_FREQ+1) */
#define TIMER4_TIM_PWM_DC_POS                          (16) /* Defines the PWM duty cycle. TIM_PWM_DC / ( TIM_PWM_FREQ+1) */
#define TIMER4_TIM_PWM_FREQ_MASK                       (0xFFFF << 0) /* Defines the PWM frequency. Timer clock frequency / (TIM_PWM_FREQ+1) Timer clock  */
#define TIMER4_TIM_PWM_FREQ_POS                        (0) /* Defines the PWM frequency. Timer clock frequency / (TIM_PWM_FREQ+1) Timer clock  */

/* TIMER4_SETTINGS Register */

#define TIMER4_TIM_PRESCALER_MASK                      (0x1F << 24) /* Defines the timer count frequency. CLOCK frequency / (TIM_PRESCALER+1) */
#define TIMER4_TIM_PRESCALER_POS                       (24) /* Defines the timer count frequency. CLOCK frequency / (TIM_PRESCALER+1) */
#define TIMER4_TIM_RELOAD_MASK                         (0xFFFFFF << 0) /* Reload or max value in timer mode, Delay phase duration in oneshot mode. Actual  */
#define TIMER4_TIM_RELOAD_POS                          (0) /* Reload or max value in timer mode, Delay phase duration in oneshot mode. Actual  */

/* TIMER4_SHOTWIDTH Register */

#define TIMER4_TIM_SHOTWIDTH_MASK                      (0xFFFFFF << 0) /* Shot phase duration in oneshot mode */
#define TIMER4_TIM_SHOTWIDTH_POS                       (0) /* Shot phase duration in oneshot mode */

/* TIMER4_STATUS Register */

#define TIMER4_TIM_IRQ_PULSE_STATUS                    (1U << 14) /* Status bit of IRQ pulse counter. When the pulse counter reaches the theshold val */
#define TIMER4_TIM_IN4_STATE                           (1U << 13) /* Gives the logic level of the IN4 */
#define TIMER4_TIM_IN3_STATE                           (1U << 12) /* Gives the logic level of the IN3 */
#define TIMER4_TIM_SWITCHED_TO_DIVN_CLK                (1U << 11) /* Indicates that timer clock has been switched to divn clock */
#define TIMER4_TIM_PWM_BUSY                            (1U << 10) /* Busy with synchronizing PWM_FREQ_REG and PWM_DC_REG. Do not write a new value to */
#define TIMER4_TIM_TIMER_BUSY                          (1U << 9) /* Busy with synchronizing PRESCALER_REG, RELOAD_REG and SHOTWIDTH_REG. Do not writ */
#define TIMER4_TIM_IRQ_STATUS                          (1U << 8) /* IRQ status bit. When an irq has occured, this bit is 1. */
#define TIMER4_TIM_GPIO4_EVENT_PENDING                 (1U << 7) /* When 1, GPIO4 event is pending. */
#define TIMER4_TIM_GPIO3_EVENT_PENDING                 (1U << 6) /* When 1, GPIO3 event is pending. */
#define TIMER4_TIM_GPIO2_EVENT_PENDING                 (1U << 5) /* When 1, GPIO2 event is pending. */
#define TIMER4_TIM_GPIO1_EVENT_PENDING                 (1U << 4) /* When 1, GPIO1 event is pending. */
#define TIMER4_TIM_ONESHOT_PHASE_MASK                  (0x3 << 2) /* OneShot phase 0 = Wait for event 1 = Delay phase 2 = Start Shot 3 = Shot phase */
#define TIMER4_TIM_ONESHOT_PHASE_POS                   (2) /* OneShot phase 0 = Wait for event 1 = Delay phase 2 = Start Shot 3 = Shot phase */
#define TIMER4_TIM_IN2_STATE                           (1U << 1) /* Gives the logic level of the IN1 */
#define TIMER4_TIM_IN1_STATE                           (1U << 0) /* Gives the logic level of the IN2 */

/* TIMER4_TIMER_VAL Register */

#define TIMER4_TIM_TIMER_VALUE_MASK                    (0xFFFFFF << 0) /* Gives the current timer value */
#define TIMER4_TIM_TIMER_VALUE_POS                     (0) /* Gives the current timer value */

#endif /* __DA1470X_TIMER4_H */
