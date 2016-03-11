#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t808643063;
// UnityEngine.Renderer
struct Renderer_t1092684080;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Effects.Hose
struct  Hose_t383826732  : public MonoBehaviour_t3012272455
{
public:
	// System.Single UnityStandardAssets.Effects.Hose::maxPower
	float ___maxPower_2;
	// System.Single UnityStandardAssets.Effects.Hose::minPower
	float ___minPower_3;
	// System.Single UnityStandardAssets.Effects.Hose::changeSpeed
	float ___changeSpeed_4;
	// UnityEngine.ParticleSystem[] UnityStandardAssets.Effects.Hose::hoseWaterSystems
	ParticleSystemU5BU5D_t808643063* ___hoseWaterSystems_5;
	// UnityEngine.Renderer UnityStandardAssets.Effects.Hose::systemRenderer
	Renderer_t1092684080 * ___systemRenderer_6;
	// System.Single UnityStandardAssets.Effects.Hose::m_Power
	float ___m_Power_7;

public:
	inline static int32_t get_offset_of_maxPower_2() { return static_cast<int32_t>(offsetof(Hose_t383826732, ___maxPower_2)); }
	inline float get_maxPower_2() const { return ___maxPower_2; }
	inline float* get_address_of_maxPower_2() { return &___maxPower_2; }
	inline void set_maxPower_2(float value)
	{
		___maxPower_2 = value;
	}

	inline static int32_t get_offset_of_minPower_3() { return static_cast<int32_t>(offsetof(Hose_t383826732, ___minPower_3)); }
	inline float get_minPower_3() const { return ___minPower_3; }
	inline float* get_address_of_minPower_3() { return &___minPower_3; }
	inline void set_minPower_3(float value)
	{
		___minPower_3 = value;
	}

	inline static int32_t get_offset_of_changeSpeed_4() { return static_cast<int32_t>(offsetof(Hose_t383826732, ___changeSpeed_4)); }
	inline float get_changeSpeed_4() const { return ___changeSpeed_4; }
	inline float* get_address_of_changeSpeed_4() { return &___changeSpeed_4; }
	inline void set_changeSpeed_4(float value)
	{
		___changeSpeed_4 = value;
	}

	inline static int32_t get_offset_of_hoseWaterSystems_5() { return static_cast<int32_t>(offsetof(Hose_t383826732, ___hoseWaterSystems_5)); }
	inline ParticleSystemU5BU5D_t808643063* get_hoseWaterSystems_5() const { return ___hoseWaterSystems_5; }
	inline ParticleSystemU5BU5D_t808643063** get_address_of_hoseWaterSystems_5() { return &___hoseWaterSystems_5; }
	inline void set_hoseWaterSystems_5(ParticleSystemU5BU5D_t808643063* value)
	{
		___hoseWaterSystems_5 = value;
		Il2CppCodeGenWriteBarrier(&___hoseWaterSystems_5, value);
	}

	inline static int32_t get_offset_of_systemRenderer_6() { return static_cast<int32_t>(offsetof(Hose_t383826732, ___systemRenderer_6)); }
	inline Renderer_t1092684080 * get_systemRenderer_6() const { return ___systemRenderer_6; }
	inline Renderer_t1092684080 ** get_address_of_systemRenderer_6() { return &___systemRenderer_6; }
	inline void set_systemRenderer_6(Renderer_t1092684080 * value)
	{
		___systemRenderer_6 = value;
		Il2CppCodeGenWriteBarrier(&___systemRenderer_6, value);
	}

	inline static int32_t get_offset_of_m_Power_7() { return static_cast<int32_t>(offsetof(Hose_t383826732, ___m_Power_7)); }
	inline float get_m_Power_7() const { return ___m_Power_7; }
	inline float* get_address_of_m_Power_7() { return &___m_Power_7; }
	inline void set_m_Power_7(float value)
	{
		___m_Power_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
