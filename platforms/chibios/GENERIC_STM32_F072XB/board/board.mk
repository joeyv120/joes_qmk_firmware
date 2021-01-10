# List of all the board related files.
<<<<<<< HEAD
BOARDSRC = $(BOARD_PATH)/board/board.c

# Required include directories
BOARDINC = $(BOARD_PATH)/board
=======
BOARDSRC = $(CHIBIOS)/os/hal/boards/ST_NUCLEO64_F072RB/board.c

# Required include directories
BOARDINC = $(CHIBIOS)/os/hal/boards/ST_NUCLEO64_F072RB
<<<<<<< HEAD
>>>>>>> dontTouch/master
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
>>>>>>> UpdateQMK

# Shared variables
ALLCSRC += $(BOARDSRC)
ALLINC  += $(BOARDINC)
