# MCU name
MCU = atmega32u4

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
#
<<<<<<< HEAD
<<<<<<< HEAD
BOOTMAGIC_ENABLE = lite       # Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes       # Mouse keys
=======
<<<<<<< HEAD:keyboards/evyd13/eon95/rules.mk
BOOTMAGIC_ENABLE = lite     # Virtual DIP switch configuration
MOUSEKEY_ENABLE = no        # Mouse keys
=======
BOOTMAGIC_ENABLE = lite       # Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes       # Mouse keys
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445:keyboards/choc_taro/rules.mk
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = yes        # Console for debug
COMMAND_ENABLE = yes        # Commands for debug and configuration
=======
<<<<<<< HEAD:keyboards/ghs/rar/rules.mk
BOOTMAGIC_ENABLE = no       # Virtual DIP switch configuration
=======
BOOTMAGIC_ENABLE = lite       # Virtual DIP switch configuration
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445:keyboards/choc_taro/rules.mk
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = no            # USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
<<<<<<< HEAD
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
=======
<<<<<<< HEAD:keyboards/ghs/rar/rules.mk
RGBLIGHT_ENABLE = yes        # Enable keyboard RGB underglow
=======
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445:keyboards/choc_taro/rules.mk
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
MIDI_ENABLE = no            # MIDI support
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
AUDIO_ENABLE = no           # Audio output
FAUXCLICKY_ENABLE = no      # Use buzzer to emulate clicky switches

CUSTOM_MATRIX = lite
SRC += matrix.c
