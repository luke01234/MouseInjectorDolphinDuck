//==========================================================================
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
#include <stdlib.h>
#include <stdint.h>
#include "../main.h"
#include "game.h"

extern const GAMEDRIVER *GAME_TS2;
extern const GAMEDRIVER *GAME_TS3;
extern const GAMEDRIVER *GAME_NF;
extern const GAMEDRIVER *GAME_MOHF;
extern const GAMEDRIVER *GAME_MOHEA;
extern const GAMEDRIVER *GAME_MOHRS;
extern const GAMEDRIVER *GAME_DHV;
extern const GAMEDRIVER *GAME_COD2BRO;
extern const GAMEDRIVER *GAME_SERIOUS;
extern const GAMEDRIVER *GAME_METALARMS;
extern const GAMEDRIVER *GAME_TRIGGERMAN;
extern const GAMEDRIVER *GAME_GEIST;
extern const GAMEDRIVER *GAME_PS1_MENINBLACKCRASHDOWN;
extern const GAMEDRIVER *GAME_PS1_CODENAMETENKA;
extern const GAMEDRIVER *GAME_PS1_MOHUNDERGROUND;
extern const GAMEDRIVER *GAME_PS1_REVOLUTIONX;
extern const GAMEDRIVER *GAME_PS1_ARMORINES;
extern const GAMEDRIVER *GAME_N64_GOLDENEYE;
extern const GAMEDRIVER *GAME_N64_SINPUNISHMENT;
extern const GAMEDRIVER *GAME_SNES_PACMAN2;
extern const GAMEDRIVER *GAME_SNES_TIMONANDPUMBAA;
extern const GAMEDRIVER *GAME_SNES_SHADOWRUN;
extern const GAMEDRIVER *GAME_SNES_STARFOX;
extern const GAMEDRIVER *GAME_SNES_UNTOUCHABLES;
extern const GAMEDRIVER *GAME_SNES_RTYPE3;
extern const GAMEDRIVER *GAME_PS2_007AGENTUNDERFIRE;
extern const GAMEDRIVER *GAME_PS2_REDDEADREVOLVER;
extern const GAMEDRIVER *GAME_PS2_TIMECRISIS2;
extern const GAMEDRIVER *GAME_PS2_REDEADAIM;
extern const GAMEDRIVER *GAME_PS2_GUNSLINGERGIRL1;
extern const GAMEDRIVER *GAME_PS2_VAMPIRENIGHT;
extern const GAMEDRIVER *GAME_PS2_NINJAASSAULT;
extern const GAMEDRIVER *GAME_PS2_DARKWATCH;
extern const GAMEDRIVER *GAME_PS2_BLACK;
extern const GAMEDRIVER *GAME_PS2_URBANCHAOS;
extern const GAMEDRIVER *GAME_PS2_QUAKE3;
extern const GAMEDRIVER *GAME_PS2_CODFINESTHOUR;
extern const GAMEDRIVER *GAME_PS2_50CENTBULLETPROOF;
extern const GAMEDRIVER *GAME_PS2_COLDWINTER;
extern const GAMEDRIVER *GAME_PS1_RESIDENTEVILSURVIVOR;
extern const GAMEDRIVER *GAME_PS1_DNLANDOFTHEBABES;
extern const GAMEDRIVER *GAME_PS2_MERCENARIES;
extern const GAMEDRIVER *GAME_PS2_MOHVANGUARD;
extern const GAMEDRIVER *GAME_PS1_THENOTE;
extern const GAMEDRIVER *GAME_PS1_POED;
extern const GAMEDRIVER *GAME_PS1_ECHONIGHT;
extern const GAMEDRIVER *GAME_PS1_SHADOWTOWER;
extern const GAMEDRIVER *GAME_PS1_SOUTHPARK;
extern const GAMEDRIVER *GAME_PS1_JUMPINGFLASH;
extern const GAMEDRIVER *GAME_PS1_KINGSFIELD;
extern const GAMEDRIVER *GAME_PS1_KINGSFIELD2;
extern const GAMEDRIVER *GAME_SS_POWERSLAVE;
extern const GAMEDRIVER *GAME_PS1_KINGSFIELD3;
extern const GAMEDRIVER *GAME_PS2_KINGSFIELD4;
extern const GAMEDRIVER *GAME_SD_MAKENX;
extern const GAMEDRIVER *GAME_SD_REDDOG;
extern const GAMEDRIVER *GAME_PS1_ARMOREDCORE;
extern const GAMEDRIVER *GAME_PS1_BAROQUE;
extern const GAMEDRIVER *GAME_PS1_GALEGUNNER;
extern const GAMEDRIVER *GAME_PS1_C12FINALRESISTANCE;
extern const GAMEDRIVER *GAME_PS1_MEGAMANLEGENDS;
extern const GAMEDRIVER *GAME_SNES_WILDGUNS;
extern const GAMEDRIVER *GAME_PS1_ALIENTRILOGY;
extern const GAMEDRIVER *GAME_PS1_HPSORCERERSSTONE;
extern const GAMEDRIVER *GAME_PS1_MEDALOFHONOR;
extern const GAMEDRIVER *GAME_PS3_KILLZONEHD;
extern const GAMEDRIVER *GAME_PS2_ETERNALRING;
extern const GAMEDRIVER *GAME_PS1_DISRUPTOR;
extern const GAMEDRIVER *GAME_SNES_CYBERNATOR;
extern const GAMEDRIVER *GAME_N64_TUROK3;
extern const GAMEDRIVER *GAME_PS2_MICHIGAN;
extern const GAMEDRIVER *GAME_PS2_STABYSS;
extern const GAMEDRIVER *GAME_PS2_AVPEXTINCTION;
extern const GAMEDRIVER *GAME_N64_007WINE;
extern const GAMEDRIVER *GAME_PS2_GEROGUEAGENT;
extern const GAMEDRIVER *GAME_PS1_LSDDREAMEMULATOR;
extern const GAMEDRIVER *GAME_PS1_DECEPTION;
extern const GAMEDRIVER *GAME_PS1_AQUANAUTSHOLIDAY;
extern const GAMEDRIVER *GAME_PS1_HELLNIGHT;
extern const GAMEDRIVER *GAME_PS1_MEGAMANLEGENDS2;
extern const GAMEDRIVER *GAME_PS2_TRIBESAA;
extern const GAMEDRIVER *GAME_PSP_CODEDARMS;
extern const GAMEDRIVER *GAME_SCD_JURASSICPARK;
extern const GAMEDRIVER *GAME_PSP_NOVA;
extern const GAMEDRIVER *GAME_PSP_GHOSTINTHESHELL;
extern const GAMEDRIVER *GAME_PS2_GHOSTINTHESHELL;
extern const GAMEDRIVER *GAME_PSP_RESISTANCERETRIBUTION;
extern const GAMEDRIVER *GAME_PS2_GREGMAXD;
extern const GAMEDRIVER *GAME_PS2_SHSHATTEREDMEMORIES;
extern const GAMEDRIVER *GAME_PS1_DUKETIMETOKILL;
extern const GAMEDRIVER *GAME_PS1_FUTURECOP;
extern const GAMEDRIVER *GAME_PS2_ROBOTECHINVASION;
extern const GAMEDRIVER *GAME_PS2_SERIOUSSAMNE;
extern const GAMEDRIVER *GAME_SS_PANZERDRAGOON;
extern const GAMEDRIVER *GAME_PS2_STATEOFEMERGENCY2;
extern const GAMEDRIVER *GAME_PS2_RACUPYOURARSENAL;
extern const GAMEDRIVER *GAME_PS2_ECHONIGHTBEYOND;
extern const GAMEDRIVER *GAME_PS2_ARMOREDCORE2;
extern const GAMEDRIVER *GAME_PS2_GLOBALDEFENSEFORCE;
extern const GAMEDRIVER *GAME_PS2_JURASSICTHEHUNTED;
extern const GAMEDRIVER *GAME_PS2_MONSTERHUNTER;
extern const GAMEDRIVER *GAME_PS3_HAZE;
extern const GAMEDRIVER *GAME_PS2_NOONELIVESFOREVER;
extern const GAMEDRIVER *GAME_SS_VIRTUALHYDLIDE;
extern const GAMEDRIVER *GAME_PS2_EARTHDEFENSEFORCE;
extern const GAMEDRIVER *GAME_PS2_SHADOWOFROME;
extern const GAMEDRIVER *GAME_GC_TUROKEVOLUTION;
extern const GAMEDRIVER *GAME_PS2_THESUFFERING;
extern const GAMEDRIVER *GAME_PS1_007THEWORLDISNOTENOUGH;
extern const GAMEDRIVER *GAME_PS2_RETURNTOCASTLEWOLF;
extern const GAMEDRIVER *GAME_PS2_BEVERLYHILLSCOP;
extern const GAMEDRIVER *GAME_PS2_KILLZONE;
extern const GAMEDRIVER *GAME_PS2_TIMESPLITTERS;
extern const GAMEDRIVER *GAME_PS2_BATTLEFIELD2;
extern const GAMEDRIVER *GAME_PS2_CALLOFDUTY3;
extern const GAMEDRIVER *GAME_PS2_NPPLPAINTBALL;
extern const GAMEDRIVER *GAME_PS1_SMALLSOLDIERS;
extern const GAMEDRIVER *GAME_PS2_SOCOM1;
extern const GAMEDRIVER *GAME_PS1_HYBRID;
extern const GAMEDRIVER *GAME_PS1_HYBRID_JAPAN;
extern const GAMEDRIVER *GAME_PS2_SPIDERMAN2;
extern const GAMEDRIVER *GAME_PS1_POWERSLAVE;
extern const GAMEDRIVER *GAME_PS1_GHOSTINTHESHELL;
extern const GAMEDRIVER *GAME_PS1_DELTAFORCEURBANWARFARE;
extern const GAMEDRIVER *GAME_PS2_GTAVICECITYSTORIES;
extern const GAMEDRIVER *GAME_PS2_GHOSTBUSTERS;
extern const GAMEDRIVER *GAME_PS2_SWAT;
extern const GAMEDRIVER *GAME_PS1_BRAHMAFORCE;

