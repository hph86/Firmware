#include "badge_input.h"

#ifndef GINPUT_LLD_TOGGLE_CONFIG
#define GINPUT_LLD_TOGGLE_CONFIG

#define GINPUT_TOGGLE_NUM_PORTS       32
#define GINPUT_TOGGLE_CONFIG_ENTRIES   1

#define GINPUT_TOGGLE_DECLARE_STRUCTURE() \
	const GToggleConfig GInputToggleConfigTable[GINPUT_TOGGLE_CONFIG_ENTRIES] = { \
		{ 0, 0xffffffff, 0, 0 }, \
	}

#endif // GINPUT_LLD_TOGGLE_CONFIG
