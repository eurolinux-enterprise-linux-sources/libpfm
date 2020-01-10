/*
 * Copyright (c) 2012 Google, Inc
 * Contributed by Stephane Eranian <eranian@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
 * PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
 * CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
 * OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * This file is part of libpfm, a performance monitoring support library for
 * applications on Linux.
 *
 * This file has been automatically generated.
 *
 * PMU: snbep_unc_ha (Intel SandyBridge-EP HA uncore PMU)
 */

static const intel_x86_umask_t snbep_unc_h_conflict_cycles[]={
  { .uname = "CONFLICT",
    .udesc  = "Number of cycles that we are handling conflicts",
    .ucode  = 0x200,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "NO_CONFLICT",
    .udesc  = "Number of cycles that we are not handling conflicts",
    .ucode  = 0x100,
    .uflags = INTEL_X86_NCOMBO,
  },
};

static const intel_x86_umask_t snbep_unc_h_directory_lookup[]={
  { .uname = "NO_SNP",
    .udesc  = "Snoop not needed",
    .ucode  = 0x200,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "SNP",
    .udesc  = "Snoop needed",
    .ucode  = 0x100,
    .uflags = INTEL_X86_NCOMBO,
  },
};

static const intel_x86_umask_t snbep_unc_h_directory_update[]={
  { .uname = "ANY",
    .udesc  = "Counts any directory update",
    .ucode  = 0x300,
    .uflags = INTEL_X86_NCOMBO | INTEL_X86_DFL,
  },
  { .uname = "CLEAR",
    .udesc  = "Directory clears",
    .ucode  = 0x200,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "SET",
    .udesc  = "Directory set",
    .ucode  = 0x100,
    .uflags = INTEL_X86_NCOMBO,
  },
};

static const intel_x86_umask_t snbep_unc_h_igr_no_credit_cycles[]={
  { .uname = "AD_QPI0",
    .udesc  = "AD to QPI link 0",
    .ucode  = 0x100,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "AD_QPI1",
    .udesc  = "AD to QPI link 1",
    .ucode  = 0x200,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "BL_QPI0",
    .udesc  = "BL to QPI link 0",
    .ucode  = 0x400,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "BL_QPI1",
    .udesc  = "BL to QPI link 1",
    .ucode  = 0x800,
    .uflags = INTEL_X86_NCOMBO,
  },
};

static const intel_x86_umask_t snbep_unc_h_imc_writes[]={
  { .uname = "ALL",
    .udesc  = "Counts all writes",
    .ucode  = 0xf00,
    .uflags = INTEL_X86_NCOMBO | INTEL_X86_DFL,
  },
  { .uname = "FULL",
    .udesc  = "Counts full line non ISOCH",
    .ucode  = 0x100,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "FULL_ISOCH",
    .udesc  = "Counts ISOCH full line",
    .ucode  = 0x400,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "PARTIAL",
    .udesc  = "Counts partial non-ISOCH",
    .ucode  = 0x200,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "PARTIAL_ISOCH",
    .udesc  = "Counts ISOCH partial",
    .ucode  = 0x800,
    .uflags = INTEL_X86_NCOMBO,
  },
};

static const intel_x86_umask_t snbep_unc_h_requests[]={
  { .uname = "READS",
    .udesc  = "Counts incoming read requests. Good proxy for LLC read misses, incl. RFOs",
    .ucode  = 0x300,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "WRITES",
    .udesc  = "Counts incoming writes",
    .ucode  = 0xc00,
    .uflags = INTEL_X86_NCOMBO,
  },
};

static const intel_x86_umask_t snbep_unc_h_rpq_cycles_no_reg_credits[]={
  { .uname = "CHN0",
    .udesc  = "Channel 0",
    .ucode  = 0x100,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "CHN1",
    .udesc  = "Channel 1",
    .ucode  = 0x200,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "CHN2",
    .udesc  = "channel 2",
    .ucode  = 0x400,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "CHN3",
    .udesc  = "Chanell 3",
    .ucode  = 0x800,
    .uflags = INTEL_X86_NCOMBO,
  },
};

static const intel_x86_umask_t snbep_unc_h_tad_requests_g0[]={
  { .uname = "REGION0",
    .udesc  = "Counts for TAD Region 0",
    .ucode  = 0x100,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "REGION1",
    .udesc  = "Counts for TAD Region 1",
    .ucode  = 0x200,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "REGION2",
    .udesc  = "Counts for TAD Region 2",
    .ucode  = 0x400,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "REGION3",
    .udesc  = "Counts for TAD Region 3",
    .ucode  = 0x800,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "REGION4",
    .udesc  = "Counts for TAD Region 4",
    .ucode  = 0x1000,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "REGION5",
    .udesc  = "Counts for TAD Region 5",
    .ucode  = 0x2000,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "REGION6",
    .udesc  = "Counts for TAD Region 6",
    .ucode  = 0x4000,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "REGION7",
    .udesc  = "Counts for TAD Region 7",
    .ucode  = 0x8000,
    .uflags = INTEL_X86_NCOMBO,
  },
};

