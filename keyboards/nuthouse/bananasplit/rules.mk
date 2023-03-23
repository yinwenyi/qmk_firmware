# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
#
SPLIT_KEYBOARD = yes
BOOTMAGIC_ENABLE = no      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = yes        # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
ENCODER_ENABLE = yes        # Encoder support
DIP_SWITCH_ENABLE = yes     # Push button support
LED_MATRIX_ENABLE = yes         # LED matrix support
LED_MATRIX_DRIVER = custom  # bless!! Native qmk support for this IC
COMMON_VPATH += $(DRIVER_PATH)/issi
SRC +=  drivers/led/issi/is31fl3731-simple.c
QUANTUM_LIB_SRC += i2c_master.c
# Attempt to save space
LTO_ENABLE = yes
MUSIC_ENABLE = no
