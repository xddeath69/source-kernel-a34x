/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
*/

#ifndef _DDP_REG_MMSYS_H_
#define _DDP_REG_MMSYS_H_

/* field definition */
/* ------------------------------------------------------------- */
/* Config */
#define DISP_REG_CONFIG_MMSYS_INTEN (DISPSYS_CONFIG_BASE + 0x0)
#define DISP_REG_CONFIG_MMSYS_INTSTA (DISPSYS_CONFIG_BASE + 0x4)
#define DISP_REG_CONFIG_MFG_APB_TX_CON (DISPSYS_CONFIG_BASE + 0xc)

#define DISP_REG_CONFIG_MMSYS_MISC (DISPSYS_CONFIG_BASE + 0x0F0)
#define DISP_REG_CONFIG_MMSYS_SODI_REQ_MASK (DISPSYS_CONFIG_BASE + 0x0F4)
#define MMSYS_SODI_REQ_MASK_FLD_SODI_REQ_SEL REG_FLD_MSB_LSB(11, 8)
#define MMSYS_SODI_REQ_MASK_FLD_SODI_REQ_VAL REG_FLD_MSB_LSB(15, 12)

#define DISP_REG_CONFIG_MMSYS_EMI_REQ_CTL (DISPSYS_CONFIG_BASE + 0x0F8)
#define MMSYS_EMI_REQ_CTL_FLD_HRT_URGENT_CTL REG_FLD_MSB_LSB(7, 0)

#define DISP_REG_CONFIG_MMSYS_RPT (DISPSYS_CONFIG_BASE + 0x0FC)

#define DISP_REG_CONFIG_MMSYS_CG_CON0 (DISPSYS_CONFIG_BASE + 0x100)
#define DISP_REG_CONFIG_MMSYS_CG_SET0 (DISPSYS_CONFIG_BASE + 0x104)
#define DISP_REG_CONFIG_MMSYS_CG_CLR0 (DISPSYS_CONFIG_BASE + 0x108)
	#define MMSYS_CG_FLD_FAKE_ENG REG_FLD_MSB_LSB(18, 18)
#define DISP_REG_CONFIG_MMSYS_CG_CON1 (DISPSYS_CONFIG_BASE + 0x110)
#define DISP_REG_CONFIG_MMSYS_CG_SET1 (DISPSYS_CONFIG_BASE + 0x114)
#define DISP_REG_CONFIG_MMSYS_CG_CLR1 (DISPSYS_CONFIG_BASE + 0x118)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_DIS0 (DISPSYS_CONFIG_BASE + 0x120)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_DIS_SET0 (DISPSYS_CONFIG_BASE + 0x124)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_DIS_CLR0 (DISPSYS_CONFIG_BASE + 0x128)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_DIS1 (DISPSYS_CONFIG_BASE + 0x130)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_DIS_SET1 (DISPSYS_CONFIG_BASE + 0x134)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_DIS_CLR1 (DISPSYS_CONFIG_BASE + 0x138)
#define DISP_REG_CONFIG_MMSYS_SW0_RST_B (DISPSYS_CONFIG_BASE + 0x140)
#define DISP_REG_CONFIG_MMSYS_SW1_RST_B (DISPSYS_CONFIG_BASE + 0x144)
#define DISP_REG_CONFIG_MMSYS_LCM_RST_B (DISPSYS_CONFIG_BASE + 0x150)

#define DISP_REG_CONFIG_SMI_N21MUX_CFG_WR (DISPSYS_CONFIG_BASE + 0x168)
#define DISP_REG_CONFIG_SMI_N21MUX_CFG_RD (DISPSYS_CONFIG_BASE + 0x16c)
#define DISP_REG_CONFIG_ELA2GMC_BASE_ADDR (DISPSYS_CONFIG_BASE + 0x170)
#define DISP_REG_CONFIG_ELA2GMC_BASE_ADDR_END (DISPSYS_CONFIG_BASE + 0x174)
#define DISP_REG_CONFIG_ELA2GMC_FINAL_ADDR (DISPSYS_CONFIG_BASE + 0x178)
#define DISP_REG_CONFIG_ELA2GMC_STATUS (DISPSYS_CONFIG_BASE + 0x17c)
#define DISP_REG_CONFIG_LARB6_AXI_ASIF_CFG_WD (DISPSYS_CONFIG_BASE + 0x180)
#define DISP_REG_CONFIG_LARB6_AXI_ASIF_CFG_RD (DISPSYS_CONFIG_BASE + 0x184)
#define DISP_REG_CONFIG_PROC_TRACK_EMI_BUSY_CON (DISPSYS_CONFIG_BASE + 0x190)

