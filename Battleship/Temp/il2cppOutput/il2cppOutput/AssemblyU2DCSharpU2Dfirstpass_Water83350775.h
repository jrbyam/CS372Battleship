#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t3875263730;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Water_WaterMode1789603642.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Water
struct  Water_t83350775  : public MonoBehaviour_t3012272455
{
public:
	// Water/WaterMode Water::m_WaterMode
	int32_t ___m_WaterMode_2;
	// System.Boolean Water::m_DisablePixelLights
	bool ___m_DisablePixelLights_3;
	// System.Int32 Water::m_TextureSize
	int32_t ___m_TextureSize_4;
	// System.Single Water::m_ClipPlaneOffset
	float ___m_ClipPlaneOffset_5;
	// UnityEngine.LayerMask Water::m_ReflectLayers
	LayerMask_t1862190090  ___m_ReflectLayers_6;
	// UnityEngine.LayerMask Water::m_RefractLayers
	LayerMask_t1862190090  ___m_RefractLayers_7;
	// System.Collections.Hashtable Water::m_ReflectionCameras
	Hashtable_t3875263730 * ___m_ReflectionCameras_8;
	// System.Collections.Hashtable Water::m_RefractionCameras
	Hashtable_t3875263730 * ___m_RefractionCameras_9;
	// UnityEngine.RenderTexture Water::m_ReflectionTexture
	RenderTexture_t12905170 * ___m_ReflectionTexture_10;
	// UnityEngine.RenderTexture Water::m_RefractionTexture
	RenderTexture_t12905170 * ___m_RefractionTexture_11;
	// Water/WaterMode Water::m_HardwareWaterSupport
	int32_t ___m_HardwareWaterSupport_12;
	// System.Int32 Water::m_OldReflectionTextureSize
	int32_t ___m_OldReflectionTextureSize_13;
	// System.Int32 Water::m_OldRefractionTextureSize
	int32_t ___m_OldRefractionTextureSize_14;

public:
	inline static int32_t get_offset_of_m_WaterMode_2() { return static_cast<int32_t>(offsetof(Water_t83350775, ___m_WaterMode_2)); }
	inline int32_t get_m_WaterMode_2() const { return ___m_WaterMode_2; }
	inline int32_t* get_address_of_m_WaterMode_2() { return &___m_WaterMode_2; }
	inline void set_m_WaterMode_2(int32_t value)
	{
		___m_WaterMode_2 = value;
	}

	inline static int32_t get_offset_of_m_DisablePixelLights_3() { return static_cast<int32_t>(offsetof(Water_t83350775, ___m_DisablePixelLights_3)); }
	inline bool get_m_DisablePixelLights_3() const { return ___m_DisablePixelLights_3; }
	inline bool* get_address_of_m_DisablePixelLights_3() { return &___m_DisablePixelLights_3; }
	inline void set_m_DisablePixelLights_3(bool value)
	{
		___m_DisablePixelLights_3 = value;
	}

	inline static int32_t get_offset_of_m_TextureSize_4() { return static_cast<int32_t>(offsetof(Water_t83350775, ___m_TextureSize_4)); }
	inline int32_t get_m_TextureSize_4() const { return ___m_TextureSize_4; }
	inline int32_t* get_address_of_m_TextureSize_4() { return &___m_TextureSize_4; }
	inline void set_m_TextureSize_4(int32_t value)
	{
		___m_TextureSize_4 = value;
	}

	inline static int32_t get_offset_of_m_ClipPlaneOffset_5() { return static_cast<int32_t>(offsetof(Water_t83350775, ___m_ClipPlaneOffset_5)); }
	inline float get_m_ClipPlaneOffset_5() const { return ___m_ClipPlaneOffset_5; }
	inline float* get_address_of_m_ClipPlaneOffset_5() { return &___m_ClipPlaneOffset_5; }
	inline void set_m_ClipPlaneOffset_5(float value)
	{
		___m_ClipPlaneOffset_5 = value;
	}

	inline static int32_t get_offset_of_m_ReflectLayers_6() { return static_cast<int32_t>(offsetof(Water_t83350775, ___m_ReflectLayers_6)); }
	inline LayerMask_t1862190090  get_m_ReflectLayers_6() const { return ___m_ReflectLayers_6; }
	inline LayerMask_t1862190090 * get_address_of_m_ReflectLayers_6() { return &___m_ReflectLayers_6; }
	inline void set_m_ReflectLayers_6(LayerMask_t1862190090  value)
	{
		___m_ReflectLayers_6 = value;
	}

	inline static int32_t get_offset_of_m_RefractLayers_7() { return static_cast<int32_t>(offsetof(Water_t83350775, ___m_RefractLayers_7)); }
	inline LayerMask_t1862190090  get_m_RefractLayers_7() const { return ___m_RefractLayers_7; }
	inline LayerMask_t1862190090 * get_address_of_m_RefractLayers_7() { return &___m_RefractLayers_7; }
	inline void set_m_RefractLayers_7(LayerMask_t1862190090  value)
	{
		___m_RefractLayers_7 = value;
	}

