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
// System.Reflection.Emit.CustomAttributeBuilder[]
struct CustomAttributeBuilderU5BU5D_t2932934064;
// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t765486855;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t4287691406;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t2239438067;

#include "mscorlib_System_Reflection_PropertyInfo1490548369.h"
#include "mscorlib_System_Reflection_PropertyAttributes3095558010.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.PropertyBuilder
struct  PropertyBuilder_t356853651  : public PropertyInfo_t
{
public:
	// System.Reflection.PropertyAttributes System.Reflection.Emit.PropertyBuilder::attrs
	int32_t ___attrs_0;
	// System.String System.Reflection.Emit.PropertyBuilder::name
	String_t* ___name_1;
	// System.Type System.Reflection.Emit.PropertyBuilder::type
	Type_t * ___type_2;
	// System.Type[] System.Reflection.Emit.PropertyBuilder::parameters
	TypeU5BU5D_t3431720054* ___parameters_3;
	// System.Reflection.Emit.CustomAttributeBuilder[] System.Reflection.Emit.PropertyBuilder::cattrs
	CustomAttributeBuilderU5BU5D_t2932934064* ___cattrs_4;
	// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.PropertyBuilder::set_method
	MethodBuilder_t765486855 * ___set_method_5;
	// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.PropertyBuilder::get_method
	MethodBuilder_t765486855 * ___get_method_6;
	// System.Int32 System.Reflection.Emit.PropertyBuilder::table_idx
	int32_t ___table_idx_7;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.PropertyBuilder::typeb
	TypeBuilder_t4287691406 * ___typeb_8;
	// System.Type[] System.Reflection.Emit.PropertyBuilder::returnModReq
	TypeU5BU5D_t3431720054* ___returnModReq_9;
	// System.Type[] System.Reflection.Emit.PropertyBuilder::returnModOpt
	TypeU5BU5D_t3431720054* ___returnModOpt_10;
	// System.Type[][] System.Reflection.Emit.PropertyBuilder::paramModReq
	TypeU5BU5DU5BU5D_t2239438067* ___paramModReq_11;
	// System.Type[][] System.Reflection.Emit.PropertyBuilder::paramModOpt
	TypeU5BU5DU5BU5D_t2239438067* ___paramModOpt_12;

public:
	inline static int32_t get_offset_of_attrs_0() { return static_cast<int32_t>(offsetof(PropertyBuilder_t356853651, ___attrs_0)); }
	inline int32_t get_attrs_0() const { return ___attrs_0; }
	inline int32_t* get_address_of_attrs_0() { return &___attrs_0; }
	inline void set_attrs_0(int32_t value)
	{
		___attrs_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(PropertyBuilder_t356853651, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(PropertyBuilder_t356853651, ___type_2)); }
	inline Type_t * get_type_2() const { return ___type_2; }
	inline Type_t ** get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(Type_t * value)
	{
		___type_2 = value;
		Il2CppCodeGenWriteBarrier(&___type_2, value);
	}

	inline static int32_t get_offset_of_parameters_3() { return static_cast<int32_t>(offsetof(PropertyBuilder_t356853651, ___parameters_3)); }
	inline TypeU5BU5D_t3431720054* get_parameters_3() const { return ___parameters_3; }
	inline TypeU5BU5D_t3431720054** get_address_of_parameters_3() { return &___parameters_3; }
	inline void set_parameters_3(TypeU5BU5D_t3431720054* value)
	{
		___parameters_3 = value;
		Il2CppCodeGenWriteBarrier(&___parameters_3, value);
	}

	inline static int32_t get_offset_of_cattrs_4() { return static_cast<int32_t>(offsetof(PropertyBuilder_t356853651, ___cattrs_4)); }
	inline CustomAttributeBuilderU5BU5D_t2932934064* get_cattrs_4() const { return ___cattrs_4; }
	inline CustomAttributeBuilderU5BU5D_t2932934064** get_address_of_cattrs_4() { return &___cattrs_4; }
	inline void set_cattrs_4(CustomAttributeBuilderU5BU5D_t2932934064* value)
	{
		___cattrs_4 = value;
		Il2CppCodeGenWriteBarrier(&___cattrs_4, value);
	}

