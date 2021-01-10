# List of all the board related files.
<<<<<<< HEAD
BOARDSRC = $(BOARD_PATH)/board/board.c

# Required include directories
BOARDINC = $(BOARD_PATH)/board
=======
BOARDSRC = $(CHIBIOS)/os/hal/boards/ST_NUCLEO64_F072RB/board.c

# Required include directories
BOARDINC = $(CHIBIOS)/os/hal/boards/ST_NUCLEO64_F072RB
>>>>>>> dontTouch/master

# Shared variables
ALLCSRC += $(BOARDSRC)
ALLINC  += $(BOARDINC)
