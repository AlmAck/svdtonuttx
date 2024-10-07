/****************************************************************************
 * ./tmp/da1470_gpreg.h
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

#ifndef __DA1470_GPREG_H
#define __DA1470_GPREG_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470_GPREG_DEBUG_OFFSET             0x0008 /* Various debug information register. */
#define DA1470_GPREG_GP_STATUS_OFFSET         0x000C /* General purpose system status register. */
#define DA1470_GPREG_RESET_FREEZE_OFFSET      0x0004 /* Controls unfreezing of various timers/counters (incl. DMA and USB). */
#define DA1470_GPREG_SET_FREEZE_OFFSET        0x0000 /* Controls freezing of various timers/counters (incl. DMA and USB). */
#define DA1470_GPREG_USBPAD_OFFSET            0x0018 /* USB pads control register */

/* Register addresses *******************************************************/

#define DA1470_GPREG_BASE                     0x50040100 /* GPREG registers */

#define DA1470_GPREG_DEBUG                    (DA1470_GPREG_BASE + DA1470_GPREG_DEBUG_OFFSET) /* Various debug information register. */
#define DA1470_GPREG_GP_STATUS                (DA1470_GPREG_BASE + DA1470_GPREG_GP_STATUS_OFFSET) /* General purpose system status register. */
#define DA1470_GPREG_RESET_FREEZE             (DA1470_GPREG_BASE + DA1470_GPREG_RESET_FREEZE_OFFSET) /* Controls unfreezing of various timers/counters (incl. DMA and USB). */
#define DA1470_GPREG_SET_FREEZE               (DA1470_GPREG_BASE + DA1470_GPREG_SET_FREEZE_OFFSET) /* Controls freezing of various timers/counters (incl. DMA and USB). */
#define DA1470_GPREG_USBPAD                   (DA1470_GPREG_BASE + DA1470_GPREG_USBPAD_OFFSET) /* USB pads control register */

/* Register bit definitions *************************************************/


/* DEBUG Register */

#define ETM_TRACE_MAP_ON_PINS_EN              (1U << 12) /* 1: ETM/TPIU Trace signals mapped on GPIO pins is enabled. */
#define SNC_CPU_IS_HALTED                     (1U << 11) /* 1: SNC CPU is halted. */
#define HALT_SNC_CPU_EN                       (1U << 10) /* 1: Enable halting the SNC CPU when the SYS CPU (ARM CM33) or CMAC CPU is halted. */
#define SNC_CPU_FREEZE_EN                     (1U << 9) /* 1: Enable Freezing on-chip peripherals (see Note 2) by the SNC CPU. Note 1: This */
#define CROSS_CPU_HALT_SENSITIVITY            (1U << 8) /* Select the cross CPU halt sensitivity. 0: Level triggered, 1: Pulse triggered. N */
#define SYS_CPUWAIT_ON_JTAG                   (1U << 7) /* 1: Stall the processor core out of reset (only after a wake-up from JTAG). Debug */
#define SYS_CPUWAIT                           (1U << 6) /* 1: Stall the processor core out of reset (always after a wake-up). Debugger acce */
#define CMAC_CPU_IS_HALTED                    (1U << 5) /* 1: CMAC CPU is halted. */
#define SYS_CPU_IS_HALTED                     (1U << 4) /* 1: SYS CPU (ARM CM33) is halted. */
#define HALT_SYS_CPU_EN                       (1U << 3) /* 1: Enable halting the SYS CPU (ARM CM33) when the CMAC CPU or SNC CPU is halted. */
#define HALT_CMAC_CPU_EN                      (1U << 2) /* 1: Enable halting the CMAC CPU when the SYS CPU (ARM CM33) or SNC CPU is halted. */
#define CMAC_CPU_FREEZE_EN                    (1U << 1) /* 1: Enable Freezing on-chip peripherals (see Note 2) by the CMAC CPU. Note 1: Thi */
#define SYS_CPU_FREEZE_EN                     (1U << 0) /* 1: Enable Freezing on-chip peripherals (see Note 2) by the SYS CPU (ARM CM33). D */

