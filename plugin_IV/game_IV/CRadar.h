/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Rage.h"
#include "CSprite2d.h"

enum eBlipType {
	BLIP_TYPE_CAR = 1,
	BLIP_TYPE_CHAR = 2,
	BLIP_TYPE_OBJECT = 3,
	BLIP_TYPE_COORD = 4,
	BLIP_TYPE_CONTACT = 5,
	BLIP_TYPE_PICKUP = 6,
	BLIP_TYPE_UNKNOWN = 7,
	BLIP_TYPE_PICKUP_2 = 8,
};

enum eBlipDisplay {
	BLIP_DISPLAY_HIDDEN = 0,
	BLIP_DISPLAY_ARROW_ONLY = 1,
	BLIP_DISPLAY_MAP_ONLY = 2,
	BLIP_DISPLAY_ARROW_AND_MAP = 4,
};

enum eRadarSprite {
	SPRITE_NONE,
	SPRITE_HIGHER,
	SPRITE_LEVEL,
	SPRITE_LOWER,
	SPRITE_OBJECTIVE_HIGHER,
	SPRITE_OBJECTIVE,
	SPRITE_OBJECTIVE_LOWER,
	SPRITE_CENTRE,
	SPRITE_NORTH,
	SPRITE_WAYPOINT,
	SPRITE_WEAPON_PISTOL,
	SPRITE_WEAPON_SHOTGUN,
	SPRITE_WEAPON_SMG,
	SPRITE_WEAPON_ASSAULT_RIFLE,
	SPRITE_WEAPON_ROCKET,
	SPRITE_WEAPON_GRENADES,
	SPRITE_WEAPON_MOLOTOV,
	SPRITE_WEAPON_SNIPER,
	SPRITE_WEAPON_BAT,
	SPRITE_WEAPON_KNIFE,
	SPRITE_WEAPON_HEALTH,
	SPRITE_WEAPON_ARMOUR,
	SPRITE_BURGERSHOT,
	SPRITE_CHICKEN,
	SPRITE_VLAD,
	SPRITE_INTERNET,
	SPRITE_MANNY,
	SPRITE_LITTLEJACOB,
	SPRITE_ROMAN,
	SPRITE_FAUSTIN,
	SPRITE_SAFEHOUSE,
	SPRITE_TAXI,
	SPRITE_BERNIECRANE,
	SPRITE_BRUCIE,
	SPRITE_CIA,
	SPRITE_DWAYNE,
	SPRITE_ELIZABETA,
	SPRITE_GAMBETTI,
	SPRITE_JIMMY,
	SPRITE_MCDERRICK,
	SPRITE_MCFRANCIS,
	SPRITE_MCGERRY,
	SPRITE_MCKATIE,
	SPRITE_MCPACKIE,
	SPRITE_PHILBELL,
	SPRITE_PLAYBOYX,
	SPRITE_RAYBOCCINO,
	SPRITE_8BALL,
	SPRITE_BAR,
	SPRITE_BOATTOUR,
	SPRITE_BOWLING,
	SPRITE_CLOTHES,
	SPRITE_CLUB,
	SPRITE_DARTS,
	SPRITE_DWAYNE_RED,
	SPRITE_GIRLFRIEND,
	SPRITE_PLAYBOYX_RED,
	SPRITE_HELITOUR,
	SPRITE_RESTAURANT,
	SPRITE_STATION,
	SPRITE_WEAPONS,
	SPRITE_POLICE,
	SPRITE_FIRE,
	SPRITE_HOSPITAL,
	SPRITE_MALE,
	SPRITE_FEMALE,
	SPRITE_RACEFLAG,
	SPRITE_STRIPCLUB,
	SPRITE_EMPTY,
	SPRITE_POLICE_CHASE,
	SPRITE_DIMITRI,
	SPRITE_COMEDY,
	SPRITE_CABARET,
	SPRITE_RANSOM,
	SPRITE_POLICE_HELI,
	SPRITE_MICHELLE,
	SPRITE_SPRAYSHOP,
	SPRITE_ASSASSIN,
	SPRITE_SNAKE,
	SPRITE_DEAL,
	SPRITE_CAR,
	SPRITE_LAWYER,
	SPRITE_CUP,
	SPRITE_MULTIPLAYER,
	SPRITE_STATION_3,
	SPRITE_STATION_8,
	SPRITE_STATION_A,
	SPRITE_STATION_B,
	SPRITE_STATION_C,
	SPRITE_STATION_E,
	SPRITE_STATION_J,
	SPRITE_STATION_K,
	SPRITE_CARWASH,
	SPRITE_UNITED_LIBERTY_PAPER,
	SPRITE_WEAPON_UP,
	SPRITE_WEAPON_DOWN,
	SPRITE_EPISODE_BLIP_1,
	SPRITE_EPISODE_BLIP_2,
	SPRITE_EPISODE_BLIP_3,
	SPRITE_EPISODE_BLIP_4,
	SPRITE_EPISODE_BLIP_5,
	SPRITE_EPISODE_BLIP_6,
	SPRITE_EPISODE_BLIP_7,
	SPRITE_EPISODE_BLIP_8,
	SPRITE_EPISODE_BLIP_9,
	SPRITE_EPISODE_BLIP_10,
	SPRITE_EPISODE_BLIP_11,
	SPRITE_EPISODE_BLIP_12,
	SPRITE_EPISODE_BLIP_13,
	SPRITE_EPISODE_BLIP_14,
	SPRITE_EPISODE_BLIP_15,
	SPRITE_ARMWRESTLING,
	SPRITE_ROADRAGE,
	SPRITE_CARDGAME,
	SPRITE_AIRHOCKEY,
	SPRITE_GANGWAR,
	SPRITE_WEAPON_POOLCUE,
	SPRITE_WEAPON_PIPEBOMB,
	SPRITE_WEAPON_GRENADELAUNCHER,
	SPRITE_TERRY,
	SPRITE_CLAY,
	SPRITE_TERRITORY_1,
	SPRITE_TERRITORY_2,
	SPRITE_TERRITORY_3,
	SPRITE_TERRITORY_4,
	SPRITE_TERRITORY_5,
	SPRITE_TERRITORY_6,
	SPRITE_MOTORCYCLE,
	SPRITE_JIMSWEAPON,
	SPRITE_WEAPON_STICKYBOMB,
};

struct tRadarTraceProperties {
    uint8_t field_1[4];
    uint32_t m_nSprite;
};

VALIDATE_SIZE(tRadarTraceProperties, 0x8);

struct tRadarTrace {
	uint16_t m_nIndex;
    uint8_t field_2[6];
    uint8_t m_bSomething;
    uint8_t field_4[3];
    uint32_t m_nDisplay;
    uint8_t field_8[8];
    float m_fActualScale;
    uint8_t field_14[4];
    uint8_t m_nFlags;
    uint8_t field_16[15];
    rage::Vector3 m_vPos;
    uint8_t field_24[4];
    float m_fRotation;
    uint8_t field_30[12];
    float m_fScale;
    uint32_t m_nColour;
    uint8_t m_nAlpha;
    uint8_t field_40[3];
    tRadarTraceProperties* m_pProperties;
};

VALIDATE_SIZE(tRadarTrace, 0x60);

class CRadar {
public:
    static tRadarTrace** ms_RadarTrace;
    static CSprite2d& RadarRingBack;
    static CSprite2d& RadarRingFront;
    static CSprite2d** RadarSprites;
	static rage::Vector2& vec2DRadarOrigin;

public:
	static bool IsRenderPhaseTime();
	static int32_t GetActualBlipArrayIndex(int32_t blipIndex);
};

