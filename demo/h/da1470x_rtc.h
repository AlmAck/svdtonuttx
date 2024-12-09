/****************************************************************************
 * ./tmp/da1470x_rtc.h
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

#ifndef __DA1470X_RTC_H
#define __DA1470X_RTC_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470x_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470X_RTC_RTC_ALARM_ENABLE_OFFSET       0x0018 /* RTC Alarm Enable Register */
#define DA1470X_RTC_RTC_CALENDAR_ALARM_OFFSET     0x0014 /* RTC Calendar Alram Register */
#define DA1470X_RTC_RTC_CALENDAR_OFFSET           0x000C /* RTC Calendar Register */
#define DA1470X_RTC_RTC_CONTROL_OFFSET            0x0000 /* RTC Control Register */
#define DA1470X_RTC_RTC_EVENT_CTRL_OFFSET         0x0080 /* RTC Event Control Register */
#define DA1470X_RTC_RTC_EVENT_FLAGS_OFFSET        0x001C /* RTC Event Flags Register */
#define DA1470X_RTC_RTC_HOUR_MODE_OFFSET          0x0004 /* RTC Hour Mode Register */
#define DA1470X_RTC_RTC_INTERRUPT_DISABLE_OFFSET  0x0024 /* RTC Interrupt Disable Register */
#define DA1470X_RTC_RTC_INTERRUPT_ENABLE_OFFSET   0x0020 /* RTC Interrupt Enable Register */
#define DA1470X_RTC_RTC_INTERRUPT_MASK_OFFSET     0x0028 /* RTC Interrupt Mask Register */
#define DA1470X_RTC_RTC_KEEP_RTC_OFFSET           0x0030 /* RTC Keep RTC Register */
#define DA1470X_RTC_RTC_PDC_EVENT_CLEAR_OFFSET    0x008C /* RTC PDC Event Clear Register */
#define DA1470X_RTC_RTC_PDC_EVENT_CNT_OFFSET      0x0094 /* RTC PDC Event Counter Register */
#define DA1470X_RTC_RTC_PDC_EVENT_PERIOD_OFFSET   0x0088 /* RTC PDC Event Period Register */
#define DA1470X_RTC_RTC_STATUS_OFFSET             0x002C /* RTC Status Register */
#define DA1470X_RTC_RTC_TIME_ALARM_OFFSET         0x0010 /* RTC Time Alarm Register */
#define DA1470X_RTC_RTC_TIME_OFFSET               0x0008 /* RTC Time Register */

/* Register addresses *******************************************************/

#define DA1470X_RTC_BASE                          0x50000800 /* RTC registers */

#define DA1470X_RTC_RTC_ALARM_ENABLE              (DA1470X_RTC_BASE + DA1470X_RTC_RTC_ALARM_ENABLE_OFFSET) /* RTC Alarm Enable Register */
#define DA1470X_RTC_RTC_CALENDAR_ALARM            (DA1470X_RTC_BASE + DA1470X_RTC_RTC_CALENDAR_ALARM_OFFSET) /* RTC Calendar Alram Register */
#define DA1470X_RTC_RTC_CALENDAR                  (DA1470X_RTC_BASE + DA1470X_RTC_RTC_CALENDAR_OFFSET) /* RTC Calendar Register */
#define DA1470X_RTC_RTC_CONTROL                   (DA1470X_RTC_BASE + DA1470X_RTC_RTC_CONTROL_OFFSET) /* RTC Control Register */
#define DA1470X_RTC_RTC_EVENT_CTRL                (DA1470X_RTC_BASE + DA1470X_RTC_RTC_EVENT_CTRL_OFFSET) /* RTC Event Control Register */
#define DA1470X_RTC_RTC_EVENT_FLAGS               (DA1470X_RTC_BASE + DA1470X_RTC_RTC_EVENT_FLAGS_OFFSET) /* RTC Event Flags Register */
#define DA1470X_RTC_RTC_HOUR_MODE                 (DA1470X_RTC_BASE + DA1470X_RTC_RTC_HOUR_MODE_OFFSET) /* RTC Hour Mode Register */
#define DA1470X_RTC_RTC_INTERRUPT_DISABLE         (DA1470X_RTC_BASE + DA1470X_RTC_RTC_INTERRUPT_DISABLE_OFFSET) /* RTC Interrupt Disable Register */
#define DA1470X_RTC_RTC_INTERRUPT_ENABLE          (DA1470X_RTC_BASE + DA1470X_RTC_RTC_INTERRUPT_ENABLE_OFFSET) /* RTC Interrupt Enable Register */
#define DA1470X_RTC_RTC_INTERRUPT_MASK            (DA1470X_RTC_BASE + DA1470X_RTC_RTC_INTERRUPT_MASK_OFFSET) /* RTC Interrupt Mask Register */
#define DA1470X_RTC_RTC_KEEP_RTC                  (DA1470X_RTC_BASE + DA1470X_RTC_RTC_KEEP_RTC_OFFSET) /* RTC Keep RTC Register */
#define DA1470X_RTC_RTC_PDC_EVENT_CLEAR           (DA1470X_RTC_BASE + DA1470X_RTC_RTC_PDC_EVENT_CLEAR_OFFSET) /* RTC PDC Event Clear Register */
#define DA1470X_RTC_RTC_PDC_EVENT_CNT             (DA1470X_RTC_BASE + DA1470X_RTC_RTC_PDC_EVENT_CNT_OFFSET) /* RTC PDC Event Counter Register */
#define DA1470X_RTC_RTC_PDC_EVENT_PERIOD          (DA1470X_RTC_BASE + DA1470X_RTC_RTC_PDC_EVENT_PERIOD_OFFSET) /* RTC PDC Event Period Register */
#define DA1470X_RTC_RTC_STATUS                    (DA1470X_RTC_BASE + DA1470X_RTC_RTC_STATUS_OFFSET) /* RTC Status Register */
#define DA1470X_RTC_RTC_TIME_ALARM                (DA1470X_RTC_BASE + DA1470X_RTC_RTC_TIME_ALARM_OFFSET) /* RTC Time Alarm Register */
#define DA1470X_RTC_RTC_TIME                      (DA1470X_RTC_BASE + DA1470X_RTC_RTC_TIME_OFFSET) /* RTC Time Register */

