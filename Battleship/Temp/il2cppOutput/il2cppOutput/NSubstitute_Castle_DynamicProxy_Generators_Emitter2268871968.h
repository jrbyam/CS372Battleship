#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.Generators.Emitters.ConstructorCollection
struct ConstructorCollection_t3043834374;
// Castle.DynamicProxy.Generators.Emitters.EventCollection
struct EventCollection_t1615426726;
// System.Collections.Generic.IDictionary`2<System.String,Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference>
struct IDictionary_2_t3808265024;
// Castle.DynamicProxy.Generators.Emitters.MethodCollection
struct MethodCollection_t902460013;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.Emit.GenericTypeParameterBuilder>
struct Dictionary_2_t609968256;
// Castle.DynamicProxy.Generators.Emitters.NestedClassCollection
struct NestedClassCollection_t1351102477;
// Castle.DynamicProxy.Generators.Emitters.PropertiesCollection
struct PropertiesCollection_t3298385983;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t4287691406;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t685103793;
// Castle.DynamicProxy.Generators.Emitters.TypeConstructorEmitter
struct TypeConstructorEmitter_t1296204540;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter
struct  AbstractTypeEmitter_t2268871968  : public Il2CppObject
{
public:
	// Castle.DynamicProxy.Generators.Emitters.ConstructorCollection Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::constructors
	ConstructorCollection_t3043834374 * ___constructors_0;
	// Castle.DynamicProxy.Generators.Emitters.EventCollection Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::events
	EventCollection_t1615426726 * ___events_1;
	// System.Collections.Generic.IDictionary`2<System.String,Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference> Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::fields
	Il2CppObject* ___fields_2;
	// Castle.DynamicProxy.Generators.Emitters.MethodCollection Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::methods
	MethodCollection_t902460013 * ___methods_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.Emit.GenericTypeParameterBuilder> Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::name2GenericType
	Dictionary_2_t609968256 * ___name2GenericType_4;
	// Castle.DynamicProxy.Generators.Emitters.NestedClassCollection Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::nested
	NestedClassCollection_t1351102477 * ___nested_5;
	// Castle.DynamicProxy.Generators.Emitters.PropertiesCollection Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::properties
	PropertiesCollection_t3298385983 * ___properties_6;
	// System.Reflection.Emit.TypeBuilder Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::typebuilder
	TypeBuilder_t4287691406 * ___typebuilder_7;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::genericTypeParams
	GenericTypeParameterBuilderU5BU5D_t685103793* ___genericTypeParams_8;
	// Castle.DynamicProxy.Generators.Emitters.TypeConstructorEmitter Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::<ClassConstructor>k__BackingField
	TypeConstructorEmitter_t1296204540 * ___U3CClassConstructorU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_constructors_0() { return static_cast<int32_t>(offsetof(AbstractTypeEmitter_t2268871968, ___constructors_0)); }
	inline ConstructorCollection_t3043834374 * get_constructors_0() const { return ___constructors_0; }
	inline ConstructorCollection_t3043834374 ** get_address_of_constructors_0() { return &___constructors_0; }
	inline void set_constructors_0(ConstructorCollection_t3043834374 * value)
	{
		___constructors_0 = value;
		Il2CppCodeGenWriteBarrier(&___constructors_0, value);
	}

	inline static int32_t get_offset_of_events_1() { return static_cast<int32_t>(offsetof(AbstractTypeEmitter_t2268871968, ___events_1)); }
	inline EventCollection_t1615426726 * get_events_1() const { return ___events_1; }
	inline EventCollection_t1615426726 ** get_address_of_events_1() { return &___events_1; }
	inline void set_events_1(EventCollection_t1615426726 * value)
	{
		___events_1 = value;
		Il2CppCodeGenWriteBarrier(&___events_1, value);
	}

	inline static int32_t get_offset_of_fields_2() { return static_cast<int32_t>(offsetof(AbstractTypeEmitter_t2268871968, ___fields_2)); }
	inline Il2CppObject* get_fields_2() const { return ___fields_2; }
	inline Il2CppObject** get_address_of_fields_2() { return &___fields_2; }
	inline void set_fields_2(Il2CppObject* value)
	{
		___fields_2 = value;
		Il2CppCodeGenWriteBarrier(&___fields_2, value);
	}

