#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Emit.EventBuilder
struct EventBuilder_t2965256046;
// System.Type
struct Type_t;
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

// Castle.DynamicProxy.Generators.Emitters.EventEmitter
struct  EventEmitter_t4227705730  : public Il2CppObject
{
public:
	// System.Reflection.Emit.EventBuilder Castle.DynamicProxy.Generators.Emitters.EventEmitter::eventBuilder
	EventBuilder_t2965256046 * ___eventBuilder_0;
	// System.Type Castle.DynamicProxy.Generators.Emitters.EventEmitter::type
	Type_t * ___type_1;
	// Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter Castle.DynamicProxy.Generators.Emitters.EventEmitter::typeEmitter
	AbstractTypeEmitter_t2268871968 * ___typeEmitter_2;
	// Castle.DynamicProxy.Generators.Emitters.MethodEmitter Castle.DynamicProxy.Generators.Emitters.EventEmitter::addMethod
	MethodEmitter_t2027936539 * ___addMethod_3;
	// Castle.DynamicProxy.Generators.Emitters.MethodEmitter Castle.DynamicProxy.Generators.Emitters.EventEmitter::removeMethod
	MethodEmitter_t2027936539 * ___removeMethod_4;

public:
	inline static int32_t get_offset_of_eventBuilder_0() { return static_cast<int32_t>(offsetof(EventEmitter_t4227705730, ___eventBuilder_0)); }
	inline EventBuilder_t2965256046 * get_eventBuilder_0() const { return ___eventBuilder_0; }
	inline EventBuilder_t2965256046 ** get_address_of_eventBuilder_0() { return &___eventBuilder_0; }
	inline void set_eventBuilder_0(EventBuilder_t2965256046 * value)
	{
		___eventBuilder_0 = value;
		Il2CppCodeGenWriteBarrier(&___eventBuilder_0, value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(EventEmitter_t4227705730, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier(&___type_1, value);
	}

	inline static int32_t get_offset_of_typeEmitter_2() { return static_cast<int32_t>(offsetof(EventEmitter_t4227705730, ___typeEmitter_2)); }
	inline AbstractTypeEmitter_t2268871968 * get_typeEmitter_2() const { return ___typeEmitter_2; }
	inline AbstractTypeEmitter_t2268871968 ** get_address_of_typeEmitter_2() { return &___typeEmitter_2; }
	inline void set_typeEmitter_2(AbstractTypeEmitter_t2268871968 * value)
	{
		___typeEmitter_2 = value;
		Il2CppCodeGenWriteBarrier(&___typeEmitter_2, value);
	}

	inline static int32_t get_offset_of_addMethod_3() { return static_cast<int32_t>(offsetof(EventEmitter_t4227705730, ___addMethod_3)); }
	inline MethodEmitter_t2027936539 * get_addMethod_3() const { return ___addMethod_3; }
	inline MethodEmitter_t2027936539 ** get_address_of_addMethod_3() { return &___addMethod_3; }
	inline void set_addMethod_3(MethodEmitter_t2027936539 * value)
	{
		___addMethod_3 = value;
		Il2CppCodeGenWriteBarrier(&___addMethod_3, value);
	}

	inline static int32_t get_offset_of_removeMethod_4() { return static_cast<int32_t>(offsetof(EventEmitter_t4227705730, ___removeMethod_4)); }
	inline MethodEmitter_t2027936539 * get_removeMethod_4() const { return ___removeMethod_4; }
	inline MethodEmitter_t2027936539 ** get_address_of_removeMethod_4() { return &___removeMethod_4; }
	inline void set_removeMethod_4(MethodEmitter_t2027936539 * value)
	{
		___removeMethod_4 = value;
		Il2CppCodeGenWriteBarrier(&___removeMethod_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