/* Register bit definitions *************************************************/


/* RTC_ALARM_ENABLE Register */

#define RTC_RTC_ALARM_MNTH_EN                     (1U << 5) /* Alarm on month enable. Enable to trigger alarm when data specified in Calendar A */
#define RTC_RTC_ALARM_DATE_EN                     (1U << 4) /* Alarm on date enable. Enable to trigger alarm when data specified in Calendar Al */
#define RTC_RTC_ALARM_HOUR_EN                     (1U << 3) /* Alarm on hour enable. Enable to trigger alarm when data specified in Time Alarm  */
#define RTC_RTC_ALARM_MIN_EN                      (1U << 2) /* Alarm on minute enable. Enable to trigger alarm when data specified in Time Alar */
#define RTC_RTC_ALARM_SEC_EN                      (1U << 1) /* Alarm on second enable. Enable to trigger alarm when data specified in Time Alar */
#define RTC_RTC_ALARM_HOS_EN                      (1U << 0) /* Alarm on hundredths of a second enable. Enable to trigger alarm when data specif */

/* RTC_CALENDAR_ALARM Register */

#define RTC_RTC_CAL_D_T_MASK                      (0x3 << 12) /* Date tens. Represented in BCD digit (0-3). */
#define RTC_RTC_CAL_D_T_POS                       (12) /* Date tens. Represented in BCD digit (0-3). */
#define RTC_RTC_CAL_D_U_MASK                      (0xF << 8) /* Date units. Represented in BCD digit (0-9). */
#define RTC_RTC_CAL_D_U_POS                       (8) /* Date units. Represented in BCD digit (0-9). */
#define RTC_RTC_CAL_M_T                           (1U << 7) /* Month tens. Represented in BCD digit (0-1). */
#define RTC_RTC_CAL_M_U_MASK                      (0xF << 3) /* Month units. Represented in BCD digit (0-9). */
#define RTC_RTC_CAL_M_U_POS                       (3) /* Month units. Represented in BCD digit (0-9). */

/* RTC_CALENDAR Register */

