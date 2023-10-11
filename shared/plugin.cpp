/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "plugin.h"

#ifdef GTAIV
#include "common.h"
#include "CClock.h"
#include "CTimer.h"
#include "Rage.h"
#include "CWorld.h"
#include "CText.h"
#include "CDrawSpriteDC.h"
#include "CDrawRectDC.h"
#include "CFont.h"
#include "CCutsceneMgr.h"
#include "CRadar.h"
#include "CSprite2d.h"
#include "CViewport.h"
#include "T_CB_Generic.h"
#include "CTxdStore.h"
#include "CRAGE_SetRenderStateDC.h"
#include "CGrcState_SetCullMode.h"
#include "CGrcState_SetLightingMode.h"
#include "CGrcState_SetDepthWrite.h"
#include "CPed.h"
#include "CWeaponInfo.h"
#include "CPlayerInfo.h"
#include "CPad.h"
#include "CKeyboardMgr.h"
#include "CCredits.h"
#include "CCamera.h"
#include "CMenuManager.h"
#include "CHud.h"
#include "CHudColours.h"
#include "CPhysical.h"
#include "CPedIntelligence.h"
#include "CObject.h"
#include "CWanted.h"
#include "C_PcSave.h"
#include "CReplay.h"
#include "CWeather.h"
#include "CModelInfo.h"
#include "CWeaponData.h"
#include "CAmmoData.h"
#include "CPlayerData.h"
#include "CPools.h"
#include "CTaskManager.h"
#include "CTaskSimpleAimGun.h"
#include "CTaskComplexAimAndThrowProjectile.h"
#include "audRadioAudioEntity.h"
#include "CRadioHud.h"
#endif

using namespace plugin;

void plugin::InitEverything() {
#ifdef GTAIV
    plugin::InitPatterns<CallingConventions>();
    plugin::InitPatterns<CClock>();
    plugin::InitPatterns<CTimer>();
    plugin::InitPatterns<common>();
    plugin::InitPatterns<rage::rs>();
    plugin::InitPatterns<CWorld>();
    plugin::InitPatterns<CText>();
    plugin::InitPatterns<CBaseDC>();
    plugin::InitPatterns<CDrawSpriteDC>();
    plugin::InitPatterns<CDrawRectDC>();
    plugin::InitPatterns<CFont>();
    plugin::InitPatterns<CCutsceneMgr>();
    plugin::InitPatterns<CRadar>();
    plugin::InitPatterns<CSprite2d>();
    plugin::InitPatterns<CViewport>();
    plugin::InitPatterns<T_CB_Generic>();
    plugin::InitPatterns<CTxdStore>();
    plugin::InitPatterns<CRAGE_SetRenderStateDC>();
    plugin::InitPatterns<CGrcState_SetCullMode>();
    plugin::InitPatterns<CGrcState_SetLightingMode>();
    plugin::InitPatterns<CGrcState_SetDepthWrite>();
    plugin::InitPatterns<CPed>();
    plugin::InitPatterns<CWeaponInfo>();
    plugin::InitPatterns<CPlayerInfo>();
    plugin::InitPatterns<CPad>();
    plugin::InitPatterns<CKeyboardMgr>();
    plugin::InitPatterns<CCredits>();
    plugin::InitPatterns<CCamera>();
    plugin::InitPatterns<CMenuManager>();
    plugin::InitPatterns<CHud>();
    plugin::InitPatterns<CHudColours>();
    plugin::InitPatterns<CPhysical>();
    plugin::InitPatterns<CPedIntelligence>();
    plugin::InitPatterns<CObject>();
    plugin::InitPatterns<CWanted>();
    plugin::InitPatterns<CReplay>();
    plugin::InitPatterns<C_PcSave>();
    plugin::InitPatterns<CWeather>();
    plugin::InitPatterns<CModelInfo>();
    plugin::InitPatterns<CAmmoData>();
    plugin::InitPatterns<CWeaponData>();
    plugin::InitPatterns<CPlayerData>();
    plugin::InitPatterns<CPools>();
    plugin::InitPatterns<CTaskManager>();
    plugin::InitPatterns<CTaskSimpleAimGun>();
    plugin::InitPatterns<CTaskComplexAimAndThrowProjectile>();
    plugin::InitPatterns<audRadioAudioEntity>();
    plugin::InitPatterns<CRadioHud>();

#endif
}
