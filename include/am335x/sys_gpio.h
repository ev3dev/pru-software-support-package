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

#ifndef _AM335X_SYS_GPIO_H_
#define _AM335X_SYS_GPIO_H_

#include <stdint.h>

typedef struct {
	union {
		volatile uint32_t GPIO_REVISION;
		volatile struct {
			unsigned MINOR : 6;		// bit 0-5
			unsigned CUSTOM : 2; 		// bit 6-7
			unsigned MAJOR : 3;		// bit 8-10
			unsigned RTL : 5;		// bit 11-15
			unsigned FUNC : 12;		// bit 16-27
			unsigned RESERVED_28 : 2;	// bit 28-29
			unsigned SCHEME : 2;		// bit 30-31
		} GPIO_REVISION_bit;
	}; // 0x0

	volatile uint32_t RESERVED_4[3]; // 0x4 - 0xc

	union {
		volatile uint32_t GPIO_SYSCONFIG;
		volatile struct {
			unsigned AUTOIDLE : 1;		// bit 0
			unsigned SOFTRESET : 1;		// bit 1
			unsigned ENAWAKEUP : 1;		// bit 2
			unsigned IDLEMODE : 2;		// bit 3-4
			unsigned RESERVED_5 : 27;	// bit 5-31
		} GPIO_SYSCONFIG_bit;
	}; // 0x10

	volatile uint32_t RESERVED_14[3]; // 0x14 - 0x1c

	union {
		volatile uint32_t GPIO_EOI;
		volatile struct {
			unsigned DMAEvent_Ack : 1;	// bit 0
			unsigned RESERVED : 31;		// bit 1-31
		} GPIO_EOI_bit;
	}; // 0x20

	union {
		volatile uint32_t GPIO_IRQSTATUS_RAW_0;
		volatile struct {
			unsigned INTLINE0 : 1;		// bit 0
			unsigned INTLINE1 : 1;		// bit 1
			unsigned INTLINE2 : 1;		// bit 2
			unsigned INTLINE3 : 1;		// bit 3
			unsigned INTLINE4 : 1;		// bit 4
			unsigned INTLINE5 : 1;		// bit 5
			unsigned INTLINE6 : 1;		// bit 6
			unsigned INTLINE7 : 1;		// bit 7
			unsigned INTLINE8 : 1;		// bit 8
			unsigned INTLINE9 : 1;		// bit 9
			unsigned INTLINE10 : 1;		// bit 10
			unsigned INTLINE11 : 1;		// bit 11
			unsigned INTLINE12 : 1;		// bit 12
			unsigned INTLINE13 : 1;		// bit 13
			unsigned INTLINE14 : 1;		// bit 14
			unsigned INTLINE15 : 1;		// bit 15
			unsigned INTLINE16 : 1;		// bit 16
			unsigned INTLINE17 : 1;		// bit 17
			unsigned INTLINE18 : 1;		// bit 18
			unsigned INTLINE19 : 1;		// bit 19
			unsigned INTLINE20 : 1;		// bit 20
			unsigned INTLINE21 : 1;		// bit 21
			unsigned INTLINE22 : 1;		// bit 22
			unsigned INTLINE23 : 1;		// bit 23
			unsigned INTLINE24 : 1;		// bit 24
			unsigned INTLINE25 : 1;		// bit 25
			unsigned INTLINE26 : 1;		// bit 26
			unsigned INTLINE27 : 1;		// bit 27
			unsigned INTLINE28 : 1;		// bit 28
			unsigned INTLINE29 : 1;		// bit 29
			unsigned INTLINE30 : 1;		// bit 30
			unsigned INTLINE31 : 1;		// bit 31
		} GPIO_IRQSTATUS_RAW_0_bit;
	}; // 0x24

	union {
		volatile uint32_t GPIO_IRQSTATUS_RAW_1;
		volatile struct {
			unsigned INTLINE0 : 1;		// bit 0
			unsigned INTLINE1 : 1;		// bit 1
			unsigned INTLINE2 : 1;		// bit 2
			unsigned INTLINE3 : 1;		// bit 3
			unsigned INTLINE4 : 1;		// bit 4
			unsigned INTLINE5 : 1;		// bit 5
			unsigned INTLINE6 : 1;		// bit 6
			unsigned INTLINE7 : 1;		// bit 7
			unsigned INTLINE8 : 1;		// bit 8
			unsigned INTLINE9 : 1;		// bit 9
			unsigned INTLINE10 : 1;		// bit 10
			unsigned INTLINE11 : 1;		// bit 11
			unsigned INTLINE12 : 1;		// bit 12
			unsigned INTLINE13 : 1;		// bit 13
			unsigned INTLINE14 : 1;		// bit 14
			unsigned INTLINE15 : 1;		// bit 15
			unsigned INTLINE16 : 1;		// bit 16
			unsigned INTLINE17 : 1;		// bit 17
			unsigned INTLINE18 : 1;		// bit 18
			unsigned INTLINE19 : 1;		// bit 19
			unsigned INTLINE20 : 1;		// bit 20
			unsigned INTLINE21 : 1;		// bit 21
			unsigned INTLINE22 : 1;		// bit 22
			unsigned INTLINE23 : 1;		// bit 23
			unsigned INTLINE24 : 1;		// bit 24
			unsigned INTLINE25 : 1;		// bit 25
			unsigned INTLINE26 : 1;		// bit 26
			unsigned INTLINE27 : 1;		// bit 27
			unsigned INTLINE28 : 1;		// bit 28
			unsigned INTLINE29 : 1;		// bit 29
			unsigned INTLINE30 : 1;		// bit 30
			unsigned INTLINE31 : 1;		// bit 31
		} GPIO_IRQSTATUS_RAW_1_bit;
	}; // 0x28

	union {
		volatile uint32_t GPIO_IRQSTATUS_0;
		volatile struct {
			unsigned INTLINE0 : 1;		// bit 0
			unsigned INTLINE1 : 1;		// bit 1
			unsigned INTLINE2 : 1;		// bit 2
			unsigned INTLINE3 : 1;		// bit 3
			unsigned INTLINE4 : 1;		// bit 4
			unsigned INTLINE5 : 1;		// bit 5
			unsigned INTLINE6 : 1;		// bit 6
			unsigned INTLINE7 : 1;		// bit 7
			unsigned INTLINE8 : 1;		// bit 8
			unsigned INTLINE9 : 1;		// bit 9
			unsigned INTLINE10 : 1;		// bit 10
			unsigned INTLINE11 : 1;		// bit 11
			unsigned INTLINE12 : 1;		// bit 12
			unsigned INTLINE13 : 1;		// bit 13
			unsigned INTLINE14 : 1;		// bit 14
			unsigned INTLINE15 : 1;		// bit 15
			unsigned INTLINE16 : 1;		// bit 16
			unsigned INTLINE17 : 1;		// bit 17
			unsigned INTLINE18 : 1;		// bit 18
			unsigned INTLINE19 : 1;		// bit 19
			unsigned INTLINE20 : 1;		// bit 20
			unsigned INTLINE21 : 1;		// bit 21
			unsigned INTLINE22 : 1;		// bit 22
			unsigned INTLINE23 : 1;		// bit 23
			unsigned INTLINE24 : 1;		// bit 24
			unsigned INTLINE25 : 1;		// bit 25
			unsigned INTLINE26 : 1;		// bit 26
			unsigned INTLINE27 : 1;		// bit 27
			unsigned INTLINE28 : 1;		// bit 28
			unsigned INTLINE29 : 1;		// bit 29
			unsigned INTLINE30 : 1;		// bit 30
			unsigned INTLINE31 : 1;		// bit 31
		} GPIO_IRQSTATUS_0_bit;
	}; // 0x2C

	union {
		volatile uint32_t GPIO_IRQSTATUS_1;
		volatile struct {
			unsigned INTLINE0 : 1;		// bit 0
			unsigned INTLINE1 : 1;		// bit 1
			unsigned INTLINE2 : 1;		// bit 2
			unsigned INTLINE3 : 1;		// bit 3
			unsigned INTLINE4 : 1;		// bit 4
			unsigned INTLINE5 : 1;		// bit 5
			unsigned INTLINE6 : 1;		// bit 6
			unsigned INTLINE7 : 1;		// bit 7
			unsigned INTLINE8 : 1;		// bit 8
			unsigned INTLINE9 : 1;		// bit 9
			unsigned INTLINE10 : 1;		// bit 10
			unsigned INTLINE11 : 1;		// bit 11
			unsigned INTLINE12 : 1;		// bit 12
			unsigned INTLINE13 : 1;		// bit 13
			unsigned INTLINE14 : 1;		// bit 14
			unsigned INTLINE15 : 1;		// bit 15
			unsigned INTLINE16 : 1;		// bit 16
			unsigned INTLINE17 : 1;		// bit 17
			unsigned INTLINE18 : 1;		// bit 18
			unsigned INTLINE19 : 1;		// bit 19
			unsigned INTLINE20 : 1;		// bit 20
			unsigned INTLINE21 : 1;		// bit 21
			unsigned INTLINE22 : 1;		// bit 22
			unsigned INTLINE23 : 1;		// bit 23
			unsigned INTLINE24 : 1;		// bit 24
			unsigned INTLINE25 : 1;		// bit 25
			unsigned INTLINE26 : 1;		// bit 26
			unsigned INTLINE27 : 1;		// bit 27
			unsigned INTLINE28 : 1;		// bit 28
			unsigned INTLINE29 : 1;		// bit 29
			unsigned INTLINE30 : 1;		// bit 30
			unsigned INTLINE31 : 1;		// bit 31
		} GPIO_IRQSTATUS_1_bit;
	}; // 0x30

	union {
		volatile uint32_t GPIO_IRQSTATUS_SET_0;
		volatile struct {
			unsigned INTLINE0 : 1;		// bit 0
			unsigned INTLINE1 : 1;		// bit 1
			unsigned INTLINE2 : 1;		// bit 2
			unsigned INTLINE3 : 1;		// bit 3
			unsigned INTLINE4 : 1;		// bit 4
			unsigned INTLINE5 : 1;		// bit 5
			unsigned INTLINE6 : 1;		// bit 6
			unsigned INTLINE7 : 1;		// bit 7
			unsigned INTLINE8 : 1;		// bit 8
			unsigned INTLINE9 : 1;		// bit 9
			unsigned INTLINE10 : 1;		// bit 10
			unsigned INTLINE11 : 1;		// bit 11
			unsigned INTLINE12 : 1;		// bit 12
			unsigned INTLINE13 : 1;		// bit 13
			unsigned INTLINE14 : 1;		// bit 14
			unsigned INTLINE15 : 1;		// bit 15
			unsigned INTLINE16 : 1;		// bit 16
			unsigned INTLINE17 : 1;		// bit 17
			unsigned INTLINE18 : 1;		// bit 18
			unsigned INTLINE19 : 1;		// bit 19
			unsigned INTLINE20 : 1;		// bit 20
			unsigned INTLINE21 : 1;		// bit 21
			unsigned INTLINE22 : 1;		// bit 22
			unsigned INTLINE23 : 1;		// bit 23
			unsigned INTLINE24 : 1;		// bit 24
			unsigned INTLINE25 : 1;		// bit 25
			unsigned INTLINE26 : 1;		// bit 26
			unsigned INTLINE27 : 1;		// bit 27
			unsigned INTLINE28 : 1;		// bit 28
			unsigned INTLINE29 : 1;		// bit 29
			unsigned INTLINE30 : 1;		// bit 30
			unsigned INTLINE31 : 1;		// bit 31
		} GPIO_IRQSTATUS_SET_0_bit;
	}; // 0x34

	union {
		volatile uint32_t GPIO_IRQSTATUS_SET_1;
		volatile struct {
			unsigned INTLINE0 : 1;		// bit 0
			unsigned INTLINE1 : 1;		// bit 1
			unsigned INTLINE2 : 1;		// bit 2
			unsigned INTLINE3 : 1;		// bit 3
			unsigned INTLINE4 : 1;		// bit 4
			unsigned INTLINE5 : 1;		// bit 5
			unsigned INTLINE6 : 1;		// bit 6
			unsigned INTLINE7 : 1;		// bit 7
			unsigned INTLINE8 : 1;		// bit 8
			unsigned INTLINE9 : 1;		// bit 9
			unsigned INTLINE10 : 1;		// bit 10
			unsigned INTLINE11 : 1;		// bit 11
			unsigned INTLINE12 : 1;		// bit 12
			unsigned INTLINE13 : 1;		// bit 13
			unsigned INTLINE14 : 1;		// bit 14
			unsigned INTLINE15 : 1;		// bit 15
			unsigned INTLINE16 : 1;		// bit 16
			unsigned INTLINE17 : 1;		// bit 17
			unsigned INTLINE18 : 1;		// bit 18
			unsigned INTLINE19 : 1;		// bit 19
			unsigned INTLINE20 : 1;		// bit 20
			unsigned INTLINE21 : 1;		// bit 21
			unsigned INTLINE22 : 1;		// bit 22
			unsigned INTLINE23 : 1;		// bit 23
			unsigned INTLINE24 : 1;		// bit 24
			unsigned INTLINE25 : 1;		// bit 25
			unsigned INTLINE26 : 1;		// bit 26
			unsigned INTLINE27 : 1;		// bit 27
			unsigned INTLINE28 : 1;		// bit 28
			unsigned INTLINE29 : 1;		// bit 29
			unsigned INTLINE30 : 1;		// bit 30
			unsigned INTLINE31 : 1;		// bit 31
		} GPIO_IRQSTATUS_SET_1_bit;
	}; // 0x38

	union {
		volatile uint32_t GPIO_IRQSTATUS_CLR_0;
		volatile struct {
			unsigned INTLINE0 : 1;		// bit 0
			unsigned INTLINE1 : 1;		// bit 1
			unsigned INTLINE2 : 1;		// bit 2
			unsigned INTLINE3 : 1;		// bit 3
			unsigned INTLINE4 : 1;		// bit 4
			unsigned INTLINE5 : 1;		// bit 5
			unsigned INTLINE6 : 1;		// bit 6
			unsigned INTLINE7 : 1;		// bit 7
			unsigned INTLINE8 : 1;		// bit 8
			unsigned INTLINE9 : 1;		// bit 9
			unsigned INTLINE10 : 1;		// bit 10
			unsigned INTLINE11 : 1;		// bit 11
			unsigned INTLINE12 : 1;		// bit 12
			unsigned INTLINE13 : 1;		// bit 13
			unsigned INTLINE14 : 1;		// bit 14
			unsigned INTLINE15 : 1;		// bit 15
			unsigned INTLINE16 : 1;		// bit 16
			unsigned INTLINE17 : 1;		// bit 17
			unsigned INTLINE18 : 1;		// bit 18
			unsigned INTLINE19 : 1;		// bit 19
			unsigned INTLINE20 : 1;		// bit 20
			unsigned INTLINE21 : 1;		// bit 21
			unsigned INTLINE22 : 1;		// bit 22
			unsigned INTLINE23 : 1;		// bit 23
			unsigned INTLINE24 : 1;		// bit 24
			unsigned INTLINE25 : 1;		// bit 25
			unsigned INTLINE26 : 1;		// bit 26
			unsigned INTLINE27 : 1;		// bit 27
			unsigned INTLINE28 : 1;		// bit 28
			unsigned INTLINE29 : 1;		// bit 29
			unsigned INTLINE30 : 1;		// bit 30
			unsigned INTLINE31 : 1;		// bit 31
		} GPIO_IRQSTATUS_CLR_0_bit;
	}; // 0x3c

	union {
		volatile uint32_t GPIO_IRQSTATUS_CLR_1;
		volatile struct {
			unsigned INTLINE0 : 1;		// bit 0
			unsigned INTLINE1 : 1;		// bit 1
			unsigned INTLINE2 : 1;		// bit 2
			unsigned INTLINE3 : 1;		// bit 3
			unsigned INTLINE4 : 1;		// bit 4
			unsigned INTLINE5 : 1;		// bit 5
			unsigned INTLINE6 : 1;		// bit 6
			unsigned INTLINE7 : 1;		// bit 7
			unsigned INTLINE8 : 1;		// bit 8
			unsigned INTLINE9 : 1;		// bit 9
			unsigned INTLINE10 : 1;		// bit 10
			unsigned INTLINE11 : 1;		// bit 11
			unsigned INTLINE12 : 1;		// bit 12
			unsigned INTLINE13 : 1;		// bit 13
			unsigned INTLINE14 : 1;		// bit 14
			unsigned INTLINE15 : 1;		// bit 15
			unsigned INTLINE16 : 1;		// bit 16
			unsigned INTLINE17 : 1;		// bit 17
			unsigned INTLINE18 : 1;		// bit 18
			unsigned INTLINE19 : 1;		// bit 19
			unsigned INTLINE20 : 1;		// bit 20
			unsigned INTLINE21 : 1;		// bit 21
			unsigned INTLINE22 : 1;		// bit 22
			unsigned INTLINE23 : 1;		// bit 23
			unsigned INTLINE24 : 1;		// bit 24
			unsigned INTLINE25 : 1;		// bit 25
			unsigned INTLINE26 : 1;		// bit 26
			unsigned INTLINE27 : 1;		// bit 27
			unsigned INTLINE28 : 1;		// bit 28
			unsigned INTLINE29 : 1;		// bit 29
			unsigned INTLINE30 : 1;		// bit 30
			unsigned INTLINE31 : 1;		// bit 31
		} GPIO_IRQSTATUS_CLR_1_bit;
	}; // 0x40

	union {
		volatile uint32_t GPIO_IRQWAKEN_0;
		volatile struct {
			unsigned INTLINE0 : 1;		// bit 0
			unsigned INTLINE1 : 1;		// bit 1
			unsigned INTLINE2 : 1;		// bit 2
			unsigned INTLINE3 : 1;		// bit 3
			unsigned INTLINE4 : 1;		// bit 4
			unsigned INTLINE5 : 1;		// bit 5
			unsigned INTLINE6 : 1;		// bit 6
			unsigned INTLINE7 : 1;		// bit 7
			unsigned INTLINE8 : 1;		// bit 8
			unsigned INTLINE9 : 1;		// bit 9
			unsigned INTLINE10 : 1;		// bit 10
			unsigned INTLINE11 : 1;		// bit 11
			unsigned INTLINE12 : 1;		// bit 12
			unsigned INTLINE13 : 1;		// bit 13
			unsigned INTLINE14 : 1;		// bit 14
			unsigned INTLINE15 : 1;		// bit 15
			unsigned INTLINE16 : 1;		// bit 16
			unsigned INTLINE17 : 1;		// bit 17
			unsigned INTLINE18 : 1;		// bit 18
			unsigned INTLINE19 : 1;		// bit 19
			unsigned INTLINE20 : 1;		// bit 20
			unsigned INTLINE21 : 1;		// bit 21
			unsigned INTLINE22 : 1;		// bit 22
			unsigned INTLINE23 : 1;		// bit 23
			unsigned INTLINE24 : 1;		// bit 24
			unsigned INTLINE25 : 1;		// bit 25
			unsigned INTLINE26 : 1;		// bit 26
			unsigned INTLINE27 : 1;		// bit 27
			unsigned INTLINE28 : 1;		// bit 28
			unsigned INTLINE29 : 1;		// bit 29
			unsigned INTLINE30 : 1;		// bit 30
			unsigned INTLINE31 : 1;		// bit 31
		} GPIO_IRQWAKEN_0_bit;
	}; // 0x44

	union {
		volatile uint32_t GPIO_IRQWAKEN_1;
		volatile struct {
			unsigned INTLINE0 : 1;		// bit 0
			unsigned INTLINE1 : 1;		// bit 1
			unsigned INTLINE2 : 1;		// bit 2
			unsigned INTLINE3 : 1;		// bit 3
			unsigned INTLINE4 : 1;		// bit 4
			unsigned INTLINE5 : 1;		// bit 5
			unsigned INTLINE6 : 1;		// bit 6
			unsigned INTLINE7 : 1;		// bit 7
			unsigned INTLINE8 : 1;		// bit 8
			unsigned INTLINE9 : 1;		// bit 9
			unsigned INTLINE10 : 1;		// bit 10
			unsigned INTLINE11 : 1;		// bit 11
			unsigned INTLINE12 : 1;		// bit 12
			unsigned INTLINE13 : 1;		// bit 13
			unsigned INTLINE14 : 1;		// bit 14
			unsigned INTLINE15 : 1;		// bit 15
			unsigned INTLINE16 : 1;		// bit 16
			unsigned INTLINE17 : 1;		// bit 17
			unsigned INTLINE18 : 1;		// bit 18
			unsigned INTLINE19 : 1;		// bit 19
			unsigned INTLINE20 : 1;		// bit 20
			unsigned INTLINE21 : 1;		// bit 21
			unsigned INTLINE22 : 1;		// bit 22
			unsigned INTLINE23 : 1;		// bit 23
			unsigned INTLINE24 : 1;		// bit 24
			unsigned INTLINE25 : 1;		// bit 25
			unsigned INTLINE26 : 1;		// bit 26
			unsigned INTLINE27 : 1;		// bit 27
			unsigned INTLINE28 : 1;		// bit 28
			unsigned INTLINE29 : 1;		// bit 29
			unsigned INTLINE30 : 1;		// bit 30
			unsigned INTLINE31 : 1;		// bit 31
		} GPIO_IRQWAKEN_1_bit;
	}; // 0x48

	volatile uint32_t RESERVED_4C[50]; // 0x4c - 0x110

	union {
		volatile uint32_t GPIO_SYSSTATUS;
		volatile struct {
			unsigned RESETDONE : 1;		// bit 0
			unsigned RESERVED_1 : 31;	// bit 1-31
		} GPIO_SYSSTATUS_bit;
	}; // 0x114

	volatile uint32_t RESERVED_118[6]; // 0x118 - 0x12c

	union {
		volatile uint32_t GPIO_CTRL;
		volatile struct {
			unsigned DISABLEMODULE : 1;	// bit 0
			unsigned GATINGRATIO : 2;	// bit 1-2
			unsigned RESERVED_3 : 29;	// bit 3-31
		} GPIO_CTRL_bit;
	}; // 0x130

	union {
		volatile uint32_t GPIO_OE;
		volatile struct {
			unsigned OUTPUTEN0 : 1;		// bit 0
			unsigned OUTPUTEN1 : 1;		// bit 1
			unsigned OUTPUTEN2 : 1;		// bit 2
			unsigned OUTPUTEN3 : 1;		// bit 3
			unsigned OUTPUTEN4 : 1;		// bit 4
			unsigned OUTPUTEN5 : 1;		// bit 5
			unsigned OUTPUTEN6 : 1;		// bit 6
			unsigned OUTPUTEN7 : 1;		// bit 7
			unsigned OUTPUTEN8 : 1;		// bit 8
			unsigned OUTPUTEN9 : 1;		// bit 9
			unsigned OUTPUTEN10 : 1;	// bit 10
			unsigned OUTPUTEN11 : 1;	// bit 11
			unsigned OUTPUTEN12 : 1;	// bit 12
			unsigned OUTPUTEN13 : 1;	// bit 13
			unsigned OUTPUTEN14 : 1;	// bit 14
			unsigned OUTPUTEN15 : 1;	// bit 15
			unsigned OUTPUTEN16 : 1;	// bit 16
			unsigned OUTPUTEN17 : 1;	// bit 17
			unsigned OUTPUTEN18 : 1;	// bit 18
			unsigned OUTPUTEN19 : 1;	// bit 19
			unsigned OUTPUTEN20 : 1;	// bit 20
			unsigned OUTPUTEN21 : 1;	// bit 21
			unsigned OUTPUTEN22 : 1;	// bit 22
			unsigned OUTPUTEN23 : 1;	// bit 23
			unsigned OUTPUTEN24 : 1;	// bit 24
			unsigned OUTPUTEN25 : 1;	// bit 25
			unsigned OUTPUTEN26 : 1;	// bit 26
			unsigned OUTPUTEN27 : 1;	// bit 27
			unsigned OUTPUTEN28 : 1;	// bit 28
			unsigned OUTPUTEN29 : 1;	// bit 29
			unsigned OUTPUTEN30 : 1;	// bit 30
			unsigned OUTPUTEN31 : 1;	// bit 31
		} GPIO_OE_bit;
	}; // 0x134

	union {
		volatile uint32_t GPIO_DATAIN;
		volatile struct {
			unsigned DATAIN0 : 1;		// bit 0
			unsigned DATAIN1 : 1;		// bit 1
			unsigned DATAIN2 : 1;		// bit 2
			unsigned DATAIN3 : 1;		// bit 3
			unsigned DATAIN4 : 1;		// bit 4
			unsigned DATAIN5 : 1;		// bit 5
			unsigned DATAIN6 : 1;		// bit 6
			unsigned DATAIN7 : 1;		// bit 7
			unsigned DATAIN8 : 1;		// bit 8
			unsigned DATAIN9 : 1;		// bit 9
			unsigned DATAIN10 : 1;		// bit 10
			unsigned DATAIN11 : 1;		// bit 11
			unsigned DATAIN12 : 1;		// bit 12
			unsigned DATAIN13 : 1;		// bit 13
			unsigned DATAIN14 : 1;		// bit 14
			unsigned DATAIN15 : 1;		// bit 15
			unsigned DATAIN16 : 1;		// bit 16
			unsigned DATAIN17 : 1;		// bit 17
			unsigned DATAIN18 : 1;		// bit 18
			unsigned DATAIN19 : 1;		// bit 19
			unsigned DATAIN20 : 1;		// bit 20
			unsigned DATAIN21 : 1;		// bit 21
			unsigned DATAIN22 : 1;		// bit 22
			unsigned DATAIN23 : 1;		// bit 23
			unsigned DATAIN24 : 1;		// bit 24
			unsigned DATAIN25 : 1;		// bit 25
			unsigned DATAIN26 : 1;		// bit 26
			unsigned DATAIN27 : 1;		// bit 27
			unsigned DATAIN28 : 1;		// bit 28
			unsigned DATAIN29 : 1;		// bit 29
			unsigned DATAIN30 : 1;		// bit 30
			unsigned DATAIN31 : 1;		// bit 31
		} GPIO_DATAIN_bit;
	}; // 0x138

	union {
		volatile uint32_t GPIO_DATAOUT;
		volatile struct {
			unsigned DATAOUT0 : 1;		// bit 0
			unsigned DATAOUT1 : 1;		// bit 1
			unsigned DATAOUT2 : 1;		// bit 2
			unsigned DATAOUT3 : 1;		// bit 3
			unsigned DATAOUT4 : 1;		// bit 4
			unsigned DATAOUT5 : 1;		// bit 5
			unsigned DATAOUT6 : 1;		// bit 6
			unsigned DATAOUT7 : 1;		// bit 7
			unsigned DATAOUT8 : 1;		// bit 8
			unsigned DATAOUT9 : 1;		// bit 9
			unsigned DATAOUT10 : 1;		// bit 10
			unsigned DATAOUT11 : 1;		// bit 11
			unsigned DATAOUT12 : 1;		// bit 12
			unsigned DATAOUT13 : 1;		// bit 13
			unsigned DATAOUT14 : 1;		// bit 14
			unsigned DATAOUT15 : 1;		// bit 15
			unsigned DATAOUT16 : 1;		// bit 16
			unsigned DATAOUT17 : 1;		// bit 17
			unsigned DATAOUT18 : 1;		// bit 18
			unsigned DATAOUT19 : 1;		// bit 19
			unsigned DATAOUT20 : 1;		// bit 20
			unsigned DATAOUT21 : 1;		// bit 21
			unsigned DATAOUT22 : 1;		// bit 22
			unsigned DATAOUT23 : 1;		// bit 23
			unsigned DATAOUT24 : 1;		// bit 24
			unsigned DATAOUT25 : 1;		// bit 25
			unsigned DATAOUT26 : 1;		// bit 26
			unsigned DATAOUT27 : 1;		// bit 27
			unsigned DATAOUT28 : 1;		// bit 28
			unsigned DATAOUT29 : 1;		// bit 29
			unsigned DATAOUT30 : 1;		// bit 30
			unsigned DATAOUT31 : 1;		// bit 31
		} GPIO_DATAOUT_bit;
	}; // 0x13c

	union {
		volatile uint32_t GPIO_LEVELDETECT0;
		volatile struct {
			unsigned LEVELDETECT0_0 : 1;	// bit 0
			unsigned LEVELDETECT0_1 : 1;	// bit 1
			unsigned LEVELDETECT0_2 : 1;	// bit 2
			unsigned LEVELDETECT0_3 : 1;	// bit 3
			unsigned LEVELDETECT0_4 : 1;	// bit 4
			unsigned LEVELDETECT0_5 : 1;	// bit 5
			unsigned LEVELDETECT0_6 : 1;	// bit 6
			unsigned LEVELDETECT0_7 : 1;	// bit 7
			unsigned LEVELDETECT0_8 : 1;	// bit 8
			unsigned LEVELDETECT0_9 : 1;	// bit 9
			unsigned LEVELDETECT0_10 : 1;	// bit 10
			unsigned LEVELDETECT0_11 : 1;	// bit 11
			unsigned LEVELDETECT0_12 : 1;	// bit 12
			unsigned LEVELDETECT0_13 : 1;	// bit 13
			unsigned LEVELDETECT0_14 : 1;	// bit 14
			unsigned LEVELDETECT0_15 : 1;	// bit 15
			unsigned LEVELDETECT0_16 : 1;	// bit 16
			unsigned LEVELDETECT0_17 : 1;	// bit 17
			unsigned LEVELDETECT0_18 : 1;	// bit 18
			unsigned LEVELDETECT0_19 : 1;	// bit 19
			unsigned LEVELDETECT0_20 : 1;	// bit 20
			unsigned LEVELDETECT0_21 : 1;	// bit 21
			unsigned LEVELDETECT0_22 : 1;	// bit 22
			unsigned LEVELDETECT0_23 : 1;	// bit 23
			unsigned LEVELDETECT0_24 : 1;	// bit 24
			unsigned LEVELDETECT0_25 : 1;	// bit 25
			unsigned LEVELDETECT0_26 : 1;	// bit 26
			unsigned LEVELDETECT0_27 : 1;	// bit 27
			unsigned LEVELDETECT0_28 : 1;	// bit 28
			unsigned LEVELDETECT0_29 : 1;	// bit 29
			unsigned LEVELDETECT0_30 : 1;	// bit 30
			unsigned LEVELDETECT0_31 : 1;	// bit 31
		} GPIO_LEVELDETECT0_bit;
	}; // 0x140

	union {
		volatile uint32_t GPIO_LEVELDETECT1;
		volatile struct {
			unsigned LEVELDETECT1_0 : 1;	// bit 0
			unsigned LEVELDETECT1_1 : 1;	// bit 1
			unsigned LEVELDETECT1_2 : 1;	// bit 2
			unsigned LEVELDETECT1_3 : 1;	// bit 3
			unsigned LEVELDETECT1_4 : 1;	// bit 4
			unsigned LEVELDETECT1_5 : 1;	// bit 5
			unsigned LEVELDETECT1_6 : 1;	// bit 6
			unsigned LEVELDETECT1_7 : 1;	// bit 7
			unsigned LEVELDETECT1_8 : 1;	// bit 8
			unsigned LEVELDETECT1_9 : 1;	// bit 9
			unsigned LEVELDETECT1_10 : 1;	// bit 10
			unsigned LEVELDETECT1_11 : 1;	// bit 11
			unsigned LEVELDETECT1_12 : 1;	// bit 12
			unsigned LEVELDETECT1_13 : 1;	// bit 13
			unsigned LEVELDETECT1_14 : 1;	// bit 14
			unsigned LEVELDETECT1_15 : 1;	// bit 15
			unsigned LEVELDETECT1_16 : 1;	// bit 16
			unsigned LEVELDETECT1_17 : 1;	// bit 17
			unsigned LEVELDETECT1_18 : 1;	// bit 18
			unsigned LEVELDETECT1_19 : 1;	// bit 19
			unsigned LEVELDETECT1_20 : 1;	// bit 20
			unsigned LEVELDETECT1_21 : 1;	// bit 21
			unsigned LEVELDETECT1_22 : 1;	// bit 22
			unsigned LEVELDETECT1_23 : 1;	// bit 23
			unsigned LEVELDETECT1_24 : 1;	// bit 24
			unsigned LEVELDETECT1_25 : 1;	// bit 25
			unsigned LEVELDETECT1_26 : 1;	// bit 26
			unsigned LEVELDETECT1_27 : 1;	// bit 27
			unsigned LEVELDETECT1_28 : 1;	// bit 28
			unsigned LEVELDETECT1_29 : 1;	// bit 29
			unsigned LEVELDETECT1_30 : 1;	// bit 30
			unsigned LEVELDETECT1_31 : 1;	// bit 31
		} GPIO_LEVELDETECT1_bit;
	}; // 0x144

	union {
		volatile uint32_t GPIO_RISINGDETECT;
		volatile struct {
			unsigned RISINGDETECT0 : 1;	// bit 0
			unsigned RISINGDETECT1 : 1;	// bit 1
			unsigned RISINGDETECT2 : 1;	// bit 2
			unsigned RISINGDETECT3 : 1;	// bit 3
			unsigned RISINGDETECT4 : 1;	// bit 4
			unsigned RISINGDETECT5 : 1;	// bit 5
			unsigned RISINGDETECT6 : 1;	// bit 6
			unsigned RISINGDETECT7 : 1;	// bit 7
			unsigned RISINGDETECT8 : 1;	// bit 8
			unsigned RISINGDETECT9 : 1;	// bit 9
			unsigned RISINGDETECT10 : 1;	// bit 10
			unsigned RISINGDETECT11 : 1;	// bit 11
			unsigned RISINGDETECT12 : 1;	// bit 12
			unsigned RISINGDETECT13 : 1;	// bit 13
			unsigned RISINGDETECT14 : 1;	// bit 14
			unsigned RISINGDETECT15 : 1;	// bit 15
			unsigned RISINGDETECT16 : 1;	// bit 16
			unsigned RISINGDETECT17 : 1;	// bit 17
			unsigned RISINGDETECT18 : 1;	// bit 18
			unsigned RISINGDETECT19 : 1;	// bit 19
			unsigned RISINGDETECT20 : 1;	// bit 20
			unsigned RISINGDETECT21 : 1;	// bit 21
			unsigned RISINGDETECT22 : 1;	// bit 22
			unsigned RISINGDETECT23 : 1;	// bit 23
			unsigned RISINGDETECT24 : 1;	// bit 24
			unsigned RISINGDETECT25 : 1;	// bit 25
			unsigned RISINGDETECT26 : 1;	// bit 26
			unsigned RISINGDETECT27 : 1;	// bit 27
			unsigned RISINGDETECT28 : 1;	// bit 28
			unsigned RISINGDETECT29 : 1;	// bit 29
			unsigned RISINGDETECT30 : 1;	// bit 30
			unsigned RISINGDETECT31 : 1;	// bit 31
		} GPIO_RISINGDETECT_bit;
	}; // 0x148

	union {
		volatile uint32_t GPIO_FALLINGDETECT;
		volatile struct {
			unsigned FALLINGDETECT0 : 1;	// bit 0
			unsigned FALLINGDETECT1 : 1;	// bit 1
			unsigned FALLINGDETECT2 : 1;	// bit 2
			unsigned FALLINGDETECT3 : 1;	// bit 3
			unsigned FALLINGDETECT4 : 1;	// bit 4
			unsigned FALLINGDETECT5 : 1;	// bit 5
			unsigned FALLINGDETECT6 : 1;	// bit 6
			unsigned FALLINGDETECT7 : 1;	// bit 7
			unsigned FALLINGDETECT8 : 1;	// bit 8
			unsigned FALLINGDETECT9 : 1;	// bit 9
			unsigned FALLINGDETECT10 : 1;	// bit 10
			unsigned FALLINGDETECT11 : 1;	// bit 11
			unsigned FALLINGDETECT12 : 1;	// bit 12
			unsigned FALLINGDETECT13 : 1;	// bit 13
			unsigned FALLINGDETECT14 : 1;	// bit 14
			unsigned FALLINGDETECT15 : 1;	// bit 15
			unsigned FALLINGDETECT16 : 1;	// bit 16
			unsigned FALLINGDETECT17 : 1;	// bit 17
			unsigned FALLINGDETECT18 : 1;	// bit 18
			unsigned FALLINGDETECT19 : 1;	// bit 19
			unsigned FALLINGDETECT20 : 1;	// bit 20
			unsigned FALLINGDETECT21 : 1;	// bit 21
			unsigned FALLINGDETECT22 : 1;	// bit 22
			unsigned FALLINGDETECT23 : 1;	// bit 23
			unsigned FALLINGDETECT24 : 1;	// bit 24
			unsigned FALLINGDETECT25 : 1;	// bit 25
			unsigned FALLINGDETECT26 : 1;	// bit 26
			unsigned FALLINGDETECT27 : 1;	// bit 27
			unsigned FALLINGDETECT28 : 1;	// bit 28
			unsigned FALLINGDETECT29 : 1;	// bit 29
			unsigned FALLINGDETECT30 : 1;	// bit 30
			unsigned FALLINGDETECT31 : 1;	// bit 31
		} GPIO_FALLINGDETECT_bit;
	}; // 0x14c

	union {
		volatile uint32_t GPIO_DEBOUNCENABLE;
		volatile struct {
			unsigned DEBOUNCEENABLE0 : 1;	// bit 0
			unsigned DEBOUNCEENABLE1 : 1;	// bit 1
			unsigned DEBOUNCEENABLE2 : 1;	// bit 2
			unsigned DEBOUNCEENABLE3 : 1;	// bit 3
			unsigned DEBOUNCEENABLE4 : 1;	// bit 4
			unsigned DEBOUNCEENABLE5 : 1;	// bit 5
			unsigned DEBOUNCEENABLE6 : 1;	// bit 6
			unsigned DEBOUNCEENABLE7 : 1;	// bit 7
			unsigned DEBOUNCEENABLE8 : 1;	// bit 8
			unsigned DEBOUNCEENABLE9 : 1;	// bit 9
			unsigned DEBOUNCEENABLE10 : 1;	// bit 10
			unsigned DEBOUNCEENABLE11 : 1;	// bit 11
			unsigned DEBOUNCEENABLE12 : 1;	// bit 12
			unsigned DEBOUNCEENABLE13 : 1;	// bit 13
			unsigned DEBOUNCEENABLE14 : 1;	// bit 14
			unsigned DEBOUNCEENABLE15 : 1;	// bit 15
			unsigned DEBOUNCEENABLE16 : 1;	// bit 16
			unsigned DEBOUNCEENABLE17 : 1;	// bit 17
			unsigned DEBOUNCEENABLE18 : 1;	// bit 18
			unsigned DEBOUNCEENABLE19 : 1;	// bit 19
			unsigned DEBOUNCEENABLE20 : 1;	// bit 20
			unsigned DEBOUNCEENABLE21 : 1;	// bit 21
			unsigned DEBOUNCEENABLE22 : 1;	// bit 22
			unsigned DEBOUNCEENABLE23 : 1;	// bit 23
			unsigned DEBOUNCEENABLE24 : 1;	// bit 24
			unsigned DEBOUNCEENABLE25 : 1;	// bit 25
			unsigned DEBOUNCEENABLE26 : 1;	// bit 26
			unsigned DEBOUNCEENABLE27 : 1;	// bit 27
			unsigned DEBOUNCEENABLE28 : 1;	// bit 28
			unsigned DEBOUNCEENABLE29 : 1;	// bit 29
			unsigned DEBOUNCEENABLE30 : 1;	// bit 30
			unsigned DEBOUNCEENABLE31 : 1;	// bit 31
		} GPIO_DEBOUNCENABLE_bit;
	}; // 0x150

	union {
		volatile uint32_t GPIO_DEBOUNCINGTIME;
		volatile struct {
			unsigned DEBOUNCETIME : 8;	// bit 0-7
			unsigned RESERVED_8 : 24;	// bit 8-31
		} GPIO_DEBOUNCINGTIME_bit;
	}; // 0x154

	volatile uint32_t RESERVED_158[14]; // 0x158 - 0x18c

	union {
		volatile uint32_t GPIO_CLEARDATAOUT;
		volatile struct {
			unsigned INTLINE0 : 1;		// bit 0
			unsigned INTLINE1 : 1;		// bit 1
			unsigned INTLINE2 : 1;		// bit 2
			unsigned INTLINE3 : 1;		// bit 3
			unsigned INTLINE4 : 1;		// bit 4
			unsigned INTLINE5 : 1;		// bit 5
			unsigned INTLINE6 : 1;		// bit 6
			unsigned INTLINE7 : 1;		// bit 7
			unsigned INTLINE8 : 1;		// bit 8
			unsigned INTLINE9 : 1;		// bit 9
			unsigned INTLINE10 : 1;		// bit 10
			unsigned INTLINE11 : 1;		// bit 11
			unsigned INTLINE12 : 1;		// bit 12
			unsigned INTLINE13 : 1;		// bit 13
			unsigned INTLINE14 : 1;		// bit 14
			unsigned INTLINE15 : 1;		// bit 15
			unsigned INTLINE16 : 1;		// bit 16
			unsigned INTLINE17 : 1;		// bit 17
			unsigned INTLINE18 : 1;		// bit 18
			unsigned INTLINE19 : 1;		// bit 19
			unsigned INTLINE20 : 1;		// bit 20
			unsigned INTLINE21 : 1;		// bit 21
			unsigned INTLINE22 : 1;		// bit 22
			unsigned INTLINE23 : 1;		// bit 23
			unsigned INTLINE24 : 1;		// bit 24
			unsigned INTLINE25 : 1;		// bit 25
			unsigned INTLINE26 : 1;		// bit 26
			unsigned INTLINE27 : 1;		// bit 27
			unsigned INTLINE28 : 1;		// bit 28
			unsigned INTLINE29 : 1;		// bit 29
			unsigned INTLINE30 : 1;		// bit 30
			unsigned INTLINE31 : 1;		// bit 31
		} GPIO_CLEARDATAOUT_bit;
	}; // 0x190

	union {
		volatile uint32_t GPIO_SETDATAOUT;
		volatile struct {
			unsigned INTLINE0 : 1;		// bit 0
			unsigned INTLINE1 : 1;		// bit 1
			unsigned INTLINE2 : 1;		// bit 2
			unsigned INTLINE3 : 1;		// bit 3
			unsigned INTLINE4 : 1;		// bit 4
			unsigned INTLINE5 : 1;		// bit 5
			unsigned INTLINE6 : 1;		// bit 6
			unsigned INTLINE7 : 1;		// bit 7
			unsigned INTLINE8 : 1;		// bit 8
			unsigned INTLINE9 : 1;		// bit 9
			unsigned INTLINE10 : 1;		// bit 10
			unsigned INTLINE11 : 1;		// bit 11
			unsigned INTLINE12 : 1;		// bit 12
			unsigned INTLINE13 : 1;		// bit 13
			unsigned INTLINE14 : 1;		// bit 14
			unsigned INTLINE15 : 1;		// bit 15
			unsigned INTLINE16 : 1;		// bit 16
			unsigned INTLINE17 : 1;		// bit 17
			unsigned INTLINE18 : 1;		// bit 18
			unsigned INTLINE19 : 1;		// bit 19
			unsigned INTLINE20 : 1;		// bit 20
			unsigned INTLINE21 : 1;		// bit 21
			unsigned INTLINE22 : 1;		// bit 22
			unsigned INTLINE23 : 1;		// bit 23
			unsigned INTLINE24 : 1;		// bit 24
			unsigned INTLINE25 : 1;		// bit 25
			unsigned INTLINE26 : 1;		// bit 26
			unsigned INTLINE27 : 1;		// bit 27
			unsigned INTLINE28 : 1;		// bit 28
			unsigned INTLINE29 : 1;		// bit 29
			unsigned INTLINE30 : 1;		// bit 30
			unsigned INTLINE31 : 1;		// bit 31
		} GPIO_SETDATAOUT_bit;
	}; // 0x194
} gpio;

#define GPIO0 (*(volatile gpio *)(0x44E07000))
#define GPIO1 (*(volatile gpio *)(0x4804C000))
#define GPIO2 (*(volatile gpio *)(0x481AC000))
#define GPIO3 (*(volatile gpio *)(0x481AE000))

#endif /* _AM335X_SYS_GPIO_H_ */
