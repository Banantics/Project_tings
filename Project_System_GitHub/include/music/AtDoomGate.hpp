#ifndef ATDOOMGATE_MUSIC_HPP
#define ATDOOMGATE_MUSIC_HPP

// TODO Split music sheet in two for better efficency.
// TODO Why are the macros failing?
// TODO Finish the rest.

#define NAME at_doom_gate

#include "Notes.hpp"

CREATE(1,
	{NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_E3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_D3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8},
	{NOTE_C3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_AS2, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_B2, 8}, {NOTE_C3, 8},
	{NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_E3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_D3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8},
	{NOTE_C3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_AS2, -2}
)

CREATE(2,
	{NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_E3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_D3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8},
	{NOTE_C3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_AS2, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_B2, 8}, {NOTE_C3, 8},
	{NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_E3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_D3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8},
	{NOTE_FS3, -16}, {NOTE_D3, -16}, {NOTE_B2, -16}, {NOTE_A3, -16}, {NOTE_FS3, -16}, {NOTE_B2, -16}, {NOTE_D3, -16}, {NOTE_FS3, -16}, {NOTE_A3, -16}, {NOTE_FS3, -16}, {NOTE_D3, -16}, {NOTE_B2, -16}
)

CREATE(3,
	{NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_E3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_D3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8},
	{NOTE_C3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_AS2, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_B2, 8}, {NOTE_C3, 8},
	{NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_E3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_D3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8},
	{NOTE_B3, -16}, {NOTE_G3, -16}, {NOTE_E3, -16}, {NOTE_G3, -16}, {NOTE_B3, -16}, {NOTE_E4, -16}, {NOTE_G3, -16}, {NOTE_B3, -16}, {NOTE_E4, -16}, {NOTE_B3, -16}, {NOTE_G4, -16}, {NOTE_B4, -16}
)

CREATE(4,
	{NOTE_A2, 8}, {NOTE_A2, 8}, {NOTE_A3, 8}, {NOTE_A2, 8}, {NOTE_A2, 8}, {NOTE_G3, 8}, {NOTE_A2, 8}, {NOTE_A2, 8},
	{NOTE_F3, 8}, {NOTE_A2, 8}, {NOTE_A2, 8}, {NOTE_DS3, 8}, {NOTE_A2, 8}, {NOTE_A2, 8}, {NOTE_E3, 8}, {NOTE_F3, 8},
	{NOTE_A2, 8}, {NOTE_A2, 8}, {NOTE_A3, 8}, {NOTE_A2, 8}, {NOTE_A2, 8}, {NOTE_G3, 8}, {NOTE_A2, 8}, {NOTE_A2, 8},
	{NOTE_F3, 8}, {NOTE_A2, 8}, {NOTE_A2, 8}, {NOTE_DS3, -2}
)

CREATE(5,
	{NOTE_A2, 8}, {NOTE_A2, 8}, {NOTE_A3, 8}, {NOTE_A2, 8}, {NOTE_A2, 8}, {NOTE_G3, 8}, {NOTE_A2, 8}, {NOTE_A2, 8},
	{NOTE_F3, 8}, {NOTE_A2, 8}, {NOTE_A2, 8}, {NOTE_DS3, 8}, {NOTE_A2, 8}, {NOTE_A2, 8}, {NOTE_E3, 8}, {NOTE_F3, 8},
	{NOTE_A2, 8}, {NOTE_A2, 8}, {NOTE_A3, 8}, {NOTE_A2, 8}, {NOTE_A2, 8}, {NOTE_G3, 8}, {NOTE_A2, 8}, {NOTE_A2, 8},
	{NOTE_A3, -16}, {NOTE_F3, -16}, {NOTE_D3, -16}, {NOTE_A3, -16}, {NOTE_F3, -16}, {NOTE_D3, -16}, {NOTE_C4, -16}, {NOTE_A3, -16}, {NOTE_F3, -16}, {NOTE_A3, -16}, {NOTE_F3, -16}, {NOTE_D3, -16},
)

CREATE(6,
	{NOTE_CS3, 8}, {NOTE_CS3, 8}, {NOTE_CS4, 8}, {NOTE_CS3, 8}, {NOTE_CS3, 8}, {NOTE_B3, 8}, {NOTE_CS3, 8}, {NOTE_CS3, 8},
	{NOTE_A3, 8}, {NOTE_CS3, 8}, {NOTE_CS3, 8}, {NOTE_G3, 8}, {NOTE_CS3, 8}, {NOTE_CS3, 8}, {NOTE_GS3, 8}, {NOTE_A3, 8},
	{NOTE_B2, 8}, {NOTE_B2, 8}, {NOTE_B3, 8}, {NOTE_B2, 8}, {NOTE_B2, 8}, {NOTE_A3, 8}, {NOTE_B2, 8}, {NOTE_B2, 8},
	{NOTE_G3, 8}, {NOTE_B2, 8}, {NOTE_B2, 8}, {NOTE_F3, -2},
)

