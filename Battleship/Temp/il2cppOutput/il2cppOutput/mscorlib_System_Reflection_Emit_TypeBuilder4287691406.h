#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Reflection.Emit.MethodBuilder[]
struct MethodBuilderU5BU5D_t3930099966;
// System.Reflection.Emit.ConstructorBuilder[]
struct ConstructorBuilderU5BU5D_t281281019;
// System.Reflection.Emit.PropertyBuilder[]
struct PropertyBuilderU5BU5D_t2931941570;
// System.Reflection.Emit.FieldBuilder[]
struct FieldBuilderU5BU5D_t758429435;
// System.Reflection.Emit.EventBuilder[]
struct EventBuilderU5BU5D_t3141076763;
// System.Reflection.Emit.CustomAttributeBuilder[]
struct CustomAttributeBuilderU5BU5D_t2932934064;
// System.Reflection.Emit.TypeBuilder[]
struct TypeBuilderU5BU5D_t2520789883;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t1058295580;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t685103793;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_TypeAttributes104824479.h"
#include "mscorlib_System_Reflection_Emit_PackingSize2950865495.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.TypeBuilder
struct  TypeBuilder_t4287691406  : public Type_t
{
public:
	// System.String System.Reflection.Emit.TypeBuilder::tname
	String_t* ___tname_8;
	// System.String System.Reflection.Emit.TypeBuilder::nspace
	String_t* ___nspace_9;
	// System.Type System.Reflection.Emit.TypeBuilder::parent
	Type_t * ___parent_10;
	// System.Type System.Reflection.Emit.TypeBuilder::nesting_type
	Type_t * ___nesting_type_11;
	// System.Type[] System.Reflection.Emit.TypeBuilder::interfaces
	TypeU5BU5D_t3431720054* ___interfaces_12;
	// System.Int32 System.Reflection.Emit.TypeBuilder::num_methods
	int32_t ___num_methods_13;
	// System.Reflection.Emit.MethodBuilder[] System.Reflection.Emit.TypeBuilder::methods
	MethodBuilderU5BU5D_t3930099966* ___methods_14;
	// System.Reflection.Emit.ConstructorBuilder[] System.Reflection.Emit.TypeBuilder::ctors
	ConstructorBuilderU5BU5D_t281281019* ___ctors_15;
	// System.Reflection.Emit.PropertyBuilder[] System.Reflection.Emit.TypeBuilder::properties
	PropertyBuilderU5BU5D_t2931941570* ___properties_16;
	// System.Int32 System.Reflection.Emit.TypeBuilder::num_fields
	int32_t ___num_fields_17;
	// System.Reflection.Emit.FieldBuilder[] System.Reflection.Emit.TypeBuilder::fields
	FieldBuilderU5BU5D_t758429435* ___fields_18;
	// System.Reflection.Emit.EventBuilder[] System.Reflection.Emit.TypeBuilder::events
	EventBuilderU5BU5D_t3141076763* ___events_19;
	// System.Reflection.Emit.CustomAttributeBuilder[] System.Reflection.Emit.TypeBuilder::cattrs
	CustomAttributeBuilderU5BU5D_t2932934064* ___cattrs_20;
	// System.Reflection.Emit.TypeBuilder[] System.Reflection.Emit.TypeBuilder::subtypes
	TypeBuilderU5BU5D_t2520789883* ___subtypes_21;
	// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::attrs
	int32_t ___attrs_22;
	// System.Int32 System.Reflection.Emit.TypeBuilder::table_idx
	int32_t ___table_idx_23;
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.TypeBuilder::pmodule
	ModuleBuilder_t1058295580 * ___pmodule_24;
	// System.Int32 System.Reflection.Emit.TypeBuilder::class_size
	int32_t ___class_size_25;
	// System.Reflection.Emit.PackingSize System.Reflection.Emit.TypeBuilder::packing_size
	int32_t ___packing_size_26;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] System.Reflection.Emit.TypeBuilder::generic_params
	GenericTypeParameterBuilderU5BU5D_t685103793* ___generic_params_27;
	// System.Type System.Reflection.Emit.TypeBuilder::created
	Type_t * ___created_28;
	// System.String System.Reflection.Emit.TypeBuilder::fullname
	String_t* ___fullname_29;
	// System.Boolean System.Reflection.Emit.TypeBuilder::createTypeCalled
	bool ___createTypeCalled_30;
	// System.Type System.Reflection.Emit.TypeBuilder::underlying_type
	Type_t * ___underlying_type_31;

