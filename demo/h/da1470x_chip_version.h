/****************************************************************************
 * ./tmp/da1470x_chip_version.h
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

#ifndef __DA1470X_CHIP_VERSION_H
#define __DA1470X_CHIP_VERSION_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470x_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470X_CHIP_VERSION_CHIP_ID1_OFFSET       0x0000 /* Chip identification register 1. */
#define DA1470X_CHIP_VERSION_CHIP_ID2_OFFSET       0x0004 /* Chip identification register 2. */
#define DA1470X_CHIP_VERSION_CHIP_ID3_OFFSET       0x0008 /* Chip identification register 3. */
#define DA1470X_CHIP_VERSION_CHIP_ID4_OFFSET       0x000C /* Chip identification register 4. */
#define DA1470X_CHIP_VERSION_CHIP_REVISION_OFFSET  0x0014 /* Chip revision register. */
#define DA1470X_CHIP_VERSION_CHIP_SWC_OFFSET       0x0010 /* Software compatibility register. */
#define DA1470X_CHIP_VERSION_CHIP_TEST1_OFFSET     0x00F8 /* Chip test register 1. */
#define DA1470X_CHIP_VERSION_CHIP_TEST2_OFFSET     0x00FC /* Chip test register 2. */

/* Register addresses *******************************************************/

#define DA1470X_CHIP_VERSION_BASE                  0x50040000 /* CHIP_VERSION registers */

#define DA1470X_CHIP_VERSION_CHIP_ID1              (DA1470X_CHIP_VERSION_BASE + DA1470X_CHIP_VERSION_CHIP_ID1_OFFSET) /* Chip identification register 1. */
#define DA1470X_CHIP_VERSION_CHIP_ID2              (DA1470X_CHIP_VERSION_BASE + DA1470X_CHIP_VERSION_CHIP_ID2_OFFSET) /* Chip identification register 2. */
#define DA1470X_CHIP_VERSION_CHIP_ID3              (DA1470X_CHIP_VERSION_BASE + DA1470X_CHIP_VERSION_CHIP_ID3_OFFSET) /* Chip identification register 3. */
#define DA1470X_CHIP_VERSION_CHIP_ID4              (DA1470X_CHIP_VERSION_BASE + DA1470X_CHIP_VERSION_CHIP_ID4_OFFSET) /* Chip identification register 4. */
#define DA1470X_CHIP_VERSION_CHIP_REVISION         (DA1470X_CHIP_VERSION_BASE + DA1470X_CHIP_VERSION_CHIP_REVISION_OFFSET) /* Chip revision register. */
#define DA1470X_CHIP_VERSION_CHIP_SWC              (DA1470X_CHIP_VERSION_BASE + DA1470X_CHIP_VERSION_CHIP_SWC_OFFSET) /* Software compatibility register. */
#define DA1470X_CHIP_VERSION_CHIP_TEST1            (DA1470X_CHIP_VERSION_BASE + DA1470X_CHIP_VERSION_CHIP_TEST1_OFFSET) /* Chip test register 1. */
#define DA1470X_CHIP_VERSION_CHIP_TEST2            (DA1470X_CHIP_VERSION_BASE + DA1470X_CHIP_VERSION_CHIP_TEST2_OFFSET) /* Chip test register 2. */

/* Register bit definitions *************************************************/


/* CHIP_ID1 Register */

#define CHIP_VERSION_CHIP_ID1_MASK                 (0xFF << 0) /* First character of device type in ASCII. */
#define CHIP_VERSION_CHIP_ID1_POS                  (0) /* First character of device type in ASCII. */

/* CHIP_ID2 Register */

#define CHIP_VERSION_CHIP_ID2_MASK                 (0xFF << 0) /* Second character of device type in ASCII. */
#define CHIP_VERSION_CHIP_ID2_POS                  (0) /* Second character of device type in ASCII. */

/* CHIP_ID3 Register */

#define CHIP_VERSION_CHIP_ID3_MASK                 (0xFF << 0) /* Third character of device type in ASCII. */
#define CHIP_VERSION_CHIP_ID3_POS                  (0) /* Third character of device type in ASCII. */

/* CHIP_ID4 Register */

#define CHIP_VERSION_CHIP_ID4_MASK                 (0xFF << 0) /* Fourth character of device type in ASCII. */
#define CHIP_VERSION_CHIP_ID4_POS                  (0) /* Fourth character of device type in ASCII. */

/* CHIP_REVISION Register */

#define CHIP_VERSION_CHIP_REVISION_MASK            (0xFF << 0) /* Chip version, corresponds with type number in ASCII. 0x41 = A, 0x42 = B */
#define CHIP_VERSION_CHIP_REVISION_POS             (0) /* Chip version, corresponds with type number in ASCII. 0x41 = A, 0x42 = B */

/* CHIP_SWC Register */

#define CHIP_VERSION_CHIP_SWC_MASK                 (0xF << 0) /* SoftWare Compatibility code. Integer (default = 0) which is incremented if a sil */
#define CHIP_VERSION_CHIP_SWC_POS                  (0) /* SoftWare Compatibility code. Integer (default = 0) which is incremented if a sil */

/* CHIP_TEST1 Register */

#define CHIP_VERSION_CHIP_LAYOUT_REVISION_MASK     (0xFF << 0) /* Chip layout revision, corresponds with type number in ASCII. 0x41 = A, 0x42 = B */
#define CHIP_VERSION_CHIP_LAYOUT_REVISION_POS      (0) /* Chip layout revision, corresponds with type number in ASCII. 0x41 = A, 0x42 = B */

/* CHIP_TEST2 Register */

#define CHIP_VERSION_CHIP_METAL_OPTION_MASK        (0xF << 0) /* Chip metal option value. */
#define CHIP_VERSION_CHIP_METAL_OPTION_POS         (0) /* Chip metal option value. */

#endif /* __DA1470X_CHIP_VERSION_H */
