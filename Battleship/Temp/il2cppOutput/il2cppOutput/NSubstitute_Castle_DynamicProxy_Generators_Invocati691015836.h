#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.Generators.MetaMethod
struct MetaMethod_t2289943065;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Castle.DynamicProxy.Generators.IInvocationCreationContributor
struct IInvocationCreationContributor_t2813171894;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.InvocationTypeGenerator
struct  InvocationTypeGenerator_t691015836  : public Il2CppObject
{
public:
	// Castle.DynamicProxy.Generators.MetaMethod Castle.DynamicProxy.Generators.InvocationTypeGenerator::method
	MetaMethod_t2289943065 * ___method_0;
	// System.Type Castle.DynamicProxy.Generators.InvocationTypeGenerator::targetType
	Type_t * ___targetType_1;
	// System.Reflection.MethodInfo Castle.DynamicProxy.Generators.InvocationTypeGenerator::callback
	MethodInfo_t * ___callback_2;
	// System.Boolean Castle.DynamicProxy.Generators.InvocationTypeGenerator::canChangeTarget
	bool ___canChangeTarget_3;
	// Castle.DynamicProxy.Generators.IInvocationCreationContributor Castle.DynamicProxy.Generators.InvocationTypeGenerator::contributor
	Il2CppObject * ___contributor_4;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(InvocationTypeGenerator_t691015836, ___method_0)); }
	inline MetaMethod_t2289943065 * get_method_0() const { return ___method_0; }
	inline MetaMethod_t2289943065 ** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(MetaMethod_t2289943065 * value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier(&___method_0, value);
	}

	inline static int32_t get_offset_of_targetType_1() { return static_cast<int32_t>(offsetof(InvocationTypeGenerator_t691015836, ___targetType_1)); }
	inline Type_t * get_targetType_1() const { return ___targetType_1; }
	inline Type_t ** get_address_of_targetType_1() { return &___targetType_1; }
	inline void set_targetType_1(Type_t * value)
	{
		___targetType_1 = value;
		Il2CppCodeGenWriteBarrier(&___targetType_1, value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(InvocationTypeGenerator_t691015836, ___callback_2)); }
	inline MethodInfo_t * get_callback_2() const { return ___callback_2; }
	inline MethodInfo_t ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(MethodInfo_t * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier(&___callback_2, value);
	}

	inline static int32_t get_offset_of_canChangeTarget_3() { return static_cast<int32_t>(offsetof(InvocationTypeGenerator_t691015836, ___canChangeTarget_3)); }
	inline bool get_canChangeTarget_3() const { return ___canChangeTarget_3; }
	inline bool* get_address_of_canChangeTarget_3() { return &___canChangeTarget_3; }
	inline void set_canChangeTarget_3(bool value)
	{
		___canChangeTarget_3 = value;
	}

	inline static int32_t get_offset_of_contributor_4() { return static_cast<int32_t>(offsetof(InvocationTypeGenerator_t691015836, ___contributor_4)); }
	inline Il2CppObject * get_contributor_4() const { return ___contributor_4; }
	inline Il2CppObject ** get_address_of_contributor_4() { return &___contributor_4; }
	inline void set_contributor_4(Il2CppObject * value)
	{
		___contributor_4 = value;
		Il2CppCodeGenWriteBarrier(&___contributor_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
