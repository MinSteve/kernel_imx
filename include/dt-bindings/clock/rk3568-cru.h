/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2021 Rockchip Electronics Co. Ltd.
 * Author: Elaine Zhang <zhangqing@rock-chips.com>
 */

#ifndef _DT_BINDINGS_CLK_ROCKCHIP_RK3568_H
#define _DT_BINDINGS_CLK_ROCKCHIP_RK3568_H

/* pmucru-clocks indices */

/* pmucru plls */
#define PLL_PPLL		1
#define PLL_HPLL		2

/* pmucru clocks */
#define XIN_OSC0_DIV		4
#define CLK_RTC_32K		5
#define CLK_PMU			6
#define CLK_I2C0		7
#define CLK_RTC32K_FRAC		8
#define CLK_UART0_DIV		9
#define CLK_UART0_FRAC		10
#define SCLK_UART0		11
#define DBCLK_GPIO0		12
#define CLK_PWM0		13
#define CLK_CAPTURE_PWM0_NDFT	14
#define CLK_PMUPVTM		15
#define CLK_CORE_PMUPVTM	16
#define CLK_REF24M		17
#define XIN_OSC0_USBPHY0_G	18
#define CLK_USBPHY0_REF		19
#define XIN_OSC0_USBPHY1_G	20
#define CLK_USBPHY1_REF		21
#define XIN_OSC0_MIPIDSIPHY0_G	22
#define CLK_MIPIDSIPHY0_REF	23
#define XIN_OSC0_MIPIDSIPHY1_G	24
#define CLK_MIPIDSIPHY1_REF	25
#define CLK_WIFI_DIV		26
#define CLK_WIFI_OSC0		27
#define CLK_WIFI		28
#define CLK_PCIEPHY0_DIV	29
#define CLK_PCIEPHY0_OSC0	30
#define CLK_PCIEPHY0_REF	31
#define CLK_PCIEPHY1_DIV	32
#define CLK_PCIEPHY1_OSC0	33
#define CLK_PCIEPHY1_REF	34
#define CLK_PCIEPHY2_DIV	35
#define CLK_PCIEPHY2_OSC0	36
#define CLK_PCIEPHY2_REF	37
#define CLK_PCIE30PHY_REF_M	38
#define CLK_PCIE30PHY_REF_N	39
#define CLK_HDMI_REF		40
#define XIN_OSC0_EDPPHY_G	41
#define PCLK_PDPMU		42
#define PCLK_PMU		43
#define PCLK_UART0		44
#define PCLK_I2C0		45
#define PCLK_GPIO0		46
#define PCLK_PMUPVTM		47
#define PCLK_PWM0		48
#define CLK_PDPMU		49
#define SCLK_32K_IOE		50

#define CLKPMU_NR_CLKS		(SCLK_32K_IOE + 1)

/* cru-clocks indices */

/* cru plls */
#define PLL_APLL		1
#define PLL_DPLL		2
#define PLL_CPLL		3
#define PLL_GPLL		4
#define PLL_VPLL		5
#define PLL_NPLL		6

