//===========================================================
// Mouse Injector for Dolphin
//==========================================================================
// Copyright (C) 2019-2020 Carnivorous
// All rights reserved.
//
// Mouse Injector is free software; you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by the Free
// Software Foundation; either version 2 of the License, or (at your option)
// any later version.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
// or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
// for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, visit http://www.gnu.org/licenses/gpl-2.0.html
//==========================================================================
#include <stdint.h>
#include "../main.h"
#include "../memory.h"
#include "../mouse.h"
#include "game.h"

#define KF2_CAMY 0x19950C
#define KF2_CAMX 0x19950E
#define KF2_IS_BUSY 0x1758E4

static uint8_t PS1_KF2_Status(void);
static void PS1_KF2_Inject(void);

static const GAMEDRIVER GAMEDRIVER_INTERFACE =
{
	"King's Field (II)",
	PS1_KF2_Status,
	PS1_KF2_Inject,
	1, // 1000 Hz tickrate
	0 // crosshair sway supported for driver
};

const GAMEDRIVER *GAME_PS1_KINGSFIELD2 = &GAMEDRIVER_INTERFACE;

static float xAccumulator = 0.f;
static float yAccumulator = 0.f;

//==========================================================================
// Purpose: return 1 if game is detected
//==========================================================================
static uint8_t PS1_KF2_Status(void)
{
	return (PS1_MEM_ReadWord(0x92D4) == 0x534C5553U && PS1_MEM_ReadWord(0x92D8) == 0x5F303031U && PS1_MEM_ReadWord(0x92DC) == 0x2E35383BU);
}
//==========================================================================
// Purpose: calculate mouse look and inject into current game
//==========================================================================
static void PS1_KF2_Inject(void)
{
	// don't move camera if reading message, in conversation, paused, loading, etc...
	if (PS1_MEM_ReadHalfword(KF2_IS_BUSY))
		return;

	if(xmouse == 0 && ymouse == 0) // if mouse is idle
		return;
	
	uint16_t camX = PS1_MEM_ReadHalfword(KF2_CAMX);
	uint16_t camY = PS1_MEM_ReadHalfword(KF2_CAMY);
	float camXF = (float)camX;
	float camYF = (float)camY;

	const float looksensitivity = (float)sensitivity / 20.f;
	const float scale = 1.f;

	float dx = -(float)xmouse * looksensitivity * scale;
	AccumulateAddRemainder(&camXF, &xAccumulator, -xmouse, dx);

	float ym = (float)(invertpitch ? -ymouse : ymouse);
	float dy = ym * looksensitivity * scale;
	AccumulateAddRemainder(&camYF, &yAccumulator, ym, dy);

	while (camYF > 4096)
		camYF -= 4096;

	// clamp y-axis
	if (camYF > 700 && camYF < 2000)
		camYF = 700;
	if (camYF < 3400 && camYF > 2000)
		camYF = 3400;

	PS1_MEM_WriteHalfword(KF2_CAMX, (uint16_t)camXF);
	PS1_MEM_WriteHalfword(KF2_CAMY, (uint16_t)camYF);
}