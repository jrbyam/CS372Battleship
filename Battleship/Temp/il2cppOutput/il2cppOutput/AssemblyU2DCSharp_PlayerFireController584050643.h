#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerFireController
struct  PlayerFireController_t584050643  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean PlayerFireController::shotFired
	bool ___shotFired_2;
	// UnityEngine.GameObject PlayerFireController::passPanel
	GameObject_t4012695102 * ___passPanel_3;

public:
	inline static int32_t get_offset_of_shotFired_2() { return static_cast<int32_t>(offsetof(PlayerFireController_t584050643, ___shotFired_2)); }
	inline bool get_shotFired_2() const { return ___shotFired_2; }
	inline bool* get_address_of_shotFired_2() { return &___shotFired_2; }
	inline void set_shotFired_2(bool value)
	{
		___shotFired_2 = value;
	}

	inline static int32_t get_offset_of_passPanel_3() { return static_cast<int32_t>(offsetof(PlayerFireController_t584050643, ___passPanel_3)); }
	inline GameObject_t4012695102 * get_passPanel_3() const { return ___passPanel_3; }
	inline GameObject_t4012695102 ** get_address_of_passPanel_3() { return &___passPanel_3; }
	inline void set_passPanel_3(GameObject_t4012695102 * value)
	{
		___passPanel_3 = value;
		Il2CppCodeGenWriteBarrier(&___passPanel_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