/* cru clocks */
#define CPLL_333M		9
#define ARMCLK			10
#define USB480M			11
#define ACLK_CORE_NIU2BUS	18
#define CLK_CORE_PVTM		19
#define CLK_CORE_PVTM_CORE	20
#define CLK_CORE_PVTPLL		21
#define CLK_GPU_SRC		22
#define CLK_GPU_PRE_NDFT	23
#define CLK_GPU_PRE_MUX		24
#define ACLK_GPU_PRE		25
#define PCLK_GPU_PRE		26
#define CLK_GPU			27
#define CLK_GPU_NP5		28
#define PCLK_GPU_PVTM		29
#define CLK_GPU_PVTM		30
#define CLK_GPU_PVTM_CORE	31
#define CLK_GPU_PVTPLL		32
#define CLK_NPU_SRC		33
#define CLK_NPU_PRE_NDFT	34
#define CLK_NPU			35
#define CLK_NPU_NP5		36
#define HCLK_NPU_PRE		37
#define PCLK_NPU_PRE		38
#define ACLK_NPU_PRE		39
#define ACLK_NPU		40
#define HCLK_NPU		41
#define PCLK_NPU_PVTM		42
#define CLK_NPU_PVTM		43
#define CLK_NPU_PVTM_CORE	44
#define CLK_NPU_PVTPLL		45
#define CLK_DDRPHY1X_SRC	46
#define CLK_DDRPHY1X_HWFFC_SRC	47
#define CLK_DDR1X		48
#define CLK_MSCH		49
#define CLK24_DDRMON		50
#define ACLK_GIC_AUDIO		51
#define HCLK_GIC_AUDIO		52
#define HCLK_SDMMC_BUFFER	53
#define DCLK_SDMMC_BUFFER	54
#define ACLK_GIC600		55
#define ACLK_SPINLOCK		56
#define HCLK_I2S0_8CH		57
#define HCLK_I2S1_8CH		58
#define HCLK_I2S2_2CH		59
#define HCLK_I2S3_2CH		60
#define CLK_I2S0_8CH_TX_SRC	61
#define CLK_I2S0_8CH_TX_FRAC	62
#define MCLK_I2S0_8CH_TX	63
#define I2S0_MCLKOUT_TX		64
#define CLK_I2S0_8CH_RX_SRC	65
#define CLK_I2S0_8CH_RX_FRAC	66
#define MCLK_I2S0_8CH_RX	67
#define I2S0_MCLKOUT_RX		68
#define CLK_I2S1_8CH_TX_SRC	69
#define CLK_I2S1_8CH_TX_FRAC	70
#define MCLK_I2S1_8CH_TX	71
#define I2S1_MCLKOUT_TX		72
#define CLK_I2S1_8CH_RX_SRC	73
#define CLK_I2S1_8CH_RX_FRAC	74
#define MCLK_I2S1_8CH_RX	75
#define I2S1_MCLKOUT_RX		76
#define CLK_I2S2_2CH_SRC	77
#define CLK_I2S2_2CH_FRAC	78
#define MCLK_I2S2_2CH		79
#define I2S2_MCLKOUT		80
#define CLK_I2S3_2CH_TX_SRC	81
#define CLK_I2S3_2CH_TX_FRAC	82
#define MCLK_I2S3_2CH_TX	83
#define I2S3_MCLKOUT_TX		84
#define CLK_I2S3_2CH_RX_SRC	85
#define CLK_I2S3_2CH_RX_FRAC	86
#define MCLK_I2S3_2CH_RX	87
#define I2S3_MCLKOUT_RX		88
#define HCLK_PDM		89
#define MCLK_PDM		90
#define HCLK_VAD		91
#define HCLK_SPDIF_8CH		92
#define MCLK_SPDIF_8CH_SRC	93
#define MCLK_SPDIF_8CH_FRAC	94
#define MCLK_SPDIF_8CH		95
#define HCLK_AUDPWM		96
#define SCLK_AUDPWM_SRC		97
#define SCLK_AUDPWM_FRAC	98
#define SCLK_AUDPWM		99
#define HCLK_ACDCDIG		100
#define CLK_ACDCDIG_I2C		101
#define CLK_ACDCDIG_DAC		102
#define CLK_ACDCDIG_ADC		103
#define ACLK_SECURE_FLASH	104
#define HCLK_SECURE_FLASH	105
#define ACLK_CRYPTO_NS		106
#define HCLK_CRYPTO_NS		107
#define CLK_CRYPTO_NS_CORE	108
#define CLK_CRYPTO_NS_PKA	109
#define CLK_CRYPTO_NS_RNG	110
#define HCLK_TRNG_NS		111
#define CLK_TRNG_NS		112
#define PCLK_OTPC_NS		113
#define CLK_OTPC_NS_SBPI	114
#define CLK_OTPC_NS_USR		115
#define HCLK_NANDC		116
#define NCLK_NANDC		117
#define HCLK_SFC		118
#define HCLK_SFC_XIP		119
#define SCLK_SFC		120
#define ACLK_EMMC		121
#define HCLK_EMMC		122
#define BCLK_EMMC		123
#define CCLK_EMMC		124
#define TCLK_EMMC		125
#define ACLK_PIPE		126
#define PCLK_PIPE		127
#define PCLK_PIPE_GRF		128
#define ACLK_PCIE20_MST		129
#define ACLK_PCIE20_SLV		130
#define ACLK_PCIE20_DBI		131
#define PCLK_PCIE20		132
#define CLK_PCIE20_AUX_NDFT	133
#define CLK_PCIE20_AUX_DFT	134
#define CLK_PCIE20_PIPE_DFT	135
#define ACLK_PCIE30X1_MST	136
#define ACLK_PCIE30X1_SLV	137
#define ACLK_PCIE30X1_DBI	138
#define PCLK_PCIE30X1		139
#define CLK_PCIE30X1_AUX_NDFT	140
#define CLK_PCIE30X1_AUX_DFT	141
#define CLK_PCIE30X1_PIPE_DFT	142
#define ACLK_PCIE30X2_MST	143
#define ACLK_PCIE30X2_SLV	144
#define ACLK_PCIE30X2_DBI	145
#define PCLK_PCIE30X2		146
#define CLK_PCIE30X2_AUX_NDFT	147
#define CLK_PCIE30X2_AUX_DFT	148
#define CLK_PCIE30X2_PIPE_DFT	149
#define ACLK_SATA0		150
#define CLK_SATA0_PMALIVE	151
#define CLK_SATA0_RXOOB		152
#define CLK_SATA0_PIPE_NDFT	153
#define CLK_SATA0_PIPE_DFT	154
#define ACLK_SATA1		155
#define CLK_SATA1_PMALIVE	156
#define CLK_SATA1_RXOOB		157
#define CLK_SATA1_PIPE_NDFT	158
#define CLK_SATA1_PIPE_DFT	159
#define ACLK_SATA2		160
#define CLK_SATA2_PMALIVE	161
#define CLK_SATA2_RXOOB		162
#define CLK_SATA2_PIPE_NDFT	163
#define CLK_SATA2_PIPE_DFT	164
#define ACLK_USB3OTG0		165
#define CLK_USB3OTG0_REF	166
#define CLK_USB3OTG0_SUSPEND	167
#define ACLK_USB3OTG1		168
#define CLK_USB3OTG1_REF	169
#define CLK_USB3OTG1_SUSPEND	170
#define CLK_XPCS_EEE		171
#define PCLK_XPCS		172
#define ACLK_PHP		173
#define HCLK_PHP		174
#define PCLK_PHP		175
#define HCLK_SDMMC0		176
#define CLK_SDMMC0		177
#define HCLK_SDMMC1		178
#define CLK_SDMMC1		179
#define ACLK_GMAC0		180
#define PCLK_GMAC0		181
#define CLK_MAC0_2TOP		182
#define CLK_MAC0_OUT		183
#define CLK_MAC0_REFOUT		184
#define CLK_GMAC0_PTP_REF	185
#define ACLK_USB		186
#define HCLK_USB		187
#define PCLK_USB		188
#define HCLK_USB2HOST0		189
#define HCLK_USB2HOST0_ARB	190
#define HCLK_USB2HOST1		191
#define HCLK_USB2HOST1_ARB	192
#define HCLK_SDMMC2		193
#define CLK_SDMMC2		194
#define ACLK_GMAC1		195
#define PCLK_GMAC1		196
#define CLK_MAC1_2TOP		197
#define CLK_MAC1_OUT		198
#define CLK_MAC1_REFOUT		199
#define CLK_GMAC1_PTP_REF	200
#define ACLK_PERIMID		201
#define HCLK_PERIMID		202
#define ACLK_VI			203
#define HCLK_VI			204
#define PCLK_VI			205
#define ACLK_VICAP		206
#define HCLK_VICAP		207
#define DCLK_VICAP		208
#define ICLK_VICAP_G		209
#define ACLK_ISP		210
#define HCLK_ISP		211
#define CLK_ISP			212
#define PCLK_CSI2HOST1		213
#define CLK_CIF_OUT		214
#define CLK_CAM0_OUT		215
#define CLK_CAM1_OUT		216
#define ACLK_VO			217
#define HCLK_VO			218
#define PCLK_VO			219
#define ACLK_VOP_PRE		220
#define ACLK_VOP		221
#define HCLK_VOP		222
#define DCLK_VOP0		223
#define DCLK_VOP1		224
#define DCLK_VOP2		225
#define CLK_VOP_PWM		226
#define ACLK_HDCP		227
#define HCLK_HDCP		228
#define PCLK_HDCP		229
#define PCLK_HDMI_HOST		230
#define CLK_HDMI_SFR		231
#define PCLK_DSITX_0		232
#define PCLK_DSITX_1		233
#define PCLK_EDP_CTRL		234
#define CLK_EDP_200M		235
#define ACLK_VPU_PRE		236
#define HCLK_VPU_PRE		237
#define ACLK_VPU		238
#define HCLK_VPU		239
#define ACLK_RGA_PRE		240
#define HCLK_RGA_PRE		241
#define PCLK_RGA_PRE		242
#define ACLK_RGA		243
#define HCLK_RGA		244
#define CLK_RGA_CORE		245
#define ACLK_IEP		246
#define HCLK_IEP		247
#define CLK_IEP_CORE		248
#define HCLK_EBC		249
#define DCLK_EBC		250
#define ACLK_JDEC		251
#define HCLK_JDEC		252
#define ACLK_JENC		253
#define HCLK_JENC		254
#define PCLK_EINK		255
#define HCLK_EINK		256
#define ACLK_RKVENC_PRE		257
#define HCLK_RKVENC_PRE		258
#define ACLK_RKVENC		259
#define HCLK_RKVENC		260
#define CLK_RKVENC_CORE		261
#define ACLK_RKVDEC_PRE		262
#define HCLK_RKVDEC_PRE		263
#define ACLK_RKVDEC		264
#define HCLK_RKVDEC		265
#define CLK_RKVDEC_CA		266
#define CLK_RKVDEC_CORE		267
#define CLK_RKVDEC_HEVC_CA	268
#define ACLK_BUS		269
#define PCLK_BUS		270
#define PCLK_TSADC		271
#define CLK_TSADC_TSEN		272
#define CLK_TSADC		273
#define PCLK_SARADC		274
#define CLK_SARADC		275
#define PCLK_SCR		276
#define PCLK_WDT_NS		277
#define TCLK_WDT_NS		278
#define ACLK_DMAC0		279
#define ACLK_DMAC1		280
#define ACLK_MCU		281
#define PCLK_INTMUX		282
#define PCLK_MAILBOX		283
#define PCLK_UART1		284
#define CLK_UART1_SRC		285
#define CLK_UART1_FRAC		286
#define SCLK_UART1		287
#define PCLK_UART2		288
#define CLK_UART2_SRC		289
#define CLK_UART2_FRAC		290
#define SCLK_UART2		291
#define PCLK_UART3		292
#define CLK_UART3_SRC		293
#define CLK_UART3_FRAC		294
#define SCLK_UART3		295
#define PCLK_UART4		296
#define CLK_UART4_SRC		297
#define CLK_UART4_FRAC		298
#define SCLK_UART4		299
#define PCLK_UART5		300
#define CLK_UART5_SRC		301
#define CLK_UART5_FRAC		302
#define SCLK_UART5		303
#define PCLK_UART6		304
#define CLK_UART6_SRC		305
#define CLK_UART6_FRAC		306
#define SCLK_UART6		307
#define PCLK_UART7		308
#define CLK_UART7_SRC		309
#define CLK_UART7_FRAC		310
#define SCLK_UART7		311
#define PCLK_UART8		312
#define CLK_UART8_SRC		313
#define CLK_UART8_FRAC		314
#define SCLK_UART8		315
#define PCLK_UART9		316
#define CLK_UART9_SRC		317
#define CLK_UART9_FRAC		318
#define SCLK_UART9		319
#define PCLK_CAN0		320
#define CLK_CAN0		321
#define PCLK_CAN1		322
#define CLK_CAN1		323
#define PCLK_CAN2		324
#define CLK_CAN2		325
#define CLK_I2C			326
#define PCLK_I2C1		327
#define CLK_I2C1		328
#define PCLK_I2C2		329
#define CLK_I2C2		330
#define PCLK_I2C3		331
#define CLK_I2C3		332
#define PCLK_I2C4		333
#define CLK_I2C4		334
#define PCLK_I2C5		335
#define CLK_I2C5		336
#define PCLK_SPI0		337
#define CLK_SPI0		338
#define PCLK_SPI1		339
#define CLK_SPI1		340
#define PCLK_SPI2		341
#define CLK_SPI2		342
#define PCLK_SPI3		343
#define CLK_SPI3		344
#define PCLK_PWM1		345
#define CLK_PWM1		346
#define CLK_PWM1_CAPTURE	347
#define PCLK_PWM2		348
#define CLK_PWM2		349
#define CLK_PWM2_CAPTURE	350
#define PCLK_PWM3		351
#define CLK_PWM3		352
#define CLK_PWM3_CAPTURE	353
#define DBCLK_GPIO		354
#define PCLK_GPIO1		355
#define DBCLK_GPIO1		356
#define PCLK_GPIO2		357
#define DBCLK_GPIO2		358
#define PCLK_GPIO3		359
#define DBCLK_GPIO3		360
#define PCLK_GPIO4		361
#define DBCLK_GPIO4		362
#define OCC_SCAN_CLK_GPIO	363
#define PCLK_TIMER		364
#define CLK_TIMER0		365
#define CLK_TIMER1		366
#define CLK_TIMER2		367
#define CLK_TIMER3		368
#define CLK_TIMER4		369
#define CLK_TIMER5		370
#define ACLK_TOP_HIGH		371
#define ACLK_TOP_LOW		372
#define HCLK_TOP		373
#define PCLK_TOP		374
#define PCLK_PCIE30PHY		375
#define CLK_OPTC_ARB		376
#define PCLK_MIPICSIPHY		377
#define PCLK_MIPIDSIPHY0	378
#define PCLK_MIPIDSIPHY1	379
#define PCLK_PIPEPHY0		380
#define PCLK_PIPEPHY1		381
#define PCLK_PIPEPHY2		382
#define PCLK_CPU_BOOST		383
#define CLK_CPU_BOOST		384
#define PCLK_OTPPHY		385
#define SCLK_GMAC0		386
#define SCLK_GMAC0_RGMII_SPEED	387
#define SCLK_GMAC0_RMII_SPEED	388
#define SCLK_GMAC0_RX_TX	389
#define SCLK_GMAC1		390
#define SCLK_GMAC1_RGMII_SPEED	391
#define SCLK_GMAC1_RMII_SPEED	392
#define SCLK_GMAC1_RX_TX	393
#define SCLK_SDMMC0_DRV		394
#define SCLK_SDMMC0_SAMPLE	395
#define SCLK_SDMMC1_DRV		396
#define SCLK_SDMMC1_SAMPLE	397
#define SCLK_SDMMC2_DRV		398
#define SCLK_SDMMC2_SAMPLE	399
#define SCLK_EMMC_DRV		400
#define SCLK_EMMC_SAMPLE	401
#define PCLK_EDPPHY_GRF		402
#define CLK_HDMI_CEC            403
#define CLK_I2S0_8CH_TX		404
#define CLK_I2S0_8CH_RX		405
#define CLK_I2S1_8CH_TX		406
#define CLK_I2S1_8CH_RX		407
#define CLK_I2S2_2CH		408
#define CLK_I2S3_2CH_TX		409
#define CLK_I2S3_2CH_RX		410
#define CPLL_500M		411
#define CPLL_250M		412
#define CPLL_125M		413
#define CPLL_62P5M		414
#define CPLL_50M		415
#define CPLL_25M		416
#define CPLL_100M		417
#define SCLK_DDRCLK		418