#define DISP_REG_CONFIG_DISP_FAKE_ENG_EN (DISPSYS_CONFIG_BASE + 0x200)
#define DISP_REG_CONFIG_DISP_FAKE_ENG_RST (DISPSYS_CONFIG_BASE + 0x204)
#define DISP_REG_CONFIG_DISP_FAKE_ENG_CON0 (DISPSYS_CONFIG_BASE + 0x208)
#define DISP_REG_CONFIG_DISP_FAKE_ENG_CON1 (DISPSYS_CONFIG_BASE + 0x20c)
#define DISP_REG_CONFIG_DISP_FAKE_ENG_RD_ADDR (DISPSYS_CONFIG_BASE + 0x210)
#define DISP_REG_CONFIG_DISP_FAKE_ENG_WR_ADDR (DISPSYS_CONFIG_BASE + 0x214)
#define DISP_REG_CONFIG_DISP_FAKE_ENG_STATE (DISPSYS_CONFIG_BASE + 0x218)
#define DISP_REG_CONFIG_DISP_FAKE2_ENG_EN (DISPSYS_CONFIG_BASE + 0x220)
#define DISP_REG_CONFIG_DISP_FAKE2_ENG_RST (DISPSYS_CONFIG_BASE + 0x224)
#define DISP_REG_CONFIG_DISP_FAKE2_ENG_CON0 (DISPSYS_CONFIG_BASE + 0x228)
#define DISP_REG_CONFIG_DISP_FAKE2_ENG_CON1 (DISPSYS_CONFIG_BASE + 0x22c)
#define DISP_REG_CONFIG_DISP_FAKE2_ENG_RD_ADDR (DISPSYS_CONFIG_BASE + 0x230)
#define DISP_REG_CONFIG_DISP_FAKE2_ENG_WR_ADDR (DISPSYS_CONFIG_BASE + 0x234)
#define DISP_REG_CONFIG_DISP_FAKE2_ENG_STATE (DISPSYS_CONFIG_BASE + 0x238)

#define DISP_REG_CONFIG_MMSYS_DEBUG_OUT_SEL (DISPSYS_CONFIG_BASE + 0x300)

#define DISP_REG_CONFIG_MMSYS_DUMMY0 (DISPSYS_CONFIG_BASE + 0x400)
#define DISP_REG_CONFIG_MMSYS_DUMMY1 (DISPSYS_CONFIG_BASE + 0x404)
#define DISP_REG_CONFIG_MMSYS_DUMMY2 (DISPSYS_CONFIG_BASE + 0x408)
#define DISP_REG_CONFIG_MMSYS_DUMMY3 (DISPSYS_CONFIG_BASE + 0x40C)

#define DISP_REG_CONFIG_MMSYS_MBIST_CON (DISPSYS_CONFIG_BASE + 0x800)
#define DISP_REG_CONFIG_MMSYS_MBIST_DONE (DISPSYS_CONFIG_BASE + 0x804)
#define DISP_REG_CONFIG_MMSYS_MBIST_HOLDB (DISPSYS_CONFIG_BASE + 0x808)
#define DISP_REG_CONFIG_MMSYS_MBIST_MODE (DISPSYS_CONFIG_BASE + 0x80c)
#define DISP_REG_CONFIG_MMSYS_MBIST_FAIL0 (DISPSYS_CONFIG_BASE + 0x810)
#define DISP_REG_CONFIG_MMSYS_MBIST_FAIL1 (DISPSYS_CONFIG_BASE + 0x814)
#define DISP_REG_CONFIG_MMSYS_MBIST_FAIL2 (DISPSYS_CONFIG_BASE + 0x818)
#define DISP_REG_CONFIG_MMSYS_MBIST_FAIL3 (DISPSYS_CONFIG_BASE + 0x81c)
#define DISP_REG_CONFIG_MMSYS_MBIST_DEBUG (DISPSYS_CONFIG_BASE + 0x820)
#define DISP_REG_CONFIG_MMSYS_MBIST_DIAG_SCANOUT (DISPSYS_CONFIG_BASE + 0x824)
#define DISP_REG_CONFIG_MMSYS_MBIST_PRE_FUSE (DISPSYS_CONFIG_BASE + 0x828)

