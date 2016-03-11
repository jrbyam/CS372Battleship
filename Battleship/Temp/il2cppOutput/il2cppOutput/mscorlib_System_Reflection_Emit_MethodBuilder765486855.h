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
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t4287691406;
// System.Reflection.Emit.ParameterBuilder[]
struct ParameterBuilderU5BU5D_t4099139494;
// System.Reflection.Emit.CustomAttributeBuilder[]
struct CustomAttributeBuilderU5BU5D_t2932934064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t685103793;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t2239438067;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "mscorlib_System_Reflection_MethodAttributes455054214.h"
#include "mscorlib_System_Reflection_MethodImplAttributes3301691718.h"
#include "mscorlib_System_Runtime_InteropServices_CharSet3877184238.h"
#include "mscorlib_System_Runtime_InteropServices_CallingConv422153495.h"
#include "mscorlib_System_Reflection_CallingConventions3959446060.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.MethodBuilder
struct  MethodBuilder_t765486855  : public MethodInfo_t
{
public:
	// System.Type System.Reflection.Emit.MethodBuilder::rtype
	Type_t * ___rtype_0;
	// System.Type[] System.Reflection.Emit.MethodBuilder::parameters
	TypeU5BU5D_t3431720054* ___parameters_1;
	// System.Reflection.MethodAttributes System.Reflection.Emit.MethodBuilder::attrs
	int32_t ___attrs_2;
	// System.Reflection.MethodImplAttributes System.Reflection.Emit.MethodBuilder::iattrs
	int32_t ___iattrs_3;
	// System.String System.Reflection.Emit.MethodBuilder::name
	String_t* ___name_4;
	// System.Int32 System.Reflection.Emit.MethodBuilder::table_idx
	int32_t ___table_idx_5;
	// System.Byte[] System.Reflection.Emit.MethodBuilder::code
	ByteU5BU5D_t58506160* ___code_6;
	// System.Reflection.Emit.ILGenerator System.Reflection.Emit.MethodBuilder::ilgen
	ILGenerator_t3869071517 * ___ilgen_7;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.MethodBuilder::type
	TypeBuilder_t4287691406 * ___type_8;
	// System.Reflection.Emit.ParameterBuilder[] System.Reflection.Emit.MethodBuilder::pinfo
	ParameterBuilderU5BU5D_t4099139494* ___pinfo_9;
	// System.Reflection.Emit.CustomAttributeBuilder[] System.Reflection.Emit.MethodBuilder::cattrs
	CustomAttributeBuilderU5BU5D_t2932934064* ___cattrs_10;
	// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::override_method
	MethodInfo_t * ___override_method_11;
	// System.String System.Reflection.Emit.MethodBuilder::pi_dll
	String_t* ___pi_dll_12;
	// System.String System.Reflection.Emit.MethodBuilder::pi_entry
	String_t* ___pi_entry_13;
	// System.Runtime.InteropServices.CharSet System.Reflection.Emit.MethodBuilder::charset
	int32_t ___charset_14;
	// System.UInt32 System.Reflection.Emit.MethodBuilder::extra_flags
	uint32_t ___extra_flags_15;
	// System.Runtime.InteropServices.CallingConvention System.Reflection.Emit.MethodBuilder::native_cc
	int32_t ___native_cc_16;
	// System.Reflection.CallingConventions System.Reflection.Emit.MethodBuilder::call_conv
	int32_t ___call_conv_17;
	// System.Boolean System.Reflection.Emit.MethodBuilder::init_locals
	bool ___init_locals_18;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] System.Reflection.Emit.MethodBuilder::generic_params
	GenericTypeParameterBuilderU5BU5D_t685103793* ___generic_params_19;
	// System.Type[] System.Reflection.Emit.MethodBuilder::returnModReq
	TypeU5BU5D_t3431720054* ___returnModReq_20;
	// System.Type[] System.Reflection.Emit.MethodBuilder::returnModOpt
	TypeU5BU5D_t3431720054* ___returnModOpt_21;
	// System.Type[][] System.Reflection.Emit.MethodBuilder::paramModReq
	TypeU5BU5DU5BU5D_t2239438067* ___paramModReq_22;
	// System.Type[][] System.Reflection.Emit.MethodBuilder::paramModOpt
	TypeU5BU5DU5BU5D_t2239438067* ___paramModOpt_23;