	inline static int32_t get_offset_of_m_ReflectionCameras_8() { return static_cast<int32_t>(offsetof(Water_t83350775, ___m_ReflectionCameras_8)); }
	inline Hashtable_t3875263730 * get_m_ReflectionCameras_8() const { return ___m_ReflectionCameras_8; }
	inline Hashtable_t3875263730 ** get_address_of_m_ReflectionCameras_8() { return &___m_ReflectionCameras_8; }
	inline void set_m_ReflectionCameras_8(Hashtable_t3875263730 * value)
	{
		___m_ReflectionCameras_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_ReflectionCameras_8, value);
	}

	inline static int32_t get_offset_of_m_RefractionCameras_9() { return static_cast<int32_t>(offsetof(Water_t83350775, ___m_RefractionCameras_9)); }
	inline Hashtable_t3875263730 * get_m_RefractionCameras_9() const { return ___m_RefractionCameras_9; }
	inline Hashtable_t3875263730 ** get_address_of_m_RefractionCameras_9() { return &___m_RefractionCameras_9; }
	inline void set_m_RefractionCameras_9(Hashtable_t3875263730 * value)
	{
		___m_RefractionCameras_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_RefractionCameras_9, value);
	}

	inline static int32_t get_offset_of_m_ReflectionTexture_10() { return static_cast<int32_t>(offsetof(Water_t83350775, ___m_ReflectionTexture_10)); }
	inline RenderTexture_t12905170 * get_m_ReflectionTexture_10() const { return ___m_ReflectionTexture_10; }
	inline RenderTexture_t12905170 ** get_address_of_m_ReflectionTexture_10() { return &___m_ReflectionTexture_10; }
	inline void set_m_ReflectionTexture_10(RenderTexture_t12905170 * value)
	{
		___m_ReflectionTexture_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_ReflectionTexture_10, value);
	}

	inline static int32_t get_offset_of_m_RefractionTexture_11() { return static_cast<int32_t>(offsetof(Water_t83350775, ___m_RefractionTexture_11)); }
	inline RenderTexture_t12905170 * get_m_RefractionTexture_11() const { return ___m_RefractionTexture_11; }
	inline RenderTexture_t12905170 ** get_address_of_m_RefractionTexture_11() { return &___m_RefractionTexture_11; }
	inline void set_m_RefractionTexture_11(RenderTexture_t12905170 * value)
	{
		___m_RefractionTexture_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_RefractionTexture_11, value);
	}

	inline static int32_t get_offset_of_m_HardwareWaterSupport_12() { return static_cast<int32_t>(offsetof(Water_t83350775, ___m_HardwareWaterSupport_12)); }
	inline int32_t get_m_HardwareWaterSupport_12() const { return ___m_HardwareWaterSupport_12; }
	inline int32_t* get_address_of_m_HardwareWaterSupport_12() { return &___m_HardwareWaterSupport_12; }
	inline void set_m_HardwareWaterSupport_12(int32_t value)
	{
		___m_HardwareWaterSupport_12 = value;
	}

	inline static int32_t get_offset_of_m_OldReflectionTextureSize_13() { return static_cast<int32_t>(offsetof(Water_t83350775, ___m_OldReflectionTextureSize_13)); }
	inline int32_t get_m_OldReflectionTextureSize_13() const { return ___m_OldReflectionTextureSize_13; }
	inline int32_t* get_address_of_m_OldReflectionTextureSize_13() { return &___m_OldReflectionTextureSize_13; }
	inline void set_m_OldReflectionTextureSize_13(int32_t value)
	{
		___m_OldReflectionTextureSize_13 = value;
	}

	inline static int32_t get_offset_of_m_OldRefractionTextureSize_14() { return static_cast<int32_t>(offsetof(Water_t83350775, ___m_OldRefractionTextureSize_14)); }
	inline int32_t get_m_OldRefractionTextureSize_14() const { return ___m_OldRefractionTextureSize_14; }
	inline int32_t* get_address_of_m_OldRefractionTextureSize_14() { return &___m_OldRefractionTextureSize_14; }
	inline void set_m_OldRefractionTextureSize_14(int32_t value)
	{
		___m_OldRefractionTextureSize_14 = value;
	}
};

struct Water_t83350775_StaticFields
{
public:
	// System.Boolean Water::s_InsideWater
	bool ___s_InsideWater_15;

public:
	inline static int32_t get_offset_of_s_InsideWater_15() { return static_cast<int32_t>(offsetof(Water_t83350775_StaticFields, ___s_InsideWater_15)); }
	inline bool get_s_InsideWater_15() const { return ___s_InsideWater_15; }
	inline bool* get_address_of_s_InsideWater_15() { return &___s_InsideWater_15; }
	inline void set_s_InsideWater_15(bool value)
	{
		___s_InsideWater_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
