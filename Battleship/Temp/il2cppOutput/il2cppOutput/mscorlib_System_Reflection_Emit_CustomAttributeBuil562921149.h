#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.CustomAttributeBuilder
struct  CustomAttributeBuilder_t562921149  : public Il2CppObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.Emit.CustomAttributeBuilder::ctor
	ConstructorInfo_t3542137334 * ___ctor_0;
	// System.Byte[] System.Reflection.Emit.CustomAttributeBuilder::data
	ByteU5BU5D_t58506160* ___data_1;

public:
	inline static int32_t get_offset_of_ctor_0() { return static_cast<int32_t>(offsetof(CustomAttributeBuilder_t562921149, ___ctor_0)); }
	inline ConstructorInfo_t3542137334 * get_ctor_0() const { return ___ctor_0; }
	inline ConstructorInfo_t3542137334 ** get_address_of_ctor_0() { return &___ctor_0; }
	inline void set_ctor_0(ConstructorInfo_t3542137334 * value)
	{
		___ctor_0 = value;
		Il2CppCodeGenWriteBarrier(&___ctor_0, value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(CustomAttributeBuilder_t562921149, ___data_1)); }
	inline ByteU5BU5D_t58506160* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t58506160** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t58506160* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}
};

struct CustomAttributeBuilder_t562921149_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Reflection.Emit.CustomAttributeBuilder::<>f__switch$map1C
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map1C_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1C_2() { return static_cast<int32_t>(offsetof(CustomAttributeBuilder_t562921149_StaticFields, ___U3CU3Ef__switchU24map1C_2)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map1C_2() const { return ___U3CU3Ef__switchU24map1C_2; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map1C_2() { return &___U3CU3Ef__switchU24map1C_2; }
	inline void set_U3CU3Ef__switchU24map1C_2(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map1C_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1C_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
