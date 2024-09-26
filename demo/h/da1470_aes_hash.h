/****************************************************************************
 * ./tmp/da1470_aes_hash.h
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

#ifndef __DA1470_AES_HASH_H
#define __DA1470_AES_HASH_H

/* Register offsets *********************************************************/

#define DA1470_AES_HASH_CRYPTO_CLRIRQ_OFFSET               0x0018 /* Crypto Clear interrupt request */
#define DA1470_AES_HASH_CRYPTO_CTRL_OFFSET                 0x0000 /* Crypto Control register */
#define DA1470_AES_HASH_CRYPTO_DEST_ADDR_OFFSET            0x0010 /* Crypto DMA destination memory */
#define DA1470_AES_HASH_CRYPTO_FETCH_ADDR_OFFSET           0x0008 /* Crypto DMA fetch register */
#define DA1470_AES_HASH_CRYPTO_KEYS_START_OFFSET           0x0100 /* Crypto First position of the AES keys storage memory */
#define DA1470_AES_HASH_CRYPTO_LEN_OFFSET                  0x000C /* Crypto Length of the input block in bytes */
#define DA1470_AES_HASH_CRYPTO_MREG0_OFFSET                0x001C /* Crypto Mode depended register 0 */
#define DA1470_AES_HASH_CRYPTO_MREG1_OFFSET                0x0020 /* Crypto Mode depended register 1 */
#define DA1470_AES_HASH_CRYPTO_MREG2_OFFSET                0x0024 /* Crypto Mode depended register 2 */
#define DA1470_AES_HASH_CRYPTO_MREG3_OFFSET                0x0028 /* Crypto Mode depended register 3 */
#define DA1470_AES_HASH_CRYPTO_START_OFFSET                0x0004 /* Crypto Start calculation */
#define DA1470_AES_HASH_CRYPTO_STATUS_OFFSET               0x0014 /* Crypto Status register */

/* Register addresses *******************************************************/

#define DA1470_AES_HASH_BASE                               0x30040000 /* AES_HASH registers */

#define DA1470_AES_HASH_CRYPTO_CLRIRQ                      (DA1470_AES_HASH_BASE + DA1470_AES_HASH_CRYPTO_CLRIRQ_OFFSET) /* Crypto Clear interrupt request */
#define DA1470_AES_HASH_CRYPTO_CTRL                        (DA1470_AES_HASH_BASE + DA1470_AES_HASH_CRYPTO_CTRL_OFFSET) /* Crypto Control register */
#define DA1470_AES_HASH_CRYPTO_DEST_ADDR                   (DA1470_AES_HASH_BASE + DA1470_AES_HASH_CRYPTO_DEST_ADDR_OFFSET) /* Crypto DMA destination memory */
#define DA1470_AES_HASH_CRYPTO_FETCH_ADDR                  (DA1470_AES_HASH_BASE + DA1470_AES_HASH_CRYPTO_FETCH_ADDR_OFFSET) /* Crypto DMA fetch register */
#define DA1470_AES_HASH_CRYPTO_KEYS_START                  (DA1470_AES_HASH_BASE + DA1470_AES_HASH_CRYPTO_KEYS_START_OFFSET) /* Crypto First position of the AES keys storage memory */
#define DA1470_AES_HASH_CRYPTO_LEN                         (DA1470_AES_HASH_BASE + DA1470_AES_HASH_CRYPTO_LEN_OFFSET) /* Crypto Length of the input block in bytes */
#define DA1470_AES_HASH_CRYPTO_MREG0                       (DA1470_AES_HASH_BASE + DA1470_AES_HASH_CRYPTO_MREG0_OFFSET) /* Crypto Mode depended register 0 */
#define DA1470_AES_HASH_CRYPTO_MREG1                       (DA1470_AES_HASH_BASE + DA1470_AES_HASH_CRYPTO_MREG1_OFFSET) /* Crypto Mode depended register 1 */
#define DA1470_AES_HASH_CRYPTO_MREG2                       (DA1470_AES_HASH_BASE + DA1470_AES_HASH_CRYPTO_MREG2_OFFSET) /* Crypto Mode depended register 2 */
#define DA1470_AES_HASH_CRYPTO_MREG3                       (DA1470_AES_HASH_BASE + DA1470_AES_HASH_CRYPTO_MREG3_OFFSET) /* Crypto Mode depended register 3 */
#define DA1470_AES_HASH_CRYPTO_START                       (DA1470_AES_HASH_BASE + DA1470_AES_HASH_CRYPTO_START_OFFSET) /* Crypto Start calculation */
#define DA1470_AES_HASH_CRYPTO_STATUS                      (DA1470_AES_HASH_BASE + DA1470_AES_HASH_CRYPTO_STATUS_OFFSET) /* Crypto Status register */

/* Register bit definitions *************************************************/