static const GAMEDRIVER **GAMELIST[] =
{	// UNF - Unfinished
	&GAME_TS2,
	&GAME_TS3,
	&GAME_NF,
	&GAME_MOHF,
	&GAME_MOHEA,
	&GAME_MOHRS,
	&GAME_DHV,
	&GAME_COD2BRO,
	&GAME_SERIOUS,
  	&GAME_METALARMS,
  	&GAME_TRIGGERMAN,
	&GAME_GEIST,
	&GAME_PS1_MENINBLACKCRASHDOWN,
	&GAME_PS1_CODENAMETENKA,
	&GAME_PS1_MOHUNDERGROUND,
	&GAME_PS1_REVOLUTIONX,
	&GAME_PS1_ARMORINES,
	&GAME_N64_GOLDENEYE,
	&GAME_N64_SINPUNISHMENT,
	&GAME_SNES_PACMAN2,
	&GAME_SNES_TIMONANDPUMBAA,
	&GAME_SNES_SHADOWRUN, // UNF
	&GAME_SNES_STARFOX, // UNF
	&GAME_SNES_UNTOUCHABLES,
	&GAME_SNES_RTYPE3,
	&GAME_PS2_007AGENTUNDERFIRE,
	&GAME_PS2_REDDEADREVOLVER,
	&GAME_PS2_TIMECRISIS2,
	&GAME_PS2_REDEADAIM,
	&GAME_PS2_GUNSLINGERGIRL1,
	&GAME_PS2_VAMPIRENIGHT,
	&GAME_PS2_NINJAASSAULT,
	&GAME_PS2_DARKWATCH,
	&GAME_PS2_BLACK,
	&GAME_PS2_URBANCHAOS,
	&GAME_PS2_QUAKE3,
	&GAME_PS2_CODFINESTHOUR,
	&GAME_PS2_50CENTBULLETPROOF,
	&GAME_PS2_COLDWINTER,
	&GAME_PS1_RESIDENTEVILSURVIVOR,
	&GAME_PS1_DNLANDOFTHEBABES, // UNF
	&GAME_PS2_MERCENARIES,
	&GAME_PS2_MOHVANGUARD,
	&GAME_PS1_THENOTE,
	&GAME_PS1_POED, // UNF
	&GAME_PS1_ECHONIGHT,
	&GAME_PS1_SHADOWTOWER,
	&GAME_PS1_SOUTHPARK,
	&GAME_PS1_JUMPINGFLASH,
	&GAME_PS1_KINGSFIELD,
	&GAME_PS1_KINGSFIELD2,
	// &GAME_SS_POWERSLAVE, // UNF
	&GAME_PS1_KINGSFIELD3,
	&GAME_PS2_KINGSFIELD4,
	&GAME_SD_MAKENX, // UNF
	&GAME_SD_REDDOG, // UNF
	&GAME_PS1_ARMOREDCORE,
	&GAME_PS1_BAROQUE,
	&GAME_PS1_GALEGUNNER, // UNF
	&GAME_PS1_C12FINALRESISTANCE, // UNF
	&GAME_PS1_MEGAMANLEGENDS, // UNF
	&GAME_SNES_WILDGUNS,
	&GAME_PS1_ALIENTRILOGY,
	&GAME_PS1_HPSORCERERSSTONE, // UNF
	&GAME_PS1_MEDALOFHONOR, // UNF
	&GAME_PS3_KILLZONEHD, // UNF
	&GAME_PS2_ETERNALRING,
	&GAME_PS1_DISRUPTOR,
	&GAME_SNES_CYBERNATOR, // UNF
	&GAME_N64_TUROK3, // UNF
	&GAME_PS2_MICHIGAN,
	&GAME_PS2_STABYSS, // UNF
	&GAME_PS2_AVPEXTINCTION, // UNF
	&GAME_N64_007WINE, // UNF
	&GAME_PS2_GEROGUEAGENT, // UNF
	&GAME_PS1_LSDDREAMEMULATOR,
	&GAME_PS1_DECEPTION, // UNF
	&GAME_PS1_AQUANAUTSHOLIDAY,
	&GAME_PS1_HELLNIGHT,
	&GAME_PS1_MEGAMANLEGENDS2, // UNF
	&GAME_PS2_TRIBESAA, // UNF
	&GAME_PSP_CODEDARMS,
	&GAME_SCD_JURASSICPARK, // UNF
	&GAME_PSP_NOVA, // UNF
	&GAME_PS2_GHOSTINTHESHELL,
	&GAME_PSP_GHOSTINTHESHELL,
	&GAME_PSP_RESISTANCERETRIBUTION, // UNF
	&GAME_PS2_GREGMAXD, // UNF
	&GAME_PS2_SHSHATTEREDMEMORIES, // UNF
	&GAME_PS1_DUKETIMETOKILL,
	&GAME_PS1_FUTURECOP,
	&GAME_PS2_ROBOTECHINVASION,
	&GAME_PS2_SERIOUSSAMNE,
	&GAME_SS_PANZERDRAGOON, // UNF
	&GAME_PS2_STATEOFEMERGENCY2, // UNF
	&GAME_PS2_RACUPYOURARSENAL, // UNF
	&GAME_PS2_ECHONIGHTBEYOND, // UNF
	&GAME_PS2_ARMOREDCORE2,
	&GAME_PS2_GLOBALDEFENSEFORCE,
	&GAME_PS2_JURASSICTHEHUNTED,
	&GAME_PS2_MONSTERHUNTER, // UNF
	&GAME_PS3_HAZE, // UNF
	&GAME_PS2_NOONELIVESFOREVER,
	&GAME_SS_VIRTUALHYDLIDE, // UNF
	&GAME_PS2_EARTHDEFENSEFORCE,
	&GAME_PS2_SHADOWOFROME, // UNF
	&GAME_GC_TUROKEVOLUTION,
	&GAME_PS2_THESUFFERING, // UNF
	&GAME_PS1_007THEWORLDISNOTENOUGH, // UNF
	&GAME_PS2_RETURNTOCASTLEWOLF,
	&GAME_PS2_BEVERLYHILLSCOP,
	&GAME_PS2_KILLZONE, // UNF
	&GAME_PS2_TIMESPLITTERS,
	&GAME_PS2_BATTLEFIELD2, // UNF
	&GAME_PS2_CALLOFDUTY3,
	&GAME_PS2_NPPLPAINTBALL, // UNF
	&GAME_PS1_SMALLSOLDIERS, // UNF
	&GAME_PS2_SOCOM1,
	&GAME_PS1_HYBRID,
	&GAME_PS1_HYBRID_JAPAN,
	&GAME_PS2_SPIDERMAN2, // UNF
	&GAME_PS1_POWERSLAVE,
	&GAME_PS1_GHOSTINTHESHELL,
	&GAME_PS1_DELTAFORCEURBANWARFARE,
	&GAME_PS2_GTAVICECITYSTORIES, // UNF
	&GAME_PS2_GHOSTBUSTERS,
	&GAME_PS2_SWAT,
	&GAME_PS1_BRAHMAFORCE
};

