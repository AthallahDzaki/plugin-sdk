/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CBaseDC.h"

class CGrcState_SetDepthWrite : public CBaseDC {
public:
    CGrcState_SetDepthWrite(int32_t mode);
};
