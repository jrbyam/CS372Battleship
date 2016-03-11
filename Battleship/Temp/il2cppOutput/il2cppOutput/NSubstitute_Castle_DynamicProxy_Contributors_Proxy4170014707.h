#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Contributors.ProxyInstanceContributor
struct  ProxyInstanceContributor_t4170014707  : public Il2CppObject
{
public:
	// System.Type Castle.DynamicProxy.Contributors.ProxyInstanceContributor::targetType
	Type_t * ___targetType_0;
	// System.String Castle.DynamicProxy.Contributors.ProxyInstanceContributor::proxyTypeId
	String_t* ___proxyTypeId_1;
	// System.Type[] Castle.DynamicProxy.Contributors.ProxyInstanceContributor::interfaces
	TypeU5BU5D_t3431720054* ___interfaces_2;

public:
	inline static int32_t get_offset_of_targetType_0() { return static_cast<int32_t>(offsetof(ProxyInstanceContributor_t4170014707, ___targetType_0)); }
	inline Type_t * get_targetType_0() const { return ___targetType_0; }
	inline Type_t ** get_address_of_targetType_0() { return &___targetType_0; }
	inline void set_targetType_0(Type_t * value)
	{
		___targetType_0 = value;
		Il2CppCodeGenWriteBarrier(&___targetType_0, value);
	}

	inline static int32_t get_offset_of_proxyTypeId_1() { return static_cast<int32_t>(offsetof(ProxyInstanceContributor_t4170014707, ___proxyTypeId_1)); }
	inline String_t* get_proxyTypeId_1() const { return ___proxyTypeId_1; }
	inline String_t** get_address_of_proxyTypeId_1() { return &___proxyTypeId_1; }
	inline void set_proxyTypeId_1(String_t* value)
	{
		___proxyTypeId_1 = value;
		Il2CppCodeGenWriteBarrier(&___proxyTypeId_1, value);
	}

	inline static int32_t get_offset_of_interfaces_2() { return static_cast<int32_t>(offsetof(ProxyInstanceContributor_t4170014707, ___interfaces_2)); }
	inline TypeU5BU5D_t3431720054* get_interfaces_2() const { return ___interfaces_2; }
	inline TypeU5BU5D_t3431720054** get_address_of_interfaces_2() { return &___interfaces_2; }
	inline void set_interfaces_2(TypeU5BU5D_t3431720054* value)
	{
		___interfaces_2 = value;
		Il2CppCodeGenWriteBarrier(&___interfaces_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