#define RTC_RTC_CAL_CH                            (1U << 31) /* The value in this register has altered since last read. Read and clear */
#define RTC_RTC_CAL_C_T_MASK                      (0x3 << 28) /* Century tens. Represented in BCD digit (1-2). */
#define RTC_RTC_CAL_C_T_POS                       (28) /* Century tens. Represented in BCD digit (1-2). */
#define RTC_RTC_CAL_C_U_MASK                      (0xF << 24) /* Century units. Represented in BCD digit (0-9). */
#define RTC_RTC_CAL_C_U_POS                       (24) /* Century units. Represented in BCD digit (0-9). */
#define RTC_RTC_CAL_Y_T_MASK                      (0xF << 20) /* Year tens. Represented in BCD digit (0-9). */
#define RTC_RTC_CAL_Y_T_POS                       (20) /* Year tens. Represented in BCD digit (0-9). */
#define RTC_RTC_CAL_Y_U_MASK                      (0xF << 16) /* Year units. Represented in BCD digit (0-9). */
#define RTC_RTC_CAL_Y_U_POS                       (16) /* Year units. Represented in BCD digit (0-9). */
#define RTC_RTC_CAL_D_T_MASK                      (0x3 << 12) /* Date tens. Represented in BCD digit (0-3). */
#define RTC_RTC_CAL_D_T_POS                       (12) /* Date tens. Represented in BCD digit (0-3). */
#define RTC_RTC_CAL_D_U_MASK                      (0xF << 8) /* Date units. Represented in BCD digit (0-9). */
#define RTC_RTC_CAL_D_U_POS                       (8) /* Date units. Represented in BCD digit (0-9). */
#define RTC_RTC_CAL_M_T                           (1U << 7) /* Month tens. Represented in BCD digit (0-1). */
#define RTC_RTC_CAL_M_U_MASK                      (0xF << 3) /* Month units. Represented in BCD digit (0-9). */
#define RTC_RTC_CAL_M_U_POS                       (3) /* Month units. Represented in BCD digit (0-9). */
#define RTC_RTC_DAY_MASK                          (0x7 << 0) /* Day of the week (arbitrary) units. Represented in BCD digit (0-7). */
#define RTC_RTC_DAY_POS                           (0) /* Day of the week (arbitrary) units. Represented in BCD digit (0-7). */

/* RTC_CONTROL Register */

#define RTC_RTC_CAL_DISABLE                       (1U << 1) /* When this field is set high the RTC stops incrementing the calendar value. */
#define RTC_RTC_TIME_DISABLE                      (1U << 0) /* When this field is set high the RTC stops incrementing the time value. */

/* RTC_EVENT_CTRL Register */

#define RTC_RTC_PDC_EVENT_EN                      (1U << 1) /* 0 = Event to PDC is disabled. No clear any pending event 1 = Even to PDC is enab */

/* RTC_EVENT_FLAGS Register */

#define RTC_RTC_EVENT_ALRM                        (1U << 6) /* Alarm event flag. Indicate that alarm event occurred since the last reset. */
#define RTC_RTC_EVENT_MNTH                        (1U << 5) /* Month rolls over event flag. Indicate that month rolls over event occurred since */
#define RTC_RTC_EVENT_DATE                        (1U << 4) /* Date rolls over event flag. Indicate that date rolls over event occurred since t */
#define RTC_RTC_EVENT_HOUR                        (1U << 3) /* Hour rolls over event flag. Indicate that hour rolls over event occurred since t */
#define RTC_RTC_EVENT_MIN                         (1U << 2) /* Minute rolls over event flag. Indicate that minute rolls over event occurred sin */
#define RTC_RTC_EVENT_SEC                         (1U << 1) /* Second rolls over event flag. Indicate that second rolls over event occurred sin */
#define RTC_RTC_EVENT_HOS                         (1U << 0) /* Hundredths of a second event flag. Indicate that hundredths of a second rolls ov */

/* RTC_HOUR_MODE Register */

#define RTC_RTC_HMS                               (1U << 0) /* When this field is set high the RTC operates in 12 hour clock mode; otherwise, t */

/* RTC_INTERRUPT_DISABLE Register */

#define RTC_RTC_ALRM_INT_DIS                      (1U << 6) /* Interrupt on alarm disable. Disable to issue the interrupt when alarm event occu */
#define RTC_RTC_MNTH_INT_DIS                      (1U << 5) /* Interrupt on month disable. Disable to issue the interrupt when month event occu */
#define RTC_RTC_DATE_INT_DIS                      (1U << 4) /* Interrupt on date disable. Disable to issue the interrupt when date event occurr */
#define RTC_RTC_HOUR_INT_DIS                      (1U << 3) /* IInterrupt on hour disable. Disable to issue the interrupt when hour event occur */
#define RTC_RTC_MIN_INT_DIS                       (1U << 2) /* Interrupt on minute disable. Disable to issue the interrupt when minute event oc */
#define RTC_RTC_SEC_INT_DIS                       (1U << 1) /* Interrupt on second disable. Disable to issue the interrupt when second event oc */
#define RTC_RTC_HOS_INT_DIS                       (1U << 0) /* Interrupt on hundredths of a second disable. Disable to issue the interrupt when */

