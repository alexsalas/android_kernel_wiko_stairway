/*
 * Generated by MTK SP Drv_CodeGen Version 10.03.0 for MT6589_NP. Copyright MediaTek Inc. (C) 2012.
 * Wed Jul 31 12:58:13 2013
 * Do Not Modify the File.
 */

#ifndef __CUST_EINTH
#define __CUST_EINTH

#ifdef __cplusplus
extern "C" {
#endif

#define CUST_EINT_POLARITY_LOW              0
#define CUST_EINT_POLARITY_HIGH             1
#define CUST_EINT_DEBOUNCE_DISABLE          0
#define CUST_EINT_DEBOUNCE_ENABLE           1
#define CUST_EINT_EDGE_SENSITIVE            0
#define CUST_EINT_LEVEL_SENSITIVE           1

//////////////////////////////////////////////////////////////////////////////


#define CUST_EINT_ALS_NUM              1
#define CUST_EINT_ALS_DEBOUNCE_CN      1
#define CUST_EINT_ALS_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_ALS_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_ALS_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_ENABLE

#define CUST_EINT_GSE_1_NUM              2
#define CUST_EINT_GSE_1_DEBOUNCE_CN      0
#define CUST_EINT_GSE_1_POLARITY         CUST_EINT_POLARITY_HIGH
#define CUST_EINT_GSE_1_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_GSE_1_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_MT6320_PMIC_NUM              3
#define CUST_EINT_MT6320_PMIC_DEBOUNCE_CN      1
#define CUST_EINT_MT6320_PMIC_POLARITY         CUST_EINT_POLARITY_HIGH
#define CUST_EINT_MT6320_PMIC_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_MT6320_PMIC_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_ENABLE

#define CUST_EINT_MSE_NUM              4
#define CUST_EINT_MSE_DEBOUNCE_CN      0
#define CUST_EINT_MSE_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_MSE_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_MSE_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_TOUCH_PANEL_NUM              5
#define CUST_EINT_TOUCH_PANEL_DEBOUNCE_CN      0
#define CUST_EINT_TOUCH_PANEL_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_TOUCH_PANEL_SENSITIVE        CUST_EINT_EDGE_SENSITIVE
#define CUST_EINT_TOUCH_PANEL_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_WIFI_NUM              9
#define CUST_EINT_WIFI_DEBOUNCE_CN      0
#define CUST_EINT_WIFI_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_WIFI_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_WIFI_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_ACCDET_NUM              10
#define CUST_EINT_ACCDET_DEBOUNCE_CN      256
#define CUST_EINT_ACCDET_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_ACCDET_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_ACCDET_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_ENABLE

#define CUST_EINT_OTG_IDDIG_NUM              34
#define CUST_EINT_OTG_IDDIG_DEBOUNCE_CN      0
#define CUST_EINT_OTG_IDDIG_POLARITY         CUST_EINT_POLARITY_HIGH
#define CUST_EINT_OTG_IDDIG_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_OTG_IDDIG_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_MSDC1_INS_NUM              57
#define CUST_EINT_MSDC1_INS_DEBOUNCE_CN      0
#define CUST_EINT_MSDC1_INS_POLARITY         CUST_EINT_POLARITY_HIGH
#define CUST_EINT_MSDC1_INS_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_MSDC1_INS_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_SIM1_HOT_PLUG_NUM              83
#define CUST_EINT_SIM1_HOT_PLUG_DEBOUNCE_CN      3
#define CUST_EINT_SIM1_HOT_PLUG_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_SIM1_HOT_PLUG_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_SIM1_HOT_PLUG_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_SIM2_HOT_PLUG_NUM              84
#define CUST_EINT_SIM2_HOT_PLUG_DEBOUNCE_CN      3
#define CUST_EINT_SIM2_HOT_PLUG_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_SIM2_HOT_PLUG_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_SIM2_HOT_PLUG_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_COMBO_BGF_NUM              154
#define CUST_EINT_COMBO_BGF_DEBOUNCE_CN      0
#define CUST_EINT_COMBO_BGF_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_COMBO_BGF_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_COMBO_BGF_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE



//////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}

#endif
#endif //_CUST_EINT_H