#define PCLK_CORE_PVTM		450

#define CLK_NR_CLKS		(PCLK_CORE_PVTM + 1)

/* pmu soft-reset indices */
/* pmucru_softrst_con0 */
#define SRST_P_PDPMU_NIU	0
#define SRST_P_PMUCRU		1
#define SRST_P_PMUGRF		2
#define SRST_P_I2C0		3
#define SRST_I2C0		4
#define SRST_P_UART0		5
#define SRST_S_UART0		6
#define SRST_P_PWM0		7
#define SRST_PWM0		8
#define SRST_P_GPIO0		9
#define SRST_GPIO0		10
#define SRST_P_PMUPVTM		11
#define SRST_PMUPVTM		12

/* soft-reset indices */

/* cru_softrst_con0 */
#define SRST_NCORERESET0	0
#define SRST_NCORERESET1	1
#define SRST_NCORERESET2	2
#define SRST_NCORERESET3	3
#define SRST_NCPUPORESET0	4
#define SRST_NCPUPORESET1	5
#define SRST_NCPUPORESET2	6
#define SRST_NCPUPORESET3	7
#define SRST_NSRESET		8
#define SRST_NSPORESET		9
#define SRST_NATRESET		10
#define SRST_NGICRESET		11
#define SRST_NPRESET		12
#define SRST_NPERIPHRESET	13

