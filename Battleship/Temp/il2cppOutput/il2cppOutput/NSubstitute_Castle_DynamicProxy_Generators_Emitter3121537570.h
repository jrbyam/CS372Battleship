#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t1859087886;
// Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter
struct AbstractTypeEmitter_t2268871968;
// Castle.DynamicProxy.Generators.Emitters.CodeBuilders.ConstructorCodeBuilder
struct ConstructorCodeBuilder_t822167367;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.ConstructorEmitter
struct  ConstructorEmitter_t3121537570  : public Il2CppObject
{
public:
	// System.Reflection.Emit.ConstructorBuilder Castle.DynamicProxy.Generators.Emitters.ConstructorEmitter::builder
	ConstructorBuilder_t1859087886 * ___builder_0;
	// Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter Castle.DynamicProxy.Generators.Emitters.ConstructorEmitter::maintype
	AbstractTypeEmitter_t2268871968 * ___maintype_1;
	// Castle.DynamicProxy.Generators.Emitters.CodeBuilders.ConstructorCodeBuilder Castle.DynamicProxy.Generators.Emitters.ConstructorEmitter::constructorCodeBuilder
	ConstructorCodeBuilder_t822167367 * ___constructorCodeBuilder_2;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(ConstructorEmitter_t3121537570, ___builder_0)); }
	inline ConstructorBuilder_t1859087886 * get_builder_0() const { return ___builder_0; }
	inline ConstructorBuilder_t1859087886 ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(ConstructorBuilder_t1859087886 * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier(&___builder_0, value);
	}

	inline static int32_t get_offset_of_maintype_1() { return static_cast<int32_t>(offsetof(ConstructorEmitter_t3121537570, ___maintype_1)); }
	inline AbstractTypeEmitter_t2268871968 * get_maintype_1() const { return ___maintype_1; }
	inline AbstractTypeEmitter_t2268871968 ** get_address_of_maintype_1() { return &___maintype_1; }
	inline void set_maintype_1(AbstractTypeEmitter_t2268871968 * value)
	{
		___maintype_1 = value;
		Il2CppCodeGenWriteBarrier(&___maintype_1, value);
	}

	inline static int32_t get_offset_of_constructorCodeBuilder_2() { return static_cast<int32_t>(offsetof(ConstructorEmitter_t3121537570, ___constructorCodeBuilder_2)); }
	inline ConstructorCodeBuilder_t822167367 * get_constructorCodeBuilder_2() const { return ___constructorCodeBuilder_2; }
	inline ConstructorCodeBuilder_t822167367 ** get_address_of_constructorCodeBuilder_2() { return &___constructorCodeBuilder_2; }
	inline void set_constructorCodeBuilder_2(ConstructorCodeBuilder_t822167367 * value)
	{
		___constructorCodeBuilder_2 = value;
		Il2CppCodeGenWriteBarrier(&___constructorCodeBuilder_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
