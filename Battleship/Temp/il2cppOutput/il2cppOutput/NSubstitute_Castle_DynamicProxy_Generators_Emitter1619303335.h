#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Emit.PropertyBuilder
struct PropertyBuilder_t356853651;
// Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter
struct AbstractTypeEmitter_t2268871968;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter
struct MethodEmitter_t2027936539;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.PropertyEmitter
struct  PropertyEmitter_t1619303335  : public Il2CppObject
{
public:
	// System.Reflection.Emit.PropertyBuilder Castle.DynamicProxy.Generators.Emitters.PropertyEmitter::builder
	PropertyBuilder_t356853651 * ___builder_0;
	// Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter Castle.DynamicProxy.Generators.Emitters.PropertyEmitter::parentTypeEmitter
	AbstractTypeEmitter_t2268871968 * ___parentTypeEmitter_1;
	// Castle.DynamicProxy.Generators.Emitters.MethodEmitter Castle.DynamicProxy.Generators.Emitters.PropertyEmitter::getMethod
	MethodEmitter_t2027936539 * ___getMethod_2;
	// Castle.DynamicProxy.Generators.Emitters.MethodEmitter Castle.DynamicProxy.Generators.Emitters.PropertyEmitter::setMethod
	MethodEmitter_t2027936539 * ___setMethod_3;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(PropertyEmitter_t1619303335, ___builder_0)); }
	inline PropertyBuilder_t356853651 * get_builder_0() const { return ___builder_0; }
	inline PropertyBuilder_t356853651 ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(PropertyBuilder_t356853651 * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier(&___builder_0, value);
	}

	inline static int32_t get_offset_of_parentTypeEmitter_1() { return static_cast<int32_t>(offsetof(PropertyEmitter_t1619303335, ___parentTypeEmitter_1)); }
	inline AbstractTypeEmitter_t2268871968 * get_parentTypeEmitter_1() const { return ___parentTypeEmitter_1; }
	inline AbstractTypeEmitter_t2268871968 ** get_address_of_parentTypeEmitter_1() { return &___parentTypeEmitter_1; }
	inline void set_parentTypeEmitter_1(AbstractTypeEmitter_t2268871968 * value)
	{
		___parentTypeEmitter_1 = value;
		Il2CppCodeGenWriteBarrier(&___parentTypeEmitter_1, value);
	}

	inline static int32_t get_offset_of_getMethod_2() { return static_cast<int32_t>(offsetof(PropertyEmitter_t1619303335, ___getMethod_2)); }
	inline MethodEmitter_t2027936539 * get_getMethod_2() const { return ___getMethod_2; }
	inline MethodEmitter_t2027936539 ** get_address_of_getMethod_2() { return &___getMethod_2; }
	inline void set_getMethod_2(MethodEmitter_t2027936539 * value)
	{
		___getMethod_2 = value;
		Il2CppCodeGenWriteBarrier(&___getMethod_2, value);
	}

	inline static int32_t get_offset_of_setMethod_3() { return static_cast<int32_t>(offsetof(PropertyEmitter_t1619303335, ___setMethod_3)); }
	inline MethodEmitter_t2027936539 * get_setMethod_3() const { return ___setMethod_3; }
	inline MethodEmitter_t2027936539 ** get_address_of_setMethod_3() { return &___setMethod_3; }
	inline void set_setMethod_3(MethodEmitter_t2027936539 * value)
	{
		___setMethod_3 = value;
		Il2CppCodeGenWriteBarrier(&___setMethod_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
