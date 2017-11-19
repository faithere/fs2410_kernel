/* linux/include/asm-arm/plat-s3c24xx/common-smdk.h
 *
 * Copyright (c) 2006 Simtec Electronics
 *	Ben Dooks <ben@simtec.co.uk>
 *
 * Common code for SMDK2410 and SMDK2440 boards
 *
 * http://www.fluff.org/ben/smdk2440/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#define pSMDK2410_ETH_IO  __phys_to_pfn(0x19000000)
#define vSMDK2410_ETH_IO  S3C2410_ADDR(0x04000000)
#define SMDK2410_ETH_IRQ   IRQ_EINT9
extern void smdk_machine_init(void);
