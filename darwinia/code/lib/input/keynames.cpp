#include "lib/universal_include.h"

#include "lib/input/keynames.h"

char const * const *getKeyNames() {
	static const char *s_keyNames[] = 
	{
		"unknown 0",
		"unknown 1",
		"unknown 2",
		"unknown 3",
		"unknown 4",
		"unknown 5",
		"unknown 6",
		"unknown 7",
		"BACKSPACE",
		"TAB",
		"unknown 10",
		"unknown 11",
		"unknown 12",
		"ENTER",
		"unknown 14",
		"unknown 15",
		"SHIFT",
		"CONTROL",
		"ALT",
		"PAUSE",
		"CAPSLOCK",
		"unknown 21",
		"unknown 22",
		"unknown 23",
		"unknown 24",
		"unknown 25",
		"unknown 26",
		"ESC",
		"unknown 28",
		"unknown 29",
		"unknown 30",
		"unknown 31",
		"SPACE",
		"PGUP",
		"PGDN",
		"END",
		"HOME",
		"LEFT",
		"UP",
		"RIGHT",
		"DOWN",
		"unknown 41",
		"unknown 42",
		"unknown 43",
		"unknown 44",
		"INSERT",
		"DEL",
		"unknown 47",
		"0",
		"1",
		"2",
		"3",
		"4",
		"5",
		"6",
		"7",
		"8",
		"9",
		"unknown 58",
		"unknown 59",
		"unknown 60",
		"unknown 61",
		"unknown 62",
		"unknown 63",
		"unknown 64",
		"A",
		"B",
		"C",
		"D",
		"E",
		"F",
		"G",
		"H",
		"I",
		"J",
		"K",
		"L",
		"M",
		"N",
		"O",
		"P",
		"Q",
		"R",
		"S",
		"T",
		"U",
		"V",
		"W",
		"X",
		"Y",
		"Z",
		"unknown 91",
		"unknown 92",
		"unknown 93",
		"unknown 94",
		"unknown 95",
		"0_PAD",
		"1_PAD",
		"2_PAD",
		"3_PAD",
		"4_PAD",
		"5_PAD",
		"6_PAD",
		"7_PAD",
		"8_PAD",
		"9_PAD",
		"ASTERISK",
		"PLUS_PAD",
		"MINUS_PAD",
		"Unknown",
		"DEL_PAD",
		"SLASH_PAD",
		"F1",
		"F2",
		"F3",
		"F4",
		"F5",
		"F6",
		"F7",
		"F8",
		"F9",
		"F10",
		"F11",
		"F12",
		"unknown 124",
		"unknown 125",
		"unknown 126",
		"unknown 127",
		"unknown 128",
		"unknown 129",
		"unknown 130",
		"unknown 131",
		"unknown 132",
		"unknown 133",
		"unknown 134",
		"unknown 135",
		"unknown 136",
		"unknown 137",
		"unknown 138",
		"unknown 139",
		"unknown 140",
		"unknown 141",
		"unknown 142",
		"unknown 143",
		"NUMLOCK",
		"SCRLOCK",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"unknown 146-175",
		"COLON",
		"EQUALS",
		"COMMA",
		"MINUS",
		"STOP",
		"SLASH",
		"AT",
		"QUOTE",	//192
		"unknown 193-218",
		"unknown 193-218",
		"unknown 193-218",
		"unknown 193-218",
		"unknown 193-218",
		"unknown 193-218",
		"unknown 193-218",
		"unknown 193-218",
		"unknown 193-218",
		"unknown 193-218",
		"unknown 193-218",
		"unknown 193-218",
		"unknown 193-218",
		"unknown 193-218",
		"unknown 193-218",
		"unknown 193-218",
		"unknown 193-218",
		"unknown 193-218",
		"unknown 193-218",
		"unknown 193-218",
		"unknown 193-218",
		"unknown 193-218",
		"unknown 193-218",
		"unknown 193-218",
		"unknown 193-218",
		"unknown 193-218",
		"OPENBRACE", //219
		"BACKSLASH",
		"CLOSEBRACE",
		"TILDE"
	};
	return s_keyNames;
}
