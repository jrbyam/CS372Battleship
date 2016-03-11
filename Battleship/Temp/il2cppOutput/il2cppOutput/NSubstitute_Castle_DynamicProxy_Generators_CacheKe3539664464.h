#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;
// System.Type
struct Type_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.CacheKey
struct  CacheKey_t3539664464  : public Il2CppObject
{
public:
	// System.Reflection.MemberInfo Castle.DynamicProxy.Generators.CacheKey::target
	MemberInfo_t * ___target_0;
	// System.Type[] Castle.DynamicProxy.Generators.CacheKey::interfaces
	TypeU5BU5D_t3431720054* ___interfaces_1;
	// Castle.DynamicProxy.ProxyGenerationOptions Castle.DynamicProxy.Generators.CacheKey::options
	ProxyGenerationOptions_t351299295 * ___options_2;
	// System.Type Castle.DynamicProxy.Generators.CacheKey::type
	Type_t * ___type_3;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(CacheKey_t3539664464, ___target_0)); }
	inline MemberInfo_t * get_target_0() const { return ___target_0; }
	inline MemberInfo_t ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(MemberInfo_t * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier(&___target_0, value);
	}

	inline static int32_t get_offset_of_interfaces_1() { return static_cast<int32_t>(offsetof(CacheKey_t3539664464, ___interfaces_1)); }
	inline TypeU5BU5D_t3431720054* get_interfaces_1() const { return ___interfaces_1; }
	inline TypeU5BU5D_t3431720054** get_address_of_interfaces_1() { return &___interfaces_1; }
	inline void set_interfaces_1(TypeU5BU5D_t3431720054* value)
	{
		___interfaces_1 = value;
		Il2CppCodeGenWriteBarrier(&___interfaces_1, value);
	}

	inline static int32_t get_offset_of_options_2() { return static_cast<int32_t>(offsetof(CacheKey_t3539664464, ___options_2)); }
	inline ProxyGenerationOptions_t351299295 * get_options_2() const { return ___options_2; }
	inline ProxyGenerationOptions_t351299295 ** get_address_of_options_2() { return &___options_2; }
	inline void set_options_2(ProxyGenerationOptions_t351299295 * value)
	{
		___options_2 = value;
		Il2CppCodeGenWriteBarrier(&___options_2, value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(CacheKey_t3539664464, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier(&___type_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
