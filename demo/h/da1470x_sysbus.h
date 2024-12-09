/****************************************************************************
 * ./tmp/da1470x_sysbus.h
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

#ifndef __DA1470X_SYSBUS_H
#define __DA1470X_SYSBUS_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470x_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470X_SYSBUS_AHB_DMA_CCLM1_OFFSET        0x0054 /* LCD Master clock tokens */
#define DA1470X_SYSBUS_AHB_DMA_CCLM2_OFFSET        0x0058 /* GPU Master clock tokens */
#define DA1470X_SYSBUS_AHB_DMA_CCLM3_OFFSET        0x005C /* GEN-DMA Master clock tokens */
#define DA1470X_SYSBUS_AHB_DMA_CCLM4_OFFSET        0x0060 /* CRYPTO-DMA Master clock tokens */
#define DA1470X_SYSBUS_AHB_DMA_CCLM5_OFFSET        0x0064 /* MMC Master clock tokens */
#define DA1470X_SYSBUS_AHB_DMA_CCLM7_OFFSET        0x006C /* AHB-S Master clock tokens */
#define DA1470X_SYSBUS_AHB_DMA_DFLT_MASTER_OFFSET  0x0048 /* Default master ID number (AHB DMA layer only) */
#define DA1470X_SYSBUS_AHB_DMA_PL1_OFFSET          0x0000 /* AHB-DMA layer priority level LCD */
#define DA1470X_SYSBUS_AHB_DMA_PL2_OFFSET          0x0004 /* AHB-DMA layer priority level GPU */
#define DA1470X_SYSBUS_AHB_DMA_PL3_OFFSET          0x0008 /* AHB-DMA layer Priority level GEN-DMA */
#define DA1470X_SYSBUS_AHB_DMA_PL4_OFFSET          0x000C /* AHB-DMA layer Priority level CRYPTO-DMA */
#define DA1470X_SYSBUS_AHB_DMA_PL5_OFFSET          0x0010 /* AHB-DMA layer Priority level MMC */
#define DA1470X_SYSBUS_AHB_DMA_PL7_OFFSET          0x0018 /* AHB-DMA layer Priority level AHB-S to AHB_DMA arbiter registers */
#define DA1470X_SYSBUS_AHB_DMA_TCL_OFFSET          0x0050 /* Master clock refresh period (AHB DMA layer only) */
#define DA1470X_SYSBUS_AHB_DMA_VERSION_OFFSET      0x0090 /* Version ID (AHB DMA layer only) */
#define DA1470X_SYSBUS_AHB_DMA_WTEN_OFFSET         0x004C /* Weighted-Token Arbitration Scheme Enable (AHB DMA layer only) */

/* Register addresses *******************************************************/

#define DA1470X_SYSBUS_BASE                        0x30020000 /* SYSBUS registers */

