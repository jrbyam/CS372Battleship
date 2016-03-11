#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.MethodBase
struct MethodBase_t3461000640;
// System.String
struct String_t;
// System.Reflection.Emit.CustomAttributeBuilder[]
struct CustomAttributeBuilderU5BU5D_t2932934064;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t446138789;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_ParameterAttributes4282458126.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ParameterBuilder
struct  ParameterBuilder_t3382011775  : public Il2CppObject
{
public:
	// System.Reflection.MethodBase System.Reflection.Emit.ParameterBuilder::methodb
	MethodBase_t3461000640 * ___methodb_0;
	// System.String System.Reflection.Emit.ParameterBuilder::name
	String_t* ___name_1;
	// System.Reflection.Emit.CustomAttributeBuilder[] System.Reflection.Emit.ParameterBuilder::cattrs
	CustomAttributeBuilderU5BU5D_t2932934064* ___cattrs_2;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.ParameterBuilder::marshal_info
	UnmanagedMarshal_t446138789 * ___marshal_info_3;
	// System.Reflection.ParameterAttributes System.Reflection.Emit.ParameterBuilder::attrs
	int32_t ___attrs_4;
	// System.Int32 System.Reflection.Emit.ParameterBuilder::position
	int32_t ___position_5;
	// System.Int32 System.Reflection.Emit.ParameterBuilder::table_idx
	int32_t ___table_idx_6;
	// System.Object System.Reflection.Emit.ParameterBuilder::def_value
	Il2CppObject * ___def_value_7;

public:
	inline static int32_t get_offset_of_methodb_0() { return static_cast<int32_t>(offsetof(ParameterBuilder_t3382011775, ___methodb_0)); }
	inline MethodBase_t3461000640 * get_methodb_0() const { return ___methodb_0; }
	inline MethodBase_t3461000640 ** get_address_of_methodb_0() { return &___methodb_0; }
	inline void set_methodb_0(MethodBase_t3461000640 * value)
	{
		___methodb_0 = value;
		Il2CppCodeGenWriteBarrier(&___methodb_0, value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(ParameterBuilder_t3382011775, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_cattrs_2() { return static_cast<int32_t>(offsetof(ParameterBuilder_t3382011775, ___cattrs_2)); }
	inline CustomAttributeBuilderU5BU5D_t2932934064* get_cattrs_2() const { return ___cattrs_2; }
	inline CustomAttributeBuilderU5BU5D_t2932934064** get_address_of_cattrs_2() { return &___cattrs_2; }
	inline void set_cattrs_2(CustomAttributeBuilderU5BU5D_t2932934064* value)
	{
		___cattrs_2 = value;
		Il2CppCodeGenWriteBarrier(&___cattrs_2, value);
	}

	inline static int32_t get_offset_of_marshal_info_3() { return static_cast<int32_t>(offsetof(ParameterBuilder_t3382011775, ___marshal_info_3)); }
	inline UnmanagedMarshal_t446138789 * get_marshal_info_3() const { return ___marshal_info_3; }
	inline UnmanagedMarshal_t446138789 ** get_address_of_marshal_info_3() { return &___marshal_info_3; }
	inline void set_marshal_info_3(UnmanagedMarshal_t446138789 * value)
	{
		___marshal_info_3 = value;
		Il2CppCodeGenWriteBarrier(&___marshal_info_3, value);
	}

	inline static int32_t get_offset_of_attrs_4() { return static_cast<int32_t>(offsetof(ParameterBuilder_t3382011775, ___attrs_4)); }
	inline int32_t get_attrs_4() const { return ___attrs_4; }
	inline int32_t* get_address_of_attrs_4() { return &___attrs_4; }
	inline void set_attrs_4(int32_t value)
	{
		___attrs_4 = value;
	}

	inline static int32_t get_offset_of_position_5() { return static_cast<int32_t>(offsetof(ParameterBuilder_t3382011775, ___position_5)); }
	inline int32_t get_position_5() const { return ___position_5; }
	inline int32_t* get_address_of_position_5() { return &___position_5; }
	inline void set_position_5(int32_t value)
	{
		___position_5 = value;
	}

	inline static int32_t get_offset_of_table_idx_6() { return static_cast<int32_t>(offsetof(ParameterBuilder_t3382011775, ___table_idx_6)); }
	inline int32_t get_table_idx_6() const { return ___table_idx_6; }
	inline int32_t* get_address_of_table_idx_6() { return &___table_idx_6; }
	inline void set_table_idx_6(int32_t value)
	{
		___table_idx_6 = value;
	}

	inline static int32_t get_offset_of_def_value_7() { return static_cast<int32_t>(offsetof(ParameterBuilder_t3382011775, ___def_value_7)); }
	inline Il2CppObject * get_def_value_7() const { return ___def_value_7; }
	inline Il2CppObject ** get_address_of_def_value_7() { return &___def_value_7; }
	inline void set_def_value_7(Il2CppObject * value)
	{
		___def_value_7 = value;
		Il2CppCodeGenWriteBarrier(&___def_value_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
