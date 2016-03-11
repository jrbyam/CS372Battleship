#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Tokens.TypeMethods
struct  TypeMethods_t663847401  : public Il2CppObject
{
public:

public:
};

struct TypeMethods_t663847401_StaticFields
{
public:
	// System.Reflection.MethodInfo Castle.DynamicProxy.Tokens.TypeMethods::GetTypeFromHandle
	MethodInfo_t * ___GetTypeFromHandle_0;
	// System.Reflection.MethodInfo Castle.DynamicProxy.Tokens.TypeMethods::StaticGetType
	MethodInfo_t * ___StaticGetType_1;

public:
	inline static int32_t get_offset_of_GetTypeFromHandle_0() { return static_cast<int32_t>(offsetof(TypeMethods_t663847401_StaticFields, ___GetTypeFromHandle_0)); }
	inline MethodInfo_t * get_GetTypeFromHandle_0() const { return ___GetTypeFromHandle_0; }
	inline MethodInfo_t ** get_address_of_GetTypeFromHandle_0() { return &___GetTypeFromHandle_0; }
	inline void set_GetTypeFromHandle_0(MethodInfo_t * value)
	{
		___GetTypeFromHandle_0 = value;
		Il2CppCodeGenWriteBarrier(&___GetTypeFromHandle_0, value);
	}

	inline static int32_t get_offset_of_StaticGetType_1() { return static_cast<int32_t>(offsetof(TypeMethods_t663847401_StaticFields, ___StaticGetType_1)); }
	inline MethodInfo_t * get_StaticGetType_1() const { return ___StaticGetType_1; }
	inline MethodInfo_t ** get_address_of_StaticGetType_1() { return &___StaticGetType_1; }
	inline void set_StaticGetType_1(MethodInfo_t * value)
	{
		___StaticGetType_1 = value;
		Il2CppCodeGenWriteBarrier(&___StaticGetType_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
