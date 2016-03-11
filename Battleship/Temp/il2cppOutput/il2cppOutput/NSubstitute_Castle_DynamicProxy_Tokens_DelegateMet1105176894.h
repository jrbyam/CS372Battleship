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

// Castle.DynamicProxy.Tokens.DelegateMethods
struct  DelegateMethods_t1105176894  : public Il2CppObject
{
public:

public:
};

struct DelegateMethods_t1105176894_StaticFields
{
public:
	// System.Reflection.MethodInfo Castle.DynamicProxy.Tokens.DelegateMethods::CreateDelegate
	MethodInfo_t * ___CreateDelegate_0;

public:
	inline static int32_t get_offset_of_CreateDelegate_0() { return static_cast<int32_t>(offsetof(DelegateMethods_t1105176894_StaticFields, ___CreateDelegate_0)); }
	inline MethodInfo_t * get_CreateDelegate_0() const { return ___CreateDelegate_0; }
	inline MethodInfo_t ** get_address_of_CreateDelegate_0() { return &___CreateDelegate_0; }
	inline void set_CreateDelegate_0(MethodInfo_t * value)
	{
		___CreateDelegate_0 = value;
		Il2CppCodeGenWriteBarrier(&___CreateDelegate_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
