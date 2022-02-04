USB_VID = 0x0483
USB_PID = 0x5740
USB_PRODUCT = "STM32 Virtual ComPort"
USB_MANUFACTURER = "STMicroelectronics"

INTERNAL_FLASH_FILESYSTEM = 1

MCU_SERIES = F4
MCU_VARIANT = STM32F412Cx
MCU_PACKAGE = UFQFPN48

LD_COMMON = boards/common_default.ld
LD_DEFAULT = boards/STM32F412_default.ld
# UF2 boot option
LD_BOOT = boards/STM32F412_boot.ld
UF2_OFFSET = 0x8010000

# Disable modules that won't be used on this board
CIRCUITPY_ADAFRUIT_PIXELBUF = 0
#CIRCUITPY_AESIO = 0
CIRCUITPY_AUDIOBUSIO = 0
CIRCUITPY_AUDIOCORE = 0
CIRCUITPY_AUDIOIO = 0
CIRCUITPY_AUDIOMIXER = 0
CIRCUITPY_AUDIOMP3 = 0
CIRCUITPY_AUDIOPWMIO = 0
CIRCUITPY_BITBANGIO = 0
CIRCUITPY_BITMAPTOOLS = 0
CIRCUITPY_CANIO = 0
CIRCUITPY_DISPLAYIO = 0
CIRCUITPY_FONTIO = 0
CIRCUITPY_FRAMEBUFFERIO = 0
CIRCUITPY_GAMEPADSHIFT = 0
CIRCUITPY_GIFIO = 0
CIRCUITPY_GNSS = 0
CIRCUITPY_IMAGECAPTURE = 0
CIRCUITPY_IPADDRESS = 0
CIRCUITPY_KEYPAD = 0
CIRCUITPY_MIDI = 0
CIRCUITPY_MSGPACK = 0
CIRCUITPY_NEOPIXEL_WRITE = 0
CIRCUITPY_PARALLEL_DISPLAY = 0
CIRCUITPY_PS2IO = 0
CIRCUITPY_PULSEIO = 0
CIRCUITPY_QRIO = 0
CIRCUITPY_RAINBOWIO = 0
CIRCUITPY_RGBMATRIX = 0
CIRCUITPY_ROTARYIO = 0
CIRCUITPY_RP2PIO = 0
CIRCUITPY_SDCARDIO = 0
CIRCUITPY_SDIOIO = 0
CIRCUITPY_SHARPDISPLAY = 0
CIRCUITPY_SOCKETPOOL = 0
CIRCUITPY_SHARPDISPLAYSYTHIO = 0
CIRCUITPY_TOUCHIO = 0
CIRCUITPY_USB_HID = 0
CIRCUITPY_VECTORIO = 0
CIRCUITPY_WIFI = 0

#
#SUPEROPT_GC = 0
#SUPEROPT_VM = 0
#
#OPTIMIZATION_FLAGS = -Os
#
