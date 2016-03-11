#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t4287691406;
// System.Reflection.Emit.CustomAttributeBuilder[]
struct CustomAttributeBuilderU5BU5D_t2932934064;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t446138789;
// System.Type[]
struct TypeU5BU5D_t3431720054;

#include "mscorlib_System_Reflection_FieldInfo1164929782.h"
#include "mscorlib_System_Reflection_FieldAttributes3381152799.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.FieldBuilder
struct  FieldBuilder_t2184649998  : public FieldInfo_t
{
public:
	// System.Reflection.FieldAttributes System.Reflection.Emit.FieldBuilder::attrs
	int32_t ___attrs_0;
	// System.Type System.Reflection.Emit.FieldBuilder::type
	Type_t * ___type_1;
	// System.String System.Reflection.Emit.FieldBuilder::name
	String_t* ___name_2;
	// System.Int32 System.Reflection.Emit.FieldBuilder::offset
	int32_t ___offset_3;
	// System.Int32 System.Reflection.Emit.FieldBuilder::table_idx
	int32_t ___table_idx_4;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.FieldBuilder::typeb
	TypeBuilder_t4287691406 * ___typeb_5;
	// System.Reflection.Emit.CustomAttributeBuilder[] System.Reflection.Emit.FieldBuilder::cattrs
	CustomAttributeBuilderU5BU5D_t2932934064* ___cattrs_6;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.FieldBuilder::marshal_info
	UnmanagedMarshal_t446138789 * ___marshal_info_7;
	// System.Type[] System.Reflection.Emit.FieldBuilder::modReq
	TypeU5BU5D_t3431720054* ___modReq_8;
	// System.Type[] System.Reflection.Emit.FieldBuilder::modOpt
	TypeU5BU5D_t3431720054* ___modOpt_9;

public:
	inline static int32_t get_offset_of_attrs_0() { return static_cast<int32_t>(offsetof(FieldBuilder_t2184649998, ___attrs_0)); }
	inline int32_t get_attrs_0() const { return ___attrs_0; }
	inline int32_t* get_address_of_attrs_0() { return &___attrs_0; }
	inline void set_attrs_0(int32_t value)
	{
		___attrs_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(FieldBuilder_t2184649998, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier(&___type_1, value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(FieldBuilder_t2184649998, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(FieldBuilder_t2184649998, ___offset_3)); }
	inline int32_t get_offset_3() const { return ___offset_3; }
	inline int32_t* get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(int32_t value)
	{
		___offset_3 = value;
	}

	inline static int32_t get_offset_of_table_idx_4() { return static_cast<int32_t>(offsetof(FieldBuilder_t2184649998, ___table_idx_4)); }
	inline int32_t get_table_idx_4() const { return ___table_idx_4; }
	inline int32_t* get_address_of_table_idx_4() { return &___table_idx_4; }
	inline void set_table_idx_4(int32_t value)
	{
		___table_idx_4 = value;
	}

	inline static int32_t get_offset_of_typeb_5() { return static_cast<int32_t>(offsetof(FieldBuilder_t2184649998, ___typeb_5)); }
	inline TypeBuilder_t4287691406 * get_typeb_5() const { return ___typeb_5; }
	inline TypeBuilder_t4287691406 ** get_address_of_typeb_5() { return &___typeb_5; }
	inline void set_typeb_5(TypeBuilder_t4287691406 * value)
	{
		___typeb_5 = value;
		Il2CppCodeGenWriteBarrier(&___typeb_5, value);
	}

	inline static int32_t get_offset_of_cattrs_6() { return static_cast<int32_t>(offsetof(FieldBuilder_t2184649998, ___cattrs_6)); }
	inline CustomAttributeBuilderU5BU5D_t2932934064* get_cattrs_6() const { return ___cattrs_6; }
	inline CustomAttributeBuilderU5BU5D_t2932934064** get_address_of_cattrs_6() { return &___cattrs_6; }
	inline void set_cattrs_6(CustomAttributeBuilderU5BU5D_t2932934064* value)
	{
		___cattrs_6 = value;
		Il2CppCodeGenWriteBarrier(&___cattrs_6, value);
	}

	inline static int32_t get_offset_of_marshal_info_7() { return static_cast<int32_t>(offsetof(FieldBuilder_t2184649998, ___marshal_info_7)); }
	inline UnmanagedMarshal_t446138789 * get_marshal_info_7() const { return ___marshal_info_7; }
	inline UnmanagedMarshal_t446138789 ** get_address_of_marshal_info_7() { return &___marshal_info_7; }
	inline void set_marshal_info_7(UnmanagedMarshal_t446138789 * value)
	{
		___marshal_info_7 = value;
		Il2CppCodeGenWriteBarrier(&___marshal_info_7, value);
	}

	inline static int32_t get_offset_of_modReq_8() { return static_cast<int32_t>(offsetof(FieldBuilder_t2184649998, ___modReq_8)); }
	inline TypeU5BU5D_t3431720054* get_modReq_8() const { return ___modReq_8; }
	inline TypeU5BU5D_t3431720054** get_address_of_modReq_8() { return &___modReq_8; }
	inline void set_modReq_8(TypeU5BU5D_t3431720054* value)
	{
		___modReq_8 = value;
		Il2CppCodeGenWriteBarrier(&___modReq_8, value);
	}

	inline static int32_t get_offset_of_modOpt_9() { return static_cast<int32_t>(offsetof(FieldBuilder_t2184649998, ___modOpt_9)); }
	inline TypeU5BU5D_t3431720054* get_modOpt_9() const { return ___modOpt_9; }
	inline TypeU5BU5D_t3431720054** get_address_of_modOpt_9() { return &___modOpt_9; }
	inline void set_modOpt_9(TypeU5BU5D_t3431720054* value)
	{
		___modOpt_9 = value;
		Il2CppCodeGenWriteBarrier(&___modOpt_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