/* cru_softrst_con1 */
#define SRST_A_CORE_NIU2DDR	16
#define SRST_A_CORE_NIU2BUS	17
#define SRST_P_DBG_NIU		18
#define SRST_P_DBG		19
#define SRST_P_DBG_DAPLITE	20
#define SRST_DAP		21
#define SRST_A_ADB400_CORE2GIC	22
#define SRST_A_ADB400_GIC2CORE	23
#define SRST_P_CORE_GRF		24
#define SRST_P_CORE_PVTM	25
#define SRST_CORE_PVTM		26
#define SRST_CORE_PVTPLL	27

/* cru_softrst_con2 */
#define SRST_GPU		32
#define SRST_A_GPU_NIU		33
#define SRST_P_GPU_NIU		34
#define SRST_P_GPU_PVTM		35
#define SRST_GPU_PVTM		36
#define SRST_GPU_PVTPLL		37
#define SRST_A_NPU_NIU		40
#define SRST_H_NPU_NIU		41
#define SRST_P_NPU_NIU		42
#define SRST_A_NPU		43
#define SRST_H_NPU		44
#define SRST_P_NPU_PVTM		45
#define SRST_NPU_PVTM		46
#define SRST_NPU_PVTPLL		47

/* cru_softrst_con3 */
#define SRST_A_MSCH		51
#define SRST_HWFFC_CTRL		52
#define SRST_DDR_ALWAYSON	53
#define SRST_A_DDRSPLIT		54
#define SRST_DDRDFI_CTL		55
#define SRST_A_DMA2DDR		57