public:
	inline static int32_t get_offset_of_tname_8() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___tname_8)); }
	inline String_t* get_tname_8() const { return ___tname_8; }
	inline String_t** get_address_of_tname_8() { return &___tname_8; }
	inline void set_tname_8(String_t* value)
	{
		___tname_8 = value;
		Il2CppCodeGenWriteBarrier(&___tname_8, value);
	}

	inline static int32_t get_offset_of_nspace_9() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___nspace_9)); }
	inline String_t* get_nspace_9() const { return ___nspace_9; }
	inline String_t** get_address_of_nspace_9() { return &___nspace_9; }
	inline void set_nspace_9(String_t* value)
	{
		___nspace_9 = value;
		Il2CppCodeGenWriteBarrier(&___nspace_9, value);
	}

	inline static int32_t get_offset_of_parent_10() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___parent_10)); }
	inline Type_t * get_parent_10() const { return ___parent_10; }
	inline Type_t ** get_address_of_parent_10() { return &___parent_10; }
	inline void set_parent_10(Type_t * value)
	{
		___parent_10 = value;
		Il2CppCodeGenWriteBarrier(&___parent_10, value);
	}

	inline static int32_t get_offset_of_nesting_type_11() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___nesting_type_11)); }
	inline Type_t * get_nesting_type_11() const { return ___nesting_type_11; }
	inline Type_t ** get_address_of_nesting_type_11() { return &___nesting_type_11; }
	inline void set_nesting_type_11(Type_t * value)
	{
		___nesting_type_11 = value;
		Il2CppCodeGenWriteBarrier(&___nesting_type_11, value);
	}

	inline static int32_t get_offset_of_interfaces_12() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___interfaces_12)); }
	inline TypeU5BU5D_t3431720054* get_interfaces_12() const { return ___interfaces_12; }
	inline TypeU5BU5D_t3431720054** get_address_of_interfaces_12() { return &___interfaces_12; }
	inline void set_interfaces_12(TypeU5BU5D_t3431720054* value)
	{
		___interfaces_12 = value;
		Il2CppCodeGenWriteBarrier(&___interfaces_12, value);
	}

	inline static int32_t get_offset_of_num_methods_13() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___num_methods_13)); }
	inline int32_t get_num_methods_13() const { return ___num_methods_13; }
	inline int32_t* get_address_of_num_methods_13() { return &___num_methods_13; }
	inline void set_num_methods_13(int32_t value)
	{
		___num_methods_13 = value;
	}

	inline static int32_t get_offset_of_methods_14() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___methods_14)); }
	inline MethodBuilderU5BU5D_t3930099966* get_methods_14() const { return ___methods_14; }
	inline MethodBuilderU5BU5D_t3930099966** get_address_of_methods_14() { return &___methods_14; }
	inline void set_methods_14(MethodBuilderU5BU5D_t3930099966* value)
	{
		___methods_14 = value;
		Il2CppCodeGenWriteBarrier(&___methods_14, value);
	}

	inline static int32_t get_offset_of_ctors_15() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___ctors_15)); }
	inline ConstructorBuilderU5BU5D_t281281019* get_ctors_15() const { return ___ctors_15; }
	inline ConstructorBuilderU5BU5D_t281281019** get_address_of_ctors_15() { return &___ctors_15; }
	inline void set_ctors_15(ConstructorBuilderU5BU5D_t281281019* value)
	{
		___ctors_15 = value;
		Il2CppCodeGenWriteBarrier(&___ctors_15, value);
	}

	inline static int32_t get_offset_of_properties_16() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___properties_16)); }
	inline PropertyBuilderU5BU5D_t2931941570* get_properties_16() const { return ___properties_16; }
	inline PropertyBuilderU5BU5D_t2931941570** get_address_of_properties_16() { return &___properties_16; }
	inline void set_properties_16(PropertyBuilderU5BU5D_t2931941570* value)
	{
		___properties_16 = value;
		Il2CppCodeGenWriteBarrier(&___properties_16, value);
	}

	inline static int32_t get_offset_of_num_fields_17() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___num_fields_17)); }
	inline int32_t get_num_fields_17() const { return ___num_fields_17; }
	inline int32_t* get_address_of_num_fields_17() { return &___num_fields_17; }
	inline void set_num_fields_17(int32_t value)
	{
		___num_fields_17 = value;
	}

	inline static int32_t get_offset_of_fields_18() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___fields_18)); }
	inline FieldBuilderU5BU5D_t758429435* get_fields_18() const { return ___fields_18; }
	inline FieldBuilderU5BU5D_t758429435** get_address_of_fields_18() { return &___fields_18; }
	inline void set_fields_18(FieldBuilderU5BU5D_t758429435* value)
	{
		___fields_18 = value;
		Il2CppCodeGenWriteBarrier(&___fields_18, value);
	}

	inline static int32_t get_offset_of_events_19() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___events_19)); }
	inline EventBuilderU5BU5D_t3141076763* get_events_19() const { return ___events_19; }
	inline EventBuilderU5BU5D_t3141076763** get_address_of_events_19() { return &___events_19; }
	inline void set_events_19(EventBuilderU5BU5D_t3141076763* value)
	{
		___events_19 = value;
		Il2CppCodeGenWriteBarrier(&___events_19, value);
	}

	inline static int32_t get_offset_of_cattrs_20() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___cattrs_20)); }
	inline CustomAttributeBuilderU5BU5D_t2932934064* get_cattrs_20() const { return ___cattrs_20; }
	inline CustomAttributeBuilderU5BU5D_t2932934064** get_address_of_cattrs_20() { return &___cattrs_20; }
	inline void set_cattrs_20(CustomAttributeBuilderU5BU5D_t2932934064* value)
	{
		___cattrs_20 = value;
		Il2CppCodeGenWriteBarrier(&___cattrs_20, value);
	}

	inline static int32_t get_offset_of_subtypes_21() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___subtypes_21)); }
	inline TypeBuilderU5BU5D_t2520789883* get_subtypes_21() const { return ___subtypes_21; }
	inline TypeBuilderU5BU5D_t2520789883** get_address_of_subtypes_21() { return &___subtypes_21; }
	inline void set_subtypes_21(TypeBuilderU5BU5D_t2520789883* value)
	{
		___subtypes_21 = value;
		Il2CppCodeGenWriteBarrier(&___subtypes_21, value);
	}

	inline static int32_t get_offset_of_attrs_22() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___attrs_22)); }
	inline int32_t get_attrs_22() const { return ___attrs_22; }
	inline int32_t* get_address_of_attrs_22() { return &___attrs_22; }
	inline void set_attrs_22(int32_t value)
	{
		___attrs_22 = value;
	}

	inline static int32_t get_offset_of_table_idx_23() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___table_idx_23)); }
	inline int32_t get_table_idx_23() const { return ___table_idx_23; }
	inline int32_t* get_address_of_table_idx_23() { return &___table_idx_23; }
	inline void set_table_idx_23(int32_t value)
	{
		___table_idx_23 = value;
	}

	inline static int32_t get_offset_of_pmodule_24() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___pmodule_24)); }
	inline ModuleBuilder_t1058295580 * get_pmodule_24() const { return ___pmodule_24; }
	inline ModuleBuilder_t1058295580 ** get_address_of_pmodule_24() { return &___pmodule_24; }
	inline void set_pmodule_24(ModuleBuilder_t1058295580 * value)
	{
		___pmodule_24 = value;
		Il2CppCodeGenWriteBarrier(&___pmodule_24, value);
	}

	inline static int32_t get_offset_of_class_size_25() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___class_size_25)); }
	inline int32_t get_class_size_25() const { return ___class_size_25; }
	inline int32_t* get_address_of_class_size_25() { return &___class_size_25; }
	inline void set_class_size_25(int32_t value)
	{
		___class_size_25 = value;
	}

	inline static int32_t get_offset_of_packing_size_26() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___packing_size_26)); }
	inline int32_t get_packing_size_26() const { return ___packing_size_26; }
	inline int32_t* get_address_of_packing_size_26() { return &___packing_size_26; }
	inline void set_packing_size_26(int32_t value)
	{
		___packing_size_26 = value;
	}

	inline static int32_t get_offset_of_generic_params_27() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___generic_params_27)); }
	inline GenericTypeParameterBuilderU5BU5D_t685103793* get_generic_params_27() const { return ___generic_params_27; }
	inline GenericTypeParameterBuilderU5BU5D_t685103793** get_address_of_generic_params_27() { return &___generic_params_27; }
	inline void set_generic_params_27(GenericTypeParameterBuilderU5BU5D_t685103793* value)
	{
		___generic_params_27 = value;
		Il2CppCodeGenWriteBarrier(&___generic_params_27, value);
	}

	inline static int32_t get_offset_of_created_28() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___created_28)); }
	inline Type_t * get_created_28() const { return ___created_28; }
	inline Type_t ** get_address_of_created_28() { return &___created_28; }
	inline void set_created_28(Type_t * value)
	{
		___created_28 = value;
		Il2CppCodeGenWriteBarrier(&___created_28, value);
	}

	inline static int32_t get_offset_of_fullname_29() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___fullname_29)); }
	inline String_t* get_fullname_29() const { return ___fullname_29; }
	inline String_t** get_address_of_fullname_29() { return &___fullname_29; }
	inline void set_fullname_29(String_t* value)
	{
		___fullname_29 = value;
		Il2CppCodeGenWriteBarrier(&___fullname_29, value);
	}

	inline static int32_t get_offset_of_createTypeCalled_30() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___createTypeCalled_30)); }
	inline bool get_createTypeCalled_30() const { return ___createTypeCalled_30; }
	inline bool* get_address_of_createTypeCalled_30() { return &___createTypeCalled_30; }
	inline void set_createTypeCalled_30(bool value)
	{
		___createTypeCalled_30 = value;
	}

	inline static int32_t get_offset_of_underlying_type_31() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___underlying_type_31)); }
	inline Type_t * get_underlying_type_31() const { return ___underlying_type_31; }
	inline Type_t ** get_address_of_underlying_type_31() { return &___underlying_type_31; }
	inline void set_underlying_type_31(Type_t * value)
	{
		___underlying_type_31 = value;
		Il2CppCodeGenWriteBarrier(&___underlying_type_31, value);
	}
};

struct TypeBuilder_t4287691406_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Reflection.Emit.TypeBuilder::<>f__switch$map1E
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map1E_32;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1E_32() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406_StaticFields, ___U3CU3Ef__switchU24map1E_32)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map1E_32() const { return ___U3CU3Ef__switchU24map1E_32; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map1E_32() { return &___U3CU3Ef__switchU24map1E_32; }
	inline void set_U3CU3Ef__switchU24map1E_32(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map1E_32 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1E_32, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
