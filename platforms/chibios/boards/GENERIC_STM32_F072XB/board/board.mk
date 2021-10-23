# List of all the board related files.
<<<<<<< HEAD
<<<<<<< HEAD
BOARDSRC = $(BOARD_PATH)/board/board.c

# Required include directories
BOARDINC = $(BOARD_PATH)/board
=======
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
BOARDSRC = $(CHIBIOS)/os/hal/boards/ST_NUCLEO64_F072RB/board.c

# Required include directories
BOARDINC = $(CHIBIOS)/os/hal/boards/ST_NUCLEO64_F072RB
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> dontTouch/master
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
>>>>>>> UpdateQMK
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445

# Shared variables
ALLCSRC += $(BOARDSRC)
ALLINC  += $(BOARDINC)