/* RTC_INTERRUPT_ENABLE Register */

#define RTC_RTC_ALRM_INT_EN                       (1U << 6) /* Interrupt on alarm enable. Enable to issue the interrupt when alarm event occurr */
#define RTC_RTC_MNTH_INT_EN                       (1U << 5) /* Interrupt on month enable. Enable to issue the interrupt when month event occurr */
#define RTC_RTC_DATE_INT_EN                       (1U << 4) /* Interrupt on date enable. Enable to issue the interrupt when date event occurred */
#define RTC_RTC_HOUR_INT_EN                       (1U << 3) /* Interrupt on hour enable. Enable to issue the interrupt when hour event occurred */
#define RTC_RTC_MIN_INT_EN                        (1U << 2) /* Interrupt on minute enable. Enable to issue the interrupt when minute event occu */
#define RTC_RTC_SEC_INT_EN                        (1U << 1) /* Interrupt on second enable. Enable to issue the interrupt when second event occu */
#define RTC_RTC_HOS_INT_EN                        (1U << 0) /* Interrupt on hundredths of a second enable. Enable to issue the interrupt when h */

/* RTC_INTERRUPT_MASK Register */

#define RTC_RTC_ALRM_INT_MSK                      (1U << 6) /* Mask alarm interrupt. It can be cleared (set) by setting corresponding bit (ALRM */
#define RTC_RTC_MNTH_INT_MSK                      (1U << 5) /* IMask month interrupt. It can be cleared (set) by setting corresponding bit (MNT */
#define RTC_RTC_DATE_INT_MSK                      (1U << 4) /* Mask date interrupt. It can be cleared (set) by setting corresponding bit (DATE) */
#define RTC_RTC_HOUR_INT_MSK                      (1U << 3) /* IMask hour interrupt. It can be cleared (set) by setting corresponding bit (HOUR */
#define RTC_RTC_MIN_INT_MSK                       (1U << 2) /* IMask minute interrupt. It can be cleared (set) by setting corresponding bit (MI */
#define RTC_RTC_SEC_INT_MSK                       (1U << 1) /* IMask second interrupt. It can be cleared (set) by setting corresponding bit (SE */
#define RTC_RTC_HOS_INT_MSK                       (1U << 0) /* Mask hundredths of a second interrupt. It can be cleared (set) by setting corres */

/* RTC_KEEP_RTC Register */

#define RTC_RTC_KEEP                              (1U << 0) /* Keep RTC. When high, the time and calendar registers and any other registers whi */

/* RTC_PDC_EVENT_CLEAR Register */

#define RTC_PDC_EVENT_CLEAR                       (1U << 0) /* On read, PDC event is cleared */

/* RTC_PDC_EVENT_CNT Register */

#define RTC_RTC_PDC_EVENT_CNT_MASK                (0x1FFF << 0) /* It gives the current value of the PDC event counter (0 to RTC_PDC_EVENT_PERIOD) */
#define RTC_RTC_PDC_EVENT_CNT_POS                 (0) /* It gives the current value of the PDC event counter (0 to RTC_PDC_EVENT_PERIOD) */

/* RTC_PDC_EVENT_PERIOD Register */

#define RTC_RTC_PDC_EVENT_PERIOD_MASK             (0x1FFF << 0) /* RTC wil send an event to PDC (if RTC_PDC_EVENT_EN=1) every (RTC_PDC_EVENT_PERIOD */
#define RTC_RTC_PDC_EVENT_PERIOD_POS              (0) /* RTC wil send an event to PDC (if RTC_PDC_EVENT_EN=1) every (RTC_PDC_EVENT_PERIOD */

/* RTC_STATUS Register */

#define RTC_RTC_VALID_CAL_ALM                     (1U << 3) /* Valid Calendar Alarm. If cleared then indicates that invalid entry occurred when */
#define RTC_RTC_VALID_TIME_ALM                    (1U << 2) /* Valid Time Alarm. If cleared then indicates that invalid entry occurred when wri */
#define RTC_RTC_VALID_CAL                         (1U << 1) /* Valid Calendar. If cleared then indicates that invalid entry occurred when writi */
#define RTC_RTC_VALID_TIME                        (1U << 0) /* Valid Time. If cleared then indicates that invalid entry occurred when writing t */

/* RTC_TIME_ALARM Register */

