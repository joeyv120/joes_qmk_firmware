# https://docs.qmk.fm/#/getting_started_make_guide?id=rulesmk-options

TAP_DANCE_ENABLE = yes
VIA_ENABLE = no
# EXTRAKEY_ENABLE = yes        # Audio control and System control
# CONSOLE_ENABLE = no        # Console for debug
# RGBLIGHT_ENABLE = yes       # Enable WS2812 RGB underlight.
# SPLIT_KEYBOARD = yes

# Build Options
#   change to "no" to disable the options, or define them in the Makefile in
#   the appropriate keymap folder that will get included automatically
#
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
# VARIABLE_TRACE =   # Don't mess with this

BOOTMAGIC_ENABLE = no       # Virtual DIP switch configuration
MOUSEKEY_ENABLE = no        # Mouse keys
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
# BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
MIDI_ENABLE = no            # MIDI controls
AUDIO_ENABLE = no           # Audio output on port C6
UNICODE_ENABLE = no         # Unicode
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
SLEEP_LED_ENABLE = no    # Breathing sleep LED during USB suspend
ENCODER_ENABLE = no			# Enable rotary encoder functionality 
JOYSTICK_ENABLE = no
MACROS_ENABLED = no
POINTING_DEVICE_ENABLE = no
KEY_LOCK_ENABLE = no
DYNAMIC_MACRO_ENABLE = no
FAUXCLICKY_ENABLE = no
# API_SYSEX_ENABLE = yes
# CUSTOM_MATRIX = no