static const intel_x86_umask_t snbep_unc_h_tad_requests_g1[]={
  { .uname = "REGION8",
    .udesc  = "Counts for TAD Region 8",
    .ucode  = 0x100,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "REGION9",
    .udesc  = "Counts for TAD Region 9",
    .ucode  = 0x200,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "REGION10",
    .udesc  = "Counts for TAD Region 10",
    .ucode  = 0x400,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "REGION11",
    .udesc  = "Counts for TAD Region 11",
    .ucode  = 0x800,
    .uflags = INTEL_X86_NCOMBO,
  },
};

static const intel_x86_umask_t snbep_unc_h_tracker_inserts[]={
  { .uname = "ALL",
    .udesc  = "Counts all requests",
    .ucode  = 0x300,
    .uflags = INTEL_X86_NCOMBO | INTEL_X86_DFL,
  },
};

static const intel_x86_umask_t snbep_unc_h_txr_ad[]={
  { .uname = "NDR",
    .udesc  = "Counts non-data responses",
    .ucode  = 0x100,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "SNP",
    .udesc  = "Counts outbound snoops send on the ring",
    .ucode  = 0x200,
    .uflags = INTEL_X86_NCOMBO,
  },
};

static const intel_x86_umask_t snbep_unc_h_txr_ad_cycles_full[]={
  { .uname = "ALL",
    .udesc  = "Counts cycles full from both schedulers",
    .ucode  = 0x300,
    .uflags = INTEL_X86_NCOMBO | INTEL_X86_DFL,
  },
  { .uname = "SCHED0",
    .udesc  = "Counts cycles full from scheduler bank 0",
    .ucode  = 0x100,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "SCHED1",
    .udesc  = "Counts cycles full from scheduler bank 1",
    .ucode  = 0x200,
    .uflags = INTEL_X86_NCOMBO,
  },
};

static const intel_x86_umask_t snbep_unc_h_txr_ak_cycles_full[]={
  { .uname = "ALL",
    .udesc  = "Counts cycles from both schedulers",
    .ucode  = 0x300,
    .uflags = INTEL_X86_NCOMBO | INTEL_X86_DFL,
  },
  { .uname = "SCHED0",
    .udesc  = "Counts cycles from scheduler bank 0",
    .ucode  = 0x100,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "SCHED1",
    .udesc  = "Counts cycles from scheduler bank 1",
    .ucode  = 0x200,
    .uflags = INTEL_X86_NCOMBO,
  },
};

static const intel_x86_umask_t snbep_unc_h_txr_bl[]={
  { .uname = "DRS_CACHE",
    .udesc  = "Counts data being sent to the cache",
    .ucode  = 0x100,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "DRS_CORE",
    .udesc  = "Counts data being sent directly to the requesting core",
    .ucode  = 0x200,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "DRS_QPI",
    .udesc  = "Counts data being sent to a remote socket over QPI",
    .ucode  = 0x400,
    .uflags = INTEL_X86_NCOMBO,
  },
};

static const intel_x86_umask_t snbep_unc_h_wpq_cycles_no_reg_credits[]={
  { .uname = "CHN0",
    .udesc  = "HA iMC CHN0 WPQ Credits Empty - Regular",
    .ucode  = 0x100,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "CHN1",
    .udesc  = "HA iMC CHN0 WPQ Credits Empty - Regular",
    .ucode  = 0x200,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "CHN2",
    .udesc  = "HA iMC CHN0 WPQ Credits Empty - Regular",
    .ucode  = 0x400,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "CHN3",
    .udesc  = "HA iMC CHN0 WPQ Credits Empty - Regular",
    .ucode  = 0x800,
    .uflags = INTEL_X86_NCOMBO,
  },
};

static const intel_x86_umask_t snbep_unc_h_txr_bl_cycles_full[]={
  { .uname = "ALL",
    .udesc  = "BL Egress Full",
    .ucode  = 0x300,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "SCHED0",
    .udesc  = "BL Egress Full",
    .ucode  = 0x100,
    .uflags = INTEL_X86_NCOMBO,
  },
  { .uname = "SCHED1",
    .udesc  = "BL Egress Full",
    .ucode  = 0x200,
    .uflags = INTEL_X86_NCOMBO,
  },
};

#if 0
static const intel_x86_umask_t snbep_unc_h_addr_opc_match[]={
  { .uname = "FILT",
    .udesc  = "Number of addr and opcode matches (opc via opc= or address via addr= modifiers)",
    .ucode  = 0x300,
    .uflags = INTEL_X86_NCOMBO | INTEL_X86_DFL | INTEL_X86_ADDR,
  },
};
#endif

