#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,System.Int32>
struct Dictionary_2_t664995206;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;
// System.Comparison`1<System.Type>
struct Comparison_1_t1187937515;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.MixinData
struct  MixinData_t2184984786  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Int32> Castle.DynamicProxy.MixinData::mixinPositions
	Dictionary_2_t664995206 * ___mixinPositions_0;
	// System.Collections.Generic.List`1<System.Object> Castle.DynamicProxy.MixinData::mixinsImpl
	List_1_t1634065389 * ___mixinsImpl_1;

public:
	inline static int32_t get_offset_of_mixinPositions_0() { return static_cast<int32_t>(offsetof(MixinData_t2184984786, ___mixinPositions_0)); }
	inline Dictionary_2_t664995206 * get_mixinPositions_0() const { return ___mixinPositions_0; }
	inline Dictionary_2_t664995206 ** get_address_of_mixinPositions_0() { return &___mixinPositions_0; }
	inline void set_mixinPositions_0(Dictionary_2_t664995206 * value)
	{
		___mixinPositions_0 = value;
		Il2CppCodeGenWriteBarrier(&___mixinPositions_0, value);
	}

	inline static int32_t get_offset_of_mixinsImpl_1() { return static_cast<int32_t>(offsetof(MixinData_t2184984786, ___mixinsImpl_1)); }
	inline List_1_t1634065389 * get_mixinsImpl_1() const { return ___mixinsImpl_1; }
	inline List_1_t1634065389 ** get_address_of_mixinsImpl_1() { return &___mixinsImpl_1; }
	inline void set_mixinsImpl_1(List_1_t1634065389 * value)
	{
		___mixinsImpl_1 = value;
		Il2CppCodeGenWriteBarrier(&___mixinsImpl_1, value);
	}
};

struct MixinData_t2184984786_StaticFields
{
public:
	// System.Comparison`1<System.Type> Castle.DynamicProxy.MixinData::CS$<>9__CachedAnonymousMethodDelegate1
	Comparison_1_t1187937515 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2;

public:
	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2() { return static_cast<int32_t>(offsetof(MixinData_t2184984786_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2)); }
	inline Comparison_1_t1187937515 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2; }
	inline Comparison_1_t1187937515 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2(Comparison_1_t1187937515 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
