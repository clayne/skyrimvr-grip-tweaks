#pragma once

#include "RE/N/NiRTTI.h"
#include "VR/OpenVRUtils.h"
#include "VR/PapyrusVRAPI.h"
#include "VR/VRManagerAPI.h"
#include "equip_manager.h"
#include "higgsinterface001.h"
#include "hooks.h"
#include "menu_checker.h"
#include "mod_event_sink.hpp"
#include "mod_input.h"
#include "vrikinterface001.h"

namespace griptweaks
{
	extern OpenVRHookManagerAPI* g_OVRHookManager;

	void StartMod();

	void onEquipEvent(const RE::TESEquipEvent* event);
}