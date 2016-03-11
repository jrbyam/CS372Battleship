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
// Castle.DynamicProxy.Generators.Emitters.EventEmitter
struct EventEmitter_t4227705730;
// System.String
struct String_t;

#include "NSubstitute_Castle_DynamicProxy_Generators_MetaType902406576.h"
#include "mscorlib_System_Reflection_EventAttributes1168020927.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.MetaEvent
struct  MetaEvent_t524284456  : public MetaTypeElement_t902406576
{
public:
	// Castle.DynamicProxy.Generators.MetaMethod Castle.DynamicProxy.Generators.MetaEvent::adder
	MetaMethod_t2289943065 * ___adder_1;
	// Castle.DynamicProxy.Generators.MetaMethod Castle.DynamicProxy.Generators.MetaEvent::remover
	MetaMethod_t2289943065 * ___remover_2;
	// System.Type Castle.DynamicProxy.Generators.MetaEvent::type
	Type_t * ___type_3;
	// Castle.DynamicProxy.Generators.Emitters.EventEmitter Castle.DynamicProxy.Generators.MetaEvent::emitter
	EventEmitter_t4227705730 * ___emitter_4;
	// System.String Castle.DynamicProxy.Generators.MetaEvent::name
	String_t* ___name_5;
	// System.Reflection.EventAttributes Castle.DynamicProxy.Generators.MetaEvent::<Attributes>k__BackingField
	int32_t ___U3CAttributesU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_adder_1() { return static_cast<int32_t>(offsetof(MetaEvent_t524284456, ___adder_1)); }
	inline MetaMethod_t2289943065 * get_adder_1() const { return ___adder_1; }
	inline MetaMethod_t2289943065 ** get_address_of_adder_1() { return &___adder_1; }
	inline void set_adder_1(MetaMethod_t2289943065 * value)
	{
		___adder_1 = value;
		Il2CppCodeGenWriteBarrier(&___adder_1, value);
	}

	inline static int32_t get_offset_of_remover_2() { return static_cast<int32_t>(offsetof(MetaEvent_t524284456, ___remover_2)); }
	inline MetaMethod_t2289943065 * get_remover_2() const { return ___remover_2; }
	inline MetaMethod_t2289943065 ** get_address_of_remover_2() { return &___remover_2; }
	inline void set_remover_2(MetaMethod_t2289943065 * value)
	{
		___remover_2 = value;
		Il2CppCodeGenWriteBarrier(&___remover_2, value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(MetaEvent_t524284456, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier(&___type_3, value);
	}

	inline static int32_t get_offset_of_emitter_4() { return static_cast<int32_t>(offsetof(MetaEvent_t524284456, ___emitter_4)); }
	inline EventEmitter_t4227705730 * get_emitter_4() const { return ___emitter_4; }
	inline EventEmitter_t4227705730 ** get_address_of_emitter_4() { return &___emitter_4; }
	inline void set_emitter_4(EventEmitter_t4227705730 * value)
	{
		___emitter_4 = value;
		Il2CppCodeGenWriteBarrier(&___emitter_4, value);
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(MetaEvent_t524284456, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier(&___name_5, value);
	}

	inline static int32_t get_offset_of_U3CAttributesU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MetaEvent_t524284456, ___U3CAttributesU3Ek__BackingField_6)); }
	inline int32_t get_U3CAttributesU3Ek__BackingField_6() const { return ___U3CAttributesU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CAttributesU3Ek__BackingField_6() { return &___U3CAttributesU3Ek__BackingField_6; }
	inline void set_U3CAttributesU3Ek__BackingField_6(int32_t value)
	{
		___U3CAttributesU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