public:
	inline static int32_t get_offset_of_rtype_0() { return static_cast<int32_t>(offsetof(MethodBuilder_t765486855, ___rtype_0)); }
	inline Type_t * get_rtype_0() const { return ___rtype_0; }
	inline Type_t ** get_address_of_rtype_0() { return &___rtype_0; }
	inline void set_rtype_0(Type_t * value)
	{
		___rtype_0 = value;
		Il2CppCodeGenWriteBarrier(&___rtype_0, value);
	}

	inline static int32_t get_offset_of_parameters_1() { return static_cast<int32_t>(offsetof(MethodBuilder_t765486855, ___parameters_1)); }
	inline TypeU5BU5D_t3431720054* get_parameters_1() const { return ___parameters_1; }
	inline TypeU5BU5D_t3431720054** get_address_of_parameters_1() { return &___parameters_1; }
	inline void set_parameters_1(TypeU5BU5D_t3431720054* value)
	{
		___parameters_1 = value;
		Il2CppCodeGenWriteBarrier(&___parameters_1, value);
	}

	inline static int32_t get_offset_of_attrs_2() { return static_cast<int32_t>(offsetof(MethodBuilder_t765486855, ___attrs_2)); }
	inline int32_t get_attrs_2() const { return ___attrs_2; }
	inline int32_t* get_address_of_attrs_2() { return &___attrs_2; }
	inline void set_attrs_2(int32_t value)
	{
		___attrs_2 = value;
	}

	inline static int32_t get_offset_of_iattrs_3() { return static_cast<int32_t>(offsetof(MethodBuilder_t765486855, ___iattrs_3)); }
	inline int32_t get_iattrs_3() const { return ___iattrs_3; }
	inline int32_t* get_address_of_iattrs_3() { return &___iattrs_3; }
	inline void set_iattrs_3(int32_t value)
	{
		___iattrs_3 = value;
	}

	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(MethodBuilder_t765486855, ___name_4)); }
	inline String_t* get_name_4() const { return ___name_4; }
	inline String_t** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(String_t* value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier(&___name_4, value);
	}

	inline static int32_t get_offset_of_table_idx_5() { return static_cast<int32_t>(offsetof(MethodBuilder_t765486855, ___table_idx_5)); }
	inline int32_t get_table_idx_5() const { return ___table_idx_5; }
	inline int32_t* get_address_of_table_idx_5() { return &___table_idx_5; }
	inline void set_table_idx_5(int32_t value)
	{
		___table_idx_5 = value;
	}

	inline static int32_t get_offset_of_code_6() { return static_cast<int32_t>(offsetof(MethodBuilder_t765486855, ___code_6)); }
	inline ByteU5BU5D_t58506160* get_code_6() const { return ___code_6; }
	inline ByteU5BU5D_t58506160** get_address_of_code_6() { return &___code_6; }
	inline void set_code_6(ByteU5BU5D_t58506160* value)
	{
		___code_6 = value;
		Il2CppCodeGenWriteBarrier(&___code_6, value);
	}

	inline static int32_t get_offset_of_ilgen_7() { return static_cast<int32_t>(offsetof(MethodBuilder_t765486855, ___ilgen_7)); }
	inline ILGenerator_t3869071517 * get_ilgen_7() const { return ___ilgen_7; }
	inline ILGenerator_t3869071517 ** get_address_of_ilgen_7() { return &___ilgen_7; }
	inline void set_ilgen_7(ILGenerator_t3869071517 * value)
	{
		___ilgen_7 = value;
		Il2CppCodeGenWriteBarrier(&___ilgen_7, value);
	}

	inline static int32_t get_offset_of_type_8() { return static_cast<int32_t>(offsetof(MethodBuilder_t765486855, ___type_8)); }
	inline TypeBuilder_t4287691406 * get_type_8() const { return ___type_8; }
	inline TypeBuilder_t4287691406 ** get_address_of_type_8() { return &___type_8; }
	inline void set_type_8(TypeBuilder_t4287691406 * value)
	{
		___type_8 = value;
		Il2CppCodeGenWriteBarrier(&___type_8, value);
	}

	inline static int32_t get_offset_of_pinfo_9() { return static_cast<int32_t>(offsetof(MethodBuilder_t765486855, ___pinfo_9)); }
	inline ParameterBuilderU5BU5D_t4099139494* get_pinfo_9() const { return ___pinfo_9; }
	inline ParameterBuilderU5BU5D_t4099139494** get_address_of_pinfo_9() { return &___pinfo_9; }
	inline void set_pinfo_9(ParameterBuilderU5BU5D_t4099139494* value)
	{
		___pinfo_9 = value;
		Il2CppCodeGenWriteBarrier(&___pinfo_9, value);
	}

	inline static int32_t get_offset_of_cattrs_10() { return static_cast<int32_t>(offsetof(MethodBuilder_t765486855, ___cattrs_10)); }
	inline CustomAttributeBuilderU5BU5D_t2932934064* get_cattrs_10() const { return ___cattrs_10; }
	inline CustomAttributeBuilderU5BU5D_t2932934064** get_address_of_cattrs_10() { return &___cattrs_10; }
	inline void set_cattrs_10(CustomAttributeBuilderU5BU5D_t2932934064* value)
	{
		___cattrs_10 = value;
		Il2CppCodeGenWriteBarrier(&___cattrs_10, value);
	}

	inline static int32_t get_offset_of_override_method_11() { return static_cast<int32_t>(offsetof(MethodBuilder_t765486855, ___override_method_11)); }
	inline MethodInfo_t * get_override_method_11() const { return ___override_method_11; }
	inline MethodInfo_t ** get_address_of_override_method_11() { return &___override_method_11; }
	inline void set_override_method_11(MethodInfo_t * value)
	{
		___override_method_11 = value;
		Il2CppCodeGenWriteBarrier(&___override_method_11, value);
	}

	inline static int32_t get_offset_of_pi_dll_12() { return static_cast<int32_t>(offsetof(MethodBuilder_t765486855, ___pi_dll_12)); }
	inline String_t* get_pi_dll_12() const { return ___pi_dll_12; }
	inline String_t** get_address_of_pi_dll_12() { return &___pi_dll_12; }
	inline void set_pi_dll_12(String_t* value)
	{
		___pi_dll_12 = value;
		Il2CppCodeGenWriteBarrier(&___pi_dll_12, value);
	}

	inline static int32_t get_offset_of_pi_entry_13() { return static_cast<int32_t>(offsetof(MethodBuilder_t765486855, ___pi_entry_13)); }
	inline String_t* get_pi_entry_13() const { return ___pi_entry_13; }
	inline String_t** get_address_of_pi_entry_13() { return &___pi_entry_13; }
	inline void set_pi_entry_13(String_t* value)
	{
		___pi_entry_13 = value;
		Il2CppCodeGenWriteBarrier(&___pi_entry_13, value);
	}

	inline static int32_t get_offset_of_charset_14() { return static_cast<int32_t>(offsetof(MethodBuilder_t765486855, ___charset_14)); }
	inline int32_t get_charset_14() const { return ___charset_14; }
	inline int32_t* get_address_of_charset_14() { return &___charset_14; }
	inline void set_charset_14(int32_t value)
	{
		___charset_14 = value;
	}

	inline static int32_t get_offset_of_extra_flags_15() { return static_cast<int32_t>(offsetof(MethodBuilder_t765486855, ___extra_flags_15)); }
	inline uint32_t get_extra_flags_15() const { return ___extra_flags_15; }
	inline uint32_t* get_address_of_extra_flags_15() { return &___extra_flags_15; }
	inline void set_extra_flags_15(uint32_t value)
	{
		___extra_flags_15 = value;
	}

	inline static int32_t get_offset_of_native_cc_16() { return static_cast<int32_t>(offsetof(MethodBuilder_t765486855, ___native_cc_16)); }
	inline int32_t get_native_cc_16() const { return ___native_cc_16; }
	inline int32_t* get_address_of_native_cc_16() { return &___native_cc_16; }
	inline void set_native_cc_16(int32_t value)
	{
		___native_cc_16 = value;
	}

	inline static int32_t get_offset_of_call_conv_17() { return static_cast<int32_t>(offsetof(MethodBuilder_t765486855, ___call_conv_17)); }
	inline int32_t get_call_conv_17() const { return ___call_conv_17; }
	inline int32_t* get_address_of_call_conv_17() { return &___call_conv_17; }
	inline void set_call_conv_17(int32_t value)
	{
		___call_conv_17 = value;
	}

	inline static int32_t get_offset_of_init_locals_18() { return static_cast<int32_t>(offsetof(MethodBuilder_t765486855, ___init_locals_18)); }
	inline bool get_init_locals_18() const { return ___init_locals_18; }
	inline bool* get_address_of_init_locals_18() { return &___init_locals_18; }
	inline void set_init_locals_18(bool value)
	{
		___init_locals_18 = value;
	}

	inline static int32_t get_offset_of_generic_params_19() { return static_cast<int32_t>(offsetof(MethodBuilder_t765486855, ___generic_params_19)); }
	inline GenericTypeParameterBuilderU5BU5D_t685103793* get_generic_params_19() const { return ___generic_params_19; }
	inline GenericTypeParameterBuilderU5BU5D_t685103793** get_address_of_generic_params_19() { return &___generic_params_19; }
	inline void set_generic_params_19(GenericTypeParameterBuilderU5BU5D_t685103793* value)
	{
		___generic_params_19 = value;
		Il2CppCodeGenWriteBarrier(&___generic_params_19, value);
	}

	inline static int32_t get_offset_of_returnModReq_20() { return static_cast<int32_t>(offsetof(MethodBuilder_t765486855, ___returnModReq_20)); }
	inline TypeU5BU5D_t3431720054* get_returnModReq_20() const { return ___returnModReq_20; }
	inline TypeU5BU5D_t3431720054** get_address_of_returnModReq_20() { return &___returnModReq_20; }
	inline void set_returnModReq_20(TypeU5BU5D_t3431720054* value)
	{
		___returnModReq_20 = value;
		Il2CppCodeGenWriteBarrier(&___returnModReq_20, value);
	}

	inline static int32_t get_offset_of_returnModOpt_21() { return static_cast<int32_t>(offsetof(MethodBuilder_t765486855, ___returnModOpt_21)); }
	inline TypeU5BU5D_t3431720054* get_returnModOpt_21() const { return ___returnModOpt_21; }
	inline TypeU5BU5D_t3431720054** get_address_of_returnModOpt_21() { return &___returnModOpt_21; }
	inline void set_returnModOpt_21(TypeU5BU5D_t3431720054* value)
	{
		___returnModOpt_21 = value;
		Il2CppCodeGenWriteBarrier(&___returnModOpt_21, value);
	}

	inline static int32_t get_offset_of_paramModReq_22() { return static_cast<int32_t>(offsetof(MethodBuilder_t765486855, ___paramModReq_22)); }
	inline TypeU5BU5DU5BU5D_t2239438067* get_paramModReq_22() const { return ___paramModReq_22; }
	inline TypeU5BU5DU5BU5D_t2239438067** get_address_of_paramModReq_22() { return &___paramModReq_22; }
	inline void set_paramModReq_22(TypeU5BU5DU5BU5D_t2239438067* value)
	{
		___paramModReq_22 = value;
		Il2CppCodeGenWriteBarrier(&___paramModReq_22, value);
	}

	inline static int32_t get_offset_of_paramModOpt_23() { return static_cast<int32_t>(offsetof(MethodBuilder_t765486855, ___paramModOpt_23)); }
	inline TypeU5BU5DU5BU5D_t2239438067* get_paramModOpt_23() const { return ___paramModOpt_23; }
	inline TypeU5BU5DU5BU5D_t2239438067** get_address_of_paramModOpt_23() { return &___paramModOpt_23; }
	inline void set_paramModOpt_23(TypeU5BU5DU5BU5D_t2239438067* value)
	{
		___paramModOpt_23 = value;
		Il2CppCodeGenWriteBarrier(&___paramModOpt_23, value);
	}
};

struct MethodBuilder_t765486855_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Reflection.Emit.MethodBuilder::<>f__switch$map1D
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map1D_24;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1D_24() { return static_cast<int32_t>(offsetof(MethodBuilder_t765486855_StaticFields, ___U3CU3Ef__switchU24map1D_24)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map1D_24() const { return ___U3CU3Ef__switchU24map1D_24; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map1D_24() { return &___U3CU3Ef__switchU24map1D_24; }
	inline void set_U3CU3Ef__switchU24map1D_24(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map1D_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1D_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