static const intel_x86_entry_t intel_snbep_unc_h_pe[]={
  { .name   = "UNC_H_CLOCKTICKS",
    .desc   = "HA Uncore clockticks",
    .modmsk = SNBEP_UNC_HA_ATTRS,
    .cntmsk = 0xf,
    .code = 0x00,
  },
  { .name = "UNC_H_CONFLICT_CYCLES",
    .desc = "Conflict Checks",
    .code = 0xb,
    .cntmsk = 0xf,
    .ngrp = 1,
    .modmsk = SNBEP_UNC_HA_ATTRS,
    .numasks = LIBPFM_ARRAY_SIZE(snbep_unc_h_conflict_cycles),
    .umasks  = snbep_unc_h_conflict_cycles,
  },
  { .name = "UNC_H_DIRECT2CORE_COUNT",
    .desc = "Direct2Core Messages Sent",
    .code = 0x11,
    .cntmsk = 0xf,
    .modmsk = SNBEP_UNC_HA_ATTRS,
  },
  { .name = "UNC_H_DIRECT2CORE_CYCLES_DISABLED",
    .desc = "Cycles when Direct2Core was Disabled",
    .code = 0x12,
    .cntmsk = 0xf,
    .modmsk = SNBEP_UNC_HA_ATTRS,
  },
  { .name = "UNC_H_DIRECT2CORE_TXN_OVERRIDE",
    .desc = "Number of Reads that had Direct2Core Overridden",
    .code = 0x13,
    .cntmsk = 0xf,
    .modmsk = SNBEP_UNC_HA_ATTRS,
  },
  { .name = "UNC_H_DIRECTORY_LOOKUP",
    .desc = "Directory Lookups",
    .code = 0xc,
    .cntmsk = 0xf,
    .ngrp = 1,
    .modmsk = SNBEP_UNC_HA_ATTRS,
    .numasks = LIBPFM_ARRAY_SIZE(snbep_unc_h_directory_lookup),
    .umasks  = snbep_unc_h_directory_lookup
  },
  { .name = "UNC_H_DIRECTORY_UPDATE",
    .desc = "Directory Updates",
    .code = 0xd,
    .cntmsk = 0xf,
    .ngrp = 1,
    .modmsk = SNBEP_UNC_HA_ATTRS,
    .numasks = LIBPFM_ARRAY_SIZE(snbep_unc_h_directory_update),
    .umasks  = snbep_unc_h_directory_update
  },
  { .name = "UNC_H_IGR_NO_CREDIT_CYCLES",
    .desc = "Cycles without QPI Ingress Credits",
    .code = 0x22,
    .cntmsk = 0xf,
    .ngrp = 1,
    .modmsk = SNBEP_UNC_HA_ATTRS,
    .numasks = LIBPFM_ARRAY_SIZE(snbep_unc_h_igr_no_credit_cycles),
    .umasks  = snbep_unc_h_igr_no_credit_cycles
  },
  { .name = "UNC_H_IMC_RETRY",
    .desc = "Retry Events",
    .code = 0x1e,
    .cntmsk = 0xf,
    .modmsk = SNBEP_UNC_HA_ATTRS,
  },
  { .name = "UNC_H_IMC_WRITES",
    .desc = "HA to iMC Full Line Writes Issued",
    .code = 0x1a,
    .cntmsk = 0xf,
    .ngrp = 1,
    .modmsk = SNBEP_UNC_HA_ATTRS,
    .numasks = LIBPFM_ARRAY_SIZE(snbep_unc_h_imc_writes),
    .umasks  = snbep_unc_h_imc_writes
  },
  { .name = "UNC_H_REQUESTS",
    .desc = "Read and Write Requests",
    .code = 0x1,
    .cntmsk = 0xf,
    .ngrp = 1,
    .modmsk = SNBEP_UNC_HA_ATTRS,
    .numasks = LIBPFM_ARRAY_SIZE(snbep_unc_h_requests),
    .umasks  = snbep_unc_h_requests
  },
  { .name = "UNC_H_RPQ_CYCLES_NO_REG_CREDITS",
    .desc = "iMC RPQ Credits Empty - Regular",
    .code = 0x15,
    .cntmsk = 0xf,
    .ngrp = 1,
    .modmsk = SNBEP_UNC_HA_ATTRS,
    .numasks = LIBPFM_ARRAY_SIZE(snbep_unc_h_rpq_cycles_no_reg_credits),
    .umasks  = snbep_unc_h_rpq_cycles_no_reg_credits
  },
  { .name = "UNC_H_TAD_REQUESTS_G0",
    .desc = "HA Requests to a TAD Region - Group 0",
    .code = 0x1b,
    .cntmsk = 0xf,
    .ngrp = 1,
    .modmsk = SNBEP_UNC_HA_ATTRS,
    .numasks = LIBPFM_ARRAY_SIZE(snbep_unc_h_tad_requests_g0),
    .umasks  = snbep_unc_h_tad_requests_g0
  },
  { .name = "UNC_H_TAD_REQUESTS_G1",
    .desc = "HA Requests to a TAD Region - Group 1",
    .code = 0x1c,
    .cntmsk = 0xf,
    .ngrp = 1,
    .modmsk = SNBEP_UNC_HA_ATTRS,
    .numasks = LIBPFM_ARRAY_SIZE(snbep_unc_h_tad_requests_g1),
    .umasks  = snbep_unc_h_tad_requests_g1
  },
  { .name = "UNC_H_TRACKER_INSERTS",
    .desc = "Tracker Allocations",
    .code = 0x6,
    .cntmsk = 0xf,
    .ngrp = 1,
    .modmsk = SNBEP_UNC_HA_ATTRS,
    .numasks = LIBPFM_ARRAY_SIZE(snbep_unc_h_tracker_inserts),
    .umasks  = snbep_unc_h_tracker_inserts
  },
  { .name = "UNC_H_TXR_AD",
    .desc = "Outbound NDR Ring Transactions",
    .code = 0xf,
    .cntmsk = 0xf,
    .ngrp = 1,
    .modmsk = SNBEP_UNC_HA_ATTRS,
    .numasks = LIBPFM_ARRAY_SIZE(snbep_unc_h_txr_ad),
    .umasks  = snbep_unc_h_txr_ad
  },
  { .name = "UNC_H_TXR_AD_CYCLES_FULL",
    .desc = "AD Egress Full",
    .code = 0x2a,
    .cntmsk = 0xf,
    .ngrp = 1,
    .modmsk = SNBEP_UNC_HA_ATTRS,
    .numasks = LIBPFM_ARRAY_SIZE(snbep_unc_h_txr_ad_cycles_full),
    .umasks  = snbep_unc_h_txr_ad_cycles_full
  },
  { .name = "UNC_H_TXR_AK_CYCLES_FULL",
    .desc = "AK Egress Full",
    .code = 0x32,
    .cntmsk = 0xf,
    .ngrp = 1,
    .modmsk = SNBEP_UNC_HA_ATTRS,
    .numasks = LIBPFM_ARRAY_SIZE(snbep_unc_h_txr_ak_cycles_full),
    .umasks  = snbep_unc_h_txr_ak_cycles_full
  },
  { .name = "UNC_H_TXR_AK_NDR",
    .desc = "Outbound NDR Ring Transactions",
    .code = 0xe,
    .cntmsk = 0xf,
    .modmsk = SNBEP_UNC_HA_ATTRS,
  },
  { .name = "UNC_H_TXR_BL",
    .desc = "Outbound DRS Ring Transactions to Cache",
    .code = 0x10,
    .cntmsk = 0xf,
    .ngrp = 1,
    .modmsk = SNBEP_UNC_HA_ATTRS,
    .numasks = LIBPFM_ARRAY_SIZE(snbep_unc_h_txr_bl),
    .umasks  = snbep_unc_h_txr_bl
  },
  { .name = "UNC_H_TXR_BL_CYCLES_FULL",
    .desc = "BL Egress Full",
    .code = 0x36,
    .cntmsk = 0xf,
    .ngrp = 1,
    .modmsk = SNBEP_UNC_HA_ATTRS,
    .numasks = LIBPFM_ARRAY_SIZE(snbep_unc_h_txr_ak_cycles_full),
    .umasks  = snbep_unc_h_txr_ak_cycles_full, /* identical to snbep_unc_h_txr_ak_cycles_full */
  },
  { .name = "UNC_H_WPQ_CYCLES_NO_REG_CREDITS",
    .desc = "HA iMC CHN0 WPQ Credits Empty - Regular",
    .code = 0x18,
    .cntmsk = 0xf,
    .ngrp = 1,
    .modmsk = SNBEP_UNC_HA_ATTRS,
    .numasks = LIBPFM_ARRAY_SIZE(snbep_unc_h_rpq_cycles_no_reg_credits),
    .umasks  = snbep_unc_h_rpq_cycles_no_reg_credits , /* identical to snbep_unc_h_rpq_cycles_no_reg_credits */
  },
#if 0
  { .name = "UNC_H_ADDR_OPC_MATCH",
    .desc = "QPI address/opcode match",
    .code = 0x20,
    .cntmsk = 0xf,
    .ngrp = 1,
    .modmsk = SNBEP_UNC_HA_OPC_ATTRS,
    .numasks = LIBPFM_ARRAY_SIZE(snbep_unc_h_addr_opc_match),
    .umasks  = snbep_unc_h_addr_opc_match,
  },
#endif
};