#define DISP_REG_CONFIG_MMSYS_MBIST_BSEL0 (DISPSYS_CONFIG_BASE + 0x82c)
#define DISP_REG_CONFIG_MMSYS_MBIST_BSEL1 (DISPSYS_CONFIG_BASE + 0x830)
#define DISP_REG_CONFIG_MMSYS_MBIST_BSEL2 (DISPSYS_CONFIG_BASE + 0x834)
#define DISP_REG_CONFIG_MMSYS_MBIST_BSEL3 (DISPSYS_CONFIG_BASE + 0x838)
#define DISP_REG_CONFIG_MMSYS_MBIST_HDEN (DISPSYS_CONFIG_BASE + 0x83C)

#define DISP_REG_CONFIG_MMSYS_MBIST_HDEN0 (DISPSYS_CONFIG_BASE + 0x840)
#define DISP_REG_CONFIG_MMSYS_MBIST_HDEN1 (DISPSYS_CONFIG_BASE + 0x844)
#define DISP_REG_CONFIG_MMSYS_MBIST_DREQ0 (DISPSYS_CONFIG_BASE + 0x848)
#define DISP_REG_CONFIG_MMSYS_MBIST_DREQ1 (DISPSYS_CONFIG_BASE + 0x84c)

#define DISP_REG_CONFIG_MDP_WDMA_MEM_DELSEL (DISPSYS_CONFIG_BASE + 0x850)
#define DISP_REG_CONFIG_MDP_WROT0_MEM_DELSEL (DISPSYS_CONFIG_BASE + 0x854)
#define DISP_REG_CONFIG_MDP_WROT1_MEM_DELSEL (DISPSYS_CONFIG_BASE + 0x858)

#define DISP_REG_CONFIG_MMSYS_MBIST_DELSEL0	 (DISPSYS_CONFIG_BASE + 0x860)
#define DISP_REG_CONFIG_MMSYS_MBIST_DELSEL1 (DISPSYS_CONFIG_BASE + 0x864)
#define DISP_REG_CONFIG_MMSYS_MBIST_DELSEL2 (DISPSYS_CONFIG_BASE + 0x868)
#define DISP_REG_CONFIG_MMSYS_MBIST_DELSEL3 (DISPSYS_CONFIG_BASE + 0x86c)
#define DISP_REG_CONFIG_MMSYS_MBIST_DELSEL4 (DISPSYS_CONFIG_BASE + 0x870)
#define DISP_REG_CONFIG_MMSYS_MBIST_DELSEL5 (DISPSYS_CONFIG_BASE + 0x874)
#define DISP_REG_CONFIG_MMSYS_MBIST_DELSEL6 (DISPSYS_CONFIG_BASE + 0x878)
#define DISP_REG_CONFIG_MMSYS_MBIST_DELSEL7 (DISPSYS_CONFIG_BASE + 0x87C)
#define DISP_REG_CONFIG_MMSYS_MBIST_DELSEL8 (DISPSYS_CONFIG_BASE + 0x880)
#define DISP_REG_CONFIG_MMSYS_MBIST_DELSEL9 (DISPSYS_CONFIG_BASE + 0x884)
#define DISP_REG_CONFIG_MMSYS_MBIST_DELSEL10 (DISPSYS_CONFIG_BASE + 0x888)
#define DISP_REG_CONFIG_MMSYS_MBIST_DELSEL11 (DISPSYS_CONFIG_BASE + 0x88C)
#define DISP_REG_CONFIG_MMSYS_MBIST_DELSEL12 (DISPSYS_CONFIG_BASE + 0x890)
#define DISP_REG_CONFIG_MMSYS_MBIST_DELSEL13 (DISPSYS_CONFIG_BASE + 0x894)
#define DISP_REG_CONFIG_MMSYS_MBIST_DELSEL14 (DISPSYS_CONFIG_BASE + 0x898)
#define DISP_REG_CONFIG_MMSYS_MBIST_DELSEL15 (DISPSYS_CONFIG_BASE + 0x89c)

