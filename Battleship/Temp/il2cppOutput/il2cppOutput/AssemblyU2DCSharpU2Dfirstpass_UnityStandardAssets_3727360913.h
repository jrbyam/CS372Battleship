#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2889538658;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Effects.SmokeParticles
struct  SmokeParticles_t3727360913  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.AudioClip[] UnityStandardAssets.Effects.SmokeParticles::extinguishSounds
	AudioClipU5BU5D_t2889538658* ___extinguishSounds_2;

public:
	inline static int32_t get_offset_of_extinguishSounds_2() { return static_cast<int32_t>(offsetof(SmokeParticles_t3727360913, ___extinguishSounds_2)); }
	inline AudioClipU5BU5D_t2889538658* get_extinguishSounds_2() const { return ___extinguishSounds_2; }
	inline AudioClipU5BU5D_t2889538658** get_address_of_extinguishSounds_2() { return &___extinguishSounds_2; }
	inline void set_extinguishSounds_2(AudioClipU5BU5D_t2889538658* value)
	{
		___extinguishSounds_2 = value;
		Il2CppCodeGenWriteBarrier(&___extinguishSounds_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
