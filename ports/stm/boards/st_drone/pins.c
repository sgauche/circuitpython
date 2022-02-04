#include "shared-bindings/board/__init__.h"

STATIC const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS

    { MP_ROM_QSTR(MP_QSTR_PA00),        MP_ROM_PTR(&pin_PA00) },
    { MP_ROM_QSTR(MP_QSTR_TIM2_CH1),    MP_ROM_PTR(&pin_PA00) },
    { MP_ROM_QSTR(MP_QSTR_PA01),        MP_ROM_PTR(&pin_PA01) },
    { MP_ROM_QSTR(MP_QSTR_TIM2_CH2),    MP_ROM_PTR(&pin_PA01) },
    { MP_ROM_QSTR(MP_QSTR_PA02),        MP_ROM_PTR(&pin_PA02) },
    { MP_ROM_QSTR(MP_QSTR_TIM2_CH3),    MP_ROM_PTR(&pin_PA02) },
    { MP_ROM_QSTR(MP_QSTR_PA03),        MP_ROM_PTR(&pin_PA03) },
    { MP_ROM_QSTR(MP_QSTR_TIM2_CH4),    MP_ROM_PTR(&pin_PA03) },
    { MP_ROM_QSTR(MP_QSTR_PA04),        MP_ROM_PTR(&pin_PA04) },
    { MP_ROM_QSTR(MP_QSTR_BLE_IRQ),     MP_ROM_PTR(&pin_PA04) },
    { MP_ROM_QSTR(MP_QSTR_PA05),        MP_ROM_PTR(&pin_PA05) },
    { MP_ROM_QSTR(MP_QSTR_SPI1_SCK),    MP_ROM_PTR(&pin_PA05) },
    { MP_ROM_QSTR(MP_QSTR_PA06),        MP_ROM_PTR(&pin_PA06) },
    { MP_ROM_QSTR(MP_QSTR_SPI1_MISO),   MP_ROM_PTR(&pin_PA06) },
    { MP_ROM_QSTR(MP_QSTR_PA07),        MP_ROM_PTR(&pin_PA07) },
    { MP_ROM_QSTR(MP_QSTR_SPI1_MOSI),   MP_ROM_PTR(&pin_PA07) },
    { MP_ROM_QSTR(MP_QSTR_PA08),        MP_ROM_PTR(&pin_PA08) },
    { MP_ROM_QSTR(MP_QSTR_SPI2_IMU_CS), MP_ROM_PTR(&pin_PA08) },
    { MP_ROM_QSTR(MP_QSTR_PA09),        MP_ROM_PTR(&pin_PA09) },
    { MP_ROM_QSTR(MP_QSTR_USART1_TX),   MP_ROM_PTR(&pin_PA09) },
    { MP_ROM_QSTR(MP_QSTR_PA10),        MP_ROM_PTR(&pin_PA10) },
    { MP_ROM_QSTR(MP_QSTR_USART1_RX),   MP_ROM_PTR(&pin_PA10) },
    { MP_ROM_QSTR(MP_QSTR_PA11),        MP_ROM_PTR(&pin_PA11) },
    { MP_ROM_QSTR(MP_QSTR_USB_DM),      MP_ROM_PTR(&pin_PA11) },
    { MP_ROM_QSTR(MP_QSTR_PA12),        MP_ROM_PTR(&pin_PA12) },
    { MP_ROM_QSTR(MP_QSTR_USB_DP),      MP_ROM_PTR(&pin_PA12) },
    { MP_ROM_QSTR(MP_QSTR_PA13),        MP_ROM_PTR(&pin_PA13) },
    { MP_ROM_QSTR(MP_QSTR_SWDIO),       MP_ROM_PTR(&pin_PA13) },
    { MP_ROM_QSTR(MP_QSTR_PA14),        MP_ROM_PTR(&pin_PA14) },
    { MP_ROM_QSTR(MP_QSTR_SWDCLK),      MP_ROM_PTR(&pin_PA14) },
    { MP_ROM_QSTR(MP_QSTR_PA15_NC),     MP_ROM_PTR(&pin_PA15) },

    { MP_ROM_QSTR(MP_QSTR_PB00),        MP_ROM_PTR(&pin_PB00) },
    { MP_ROM_QSTR(MP_QSTR_SPI1_BLE_CS), MP_ROM_PTR(&pin_PB00) },
    { MP_ROM_QSTR(MP_QSTR_PB01),        MP_ROM_PTR(&pin_PB01) },
    { MP_ROM_QSTR(MP_QSTR_VBAT_SENSE),  MP_ROM_PTR(&pin_PB01) },
    { MP_ROM_QSTR(MP_QSTR_PB02),        MP_ROM_PTR(&pin_PB02) },
    { MP_ROM_QSTR(MP_QSTR_BLE_RESET),   MP_ROM_PTR(&pin_PB02) },
    { MP_ROM_QSTR(MP_QSTR_PB03),        MP_ROM_PTR(&pin_PB03) },
    { MP_ROM_QSTR(MP_QSTR_I2C2_SDA),    MP_ROM_PTR(&pin_PB03) },
    { MP_ROM_QSTR(MP_QSTR_PB04),        MP_ROM_PTR(&pin_PB04) },
    { MP_ROM_QSTR(MP_QSTR_LED2),        MP_ROM_PTR(&pin_PB04) },
    { MP_ROM_QSTR(MP_QSTR_PB05),        MP_ROM_PTR(&pin_PB05) },
    { MP_ROM_QSTR(MP_QSTR_LED1),        MP_ROM_PTR(&pin_PB05) },
    { MP_ROM_QSTR(MP_QSTR_PB06),        MP_ROM_PTR(&pin_PB06) },
    { MP_ROM_QSTR(MP_QSTR_PWM_MOTOR1),  MP_ROM_PTR(&pin_PB06) },
    { MP_ROM_QSTR(MP_QSTR_PB07),        MP_ROM_PTR(&pin_PB07) },
    { MP_ROM_QSTR(MP_QSTR_PWM_MOTOR2),  MP_ROM_PTR(&pin_PB07) },
    { MP_ROM_QSTR(MP_QSTR_PB08),        MP_ROM_PTR(&pin_PB08) },
    { MP_ROM_QSTR(MP_QSTR_PWM_MOTOR3),  MP_ROM_PTR(&pin_PB08) },
    { MP_ROM_QSTR(MP_QSTR_PB09),        MP_ROM_PTR(&pin_PB09) },
    { MP_ROM_QSTR(MP_QSTR_PWM_MOTOR4),  MP_ROM_PTR(&pin_PB09) },
    { MP_ROM_QSTR(MP_QSTR_PB10),        MP_ROM_PTR(&pin_PB10) },
    { MP_ROM_QSTR(MP_QSTR_I2C2_SCL),    MP_ROM_PTR(&pin_PB10) },
    { MP_ROM_QSTR(MP_QSTR_PB12),        MP_ROM_PTR(&pin_PB12) },
    { MP_ROM_QSTR(MP_QSTR_SPI2_MAG_CS), MP_ROM_PTR(&pin_PB12) },
    { MP_ROM_QSTR(MP_QSTR_PB13),        MP_ROM_PTR(&pin_PB13) },
    { MP_ROM_QSTR(MP_QSTR_SPI2_SCK),    MP_ROM_PTR(&pin_PB13) },
    { MP_ROM_QSTR(MP_QSTR_PB14_NC),     MP_ROM_PTR(&pin_PB14) },
    { MP_ROM_QSTR(MP_QSTR_PB15),        MP_ROM_PTR(&pin_PB15) },
    { MP_ROM_QSTR(MP_QSTR_SPI2_BIDI),   MP_ROM_PTR(&pin_PB15) },

    { MP_ROM_QSTR(MP_QSTR_PC13),        MP_ROM_PTR(&pin_PC13) },
    { MP_ROM_QSTR(MP_QSTR_SPI2_PRS_CS), MP_ROM_PTR(&pin_PC13) },
    { MP_ROM_QSTR(MP_QSTR_PC14),        MP_ROM_PTR(&pin_PC14) },
    { MP_ROM_QSTR(MP_QSTR_USB_MON),     MP_ROM_PTR(&pin_PC14) },
    { MP_ROM_QSTR(MP_QSTR_PC15_NC),     MP_ROM_PTR(&pin_PC15) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
