/*
 * Copyright (C) 2018 David Lechner <david@lechnology.com>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *	* Redistributions of source code must retain the above copyright
 *	  notice, this list of conditions and the following disclaimer.
 *
 *	* Redistributions in binary form must reproduce the above copyright
 *	  notice, this list of conditions and the following disclaimer in the
 *	  documentation and/or other materials provided with the
 *	  distribution.
 *
 *	* Neither the name of Texas Instruments Incorporated nor the names of
 *	  its contributors may be used to endorse or promote products derived
 *	  from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _AM335X_SYS_TIMER_H_
#define _AM335X_SYS_TIMER_H_

#include <stdint.h>

typedef struct {
	union {
		volatile uint32_t TIDR;
		volatile struct {
			unsigned Y_MINOR : 6;		// bit 0-5
			unsigned CUSTOM : 2; 		// bit 6-7
			unsigned X_MAJOR : 3;		// bit 8-10
			unsigned R_RTL : 5;		// bit 11-15
			unsigned FUNC : 12;		// bit 16-27
			unsigned RESERVED_28 : 2;	// bit 28-29
			unsigned SCHEME : 2;		// bit 30-31
		} TIDR_bit;
	}; // 0x0

	volatile uint32_t RESERVED_4[3]; // 0x4 - 0xc

	union {
		volatile uint32_t TIOCP_CFG;
		volatile struct {
			unsigned SOFTRESET : 1;		// bit 0
			unsigned EMUFREE : 1;		// bit 1
			unsigned IDLEMODE : 2;		// bit 2-3
			unsigned RESERVED_4 : 28;	// bit 4-31
		} TIOCP_CFG_bit;
	}; // 0x10

	volatile uint32_t RESERVED_14[3]; // 0x14 - 0x1c

	union {
		volatile uint32_t IRQ_EOI;
		volatile struct {
			unsigned DMAEvent_Ack : 1;	// bit 0
			unsigned RESERVED : 31;		// bit 1-31
		} IRQ_EOI_bit;
	}; // 0x20

	union {
		volatile uint32_t IRQSTATUS_RAW;
		volatile struct {
			unsigned MAT_IT_FLAG : 1;	// bit 0
			unsigned OVF_IT_FLAG : 1;	// bit 1
			unsigned TCAR_IT_FLAG : 1;	// bit 2
			unsigned RESERVED_3 : 29;	// bit 3-31
		} IRQSTATUS_RAW_bit;
	}; // 0x24

	union {
		volatile uint32_t IRQSTATUS;
		volatile struct {
			unsigned MAT_IT_FLAG : 1;	// bit 0
			unsigned OVF_IT_FLAG : 1;	// bit 1
			unsigned TCAR_IT_FLAG : 1;	// bit 2
			unsigned RESERVED_3 : 29;	// bit 3-31
		} IRQSTATUS_bit;
	}; // 0x28

	union {
		volatile uint32_t IRQENABLE_SET;
		volatile struct {
			unsigned MAT_EN_FLAG : 1;	// bit 0
			unsigned OVF_EN_FLAG : 1;	// bit 1
			unsigned TCAR_EN_FLAG : 1;	// bit 2
			unsigned RESERVED_3 : 29;	// bit 3-31
		} IRQENABLE_SET_bit;
	}; // 0x2C

	union {
		volatile uint32_t IRQENABLE_CLR;
		volatile struct {
			unsigned MAT_EN_FLAG : 1;	// bit 0
			unsigned OVF_EN_FLAG : 1;	// bit 1
			unsigned TCAR_EN_FLAG : 1;	// bit 2
			unsigned RESERVED_3 : 29;	// bit 3-31
		} IRQENABLE_CLR_bit;
	}; // 0x30

	union {
		volatile uint32_t IRQWAKEEN;
		volatile struct {
			unsigned MAT_WUP_ENA : 1;	// bit 0
			unsigned OVF_WUP_ENA : 1;	// bit 1
			unsigned TCAR_WUP_ENA : 1;	// bit 2
			unsigned RESERVED_3 : 29;	// bit 3-31
		} IRQWAKEEN_bit;
	}; // 0x34

	union {
		volatile uint32_t TCLR;
		volatile struct {
			unsigned ST : 1;		// bit 0
			unsigned AR : 1;		// bit 1
			unsigned PTV : 3;		// bit 2-4
			unsigned PRE : 1;		// bit 5
			unsigned CE : 1;		// bit 6
			unsigned SCPWM : 1;		// bit 7
			unsigned TCM : 2;		// bit 8-9
			unsigned TRG : 2;		// bit 10-11
			unsigned PT : 1;		// bit 12
			unsigned CAPT_MODE : 1;		// bit 13
			unsigned GPO_CFG : 1;		// bit 14
			unsigned RESERVED_15 : 17;	// bit 15-31
		} TCLR_bit;
	}; // 0x38

	union {
		volatile uint32_t TCRR;
		volatile struct {
			unsigned TIMER_COUNTER : 32;	// bit 0-31
		} TCRR_bit;
	}; // 0x3c

	union {
		volatile uint32_t TLDR;
		volatile struct {
			unsigned LOAD_VALUE : 32;	// bit 0-31
		} TLDR_bit;
	}; // 0x40

	union {
		volatile uint32_t TTGR;
		volatile struct {
			unsigned TTGR_VALUE : 32;	// bit 0-31
		} TTGR_bit;
	}; // 0x44

	union {
		volatile uint32_t TWPS;
		volatile struct {
			unsigned W_PEND_TCLR : 1;	// bit 0
			unsigned W_PEND_TCRR : 1;	// bit 1
			unsigned W_PEND_TLDR : 1;	// bit 2
			unsigned W_PEND_TTGR : 1;	// bit 3
			unsigned W_PEND_TMAR : 1;	// bit 4
			unsigned RESERVED_5 : 27;	// bit 5-31
		} TWPS_bit;
	}; // 0x48

	union {
		volatile uint32_t TMAR;
		volatile struct {
			unsigned COMPARE_VALUE : 32;	// bit 0-31
		} TMAR_bit;
	}; // 0x4c

	union {
		volatile uint32_t TCAR1;
		volatile struct {
			unsigned CAPTURED_VALUE : 32;	// bit 0-31
		} TCAR1_bit;
	}; // 0x50

	union {
		volatile uint32_t TSICR;
		volatile struct {
			unsigned RESERVED_0 : 1;	// bit 0
			unsigned SFT : 1;		// bit 1
			unsigned POSTED : 1;		// bit 2
			unsigned RESERVED_3 : 29;	// bit 3-31
		} TSICR_bit;
	}; // 0x54

	union {
		volatile uint32_t TCAR2;
		volatile struct {
			unsigned CAPTURED_VALUE : 32;	// bit 0-31
		} TCAR2_bit;
	}; // 0x58
} timer;

volatile __far timer DMTIMER2 __attribute__((cregister("DMTIMER2", near), peripheral));
#define DMTIMER3 (*(volatile timer *)(0x48042000))
#define DMTIMER4 (*(volatile timer *)(0x48044000))
#define DMTIMER5 (*(volatile timer *)(0x48046000))
#define DMTIMER6 (*(volatile timer *)(0x48048000))
#define DMTIMER7 (*(volatile timer *)(0x4804a000))

#endif /* _AM335X_SYS_TIMER_H_ */