/* cru_softrst_con4 */
#define SRST_A_PERIMID_NIU	64
#define SRST_H_PERIMID_NIU	65
#define SRST_A_GIC_AUDIO_NIU	66
#define SRST_H_GIC_AUDIO_NIU	67
#define SRST_A_GIC600		68
#define SRST_A_GIC600_DEBUG	69
#define SRST_A_GICADB_CORE2GIC	70
#define SRST_A_GICADB_GIC2CORE	71
#define SRST_A_SPINLOCK		72
#define SRST_H_SDMMC_BUFFER	73
#define SRST_D_SDMMC_BUFFER	74
#define SRST_H_I2S0_8CH		75
#define SRST_H_I2S1_8CH		76
#define SRST_H_I2S2_2CH		77
#define SRST_H_I2S3_2CH		78

/* cru_softrst_con5 */
#define SRST_M_I2S0_8CH_TX	80
#define SRST_M_I2S0_8CH_RX	81
#define SRST_M_I2S1_8CH_TX	82
#define SRST_M_I2S1_8CH_RX	83
#define SRST_M_I2S2_2CH		84
#define SRST_M_I2S3_2CH_TX	85
#define SRST_M_I2S3_2CH_RX	86
#define SRST_H_PDM		87
#define SRST_M_PDM		88
#define SRST_H_VAD		89
#define SRST_H_SPDIF_8CH	90
#define SRST_M_SPDIF_8CH	91
#define SRST_H_AUDPWM		92
#define SRST_S_AUDPWM		93
#define SRST_H_ACDCDIG		94
#define SRST_ACDCDIG		95

