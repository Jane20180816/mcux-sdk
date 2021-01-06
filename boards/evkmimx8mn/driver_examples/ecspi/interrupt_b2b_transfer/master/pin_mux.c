/*
 * Copyright 2019 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */


/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v6.0
processor: MIMX8MN6xxxJZ
package_id: MIMX8MN6DVTJZ
mcu_data: ksdk2_0
processor_version: 0.0.0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'false', coreID: m7}
- pin_list:
  - {pin_num: F19, peripheral: UART4, signal: uart_rx, pin_signal: UART4_RXD, PE: Disabled, FSEL: FAST0, DSE: X6_0}
  - {pin_num: F18, peripheral: UART4, signal: uart_tx, pin_signal: UART4_TXD, PE: Disabled, FSEL: FAST0, DSE: X6_0}
  - {pin_num: A8, peripheral: ECSPI2, signal: ecspi_miso, pin_signal: ECSPI2_MISO, PE: Disabled, HYS: Enabled, FSEL: SLOW0, DSE: X6_0}
  - {pin_num: B8, peripheral: ECSPI2, signal: ecspi_mosi, pin_signal: ECSPI2_MOSI, PE: Disabled, HYS: Enabled, FSEL: SLOW0, DSE: X6_0}
  - {pin_num: E6, peripheral: ECSPI2, signal: ecspi_sclk, pin_signal: ECSPI2_SCLK, PE: Enabled, HYS: Enabled, FSEL: SLOW0, DSE: X6_0}
  - {pin_num: A6, peripheral: ECSPI2, signal: 'ecspi_ss, 0', pin_signal: ECSPI2_SS0, PE: Enabled, PUE: Enabled, SION: DISABLED, HYS: Enabled, ODE: Disabled, FSEL: SLOW0,
    DSE: X6_0}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {                                /*!< Function assigned for the core: Cortex-M7F[m7] */
    IOMUXC_SetPinMux(IOMUXC_ECSPI2_MISO_ECSPI2_MISO, 0U);
    IOMUXC_SetPinConfig(IOMUXC_ECSPI2_MISO_ECSPI2_MISO, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(6U) |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
    IOMUXC_SetPinMux(IOMUXC_ECSPI2_MOSI_ECSPI2_MOSI, 0U);
    IOMUXC_SetPinConfig(IOMUXC_ECSPI2_MOSI_ECSPI2_MOSI, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(6U) |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
    IOMUXC_SetPinMux(IOMUXC_ECSPI2_SCLK_ECSPI2_SCLK, 0U);
    IOMUXC_SetPinConfig(IOMUXC_ECSPI2_SCLK_ECSPI2_SCLK, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(6U) |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
    IOMUXC_SetPinMux(IOMUXC_ECSPI2_SS0_ECSPI2_SS0, 0U);
    IOMUXC_SetPinConfig(IOMUXC_ECSPI2_SS0_ECSPI2_SS0, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(6U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
    IOMUXC_SetPinMux(IOMUXC_UART4_RXD_UART4_RX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_UART4_RXD_UART4_RX, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(6U) |
                        IOMUXC_SW_PAD_CTL_PAD_FSEL(2U));
    IOMUXC_SetPinMux(IOMUXC_UART4_TXD_UART4_TX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_UART4_TXD_UART4_TX, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(6U) |
                        IOMUXC_SW_PAD_CTL_PAD_FSEL(2U));
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/