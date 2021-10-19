# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = lite     # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no        # Mouse keys
EXTRAKEY_ENABLE = yes # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes # USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
AUDIO_ENABLE = no           # Audio output
RGBLIGHT_ENABLE = no        # Use RGB underglow light
<<<<<<< HEAD
<<<<<<< HEAD
RGB_MATRIX_ENABLE = yes     # Use RGB matrix
=======
RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = IS31FL3731 # Use RGB matrix
<<<<<<< HEAD
>>>>>>> dontTouch/master
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
>>>>>>> UpdateQMK
=======
RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = IS31FL3731 # Use RGB matrix
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445

LAYOUTS = 60_ansi 60_hhkb 60_iso 60_ansi_split_bs_rshift

CUSTOM_MATRIX = yes
SRC += matrix.c