/* cru_softrst_con6 */
#define SRST_A_SECURE_FLASH_NIU	96
#define SRST_H_SECURE_FLASH_NIU	97
#define SRST_A_CRYPTO_NS	103
#define SRST_H_CRYPTO_NS	104
#define SRST_CRYPTO_NS_CORE	105
#define SRST_CRYPTO_NS_PKA	106
#define SRST_CRYPTO_NS_RNG	107
#define SRST_H_TRNG_NS		108
#define SRST_TRNG_NS		109

/* cru_softrst_con7 */
#define SRST_H_NANDC		112
#define SRST_N_NANDC		113
#define SRST_H_SFC		114
#define SRST_H_SFC_XIP		115
#define SRST_S_SFC		116
#define SRST_A_EMMC		117
#define SRST_H_EMMC		118
#define SRST_B_EMMC		119
#define SRST_C_EMMC		120
#define SRST_T_EMMC		121

/* cru_softrst_con8 */
#define SRST_A_PIPE_NIU		128
#define SRST_P_PIPE_NIU		130
#define SRST_P_PIPE_GRF		133
#define SRST_A_SATA0		134
#define SRST_SATA0_PIPE		135
#define SRST_SATA0_PMALIVE	136
#define SRST_SATA0_RXOOB	137
#define SRST_A_SATA1		138
#define SRST_SATA1_PIPE		139
#define SRST_SATA1_PMALIVE	140
#define SRST_SATA1_RXOOB	141

/* cru_softrst_con9 */
#define SRST_A_SATA2		144
#define SRST_SATA2_PIPE		145
#define SRST_SATA2_PMALIVE	146
#define SRST_SATA2_RXOOB	147
#define SRST_USB3OTG0		148
#define SRST_USB3OTG1		149
#define SRST_XPCS		150
#define SRST_XPCS_TX_DIV10	151
#define SRST_XPCS_RX_DIV10	152
#define SRST_XPCS_XGXS_RX	153

/* cru_softrst_con10 */
#define SRST_P_PCIE20		160
#define SRST_PCIE20_POWERUP	161
#define SRST_MSTR_ARESET_PCIE20	162
#define SRST_SLV_ARESET_PCIE20	163
#define SRST_DBI_ARESET_PCIE20	164
#define SRST_BRESET_PCIE20	165
#define SRST_PERST_PCIE20	166
#define SRST_CORE_RST_PCIE20	167
#define SRST_NSTICKY_RST_PCIE20	168
#define SRST_STICKY_RST_PCIE20	169
#define SRST_PWR_RST_PCIE20	170

/* cru_softrst_con11 */
#define SRST_P_PCIE30X1		176
#define SRST_PCIE30X1_POWERUP	177
#define SRST_M_ARESET_PCIE30X1	178
#define SRST_S_ARESET_PCIE30X1	179
#define SRST_D_ARESET_PCIE30X1	180
#define SRST_BRESET_PCIE30X1	181
#define SRST_PERST_PCIE30X1	182
#define SRST_CORE_RST_PCIE30X1	183
#define SRST_NSTC_RST_PCIE30X1	184
#define SRST_STC_RST_PCIE30X1	185
#define SRST_PWR_RST_PCIE30X1	186

/* cru_softrst_con12 */
#define SRST_P_PCIE30X2		192
#define SRST_PCIE30X2_POWERUP	193
#define SRST_M_ARESET_PCIE30X2	194
#define SRST_S_ARESET_PCIE30X2	195
#define SRST_D_ARESET_PCIE30X2	196
#define SRST_BRESET_PCIE30X2	197
#define SRST_PERST_PCIE30X2	198
#define SRST_CORE_RST_PCIE30X2	199
#define SRST_NSTC_RST_PCIE30X2	200
#define SRST_STC_RST_PCIE30X2	201
#define SRST_PWR_RST_PCIE30X2	202

