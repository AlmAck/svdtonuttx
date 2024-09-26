/****************************************************************************
 * ./tmp/da1470_memorymap.h
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

#ifndef __DA1470_MEMORYMAP_H
#define __DA1470_MEMORYMAP_H

#define DA1470AES_HASH_BASE                   0x30040000 /* 0x30040000-0x30040103: 1KB AES_HASH registers */
#define DA1470ANAMISC_BIF_BASE                0x50050600 /* 0x50050600-0x5005061F: 1KB ANAMISC_BIF registers */
#define DA1470CACHE_BASE                      0x100C0000 /* 0x100C0000-0x100C0053: 1KB CACHE registers */
#define DA1470CHARGER_BASE                    0x51000600 /* 0x51000600-0x51000687: 1KB CHARGER registers */
#define DA1470CHG_DET_BASE                    0x50040300 /* 0x50040300-0x50040327: 1KB CHG_DET registers */
#define DA1470CRG_AUD_BASE                    0x50030000 /* 0x50030000-0x5003004F: 1KB CRG_AUD registers */
#define DA1470CRG_CTRL_BASE                   0x50060000 /* 0x50060000-0x50060007: 1KB CRG_CTRL registers */
#define DA1470CRG_GPU_BASE                    0x51001000 /* 0x51001000-0x51001007: 1KB CRG_GPU registers */
#define DA1470CRG_SNC_BASE                    0x50020900 /* 0x50020900-0x5002090F: 1KB CRG_SNC registers */
#define DA1470CRG_SYS_BASE                    0x50040400 /* 0x50040400-0x50040413: 1KB CRG_SYS registers */
#define DA1470CRG_TOP_BASE                    0x50000000 /* 0x50000000-0x500000FB: 1KB CRG_TOP registers */
#define DA1470CRG_VSYS_BASE                   0x50000B00 /* 0x50000B00-0x50000B0F: 1KB CRG_VSYS registers */
#define DA1470CRG_XTAL_BASE                   0x50050400 /* 0x50050400-0x5005049B: 1KB CRG_XTAL registers */
#define DA1470DCACHE_BASE                     0x30100000 /* 0x30100000-0x30100027: 1KB DCACHE registers */
#define DA1470DCDC_BASE                       0x50000300 /* 0x50000300-0x50000303: 1KB DCDC registers */
#define DA1470DCDC_BOOST_BASE                 0x50000500 /* 0x50000500-0x50000517: 1KB DCDC_BOOST registers */
#define DA1470DMA_BASE                        0x51000400 /* 0x51000400-0x51000517: 1KB DMA registers */
#define DA1470DSI2_BASE                       0x51001300 /* 0x51001300-0x510014AF: 1KB DSI2 registers */
#define DA1470DSIDPHY_REG_BASE                0x51001500 /* 0x51001500-0x51001537: 1KB DSIDPHY_REG registers */
#define DA1470EMMC_BASE                       0x30058000 /* 0x30058000-0x30058F6F: 3KB EMMC registers */
#define DA1470GPADC_BASE                      0x50020800 /* 0x50020800-0x50020823: 1KB GPADC registers */
#define DA1470GPIO_BASE                       0x50050100 /* 0x50050100-0x50050283: 1KB GPIO registers */
#define DA1470GPREG_BASE                      0x50040100 /* 0x50040100-0x5004011B: 1KB GPREG registers */
#define DA1470GPU_CORE_BASE                   0x51001200 /* 0x51001200-0x510012F7: 1KB GPU_CORE registers */
#define DA1470GPU_REG_BASE                    0x51001100 /* 0x51001100-0x51001103: 1KB GPU_REG registers */
#define DA1470I2C_BASE                        0x50020600 /* 0x50020600-0x500206A7: 1KB I2C registers */
#define DA1470I2C2_BASE                       0x50020700 /* 0x50020700-0x500207A7: 1KB I2C2 registers */
#define DA1470I2C3_BASE                       0x50020500 /* 0x50020500-0x500205A7: 1KB I2C3 registers */
#define DA1470I3C_BASE                        0x50020C00 /* 0x50020C00-0x50020E9F: 1KB I3C registers */
#define DA1470LCDC_BASE                       0x30030000 /* 0x30030000-0x300307FF: 2KB LCDC registers */
#define DA1470MEMCTRL_BASE                    0x50050000 /* 0x50050000-0x50050087: 1KB MEMCTRL registers */
#define DA1470OQSPIF_BASE                     0x36000000 /* 0x36000000-0x36000133: 1KB OQSPIF registers */

#endif // __DA1470_MEMORYMAP_H