#define DA1470X_SYSBUS_AHB_DMA_CCLM1               (DA1470X_SYSBUS_BASE + DA1470X_SYSBUS_AHB_DMA_CCLM1_OFFSET) /* LCD Master clock tokens */
#define DA1470X_SYSBUS_AHB_DMA_CCLM2               (DA1470X_SYSBUS_BASE + DA1470X_SYSBUS_AHB_DMA_CCLM2_OFFSET) /* GPU Master clock tokens */
#define DA1470X_SYSBUS_AHB_DMA_CCLM3               (DA1470X_SYSBUS_BASE + DA1470X_SYSBUS_AHB_DMA_CCLM3_OFFSET) /* GEN-DMA Master clock tokens */
#define DA1470X_SYSBUS_AHB_DMA_CCLM4               (DA1470X_SYSBUS_BASE + DA1470X_SYSBUS_AHB_DMA_CCLM4_OFFSET) /* CRYPTO-DMA Master clock tokens */
#define DA1470X_SYSBUS_AHB_DMA_CCLM5               (DA1470X_SYSBUS_BASE + DA1470X_SYSBUS_AHB_DMA_CCLM5_OFFSET) /* MMC Master clock tokens */
#define DA1470X_SYSBUS_AHB_DMA_CCLM7               (DA1470X_SYSBUS_BASE + DA1470X_SYSBUS_AHB_DMA_CCLM7_OFFSET) /* AHB-S Master clock tokens */
#define DA1470X_SYSBUS_AHB_DMA_DFLT_MASTER         (DA1470X_SYSBUS_BASE + DA1470X_SYSBUS_AHB_DMA_DFLT_MASTER_OFFSET) /* Default master ID number (AHB DMA layer only) */
#define DA1470X_SYSBUS_AHB_DMA_PL1                 (DA1470X_SYSBUS_BASE + DA1470X_SYSBUS_AHB_DMA_PL1_OFFSET) /* AHB-DMA layer priority level LCD */
#define DA1470X_SYSBUS_AHB_DMA_PL2                 (DA1470X_SYSBUS_BASE + DA1470X_SYSBUS_AHB_DMA_PL2_OFFSET) /* AHB-DMA layer priority level GPU */
#define DA1470X_SYSBUS_AHB_DMA_PL3                 (DA1470X_SYSBUS_BASE + DA1470X_SYSBUS_AHB_DMA_PL3_OFFSET) /* AHB-DMA layer Priority level GEN-DMA */
#define DA1470X_SYSBUS_AHB_DMA_PL4                 (DA1470X_SYSBUS_BASE + DA1470X_SYSBUS_AHB_DMA_PL4_OFFSET) /* AHB-DMA layer Priority level CRYPTO-DMA */
#define DA1470X_SYSBUS_AHB_DMA_PL5                 (DA1470X_SYSBUS_BASE + DA1470X_SYSBUS_AHB_DMA_PL5_OFFSET) /* AHB-DMA layer Priority level MMC */
#define DA1470X_SYSBUS_AHB_DMA_PL7                 (DA1470X_SYSBUS_BASE + DA1470X_SYSBUS_AHB_DMA_PL7_OFFSET) /* AHB-DMA layer Priority level AHB-S to AHB_DMA arbiter registers */
#define DA1470X_SYSBUS_AHB_DMA_TCL                 (DA1470X_SYSBUS_BASE + DA1470X_SYSBUS_AHB_DMA_TCL_OFFSET) /* Master clock refresh period (AHB DMA layer only) */
#define DA1470X_SYSBUS_AHB_DMA_VERSION             (DA1470X_SYSBUS_BASE + DA1470X_SYSBUS_AHB_DMA_VERSION_OFFSET) /* Version ID (AHB DMA layer only) */
#define DA1470X_SYSBUS_AHB_DMA_WTEN                (DA1470X_SYSBUS_BASE + DA1470X_SYSBUS_AHB_DMA_WTEN_OFFSET) /* Weighted-Token Arbitration Scheme Enable (AHB DMA layer only) */

/* Register bit definitions *************************************************/


/* AHB_DMA_CCLM1 Register */

#define SYSBUS_AHB_DMA_CCLM_MASK                   (0xFFFF << 0) /* Number of tokens (counted in AHB clock cycles) that a master can use on the bus  */
#define SYSBUS_AHB_DMA_CCLM_POS                    (0) /* Number of tokens (counted in AHB clock cycles) that a master can use on the bus  */

/* AHB_DMA_CCLM2 Register */

#define SYSBUS_AHB_DMA_CCLM_MASK                   (0xFFFF << 0) /* Refer to AHB_DMA_CCLM1_REG */
#define SYSBUS_AHB_DMA_CCLM_POS                    (0) /* Refer to AHB_DMA_CCLM1_REG */

/* AHB_DMA_CCLM3 Register */

#define SYSBUS_AHB_DMA_CCLM_MASK                   (0xFFFF << 0) /* AHB_DMA_CCLM1_REG */
#define SYSBUS_AHB_DMA_CCLM_POS                    (0) /* AHB_DMA_CCLM1_REG */

/* AHB_DMA_CCLM4 Register */

#define SYSBUS_AHB_DMA_CCLM_MASK                   (0xFFFF << 0) /* AHB_DMA_CCLM1_REG */
#define SYSBUS_AHB_DMA_CCLM_POS                    (0) /* AHB_DMA_CCLM1_REG */

/* AHB_DMA_CCLM5 Register */

