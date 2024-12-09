/****************************************************************************
 * ./tmp/da1470x_sysbus_icm.h
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

#ifndef __DA1470X_SYSBUS_ICM_H
#define __DA1470X_SYSBUS_ICM_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470x_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470X_SYSBUS_ICM_AHBREG_ARB_OFFSET   0x0008 /* No description available. */
#define DA1470X_SYSBUS_ICM_APBF_ARB_OFFSET     0x000C /* No description available. */
#define DA1470X_SYSBUS_ICM_APB_ARB_OFFSET      0x0010 /* No description available. */
#define DA1470X_SYSBUS_ICM_QSPIFL2_ARB_OFFSET  0x0000 /* No description available. */
#define DA1470X_SYSBUS_ICM_QSPIRAM_ARB_OFFSET  0x0004 /* No description available. */

/* Register addresses *******************************************************/

#define DA1470X_SYSBUS_ICM_BASE                0x50040600 /* SYSBUS_ICM registers */

#define DA1470X_SYSBUS_ICM_AHBREG_ARB          (DA1470X_SYSBUS_ICM_BASE + DA1470X_SYSBUS_ICM_AHBREG_ARB_OFFSET) /* No description available. */
#define DA1470X_SYSBUS_ICM_APBF_ARB            (DA1470X_SYSBUS_ICM_BASE + DA1470X_SYSBUS_ICM_APBF_ARB_OFFSET) /* No description available. */
#define DA1470X_SYSBUS_ICM_APB_ARB             (DA1470X_SYSBUS_ICM_BASE + DA1470X_SYSBUS_ICM_APB_ARB_OFFSET) /* No description available. */
#define DA1470X_SYSBUS_ICM_QSPIFL2_ARB         (DA1470X_SYSBUS_ICM_BASE + DA1470X_SYSBUS_ICM_QSPIFL2_ARB_OFFSET) /* No description available. */
#define DA1470X_SYSBUS_ICM_QSPIRAM_ARB         (DA1470X_SYSBUS_ICM_BASE + DA1470X_SYSBUS_ICM_QSPIRAM_ARB_OFFSET) /* No description available. */

/* Register bit definitions *************************************************/


/* AHBREG_ARB Register */

#define SYSBUS_ICM_AHBREG_AHB_AHBS_PRIO        (1U << 1) /* Priority AHB AHBS layer system bus 0x0 : Highest priority 0x1 : Second prority */
#define SYSBUS_ICM_AHBREG_AHB_DMA_PRIO         (1U << 0) /* Priority AHB DMA layer system bus 0x0 : Highest priority 0x1 : Second prority */

/* APBF_ARB Register */

#define SYSBUS_ICM_APBF_AHB_DMA_PRIO_MASK      (0x3 << 4) /* Priority AHB DMA layer system bus 0x0 : Highest priority 0x1 : Second prority 0x */
#define SYSBUS_ICM_APBF_AHB_DMA_PRIO_POS       (4) /* Priority AHB DMA layer system bus 0x0 : Highest priority 0x1 : Second prority 0x */
#define SYSBUS_ICM_APBF_SNC_PRIO_MASK          (0x3 << 2) /* Priority SNC interface 0x0 : Highest priority 0x1 : Second prority 0x2 : Third p */
#define SYSBUS_ICM_APBF_SNC_PRIO_POS           (2) /* Priority SNC interface 0x0 : Highest priority 0x1 : Second prority 0x2 : Third p */
#define SYSBUS_ICM_APBF_AHB_AHBS_PRIO_MASK     (0x3 << 0) /* Priority AHB CPUS layer system bus 0x0 : Highest priority 0x1 : Second prority 0 */
#define SYSBUS_ICM_APBF_AHB_AHBS_PRIO_POS      (0) /* Priority AHB CPUS layer system bus 0x0 : Highest priority 0x1 : Second prority 0 */

/* APB_ARB Register */

#define SYSBUS_ICM_APB_AHB_CPUS_PRIO_MASK      (0x3 << 6) /* priority AHB_CPUS layer system bus 0x0 : Highest priority 0x1 : Second prority 0 */
#define SYSBUS_ICM_APB_AHB_CPUS_PRIO_POS       (6) /* priority AHB_CPUS layer system bus 0x0 : Highest priority 0x1 : Second prority 0 */
#define SYSBUS_ICM_APB_AHB_DMA_PRIO_MASK       (0x3 << 4) /* priority AHB_DMA layer system bus 0x0 : Highest priority 0x1 : Second prority 0x */
#define SYSBUS_ICM_APB_AHB_DMA_PRIO_POS        (4) /* priority AHB_DMA layer system bus 0x0 : Highest priority 0x1 : Second prority 0x */
#define SYSBUS_ICM_APB_SNC_PRIO_MASK           (0x3 << 2) /* priority SNC interface 0x0 : Highest priority 0x1 : Second prority 0x2 : Third p */
#define SYSBUS_ICM_APB_SNC_PRIO_POS            (2) /* priority SNC interface 0x0 : Highest priority 0x1 : Second prority 0x2 : Third p */
#define SYSBUS_ICM_APB_CMAC_PRIO_MASK          (0x3 << 0) /* priority CMAC interface 0x0 : Highest priority 0x1 : Second prority 0x2 : Third  */
#define SYSBUS_ICM_APB_CMAC_PRIO_POS           (0) /* priority CMAC interface 0x0 : Highest priority 0x1 : Second prority 0x2 : Third  */

/* QSPIFL2_ARB Register */

#define SYSBUS_ICM_QSPIFL2_AHB_CPUS_PRIO       (1U << 1) /* Priority AHB_CPUS layer system bus 0x0 : Highest priority 0x1 : Second prority */
#define SYSBUS_ICM_QSPIFL2_AHB_DMA_PRIO        (1U << 0) /* Priority AHB_DMA layer system bus 0x0 : Highest priority 0x1 : Second prority */

/* QSPIRAM_ARB Register */

#define SYSBUS_ICM_QSPIRAM_AHB_AHBS_PRIO       (1U << 1) /* Priority AHB AHBS layer system bus 0x0 : Highest priority 0x1 : Second prority */
#define SYSBUS_ICM_QSPIRAM_AHB_DMA_PRIO        (1U << 0) /* Priority AHB DMA layer system bus 0x0 : Highest priority 0x1 : Second prority */

#endif /* __DA1470X_SYSBUS_ICM_H */
