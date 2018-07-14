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

#ifndef _AM335X_SYS_TIMER_1MS_H_
#define _AM335X_SYS_TIMER_1MS_H_

#include <stdint.h>

typedef struct {
	union {
		volatile uint32_t TIDR;
		volatile struct {
			unsigned TID_REV : 8;		// bit 0-7
			unsigned RESERVED_88 : 24;	// bit 8-31
		} TIDR_bit;
	}; // 0x0

	volatile uint32_t RESERVED_4[3]; // 0x4 - 0xc

	union {
		volatile uint32_t TIOCP_CFG;
		volatile struct {
			unsigned AutoIdle : 1;		// bit 0
			unsigned SoftReset : 1;		// bit 1
			unsigned EnaWakeup : 1;		// bit 2
			unsigned IdleMode : 2;		// bit 3-4
			unsigned EmuFree : 1;		// bit 5
			unsigned Reserved_6 : 2;	// bit 6-7
			unsigned ClockActivity : 2;	// bit 8-9
			unsigned Reserved_10 : 22;	// bit 10-31
		} TIOCP_CFG_bit;
	}; // 0x10

	union {
		volatile uint32_t TISTAT;
		volatile struct {
			unsigned ResetDone : 1;		// bit 0
			unsigned Reserved_1 : 31;	// bit 1-31
		} TISTAT_bit;
	}; // 0x14

	union {
		volatile uint32_t TISR;
		volatile struct {
			unsigned MAT_IT_FLAG : 1;	// bit 0
			unsigned OVF_IT_FLAG : 1;	// bit 1
			unsigned TCAR_IT_FLAG : 1;	// bit 2
			unsigned RESERVED_3 : 29;	// bit 3-31
		} TISR_bit;
	}; // 0x18

	union {
		volatile uint32_t TIER;
		volatile struct {
			unsigned MAT_IT_ENA : 1;	// bit 0
			unsigned OVF_IT_ENA : 1;	// bit 1
			unsigned TCAR_IT_ENA : 1;	// bit 2
			unsigned RESERVED_3 : 29;	// bit 3-31
		} TIER_bit;
	}; // 0x1c

	union {
		volatile uint32_t TWER;
		volatile struct {
			unsigned MAT_WUP_ENA : 1;	// bit 0
			unsigned OVF_WUP_ENA : 1;	// bit 1
			unsigned TCAR_WUP_ENA : 1;	// bit 2
			unsigned RESERVED_3 : 29;	// bit 3-31
		} TWER_bit;
	}; // 0x20

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
	}; // 0x24

	union {
		volatile uint32_t TCRR;
		volatile struct {
			unsigned TIMER_COUNTER : 32;	// bit 0-31
		} TCRR_bit;
	}; // 0x28

	union {
		volatile uint32_t TLDR;
		volatile struct {
			unsigned LOAD_VALUE : 32;	// bit 0-31
		} TLDR_bit;
	}; // 0x2c

	union {
		volatile uint32_t TTGR;
		volatile struct {
			unsigned TTGR_VALUE : 32;	// bit 0-31
		} TTGR_bit;
	}; // 0x30

	union {
		volatile uint32_t TWPS;
		volatile struct {
			unsigned W_PEND_TCLR : 1;	// bit 0
			unsigned W_PEND_TCRR : 1;	// bit 1
			unsigned W_PEND_TLDR : 1;	// bit 2
			unsigned W_PEND_TTGR : 1;	// bit 3
			unsigned W_PEND_TMAR : 1;	// bit 4
			unsigned W_PEND_TPIR : 1;	// bit 5
			unsigned W_PEND_TNIR : 1;	// bit 6
			unsigned W_PEND_TCVR : 1;	// bit 7
			unsigned W_PEND_TOCR : 1;	// bit 8
			unsigned W_PEND_TOWR : 1;	// bit 9
			unsigned RESERVED_10 : 22;	// bit 10-31
		} TWPS_bit;
	}; // 0x34

	union {
		volatile uint32_t TMAR;
		volatile struct {
			unsigned COMPARE_VALUE : 32;	// bit 0-31
		} TMAR_bit;
	}; // 0x38

	union {
		volatile uint32_t TCAR1;
		volatile struct {
			unsigned CAPTURE_VALUE1 : 32;	// bit 0-31
		} TCAR1_bit;
	}; // 0x3c

	union {
		volatile uint32_t TSICR;
		volatile struct {
			unsigned Reserved_0 : 1;	// bit 0
			unsigned SFT : 1;		// bit 1
			unsigned POSTED : 1;		// bit 2
			unsigned RESERVED_3 : 29;	// bit 3-31
		} TSICR_bit;
	}; // 0x40

	union {
		volatile uint32_t TCAR2;
		volatile struct {
			unsigned CAPTURE_VALUE2 : 32;	// bit 0-31
		} TCAR2_bit;
	}; // 0x44

	union {
		volatile uint32_t TPIR;
		volatile struct {
			unsigned POSITIVE_INC_VALUE : 32; // bit 0-31
		} TPIR_bit;
	}; // 0x48

	union {
		volatile uint32_t TNIR;
		volatile struct {
			unsigned NEGATIVE_INV_VALUE : 32; // bit 0-31
		} TNIR_bit;
	}; // 0x4c

	union {
		volatile uint32_t TCVR;
		volatile struct {
			unsigned COUNTER_VALUE : 32;	 // bit 0-31
		} TCVR_bit;
	}; // 0x50

	union {
		volatile uint32_t TOCR;
		volatile struct {
			unsigned OVF_COUNTER_VALUE : 24; // bit 0-23
			unsigned Reserved : 8;		 // bit 24-31
		} TOCR_bit;
	}; // 0x54

	union {
		volatile uint32_t TOWR;
		volatile struct {
			unsigned OVF_WRAPPING_VALUE : 24; // bit 0-23
			unsigned Reserved : 8;		  // bit 24-31
		} TOWR_bit;
	}; // 0x58
} timer_1ms;

#define DMTIMER1_1MS (*(volatile timer_1ms *)(0x44E31000))

#endif /* _AM335X_SYS_TIMER_1MS_H_ */
