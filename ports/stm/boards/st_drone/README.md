
Modified steval_fcu001v1 board
Switched STM32F401CC micro that was on the board to a STM32F412CG for more flash and RAM.
Modified the board to add a 100K resistor between BOOT0 and GND.
Modified the board to add a 100K resistor between BLE_RSTN (PB2/BOOT1) and GND.

# Flashing the STM32F412CG

 - Short BOOT0 to VDD
 - Reset the micro
 - Should show up as STM32 BOOTLOADER in Device Manager.
 - Use STM32CubeProgrammer as shown here: https://learn.adafruit.com/adafruit-stm32f405-feather-express/dfu-bootloader-details#windows-3045681-9
 - Restart the board.