CREATE(7,
	{NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_E3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_D3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8},
	{NOTE_C3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_AS2, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_B2, 8}, {NOTE_C3, 8},
	{NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_E3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_D3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8},
	{NOTE_FS3, -16}, {NOTE_DS3, -16}, {NOTE_B2, -16}, {NOTE_FS3, -16}, {NOTE_DS3, -16}, {NOTE_B2, -16}, {NOTE_G3, -16}, {NOTE_D3, -16}, {NOTE_B2, -16}, {NOTE_DS4, -16}, {NOTE_DS3, -16}, {NOTE_B2, -16},
)

CREATE(8_,
	{NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_E3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_D3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8},
	{NOTE_C3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_AS2, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_B2, 8}, {NOTE_C3, 8},
	{NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_E3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_D3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8},
	{NOTE_C3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_AS2, -2},
)

CREATE(9_,
	{NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_E3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_D3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8},
	{NOTE_C3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_AS2, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_B2, 8}, {NOTE_C3, 8},
	{NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_E3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_D3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8},
	{NOTE_E4, -16}, {NOTE_B3, -16}, {NOTE_G3, -16}, {NOTE_G4, -16}, {NOTE_E4, -16}, {NOTE_G3, -16}, {NOTE_B3, -16}, {NOTE_D4, -16}, {NOTE_E4, -16}, {NOTE_G4, -16}, {NOTE_E4, -16}, {NOTE_G3, -16},  
)

CREATE(10_,
	{NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_E3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_D3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8},
	{NOTE_C3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_AS2, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_B2, 8}, {NOTE_C3, 8},
	{NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_E3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_D3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8},
	{NOTE_C3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_AS2, -2},
)

CREATE(11_,
	{NOTE_A2, 8}, {NOTE_A2, 8}, {NOTE_A3, 8}, {NOTE_A2, 8}, {NOTE_A2, 8}, {NOTE_G3, 8}, {NOTE_A2, 8}, {NOTE_A2, 8},
	{NOTE_F3, 8}, {NOTE_A2, 8}, {NOTE_A2, 8}, {NOTE_DS3, 8}, {NOTE_A2, 8}, {NOTE_A2, 8}, {NOTE_E3, 8}, {NOTE_F3, 8},
	{NOTE_A2, 8}, {NOTE_A2, 8}, {NOTE_A3, 8}, {NOTE_A2, 8}, {NOTE_A2, 8}, {NOTE_G3, 8}, {NOTE_A2, 8}, {NOTE_A2, 8},
	{NOTE_A3, -16}, {NOTE_F3, -16}, {NOTE_D3, -16}, {NOTE_A3, -16}, {NOTE_F3, -16}, {NOTE_D3, -16}, {NOTE_C4, -16}, {NOTE_A3, -16}, {NOTE_F3, -16}, {NOTE_A3, -16}, {NOTE_F3, -16}, {NOTE_D3, -16},
)

CREATE(12_,
	{NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_E3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_D3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8},
	{NOTE_C3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_AS2, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_B2, 8}, {NOTE_C3, 8},
	{NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_E3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_D3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8},
	{NOTE_C3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_AS2, -2},
)

CREATE(13_,
	{NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_E3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_D3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8},
	{NOTE_C3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_AS2, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_B2, 8}, {NOTE_C3, 8},
	{NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_E3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_D3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8},
	{NOTE_C3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_AS2, -2},
)

CREATE(14_,
	{NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_E3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_D3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8},
	{NOTE_C3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_AS2, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_B2, 8}, {NOTE_C3, 8},
	{NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_E3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_D3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8},
	{NOTE_C3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_AS2, -2},
)

CREATE(15_,
	{NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_E3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_D3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8},
	{NOTE_C3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_AS2, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_B2, 8}, {NOTE_C3, 8},
	{NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_E3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8}, {NOTE_D3, 8}, {NOTE_E2, 8}, {NOTE_E2, 8},
	{NOTE_B3, -16}, {NOTE_G3, -16}, {NOTE_E3, -16}, {NOTE_B2, -16}, {NOTE_E3, -16}, {NOTE_G3, -16}, {NOTE_C4, -16}, {NOTE_B3, -16}, {NOTE_G3, -16}, {NOTE_B3, -16}, {NOTE_G3, -16}, {NOTE_E3, -16}
)

// At Doom's Gate (E1M1)
// Robson Couto, 2019
// Code from https://github.com/robsoncouto/arduino-songs/blob/master/doom/doom.ino
// Score available at https://musescore.com/pieridot/doom
const melody_t NAME[] =
{
	GET(1, 3),
	GET(2, 1),
	GET(1, 1),
	GET(3, 1),
	GET(4, 1),
	GET(5, 1),
	GET(1, 2),
	GET(6, 1),
	GET(3, 1),
	GET(1, 1),
	GET(7, 1),

	// TODO look into making this more efficient.
	GET(8_, 1),
	GET(9_, 1),
	GET(10_, 1),
	GET(11_, 1),
	GET(12_, 1),
	GET(13_, 1),
	GET(14_, 1),
	GET(15_, 1),
};
const int /*VAR(len)*/at_doom_gate_len = sizeof(NAME) / sizeof(NAME[0]);
const int /*VAR(tempo)*/at_doom_gate_tempo = 225;

#endif // ATDOOMGATE_MUSIC_HPP