/* cru_softrst_con13 */
#define SRST_A_PHP_NIU		208
#define SRST_H_PHP_NIU		209
#define SRST_P_PHP_NIU		210
#define SRST_H_SDMMC0		211
#define SRST_SDMMC0		212
#define SRST_H_SDMMC1		213
#define SRST_SDMMC1		214
#define SRST_A_GMAC0		215
#define SRST_GMAC0_TIMESTAMP	216

/* cru_softrst_con14 */
#define SRST_A_USB_NIU		224
#define SRST_H_USB_NIU		225
#define SRST_P_USB_NIU		226
#define SRST_P_USB_GRF		227
#define SRST_H_USB2HOST0	228
#define SRST_H_USB2HOST0_ARB	229
#define SRST_USB2HOST0_UTMI	230
#define SRST_H_USB2HOST1	231
#define SRST_H_USB2HOST1_ARB	232
#define SRST_USB2HOST1_UTMI	233
#define SRST_H_SDMMC2		234
#define SRST_SDMMC2		235
#define SRST_A_GMAC1		236
#define SRST_GMAC1_TIMESTAMP	237

/* cru_softrst_con15 */
#define SRST_A_VI_NIU		240
#define SRST_H_VI_NIU		241
#define SRST_P_VI_NIU		242
#define SRST_A_VICAP		247
#define SRST_H_VICAP		248
#define SRST_D_VICAP		249
#define SRST_I_VICAP		250
#define SRST_P_VICAP		251
#define SRST_H_ISP		252
#define SRST_ISP		253
#define SRST_P_CSI2HOST1	255

/* cru_softrst_con16 */
#define SRST_A_VO_NIU		256
#define SRST_H_VO_NIU		257
#define SRST_P_VO_NIU		258
#define SRST_A_VOP_NIU		259
#define SRST_A_VOP		260
#define SRST_H_VOP		261
#define SRST_VOP0		262
#define SRST_VOP1		263
#define SRST_VOP2		264
#define SRST_VOP_PWM		265
#define SRST_A_HDCP		266
#define SRST_H_HDCP		267
#define SRST_P_HDCP		268
#define SRST_P_HDMI_HOST	270
#define SRST_HDMI_HOST		271

/* cru_softrst_con17 */
#define SRST_P_DSITX_0		272
#define SRST_P_DSITX_1		273
#define SRST_P_EDP_CTRL		274
#define SRST_EDP_24M		275
#define SRST_A_VPU_NIU		280
#define SRST_H_VPU_NIU		281
#define SRST_A_VPU		282
#define SRST_H_VPU		283
#define SRST_H_EINK		286
#define SRST_P_EINK		287

/* cru_softrst_con18 */
#define SRST_A_RGA_NIU		288
#define SRST_H_RGA_NIU		289
#define SRST_P_RGA_NIU		290
#define SRST_A_RGA		292
#define SRST_H_RGA		293
#define SRST_RGA_CORE		294
#define SRST_A_IEP		295
#define SRST_H_IEP		296
#define SRST_IEP_CORE		297
#define SRST_H_EBC		298
#define SRST_D_EBC		299
#define SRST_A_JDEC		300
#define SRST_H_JDEC		301
#define SRST_A_JENC		302
#define SRST_H_JENC		303

/* cru_softrst_con19 */
#define SRST_A_VENC_NIU		304
#define SRST_H_VENC_NIU		305
#define SRST_A_RKVENC		307
#define SRST_H_RKVENC		308
#define SRST_RKVENC_CORE	309

/* cru_softrst_con20 */
#define SRST_A_RKVDEC_NIU	320
#define SRST_H_RKVDEC_NIU	321
#define SRST_A_RKVDEC		322
#define SRST_H_RKVDEC		323
#define SRST_RKVDEC_CA		324
#define SRST_RKVDEC_CORE	325
#define SRST_RKVDEC_HEVC_CA	326

/* cru_softrst_con21 */
#define SRST_A_BUS_NIU		336
#define SRST_P_BUS_NIU		338
#define SRST_P_CAN0		340
#define SRST_CAN0		341
#define SRST_P_CAN1		342
#define SRST_CAN1		343
#define SRST_P_CAN2		344
#define SRST_CAN2		345
#define SRST_P_GPIO1		346
#define SRST_GPIO1		347
#define SRST_P_GPIO2		348
#define SRST_GPIO2		349
#define SRST_P_GPIO3		350
#define SRST_GPIO3		351

