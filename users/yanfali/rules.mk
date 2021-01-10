BOOTMAGIC_ENABLE = lite
DYNAMIC_KEYMAP_ENABLE = no
<<<<<<< HEAD
<<<<<<< HEAD
CONSOLE_ENABLE = yes
COMMAND_ENABLE = yes
=======
<<<<<<< HEAD
>>>>>>> dontTouch/master
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
>>>>>>> UpdateQMK
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
LTO_ENABLE = yes
AUDIO_ENABLE = no

# only enable audio on specific boards
ifeq ($(strip $(KEYBOARD)), evyd13/plain60)
    AUDIO_ENABLE = yes
    CONSOLE_ENABLE = yes
    COMMAND_ENABLE = yes
endif

ifeq ($(strip $(KEYBOARD)), clueboard/60)
    AUDIO_ENABLE = yes
    CONSOLE_ENABLE = yes
    COMMAND_ENABLE = yes
endif

ifeq ($(strip $(KEYBOARD)), hadron/ver3)
    AUDIO_ENABLE = yes
    CONSOLE_ENABLE = yes
    COMMAND_ENABLE = yes
endif

ifeq ($(strip $(KEYBOARD)), fruity60)
    CONSOLE_ENABLE = yes
    COMMAND_ENABLE = no
endif

ifeq ($(strip $(KEYBOARD)), kbdfans/kbd75/rev1)
    COMMAND_ENABLE = no
endif

ifeq ($(strip $(KEYBOARD)), ai03/polaris)
    RGBLIGHT_ENABLE = no
    CONSOLE_ENABLE = yes
    COMMAND_ENABLE = yes
endif