/* GP_STATUS Register */

#define CAL_PHASE                             (1U << 0) /* If '1', it designates that the chip is in Calibration Phase i.e. the OTP has bee */

/* RESET_FREEZE Register */

#define FRZ_SWTIM6                            (1U << 13) /* If '1', the SW Timer6 continues, '0' is discarded. */
#define FRZ_SWTIM5                            (1U << 12) /* If '1', the SW Timer5 continues, '0' is discarded. */
#define FRZ_SNC_WDOG                          (1U << 11) /* If '1', the SNC SW Watchdog Timer continues, '0' is discarded. */
#define FRZ_CMAC_WDOG                         (1U << 10) /* If '1', the CMAC SW Watchdog Timer continues, '0' is discarded. */
#define FRZ_SWTIM4                            (1U << 9) /* If '1', the SW Timer4 continues, '0' is discarded. */
#define FRZ_SWTIM3                            (1U << 8) /* If '1', the SW Timer3 continues, '0' is discarded. */
#define FRZ_PWMLED                            (1U << 7) /* If '1', the PWM LED continues, '0' is discarded. */
#define FRZ_SWTIM2                            (1U << 6) /* If '1', the SW Timer2 continues, '0' is discarded. */
#define FRZ_DMA                               (1U << 5) /* If '1', the DMA continues, '0' is discarded. */
#define FRZ_USB                               (1U << 4) /* If '1', the USB continues, '0' is discarded. */
#define FRZ_SYS_WDOG                          (1U << 3) /* If '1', the SYS SW Watchdog Timer continues, '0' is discarded. */
#define FRZ_SWTIM                             (1U << 1) /* If '1', the SW Timer continues, '0' is discarded. */
#define FRZ_WKUPTIM                           (1U << 0) /* If '1', the Wake Up Timer continues, '0' is discarded. */

/* SET_FREEZE Register */

#define FRZ_SWTIM6                            (1U << 13) /* If '1', the SW Timer6 is frozen, '0' is discarded. */
#define FRZ_SWTIM5                            (1U << 12) /* If '1', the SW Timer5 is frozen, '0' is discarded. */
#define FRZ_SNC_WDOG                          (1U << 11) /* If '1', the SNC SW Watchdog Timer is frozen, '0' is discarded. */
#define FRZ_CMAC_WDOG                         (1U << 10) /* If '1', the CMAC SW Watchdog Timer is frozen, '0' is discarded. */
#define FRZ_SWTIM4                            (1U << 9) /* If '1', the SW Timer4 is frozen, '0' is discarded. */
#define FRZ_SWTIM3                            (1U << 8) /* If '1', the SW Timer3 is frozen, '0' is discarded. */
#define FRZ_PWMLED                            (1U << 7) /* If '1', the PWM LED is frozen, '0' is discarded. */
#define FRZ_SWTIM2                            (1U << 6) /* If '1', the SW Timer2 is frozen, '0' is discarded. */
#define FRZ_DMA                               (1U << 5) /* If '1', the DMA is frozen, '0' is discarded. */
#define FRZ_USB                               (1U << 4) /* If '1', the USB is frozen, '0' is discarded. */
#define FRZ_SYS_WDOG                          (1U << 3) /* If '1', the SYS SW Watchdog Timer is frozen, '0' is discarded. WATCHDOG_CTRL_REG */
#define FRZ_SWTIM                             (1U << 1) /* If '1', the SW Timer is frozen, '0' is discarded. */
#define FRZ_WKUPTIM                           (1U << 0) /* If '1', the Wake Up Timer is frozen, '0' is discarded. */

/* USBPAD Register */

#define USBPHY_FORCE_SW2_ON                   (1U << 2) /* 0: Pull up resistor SW2 is controlled by the USB controller. It is off when the  */
#define USBPHY_FORCE_SW1_OFF                  (1U << 1) /* 0: Pull up resistor SW1 is controlled by the USB controller. It is off when the  */
#define USBPAD_EN                             (1U << 0) /* 0: The power for the USB PHY and USB pads is switched on when the USB is enabled */

#endif /* __DA1470_GPREG_H */
