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
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t4287691406;
// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t765486855;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_EventAttributes1168020927.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.EventBuilder
struct  EventBuilder_t2965256046  : public Il2CppObject
{
public:
	// System.String System.Reflection.Emit.EventBuilder::name
	String_t* ___name_0;
	// System.Type System.Reflection.Emit.EventBuilder::type
	Type_t * ___type_1;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.EventBuilder::typeb
	TypeBuilder_t4287691406 * ___typeb_2;
	// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.EventBuilder::add_method
	MethodBuilder_t765486855 * ___add_method_3;
	// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.EventBuilder::remove_method
	MethodBuilder_t765486855 * ___remove_method_4;
	// System.Reflection.EventAttributes System.Reflection.Emit.EventBuilder::attrs
	int32_t ___attrs_5;
	// System.Int32 System.Reflection.Emit.EventBuilder::table_idx
	int32_t ___table_idx_6;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(EventBuilder_t2965256046, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(EventBuilder_t2965256046, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier(&___type_1, value);
	}

	inline static int32_t get_offset_of_typeb_2() { return static_cast<int32_t>(offsetof(EventBuilder_t2965256046, ___typeb_2)); }
	inline TypeBuilder_t4287691406 * get_typeb_2() const { return ___typeb_2; }
	inline TypeBuilder_t4287691406 ** get_address_of_typeb_2() { return &___typeb_2; }
	inline void set_typeb_2(TypeBuilder_t4287691406 * value)
	{
		___typeb_2 = value;
		Il2CppCodeGenWriteBarrier(&___typeb_2, value);
	}

	inline static int32_t get_offset_of_add_method_3() { return static_cast<int32_t>(offsetof(EventBuilder_t2965256046, ___add_method_3)); }
	inline MethodBuilder_t765486855 * get_add_method_3() const { return ___add_method_3; }
	inline MethodBuilder_t765486855 ** get_address_of_add_method_3() { return &___add_method_3; }
	inline void set_add_method_3(MethodBuilder_t765486855 * value)
	{
		___add_method_3 = value;
		Il2CppCodeGenWriteBarrier(&___add_method_3, value);
	}

	inline static int32_t get_offset_of_remove_method_4() { return static_cast<int32_t>(offsetof(EventBuilder_t2965256046, ___remove_method_4)); }
	inline MethodBuilder_t765486855 * get_remove_method_4() const { return ___remove_method_4; }
	inline MethodBuilder_t765486855 ** get_address_of_remove_method_4() { return &___remove_method_4; }
	inline void set_remove_method_4(MethodBuilder_t765486855 * value)
	{
		___remove_method_4 = value;
		Il2CppCodeGenWriteBarrier(&___remove_method_4, value);
	}

	inline static int32_t get_offset_of_attrs_5() { return static_cast<int32_t>(offsetof(EventBuilder_t2965256046, ___attrs_5)); }
	inline int32_t get_attrs_5() const { return ___attrs_5; }
	inline int32_t* get_address_of_attrs_5() { return &___attrs_5; }
	inline void set_attrs_5(int32_t value)
	{
		___attrs_5 = value;
	}

	inline static int32_t get_offset_of_table_idx_6() { return static_cast<int32_t>(offsetof(EventBuilder_t2965256046, ___table_idx_6)); }
	inline int32_t get_table_idx_6() const { return ___table_idx_6; }
	inline int32_t* get_address_of_table_idx_6() { return &___table_idx_6; }
	inline void set_table_idx_6(int32_t value)
	{
		___table_idx_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