#define DISP_REG_CONFIG_MMSYS_MBIST_RP_RST_B (DISPSYS_CONFIG_BASE + 0x8A0)
#define DISP_REG_CONFIG_MMSYS_MBIST_RP_FAIL0 (DISPSYS_CONFIG_BASE + 0x8B0)
#define DISP_REG_CONFIG_MMSYS_MBIST_RP_FAIL1 (DISPSYS_CONFIG_BASE + 0x8B4)
#define DISP_REG_CONFIG_MMSYS_MBIST_RP_OK0	 (DISPSYS_CONFIG_BASE + 0x8B8)
#define DISP_REG_CONFIG_MMSYS_MBIST_RP_OK1	 (DISPSYS_CONFIG_BASE + 0x8BC)
#define DISP_REG_CONFIG_MMSYS_USE_DEFAULT_DELSEL (DISPSYS_CONFIG_BASE + 0x8C0)

#define DISP_REG_CONFIG_SMI_LARB0_GREQ (DISPSYS_CONFIG_BASE + 0x8DC)

/* #define DISP_REG_CONFIG_MDP_MOUT_MASK (DISPSYS_CONFIG_BASE + 0x8E8) */
/* #define DISP_REG_CONFIG_POWER_READ (DISPSYS_CONFIG_BASE + 0x8EC) */
#define DISP_REG_CONFIG_HRT_WEIGHT_READ (DISPSYS_CONFIG_BASE + 0x8F0)

#define DISP_REG_CONFIG_MMSYS_MOUT_RST (DISPSYS_CONFIG_BASE + 0xF00)

#define DISP_REG_CONFIG_MDP_COLOR0_OUT_SEL_IN (DISPSYS_CONFIG_BASE + 0xF30)
#define DISP_REG_CONFIG_DISP_OVL0_MOUT_EN (DISPSYS_CONFIG_BASE + 0xF3C)
#define DISP_REG_CONFIG_DISP_OVL0_2L_MOUT_EN (DISPSYS_CONFIG_BASE + 0xF40)
#define DISP_REG_CONFIG_DISP_RSZ0_MOUT_EN (DISPSYS_CONFIG_BASE + 0xF44)
#define DISP_REG_CONFIG_DISP_RDMA0_RSZ0_IN_SOUT_SEL	\
			(DISPSYS_CONFIG_BASE + 0xF48)
#define DISP_REG_CONFIG_DISP_RDMA0_SOUT_SEL (DISPSYS_CONFIG_BASE + 0xF4C)
#define DISP_REG_CONFIG_DITHER0_MOUT_EN (DISPSYS_CONFIG_BASE + 0xF50)
#define DISP_REG_CONFIG_DISP_PATH0_SEL_IN (DISPSYS_CONFIG_BASE + 0xF54)
#define DISP_REG_CONFIG_DISP_RSZ0_SEL_IN (DISPSYS_CONFIG_BASE + 0xF58)
#define DISP_REG_CONFIG_DISP_RDMA0_RSZ0_SEL_IN (DISPSYS_CONFIG_BASE + 0xF60)
#define DISP_REG_CONFIG_DISP_COLOR0_OUT_SEL_IN (DISPSYS_CONFIG_BASE + 0xF64)
#define DISP_REG_CONFIG_DSI0_SEL_IN (DISPSYS_CONFIG_BASE + 0xF68)
#define DISP_REG_CONFIG_DISP_WDMA0_SEL_IN (DISPSYS_CONFIG_BASE + 0xF6C)

#define DISP_REG_CONFIG_DISP_MOUT_MASK (DISPSYS_CONFIG_BASE + 0x8A0)
#define DISP_REG_CONFIG_DISP_MOUT_MASK1 (DISPSYS_CONFIG_BASE + 0x8A4)

#define DISP_REG_CONFIG_DISP_DL_VALID_0 (DISPSYS_CONFIG_BASE + 0xFB0)
#define DISP_REG_CONFIG_DISP_DL_VALID_1 (DISPSYS_CONFIG_BASE + 0xFB4)
#define DISP_REG_CONFIG_DISP_DL_VALID_2 (DISPSYS_CONFIG_BASE + 0xFB8)

#define DISP_REG_CONFIG_DISP_DL_READY_0 (DISPSYS_CONFIG_BASE + 0xFC0)
#define DISP_REG_CONFIG_DISP_DL_READY_1 (DISPSYS_CONFIG_BASE + 0xFC4)
#define DISP_REG_CONFIG_DISP_DL_READY_2 (DISPSYS_CONFIG_BASE + 0xFC8)


/* field definition */
/* ------------------------------------------------------------- */

#endif
