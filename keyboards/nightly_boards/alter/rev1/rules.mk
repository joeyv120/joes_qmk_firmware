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
BOOTMAGIC_ENABLE = lite       # Virtual DIP switch configuration
MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no        # Console for debug
COMMAND_ENABLE = no        # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = no            # USB Nkey Rollover
BACKLIGHT_ENABLE = no        # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes        # Enable keyboard RGB underglow
MIDI_ENABLE = no            # MIDI support
BLUETOOTH_ENABLE = no       # Enable Bluetooth
AUDIO_ENABLE = no           # Audio output
<<<<<<< HEAD
<<<<<<< HEAD
FAUXCLICKY_ENABLE = no      # Use buzzer to emulate clicky switches
=======
FAUXCLICKY_ENABLE = no      # Use buzzer to emulate clicky switches

LAYOUTS = alice_split_bs
<<<<<<< HEAD
>>>>>>> dontTouch/master
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
>>>>>>> UpdateQMK
=======
FAUXCLICKY_ENABLE = no      # Use buzzer to emulate clicky switches

LAYOUTS = alice_split_bs
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