#define RTC_RTC_TIME_PM                           (1U << 30) /* In 12 hour clock mode, indicates PM when set. */
#define RTC_RTC_TIME_HR_T_MASK                    (0x3 << 28) /* Hours tens. Represented in BCD digit (0-2). */
#define RTC_RTC_TIME_HR_T_POS                     (28) /* Hours tens. Represented in BCD digit (0-2). */
#define RTC_RTC_TIME_HR_U_MASK                    (0xF << 24) /* Hours units. Represented in BCD digit (0-9). */
#define RTC_RTC_TIME_HR_U_POS                     (24) /* Hours units. Represented in BCD digit (0-9). */
#define RTC_RTC_TIME_M_T_MASK                     (0x7 << 20) /* Minutes tens. Represented in BCD digit (0-5). */
#define RTC_RTC_TIME_M_T_POS                      (20) /* Minutes tens. Represented in BCD digit (0-5). */
#define RTC_RTC_TIME_M_U_MASK                     (0xF << 16) /* Minutes units. Represented in BCD digit (0-9). */
#define RTC_RTC_TIME_M_U_POS                      (16) /* Minutes units. Represented in BCD digit (0-9). */
#define RTC_RTC_TIME_S_T_MASK                     (0x7 << 12) /* Seconds tens. Represented in BCD digit (0-9). */
#define RTC_RTC_TIME_S_T_POS                      (12) /* Seconds tens. Represented in BCD digit (0-9). */
#define RTC_RTC_TIME_S_U_MASK                     (0xF << 8) /* Seconds units. Represented in BCD digit (0-9). */
#define RTC_RTC_TIME_S_U_POS                      (8) /* Seconds units. Represented in BCD digit (0-9). */
#define RTC_RTC_TIME_H_T_MASK                     (0xF << 4) /* Hundredths of a second tens. Represented in BCD digit (0-9). */
#define RTC_RTC_TIME_H_T_POS                      (4) /* Hundredths of a second tens. Represented in BCD digit (0-9). */
#define RTC_RTC_TIME_H_U_MASK                     (0xF << 0) /* Hundredths of a second units. Represented in BCD digit (0-9). */
#define RTC_RTC_TIME_H_U_POS                      (0) /* Hundredths of a second units. Represented in BCD digit (0-9). */

/* RTC_TIME Register */

#define RTC_RTC_TIME_CH                           (1U << 31) /* The value in this register has altered since last read. Read and clear. */
#define RTC_RTC_TIME_PM                           (1U << 30) /* In 12 hour clock mode, indicates PM when set. */
#define RTC_RTC_TIME_HR_T_MASK                    (0x3 << 28) /* Hours tens. Represented in BCD digit (0-2). */
#define RTC_RTC_TIME_HR_T_POS                     (28) /* Hours tens. Represented in BCD digit (0-2). */
#define RTC_RTC_TIME_HR_U_MASK                    (0xF << 24) /* Hours units. Represented in BCD digit (0-9). */
#define RTC_RTC_TIME_HR_U_POS                     (24) /* Hours units. Represented in BCD digit (0-9). */
#define RTC_RTC_TIME_M_T_MASK                     (0x7 << 20) /* Minutes tens. Represented in BCD digit (0-5). */
#define RTC_RTC_TIME_M_T_POS                      (20) /* Minutes tens. Represented in BCD digit (0-5). */
#define RTC_RTC_TIME_M_U_MASK                     (0xF << 16) /* Minutes units. Represented in BCD digit (0-9). */
#define RTC_RTC_TIME_M_U_POS                      (16) /* Minutes units. Represented in BCD digit (0-9). */
#define RTC_RTC_TIME_S_T_MASK                     (0x7 << 12) /* Seconds tens. Represented in BCD digit (0-9). */
#define RTC_RTC_TIME_S_T_POS                      (12) /* Seconds tens. Represented in BCD digit (0-9). */
#define RTC_RTC_TIME_S_U_MASK                     (0xF << 8) /* Seconds units. Represented in BCD digit (0-9). */
#define RTC_RTC_TIME_S_U_POS                      (8) /* Seconds units. Represented in BCD digit (0-9). */
#define RTC_RTC_TIME_H_T_MASK                     (0xF << 4) /* Hundredths of a second tens. Represented in BCD digit (0-9). */
#define RTC_RTC_TIME_H_T_POS                      (4) /* Hundredths of a second tens. Represented in BCD digit (0-9). */
#define RTC_RTC_TIME_H_U_MASK                     (0xF << 0) /* Hundredths of a second units. Represented in BCD digit (0-9). */
#define RTC_RTC_TIME_H_U_POS                      (0) /* Hundredths of a second units. Represented in BCD digit (0-9). */

#endif /* __DA1470X_RTC_H */
