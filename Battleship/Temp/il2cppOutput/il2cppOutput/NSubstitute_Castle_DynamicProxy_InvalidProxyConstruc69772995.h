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

#include "mscorlib_System_ArgumentException124305799.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.InvalidProxyConstructorArgumentsException
struct  InvalidProxyConstructorArgumentsException_t69772995  : public ArgumentException_t124305799
{
public:
	// System.Type Castle.DynamicProxy.InvalidProxyConstructorArgumentsException::<ClassToProxy>k__BackingField
	Type_t * ___U3CClassToProxyU3Ek__BackingField_13;
	// System.Type Castle.DynamicProxy.InvalidProxyConstructorArgumentsException::<ProxyType>k__BackingField
	Type_t * ___U3CProxyTypeU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CClassToProxyU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(InvalidProxyConstructorArgumentsException_t69772995, ___U3CClassToProxyU3Ek__BackingField_13)); }
	inline Type_t * get_U3CClassToProxyU3Ek__BackingField_13() const { return ___U3CClassToProxyU3Ek__BackingField_13; }
	inline Type_t ** get_address_of_U3CClassToProxyU3Ek__BackingField_13() { return &___U3CClassToProxyU3Ek__BackingField_13; }
	inline void set_U3CClassToProxyU3Ek__BackingField_13(Type_t * value)
	{
		___U3CClassToProxyU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CClassToProxyU3Ek__BackingField_13, value);
	}

	inline static int32_t get_offset_of_U3CProxyTypeU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(InvalidProxyConstructorArgumentsException_t69772995, ___U3CProxyTypeU3Ek__BackingField_14)); }
	inline Type_t * get_U3CProxyTypeU3Ek__BackingField_14() const { return ___U3CProxyTypeU3Ek__BackingField_14; }
	inline Type_t ** get_address_of_U3CProxyTypeU3Ek__BackingField_14() { return &___U3CProxyTypeU3Ek__BackingField_14; }
	inline void set_U3CProxyTypeU3Ek__BackingField_14(Type_t * value)
	{
		___U3CProxyTypeU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CProxyTypeU3Ek__BackingField_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
