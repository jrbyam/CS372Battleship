#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.CustomAttributeBuilder>
struct IEnumerable_1_t3435075505;
// Castle.DynamicProxy.Generators.MetaMethod
struct MetaMethod_t2289943065;
// System.Type
struct Type_t;
// Castle.DynamicProxy.Generators.Emitters.PropertyEmitter
struct PropertyEmitter_t1619303335;
// System.String
struct String_t;

#include "NSubstitute_Castle_DynamicProxy_Generators_MetaType902406576.h"
#include "mscorlib_System_Reflection_PropertyAttributes3095558010.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.MetaProperty
struct  MetaProperty_t2675851725  : public MetaTypeElement_t902406576
{
public:
	// System.Type[] Castle.DynamicProxy.Generators.MetaProperty::arguments
	TypeU5BU5D_t3431720054* ___arguments_1;
	// System.Reflection.PropertyAttributes Castle.DynamicProxy.Generators.MetaProperty::attributes
	int32_t ___attributes_2;
	// System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.CustomAttributeBuilder> Castle.DynamicProxy.Generators.MetaProperty::customAttributes
	Il2CppObject* ___customAttributes_3;
	// Castle.DynamicProxy.Generators.MetaMethod Castle.DynamicProxy.Generators.MetaProperty::getter
	MetaMethod_t2289943065 * ___getter_4;
	// Castle.DynamicProxy.Generators.MetaMethod Castle.DynamicProxy.Generators.MetaProperty::setter
	MetaMethod_t2289943065 * ___setter_5;
	// System.Type Castle.DynamicProxy.Generators.MetaProperty::type
	Type_t * ___type_6;
	// Castle.DynamicProxy.Generators.Emitters.PropertyEmitter Castle.DynamicProxy.Generators.MetaProperty::emitter
	PropertyEmitter_t1619303335 * ___emitter_7;
	// System.String Castle.DynamicProxy.Generators.MetaProperty::name
	String_t* ___name_8;

public:
	inline static int32_t get_offset_of_arguments_1() { return static_cast<int32_t>(offsetof(MetaProperty_t2675851725, ___arguments_1)); }
	inline TypeU5BU5D_t3431720054* get_arguments_1() const { return ___arguments_1; }
	inline TypeU5BU5D_t3431720054** get_address_of_arguments_1() { return &___arguments_1; }
	inline void set_arguments_1(TypeU5BU5D_t3431720054* value)
	{
		___arguments_1 = value;
		Il2CppCodeGenWriteBarrier(&___arguments_1, value);
	}

	inline static int32_t get_offset_of_attributes_2() { return static_cast<int32_t>(offsetof(MetaProperty_t2675851725, ___attributes_2)); }
	inline int32_t get_attributes_2() const { return ___attributes_2; }
	inline int32_t* get_address_of_attributes_2() { return &___attributes_2; }
	inline void set_attributes_2(int32_t value)
	{
		___attributes_2 = value;
	}

	inline static int32_t get_offset_of_customAttributes_3() { return static_cast<int32_t>(offsetof(MetaProperty_t2675851725, ___customAttributes_3)); }
	inline Il2CppObject* get_customAttributes_3() const { return ___customAttributes_3; }
	inline Il2CppObject** get_address_of_customAttributes_3() { return &___customAttributes_3; }
	inline void set_customAttributes_3(Il2CppObject* value)
	{
		___customAttributes_3 = value;
		Il2CppCodeGenWriteBarrier(&___customAttributes_3, value);
	}

	inline static int32_t get_offset_of_getter_4() { return static_cast<int32_t>(offsetof(MetaProperty_t2675851725, ___getter_4)); }
	inline MetaMethod_t2289943065 * get_getter_4() const { return ___getter_4; }
	inline MetaMethod_t2289943065 ** get_address_of_getter_4() { return &___getter_4; }
	inline void set_getter_4(MetaMethod_t2289943065 * value)
	{
		___getter_4 = value;
		Il2CppCodeGenWriteBarrier(&___getter_4, value);
	}

	inline static int32_t get_offset_of_setter_5() { return static_cast<int32_t>(offsetof(MetaProperty_t2675851725, ___setter_5)); }
	inline MetaMethod_t2289943065 * get_setter_5() const { return ___setter_5; }
	inline MetaMethod_t2289943065 ** get_address_of_setter_5() { return &___setter_5; }
	inline void set_setter_5(MetaMethod_t2289943065 * value)
	{
		___setter_5 = value;
		Il2CppCodeGenWriteBarrier(&___setter_5, value);
	}

	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(MetaProperty_t2675851725, ___type_6)); }
	inline Type_t * get_type_6() const { return ___type_6; }
	inline Type_t ** get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(Type_t * value)
	{
		___type_6 = value;
		Il2CppCodeGenWriteBarrier(&___type_6, value);
	}

	inline static int32_t get_offset_of_emitter_7() { return static_cast<int32_t>(offsetof(MetaProperty_t2675851725, ___emitter_7)); }
	inline PropertyEmitter_t1619303335 * get_emitter_7() const { return ___emitter_7; }
	inline PropertyEmitter_t1619303335 ** get_address_of_emitter_7() { return &___emitter_7; }
	inline void set_emitter_7(PropertyEmitter_t1619303335 * value)
	{
		___emitter_7 = value;
		Il2CppCodeGenWriteBarrier(&___emitter_7, value);
	}

	inline static int32_t get_offset_of_name_8() { return static_cast<int32_t>(offsetof(MetaProperty_t2675851725, ___name_8)); }
	inline String_t* get_name_8() const { return ___name_8; }
	inline String_t** get_address_of_name_8() { return &___name_8; }
	inline void set_name_8(String_t* value)
	{
		___name_8 = value;
		Il2CppCodeGenWriteBarrier(&___name_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
