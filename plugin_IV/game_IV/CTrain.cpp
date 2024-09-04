/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTrain.h"

CTrain::CTrain(uint8_t createdBy) : CVehicle(createdBy) {
    plugin::CallMethodDyn(gpattern("55 8B EC 83 E4 F0 83 EC 18 56 57 FF 75 08 8B F9 89 7C 24 10"), this, createdBy);
}