#define AES_HASH_CRYPTO_CLRIRQ_CRYPTO_CLRIRQ               (1U << 0) /* Write 1 to clear a pending interrupt request. */
#define AES_HASH_CRYPTO_CTRL_CRYPTO_AES_KEXP               (1U << 17) /* It forces (active high) the execution of the key expansion process with the star */
#define AES_HASH_CRYPTO_CTRL_CRYPTO_MORE_IN                (1U << 16) /* 0 : Define that this is the last input block. When the current input is consumed */
#define AES_HASH_CRYPTO_CTRL_CRYPTO_HASH_OUT_LEN_MASK      (0x3F << 10) /* The number of bytes minus one of the hash result which will be saved at the memo */
#define AES_HASH_CRYPTO_CTRL_CRYPTO_HASH_OUT_LEN_POS       (10) /* The number of bytes minus one of the hash result which will be saved at the memo */
#define AES_HASH_CRYPTO_CTRL_CRYPTO_HASH_SEL               (1U << 9) /* Selects the type of the algorithm 0 : The encryption algorithm (AES) 1 : A hash  */
#define AES_HASH_CRYPTO_CTRL_CRYPTO_IRQ_EN                 (1U << 8) /* Interrupt Request Enable 0 : The interrupt generation ability is disabled. 1 : T */
#define AES_HASH_CRYPTO_CTRL_CRYPTO_ENCDEC                 (1U << 7) /* Encryption/Decryption 0 : Decryption 1 : Encryption */
#define AES_HASH_CRYPTO_CTRL_CRYPTO_AES_KEY_SZ_MASK        (0x3 << 5) /* The size of AES Key 0x0 : 128 bits AES Key 0x1 : 192 bits AES Key 0x2 : 256 bits */
#define AES_HASH_CRYPTO_CTRL_CRYPTO_AES_KEY_SZ_POS         (5) /* The size of AES Key 0x0 : 128 bits AES Key 0x1 : 192 bits AES Key 0x2 : 256 bits */
#define AES_HASH_CRYPTO_CTRL_CRYPTO_OUT_MD                 (1U << 4) /* Output Mode. This field makes sense only when the AES algorithm is selected (CRY */
#define AES_HASH_CRYPTO_CTRL_CRYPTO_ALG_MD_MASK            (0x3 << 2) /* It defines the mode of operation of the AES algorithm when the controller is con */
#define AES_HASH_CRYPTO_CTRL_CRYPTO_ALG_MD_POS             (2) /* It defines the mode of operation of the AES algorithm when the controller is con */
#define AES_HASH_CRYPTO_CTRL_CRYPTO_ALG_MASK               (0x3 << 0) /* Algorithm selection. When CRYPTO_HASH_SEL = 0 the only available choice is the A */
#define AES_HASH_CRYPTO_CTRL_CRYPTO_ALG_POS                (0) /* Algorithm selection. When CRYPTO_HASH_SEL = 0 the only available choice is the A */
#define AES_HASH_CRYPTO_DEST_ADDR_CRYPTO_DEST_ADDR_MASK    (0xFFFFFFFF << 0) /* Destination address at where the result of the processing is stored. The value o */
#define AES_HASH_CRYPTO_DEST_ADDR_CRYPTO_DEST_ADDR_POS     (0) /* Destination address at where the result of the processing is stored. The value o */
#define AES_HASH_CRYPTO_FETCH_ADDR_CRYPTO_FETCH_ADDR_MASK  (0xFFFFFFFF << 0) /* The memory address from where will be retrieved the data that will be processed. */
#define AES_HASH_CRYPTO_FETCH_ADDR_CRYPTO_FETCH_ADDR_POS   (0) /* The memory address from where will be retrieved the data that will be processed. */
#define AES_HASH_CRYPTO_KEYS_START_CRYPTO_KEY_X_MASK       (0xFFFFFFFF << 0) /* CRYPTO_KEY_(0-63) This is the AES keys storage memory. This memory is accessible */
#define AES_HASH_CRYPTO_KEYS_START_CRYPTO_KEY_X_POS        (0) /* CRYPTO_KEY_(0-63) This is the AES keys storage memory. This memory is accessible */
#define AES_HASH_CRYPTO_LEN_CRYPTO_LEN_MASK                (0xFFFFFF << 0) /* It contains the number of bytes of input data. If this number is not a multiple  */
#define AES_HASH_CRYPTO_LEN_CRYPTO_LEN_POS                 (0) /* It contains the number of bytes of input data. If this number is not a multiple  */
#define AES_HASH_CRYPTO_MREG0_CRYPTO_MREG0_MASK            (0xFFFFFFFF << 0) /* It contains information that are depended by the mode of operation, when is used */
#define AES_HASH_CRYPTO_MREG0_CRYPTO_MREG0_POS             (0) /* It contains information that are depended by the mode of operation, when is used */
#define AES_HASH_CRYPTO_MREG1_CRYPTO_MREG1_MASK            (0xFFFFFFFF << 0) /* It contains information that are depended by the mode of operation, when is used */
#define AES_HASH_CRYPTO_MREG1_CRYPTO_MREG1_POS             (0) /* It contains information that are depended by the mode of operation, when is used */
#define AES_HASH_CRYPTO_MREG2_CRYPTO_MREG2_MASK            (0xFFFFFFFF << 0) /* It contains information that are depended by the mode of operation, when is used */
#define AES_HASH_CRYPTO_MREG2_CRYPTO_MREG2_POS             (0) /* It contains information that are depended by the mode of operation, when is used */
#define AES_HASH_CRYPTO_MREG3_CRYPTO_MREG3_MASK            (0xFFFFFFFF << 0) /* It contains information that are depended by the mode of operation, when is used */
#define AES_HASH_CRYPTO_MREG3_CRYPTO_MREG3_POS             (0) /* It contains information that are depended by the mode of operation, when is used */
#define AES_HASH_CRYPTO_START_CRYPTO_START                 (1U << 0) /* Write 1 to initiate the processing of the input data. This register is auto-clea */
#define AES_HASH_CRYPTO_STATUS_CRYPTO_IRQ_ST               (1U << 2) /* The status of the interrupt request line of the CRYPTO block. 0 : There is no ac */
#define AES_HASH_CRYPTO_STATUS_CRYPTO_WAIT_FOR_IN          (1U << 1) /* Indicates the situation where the engine waits for more input data. This is appl */
#define AES_HASH_CRYPTO_STATUS_CRYPTO_INACTIVE             (1U << 0) /* 0 : The CRYPTO is active. The processing is in progress. 1 : The CRYPTO is inact */

#endif /* __DA1470_AES_HASH_H */
