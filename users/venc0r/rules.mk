#----------------------------------------------------------------------------
# make gergo:germ:dfu
# Make sure you have dfu-programmer installed!
#----------------------------------------------------------------------------
# Firmware options
SRC += venc0r.c
MOUSEKEY_ENABLE = yes
COMBO_ENABLE = yes
VPATH += keyboards/gboards/
BOOTLOADER = atmel-dfu

#Debug options
#VERBOSE 		 							= yes
#DEBUG_MATRIX_SCAN_RATE   	= no
#DEBUG_MATRIX		 					= yes
#CONSOLE_ENABLE						= yes