/* cru_softrst_con22 */
#define SRST_P_GPIO4		352
#define SRST_GPIO4		353
#define SRST_P_I2C1		354
#define SRST_I2C1		355
#define SRST_P_I2C2		356
#define SRST_I2C2		357
#define SRST_P_I2C3		358
#define SRST_I2C3		359
#define SRST_P_I2C4		360
#define SRST_I2C4		361
#define SRST_P_I2C5		362
#define SRST_I2C5		363
#define SRST_P_OTPC_NS		364
#define SRST_OTPC_NS_SBPI	365
#define SRST_OTPC_NS_USR	366

/* cru_softrst_con23 */
#define SRST_P_PWM1		368
#define SRST_PWM1		369
#define SRST_P_PWM2		370
#define SRST_PWM2		371
#define SRST_P_PWM3		372
#define SRST_PWM3		373
#define SRST_P_SPI0		374
#define SRST_SPI0		375
#define SRST_P_SPI1		376
#define SRST_SPI1		377
#define SRST_P_SPI2		378
#define SRST_SPI2		379
#define SRST_P_SPI3		380
#define SRST_SPI3		381

/* cru_softrst_con24 */
#define SRST_P_SARADC		384
#define SRST_P_TSADC		385
#define SRST_TSADC		386
#define SRST_P_TIMER		387
#define SRST_TIMER0		388
#define SRST_TIMER1		389
#define SRST_TIMER2		390
#define SRST_TIMER3		391
#define SRST_TIMER4		392
#define SRST_TIMER5		393
#define SRST_P_UART1		394
#define SRST_S_UART1		395

/* cru_softrst_con25 */
#define SRST_P_UART2		400
#define SRST_S_UART2		401
#define SRST_P_UART3		402
#define SRST_S_UART3		403
#define SRST_P_UART4		404
#define SRST_S_UART4		405
#define SRST_P_UART5		406
#define SRST_S_UART5		407
#define SRST_P_UART6		408
#define SRST_S_UART6		409
#define SRST_P_UART7		410
#define SRST_S_UART7		411
#define SRST_P_UART8		412
#define SRST_S_UART8		413
#define SRST_P_UART9		414
#define SRST_S_UART9		415

/* cru_softrst_con26 */
#define SRST_P_GRF 416
#define SRST_P_GRF_VCCIO12	417
#define SRST_P_GRF_VCCIO34	418
#define SRST_P_GRF_VCCIO567	419
#define SRST_P_SCR		420
#define SRST_P_WDT_NS		421
#define SRST_T_WDT_NS		422
#define SRST_P_DFT2APB		423
#define SRST_A_MCU		426
#define SRST_P_INTMUX		427
#define SRST_P_MAILBOX		428

/* cru_softrst_con27 */
#define SRST_A_TOP_HIGH_NIU	432
#define SRST_A_TOP_LOW_NIU	433
#define SRST_H_TOP_NIU		434
#define SRST_P_TOP_NIU		435
#define SRST_P_TOP_CRU		438
#define SRST_P_DDRPHY		439
#define SRST_DDRPHY		440
#define SRST_P_MIPICSIPHY	442
#define SRST_P_MIPIDSIPHY0	443
#define SRST_P_MIPIDSIPHY1	444
#define SRST_P_PCIE30PHY	445
#define SRST_PCIE30PHY		446
#define SRST_P_PCIE30PHY_GRF	447

/* cru_softrst_con28 */
#define SRST_P_APB2ASB_LEFT	448
#define SRST_P_APB2ASB_BOTTOM	449
#define SRST_P_ASB2APB_LEFT	450
#define SRST_P_ASB2APB_BOTTOM	451
#define SRST_P_PIPEPHY0		452
#define SRST_PIPEPHY0		453
#define SRST_P_PIPEPHY1		454
#define SRST_PIPEPHY1		455
#define SRST_P_PIPEPHY2		456
#define SRST_PIPEPHY2		457
#define SRST_P_USB2PHY0_GRF	458
#define SRST_P_USB2PHY1_GRF	459
#define SRST_P_CPU_BOOST	460
#define SRST_CPU_BOOST		461
#define SRST_P_OTPPHY		462
#define SRST_OTPPHY		463

/* cru_softrst_con29 */
#define SRST_USB2PHY0_POR	464
#define SRST_USB2PHY0_USB3OTG0	465
#define SRST_USB2PHY0_USB3OTG1	466
#define SRST_USB2PHY1_POR	467
#define SRST_USB2PHY1_USB2HOST0	468
#define SRST_USB2PHY1_USB2HOST1	469
#define SRST_P_EDPPHY_GRF	470
#define SRST_TSADCPHY		471
#define SRST_GMAC0_DELAYLINE	472
#define SRST_GMAC1_DELAYLINE	473
#define SRST_OTPC_ARB		474
#define SRST_P_PIPEPHY0_GRF	475
#define SRST_P_PIPEPHY1_GRF	476
#define SRST_P_PIPEPHY2_GRF	477

#endif