	inline static int32_t get_offset_of_set_method_5() { return static_cast<int32_t>(offsetof(PropertyBuilder_t356853651, ___set_method_5)); }
	inline MethodBuilder_t765486855 * get_set_method_5() const { return ___set_method_5; }
	inline MethodBuilder_t765486855 ** get_address_of_set_method_5() { return &___set_method_5; }
	inline void set_set_method_5(MethodBuilder_t765486855 * value)
	{
		___set_method_5 = value;
		Il2CppCodeGenWriteBarrier(&___set_method_5, value);
	}

	inline static int32_t get_offset_of_get_method_6() { return static_cast<int32_t>(offsetof(PropertyBuilder_t356853651, ___get_method_6)); }
	inline MethodBuilder_t765486855 * get_get_method_6() const { return ___get_method_6; }
	inline MethodBuilder_t765486855 ** get_address_of_get_method_6() { return &___get_method_6; }
	inline void set_get_method_6(MethodBuilder_t765486855 * value)
	{
		___get_method_6 = value;
		Il2CppCodeGenWriteBarrier(&___get_method_6, value);
	}

	inline static int32_t get_offset_of_table_idx_7() { return static_cast<int32_t>(offsetof(PropertyBuilder_t356853651, ___table_idx_7)); }
	inline int32_t get_table_idx_7() const { return ___table_idx_7; }
	inline int32_t* get_address_of_table_idx_7() { return &___table_idx_7; }
	inline void set_table_idx_7(int32_t value)
	{
		___table_idx_7 = value;
	}

	inline static int32_t get_offset_of_typeb_8() { return static_cast<int32_t>(offsetof(PropertyBuilder_t356853651, ___typeb_8)); }
	inline TypeBuilder_t4287691406 * get_typeb_8() const { return ___typeb_8; }
	inline TypeBuilder_t4287691406 ** get_address_of_typeb_8() { return &___typeb_8; }
	inline void set_typeb_8(TypeBuilder_t4287691406 * value)
	{
		___typeb_8 = value;
		Il2CppCodeGenWriteBarrier(&___typeb_8, value);
	}

	inline static int32_t get_offset_of_returnModReq_9() { return static_cast<int32_t>(offsetof(PropertyBuilder_t356853651, ___returnModReq_9)); }
	inline TypeU5BU5D_t3431720054* get_returnModReq_9() const { return ___returnModReq_9; }
	inline TypeU5BU5D_t3431720054** get_address_of_returnModReq_9() { return &___returnModReq_9; }
	inline void set_returnModReq_9(TypeU5BU5D_t3431720054* value)
	{
		___returnModReq_9 = value;
		Il2CppCodeGenWriteBarrier(&___returnModReq_9, value);
	}

	inline static int32_t get_offset_of_returnModOpt_10() { return static_cast<int32_t>(offsetof(PropertyBuilder_t356853651, ___returnModOpt_10)); }
	inline TypeU5BU5D_t3431720054* get_returnModOpt_10() const { return ___returnModOpt_10; }
	inline TypeU5BU5D_t3431720054** get_address_of_returnModOpt_10() { return &___returnModOpt_10; }
	inline void set_returnModOpt_10(TypeU5BU5D_t3431720054* value)
	{
		___returnModOpt_10 = value;
		Il2CppCodeGenWriteBarrier(&___returnModOpt_10, value);
	}

	inline static int32_t get_offset_of_paramModReq_11() { return static_cast<int32_t>(offsetof(PropertyBuilder_t356853651, ___paramModReq_11)); }
	inline TypeU5BU5DU5BU5D_t2239438067* get_paramModReq_11() const { return ___paramModReq_11; }
	inline TypeU5BU5DU5BU5D_t2239438067** get_address_of_paramModReq_11() { return &___paramModReq_11; }
	inline void set_paramModReq_11(TypeU5BU5DU5BU5D_t2239438067* value)
	{
		___paramModReq_11 = value;
		Il2CppCodeGenWriteBarrier(&___paramModReq_11, value);
	}

	inline static int32_t get_offset_of_paramModOpt_12() { return static_cast<int32_t>(offsetof(PropertyBuilder_t356853651, ___paramModOpt_12)); }
	inline TypeU5BU5DU5BU5D_t2239438067* get_paramModOpt_12() const { return ___paramModOpt_12; }
	inline TypeU5BU5DU5BU5D_t2239438067** get_address_of_paramModOpt_12() { return &___paramModOpt_12; }
	inline void set_paramModOpt_12(TypeU5BU5DU5BU5D_t2239438067* value)
	{
		___paramModOpt_12 = value;
		Il2CppCodeGenWriteBarrier(&___paramModOpt_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
