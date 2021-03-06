/*
  Created by Jenny White on 29.04.18.
  Copyright (c) 2018 nullworks. All rights reserved.
*/

#include <hacks/hacklist.hpp>
#include "HookedMethods.hpp"
#include "MiscTemporary.hpp"
#if not LAGBOT_MODE
#include "Backtrack.hpp"
#endif

const char *skynum[] = { XORSTR("sky_tf2_04"),
                         XORSTR("sky_upward"),
                         XORSTR("sky_dustbowl_01"),
                         XORSTR("sky_goldrush_01"),
                         XORSTR("sky_granary_01"),
                         XORSTR("sky_well_01"),
                         XORSTR("sky_gravel_01"),
                         XORSTR("sky_badlands_01"),
                         XORSTR("sky_hydro_01"),
                         XORSTR("sky_night_01"),
                         XORSTR("sky_nightfall_01"),
                         XORSTR("sky_trainyard_01"),
                         XORSTR("sky_stormfront_01"),
                         XORSTR("sky_morningsnow_01"),
                         XORSTR("sky_alpinestorm_01"),
                         XORSTR("sky_harvest_01"),
                         XORSTR("sky_harvest_night_01"),
                         XORSTR("sky_halloween"),
                         XORSTR("sky_halloween_night_01"),
                         XORSTR("sky_halloween_night2014_01"),
                         XORSTR("sky_island_01"),
                         XORSTR("sky_jungle_01"),
                         XORSTR("sky_invasion2fort_01"),
                         XORSTR("sky_well_02"),
                         XORSTR("sky_outpost_01"),
                         XORSTR("sky_coastal_01"),
                         XORSTR("sky_rainbow_01"),
                         XORSTR("sky_badlands_pyroland_01"),
                         XORSTR("sky_pyroland_01"),
                         XORSTR("sky_pyroland_02"),
                         XORSTR("sky_pyroland_03") };
static CatEnum skys({ XORSTR("sky_tf2_04"),
                      XORSTR("sky_upward"),
                      XORSTR("sky_dustbowl_01"),
                      XORSTR("sky_goldrush_01"),
                      XORSTR("sky_granary_01"),
                      XORSTR("sky_well_01"),
                      XORSTR("sky_gravel_01"),
                      XORSTR("sky_badlands_01"),
                      XORSTR("sky_hydro_01"),
                      XORSTR("sky_night_01"),
                      XORSTR("sky_nightfall_01"),
                      XORSTR("sky_trainyard_01"),
                      XORSTR("sky_stormfront_01"),
                      XORSTR("sky_morningsnow_01"),
                      XORSTR("sky_alpinestorm_01"),
                      XORSTR("sky_harvest_01"),
                      XORSTR("sky_harvest_night_01"),
                      XORSTR("sky_halloween"),
                      XORSTR("sky_halloween_night_01"),
                      XORSTR("sky_halloween_night2014_01"),
                      XORSTR("sky_island_01"),
                      XORSTR("sky_jungle_01"),
                      XORSTR("sky_invasion2fort_01"),
                      XORSTR("sky_well_02"),
                      XORSTR("sky_outpost_01"),
                      XORSTR("sky_coastal_01"),
                      XORSTR("sky_rainbow_01"),
                      XORSTR("sky_badlands_pyroland_01"),
                      XORSTR("sky_pyroland_01"),
                      XORSTR("sky_pyroland_02"),
                      XORSTR("sky_pyroland_03") });
static CatVar
    skybox_changer(skys, XORSTR("skybox_changer"), XORSTR("0"), XORSTR("Change Skybox to this skybox"),
                   XORSTR("Change Skybox to this skybox, only changes on map load"));
static CatVar halloween_mode(CV_SWITCH, XORSTR("halloween_mode"), XORSTR("0"),
                             XORSTR("Forced Halloween mode"),
                             XORSTR("forced tf_forced_holiday 2"));

namespace hooked_methods
{

DEFINE_HOOKED_METHOD(LevelInit, void, void *this_, const char *name)
{
#if not LAGBOT_MODE
    hacks::shared::backtrack::lastincomingsequencenumber = 0;
    hacks::shared::backtrack::sequences.clear();
#endif
    hacks::shared::autojoin::queuetime.update();
    firstcm = true;
#if not LAGBOT_MODE
    playerlist::Save();
#endif
#if not LAGBOT_MODE
    hacks::shared::lagexploit::bcalled = false;
#endif
#if ENABLE_VISUALS
    typedef bool *(*LoadNamedSkys_Fn)(const char *);
    uintptr_t addr = gSignatures.GetEngineSignature(
        XORSTR("55 89 E5 57 31 FF 56 8D B5 ? ? ? ? 53 81 EC 6C 01 00 00"));
    static LoadNamedSkys_Fn LoadNamedSkys = LoadNamedSkys_Fn(addr);
    bool succ;
    logging::Info(XORSTR("Going to load the skybox"));
#ifdef __clang__
    asm(XORSTR("movl %1, %%edi; push skynum[(int) skybox_changer]; call %%edi; mov ")
        XORSTR("%%eax, %0; add %%esp, 4h")
        : XORSTR("=r")(succ)
        : XORSTR("r")(LoadNamedSkys));
#else
    succ = LoadNamedSkys(skynum[(int) skybox_changer]);
#endif
    logging::Info(XORSTR("Loaded Skybox: %s"), succ ? XORSTR("true") : XORSTR("false"));
    ConVar *holiday = g_ICvar->FindVar(XORSTR("tf_forced_holiday"));

    if (halloween_mode)
        holiday->SetValue(2);
    else if (holiday->m_nValue == 2)
        holiday->SetValue(0);
#endif

    g_IEngine->ClientCmd_Unrestricted(XORSTR("exec cat_matchexec"));
#if not LAGBOT_MODE
    hacks::shared::aimbot::Reset();
    hacks::shared::backtrack::Init();
    chat_stack::Reset();
    hacks::shared::anticheat::ResetEverything();
    original::LevelInit(this_, name);
    hacks::shared::walkbot::OnLevelInit();
#endif
#if ENABLE_IPC
    if (ipc::peer)
    {
        ipc::peer->memory->peer_user_data[ipc::peer->client_id].ts_connected =
            time(nullptr);
    }
#endif
}
}