#define SYSBUS_AHB_DMA_CCLM_MASK                   (0xFFFF << 0) /* AHB_DMA_CCLM1_REG */
#define SYSBUS_AHB_DMA_CCLM_POS                    (0) /* AHB_DMA_CCLM1_REG */

/* AHB_DMA_CCLM7 Register */

#define SYSBUS_AHB_DMA_CCLM_MASK                   (0xFFFF << 0) /* AHB_DMA_CCLM1_REG */
#define SYSBUS_AHB_DMA_CCLM_POS                    (0) /* AHB_DMA_CCLM1_REG */

/* AHB_DMA_DFLT_MASTER Register */

#define SYSBUS_AHB_DMA_DFLT_MASTER_MASK            (0xF << 0) /* Default master ID number register. The default master is the master that is gran */
#define SYSBUS_AHB_DMA_DFLT_MASTER_POS             (0) /* Default master ID number register. The default master is the master that is gran */

/* AHB_DMA_PL1 Register */

#define SYSBUS_AHB_DMA_PL1_MASK                    (0xF << 0) /* Arbitration priority for master LCD. 0 : disables the master 1 : lowest ... 15:  */
#define SYSBUS_AHB_DMA_PL1_POS                     (0) /* Arbitration priority for master LCD. 0 : disables the master 1 : lowest ... 15:  */

/* AHB_DMA_PL2 Register */

#define SYSBUS_AHB_DMA_PL2_MASK                    (0xF << 0) /* Arbitration priority for master GPU. 0 : disables the master 1 : lowest ... 15:  */
#define SYSBUS_AHB_DMA_PL2_POS                     (0) /* Arbitration priority for master GPU. 0 : disables the master 1 : lowest ... 15:  */

/* AHB_DMA_PL3 Register */

#define SYSBUS_AHB_DMA_PL3_MASK                    (0xF << 0) /* Arbitration priority for master GEN-DMA. 0 : disables the master 1 : lowest ...  */
#define SYSBUS_AHB_DMA_PL3_POS                     (0) /* Arbitration priority for master GEN-DMA. 0 : disables the master 1 : lowest ...  */

/* AHB_DMA_PL4 Register */

#define SYSBUS_AHB_DMA_PL4_MASK                    (0xF << 0) /* Arbitration priority for master CRYPTO-DMA. 0 : disables the master 1 : lowest . */
#define SYSBUS_AHB_DMA_PL4_POS                     (0) /* Arbitration priority for master CRYPTO-DMA. 0 : disables the master 1 : lowest . */

/* AHB_DMA_PL5 Register */

#define SYSBUS_AHB_DMA_PL5_MASK                    (0xF << 0) /* Arbitration priority for master MMC. 0 : disables the master 1 : lowest ...15: h */
#define SYSBUS_AHB_DMA_PL5_POS                     (0) /* Arbitration priority for master MMC. 0 : disables the master 1 : lowest ...15: h */

/* AHB_DMA_PL7 Register */

#define SYSBUS_AHB_DMA_PL7_MASK                    (0xF << 0) /* Arbitration priority for master AHB-S. 1: lowest, 15: highest. */
#define SYSBUS_AHB_DMA_PL7_POS                     (0) /* Arbitration priority for master AHB-S. 1: lowest, 15: highest. */

/* AHB_DMA_TCL Register */

#define SYSBUS_AHB_DMA_TCL_MASK                    (0xFFFF << 0) /* Master clock refresh period, counting clock cycles. An arbitration period is def */
#define SYSBUS_AHB_DMA_TCL_POS                     (0) /* Master clock refresh period, counting clock cycles. An arbitration period is def */

/* AHB_DMA_VERSION Register */

#define SYSBUS_AHB_DMA_VERSION_MASK                (0xFFFFFFFF << 0) /* No description available. */
#define SYSBUS_AHB_DMA_VERSION_POS                 (0) /* No description available. */

/* AHB_DMA_WTEN Register */

#define SYSBUS_AHB_DMA_WTEN                        (1U << 0) /* Weighted-token arbitration scheme enable. */

#endif /* __DA1470X_SYSBUS_H */
