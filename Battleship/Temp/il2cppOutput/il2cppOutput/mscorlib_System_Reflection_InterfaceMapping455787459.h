#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1668237648;
// System.Type
struct Type_t;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.InterfaceMapping
struct  InterfaceMapping_t455787459 
{
public:
	// System.Reflection.MethodInfo[] System.Reflection.InterfaceMapping::InterfaceMethods
	MethodInfoU5BU5D_t1668237648* ___InterfaceMethods_0;
	// System.Type System.Reflection.InterfaceMapping::InterfaceType
	Type_t * ___InterfaceType_1;
	// System.Reflection.MethodInfo[] System.Reflection.InterfaceMapping::TargetMethods
	MethodInfoU5BU5D_t1668237648* ___TargetMethods_2;
	// System.Type System.Reflection.InterfaceMapping::TargetType
	Type_t * ___TargetType_3;

public:
	inline static int32_t get_offset_of_InterfaceMethods_0() { return static_cast<int32_t>(offsetof(InterfaceMapping_t455787459, ___InterfaceMethods_0)); }
	inline MethodInfoU5BU5D_t1668237648* get_InterfaceMethods_0() const { return ___InterfaceMethods_0; }
	inline MethodInfoU5BU5D_t1668237648** get_address_of_InterfaceMethods_0() { return &___InterfaceMethods_0; }
	inline void set_InterfaceMethods_0(MethodInfoU5BU5D_t1668237648* value)
	{
		___InterfaceMethods_0 = value;
		Il2CppCodeGenWriteBarrier(&___InterfaceMethods_0, value);
	}

	inline static int32_t get_offset_of_InterfaceType_1() { return static_cast<int32_t>(offsetof(InterfaceMapping_t455787459, ___InterfaceType_1)); }
	inline Type_t * get_InterfaceType_1() const { return ___InterfaceType_1; }
	inline Type_t ** get_address_of_InterfaceType_1() { return &___InterfaceType_1; }
	inline void set_InterfaceType_1(Type_t * value)
	{
		___InterfaceType_1 = value;
		Il2CppCodeGenWriteBarrier(&___InterfaceType_1, value);
	}

	inline static int32_t get_offset_of_TargetMethods_2() { return static_cast<int32_t>(offsetof(InterfaceMapping_t455787459, ___TargetMethods_2)); }
	inline MethodInfoU5BU5D_t1668237648* get_TargetMethods_2() const { return ___TargetMethods_2; }
	inline MethodInfoU5BU5D_t1668237648** get_address_of_TargetMethods_2() { return &___TargetMethods_2; }
	inline void set_TargetMethods_2(MethodInfoU5BU5D_t1668237648* value)
	{
		___TargetMethods_2 = value;
		Il2CppCodeGenWriteBarrier(&___TargetMethods_2, value);
	}

	inline static int32_t get_offset_of_TargetType_3() { return static_cast<int32_t>(offsetof(InterfaceMapping_t455787459, ___TargetType_3)); }
	inline Type_t * get_TargetType_3() const { return ___TargetType_3; }
	inline Type_t ** get_address_of_TargetType_3() { return &___TargetType_3; }
	inline void set_TargetType_3(Type_t * value)
	{
		___TargetType_3 = value;
		Il2CppCodeGenWriteBarrier(&___TargetType_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