static const GAMEDRIVER *CURRENT_GAME = NULL;
static const uint8_t upper = (sizeof(GAMELIST) / sizeof(GAMELIST[0]));

uint8_t GAME_Status(void);
void GAME_Inject(void);
const char *GAME_Name(void);

//==========================================================================
// Purpose: check all game interfaces for game
//==========================================================================
uint8_t GAME_Status(void)
{
	if(CURRENT_GAME != NULL) // if any game has been detected previously
	{
		if(CURRENT_GAME->Status()) // check if game is still active, else check every supported driver
			return 1;
		CURRENT_GAME = NULL;
	}
	const GAMEDRIVER *THIS_GAME;
	for(uint8_t i = 0; (i < upper) && (CURRENT_GAME == NULL); i++)
	{
		THIS_GAME = *(GAMELIST[i]);
		if(THIS_GAME != NULL && THIS_GAME->Status())
			CURRENT_GAME = THIS_GAME;
	}
	return (CURRENT_GAME != NULL);
}
//==========================================================================
// Purpose: inject via game driver
//==========================================================================
void GAME_Inject(void)
{
	if(CURRENT_GAME != NULL)
		CURRENT_GAME->Inject();
}
//==========================================================================
// Purpose: return game driver name
//==========================================================================
const char *GAME_Name(void)
{
	if(CURRENT_GAME != NULL)
		return CURRENT_GAME->Name;
	// return DOLPHINVERSION; // if no driver active, return dolphin name
	return "No game loaded"; // if no driver active, return dolphin name
}
//==========================================================================
// Purpose: return game driver's required tickrate
//==========================================================================
uint16_t GAME_Tickrate(void)
{
	if(CURRENT_GAME != NULL)
		return CURRENT_GAME->Tickrate;
	return 1; // if no driver active, use 1000 Hz tickrate
}
//==========================================================================
// Purpose: return game driver's crosshair sway support
//==========================================================================
uint8_t GAME_CrosshairSwaySupported(void)
{
	if(CURRENT_GAME != NULL)
		return CURRENT_GAME->Crosshair;
	return 1; // return 1 if no drivers are available, so user can edit crosshair sway while dolphin isn't playing a game
}

uint8_t GAME_OptionSupported(void)
{
	if (CURRENT_GAME != NULL)
		if (CURRENT_GAME->Option != NULL)
			return 1;
	return 0;
}

const char *GAME_OptionMessage(void)
{
	if (CURRENT_GAME != NULL)
	{
		if (!optionToggle)
			return CURRENT_GAME->Option;
		else
			return CURRENT_GAME->Option2;
	}
	return "Option not supported";
}

// const void *GAME_ChangeOptionMessage(char* newMessage)
// {
// 	if (CURRENT_GAME != NULL)
// 		&CURRENT_GAME->Option = *newMessage;
// }