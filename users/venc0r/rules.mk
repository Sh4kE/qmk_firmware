#----------------------------------------------------------------------------
# make gergo:germ:dfu
# Make sure you have dfu-programmer installed!
#----------------------------------------------------------------------------
# Firmware options
SRC += venc0r.c
COMBO_ENABLE = yes
VPATH += keyboards/gboards/
BOOTLOADER = atmel-dfu
DYNAMIC_TAPPING_TERM_ENABLE = yes

#Debug options
#VERBOSE 		 							= yes
#DEBUG_MATRIX_SCAN_RATE   	= no
#DEBUG_MATRIX		 					= yes
#CONSOLE_ENABLE						= yes
