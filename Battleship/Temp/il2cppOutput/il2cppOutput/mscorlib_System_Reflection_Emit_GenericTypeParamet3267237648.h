#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t4287691406;
// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t765486855;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Reflection.Emit.CustomAttributeBuilder[]
struct CustomAttributeBuilderU5BU5D_t2932934064;

#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_GenericParameterAttribu3719437559.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.GenericTypeParameterBuilder
struct  GenericTypeParameterBuilder_t3267237648  : public Type_t
{
public:
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.GenericTypeParameterBuilder::tbuilder
	TypeBuilder_t4287691406 * ___tbuilder_8;
	// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.GenericTypeParameterBuilder::mbuilder
	MethodBuilder_t765486855 * ___mbuilder_9;
	// System.String System.Reflection.Emit.GenericTypeParameterBuilder::name
	String_t* ___name_10;
	// System.Int32 System.Reflection.Emit.GenericTypeParameterBuilder::index
	int32_t ___index_11;
	// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::base_type
	Type_t * ___base_type_12;
	// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::iface_constraints
	TypeU5BU5D_t3431720054* ___iface_constraints_13;
	// System.Reflection.Emit.CustomAttributeBuilder[] System.Reflection.Emit.GenericTypeParameterBuilder::cattrs
	CustomAttributeBuilderU5BU5D_t2932934064* ___cattrs_14;
	// System.Reflection.GenericParameterAttributes System.Reflection.Emit.GenericTypeParameterBuilder::attrs
	int32_t ___attrs_15;

public:
	inline static int32_t get_offset_of_tbuilder_8() { return static_cast<int32_t>(offsetof(GenericTypeParameterBuilder_t3267237648, ___tbuilder_8)); }
	inline TypeBuilder_t4287691406 * get_tbuilder_8() const { return ___tbuilder_8; }
	inline TypeBuilder_t4287691406 ** get_address_of_tbuilder_8() { return &___tbuilder_8; }
	inline void set_tbuilder_8(TypeBuilder_t4287691406 * value)
	{
		___tbuilder_8 = value;
		Il2CppCodeGenWriteBarrier(&___tbuilder_8, value);
	}

	inline static int32_t get_offset_of_mbuilder_9() { return static_cast<int32_t>(offsetof(GenericTypeParameterBuilder_t3267237648, ___mbuilder_9)); }
	inline MethodBuilder_t765486855 * get_mbuilder_9() const { return ___mbuilder_9; }
	inline MethodBuilder_t765486855 ** get_address_of_mbuilder_9() { return &___mbuilder_9; }
	inline void set_mbuilder_9(MethodBuilder_t765486855 * value)
	{
		___mbuilder_9 = value;
		Il2CppCodeGenWriteBarrier(&___mbuilder_9, value);
	}

	inline static int32_t get_offset_of_name_10() { return static_cast<int32_t>(offsetof(GenericTypeParameterBuilder_t3267237648, ___name_10)); }
	inline String_t* get_name_10() const { return ___name_10; }
	inline String_t** get_address_of_name_10() { return &___name_10; }
	inline void set_name_10(String_t* value)
	{
		___name_10 = value;
		Il2CppCodeGenWriteBarrier(&___name_10, value);
	}

	inline static int32_t get_offset_of_index_11() { return static_cast<int32_t>(offsetof(GenericTypeParameterBuilder_t3267237648, ___index_11)); }
	inline int32_t get_index_11() const { return ___index_11; }
	inline int32_t* get_address_of_index_11() { return &___index_11; }
	inline void set_index_11(int32_t value)
	{
		___index_11 = value;
	}

	inline static int32_t get_offset_of_base_type_12() { return static_cast<int32_t>(offsetof(GenericTypeParameterBuilder_t3267237648, ___base_type_12)); }
	inline Type_t * get_base_type_12() const { return ___base_type_12; }
	inline Type_t ** get_address_of_base_type_12() { return &___base_type_12; }
	inline void set_base_type_12(Type_t * value)
	{
		___base_type_12 = value;
		Il2CppCodeGenWriteBarrier(&___base_type_12, value);
	}

	inline static int32_t get_offset_of_iface_constraints_13() { return static_cast<int32_t>(offsetof(GenericTypeParameterBuilder_t3267237648, ___iface_constraints_13)); }
	inline TypeU5BU5D_t3431720054* get_iface_constraints_13() const { return ___iface_constraints_13; }
	inline TypeU5BU5D_t3431720054** get_address_of_iface_constraints_13() { return &___iface_constraints_13; }
	inline void set_iface_constraints_13(TypeU5BU5D_t3431720054* value)
	{
		___iface_constraints_13 = value;
		Il2CppCodeGenWriteBarrier(&___iface_constraints_13, value);
	}

	inline static int32_t get_offset_of_cattrs_14() { return static_cast<int32_t>(offsetof(GenericTypeParameterBuilder_t3267237648, ___cattrs_14)); }
	inline CustomAttributeBuilderU5BU5D_t2932934064* get_cattrs_14() const { return ___cattrs_14; }
	inline CustomAttributeBuilderU5BU5D_t2932934064** get_address_of_cattrs_14() { return &___cattrs_14; }
	inline void set_cattrs_14(CustomAttributeBuilderU5BU5D_t2932934064* value)
	{
		___cattrs_14 = value;
		Il2CppCodeGenWriteBarrier(&___cattrs_14, value);
	}

	inline static int32_t get_offset_of_attrs_15() { return static_cast<int32_t>(offsetof(GenericTypeParameterBuilder_t3267237648, ___attrs_15)); }
	inline int32_t get_attrs_15() const { return ___attrs_15; }
	inline int32_t* get_address_of_attrs_15() { return &___attrs_15; }
	inline void set_attrs_15(int32_t value)
	{
		___attrs_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