	inline static int32_t get_offset_of_methods_3() { return static_cast<int32_t>(offsetof(AbstractTypeEmitter_t2268871968, ___methods_3)); }
	inline MethodCollection_t902460013 * get_methods_3() const { return ___methods_3; }
	inline MethodCollection_t902460013 ** get_address_of_methods_3() { return &___methods_3; }
	inline void set_methods_3(MethodCollection_t902460013 * value)
	{
		___methods_3 = value;
		Il2CppCodeGenWriteBarrier(&___methods_3, value);
	}

	inline static int32_t get_offset_of_name2GenericType_4() { return static_cast<int32_t>(offsetof(AbstractTypeEmitter_t2268871968, ___name2GenericType_4)); }
	inline Dictionary_2_t609968256 * get_name2GenericType_4() const { return ___name2GenericType_4; }
	inline Dictionary_2_t609968256 ** get_address_of_name2GenericType_4() { return &___name2GenericType_4; }
	inline void set_name2GenericType_4(Dictionary_2_t609968256 * value)
	{
		___name2GenericType_4 = value;
		Il2CppCodeGenWriteBarrier(&___name2GenericType_4, value);
	}

	inline static int32_t get_offset_of_nested_5() { return static_cast<int32_t>(offsetof(AbstractTypeEmitter_t2268871968, ___nested_5)); }
	inline NestedClassCollection_t1351102477 * get_nested_5() const { return ___nested_5; }
	inline NestedClassCollection_t1351102477 ** get_address_of_nested_5() { return &___nested_5; }
	inline void set_nested_5(NestedClassCollection_t1351102477 * value)
	{
		___nested_5 = value;
		Il2CppCodeGenWriteBarrier(&___nested_5, value);
	}

	inline static int32_t get_offset_of_properties_6() { return static_cast<int32_t>(offsetof(AbstractTypeEmitter_t2268871968, ___properties_6)); }
	inline PropertiesCollection_t3298385983 * get_properties_6() const { return ___properties_6; }
	inline PropertiesCollection_t3298385983 ** get_address_of_properties_6() { return &___properties_6; }
	inline void set_properties_6(PropertiesCollection_t3298385983 * value)
	{
		___properties_6 = value;
		Il2CppCodeGenWriteBarrier(&___properties_6, value);
	}

	inline static int32_t get_offset_of_typebuilder_7() { return static_cast<int32_t>(offsetof(AbstractTypeEmitter_t2268871968, ___typebuilder_7)); }
	inline TypeBuilder_t4287691406 * get_typebuilder_7() const { return ___typebuilder_7; }
	inline TypeBuilder_t4287691406 ** get_address_of_typebuilder_7() { return &___typebuilder_7; }
	inline void set_typebuilder_7(TypeBuilder_t4287691406 * value)
	{
		___typebuilder_7 = value;
		Il2CppCodeGenWriteBarrier(&___typebuilder_7, value);
	}

	inline static int32_t get_offset_of_genericTypeParams_8() { return static_cast<int32_t>(offsetof(AbstractTypeEmitter_t2268871968, ___genericTypeParams_8)); }
	inline GenericTypeParameterBuilderU5BU5D_t685103793* get_genericTypeParams_8() const { return ___genericTypeParams_8; }
	inline GenericTypeParameterBuilderU5BU5D_t685103793** get_address_of_genericTypeParams_8() { return &___genericTypeParams_8; }
	inline void set_genericTypeParams_8(GenericTypeParameterBuilderU5BU5D_t685103793* value)
	{
		___genericTypeParams_8 = value;
		Il2CppCodeGenWriteBarrier(&___genericTypeParams_8, value);
	}

	inline static int32_t get_offset_of_U3CClassConstructorU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(AbstractTypeEmitter_t2268871968, ___U3CClassConstructorU3Ek__BackingField_9)); }
	inline TypeConstructorEmitter_t1296204540 * get_U3CClassConstructorU3Ek__BackingField_9() const { return ___U3CClassConstructorU3Ek__BackingField_9; }
	inline TypeConstructorEmitter_t1296204540 ** get_address_of_U3CClassConstructorU3Ek__BackingField_9() { return &___U3CClassConstructorU3Ek__BackingField_9; }
	inline void set_U3CClassConstructorU3Ek__BackingField_9(TypeConstructorEmitter_t1296204540 * value)
	{
		___U3CClassConstructorU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CClassConstructorU3Ek__BackingField_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
