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
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.CustomAttributeBuilder/CustomAttributeInfo
struct  CustomAttributeInfo_t393748825 
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.Emit.CustomAttributeBuilder/CustomAttributeInfo::ctor
	ConstructorInfo_t3542137334 * ___ctor_0;
	// System.Object[] System.Reflection.Emit.CustomAttributeBuilder/CustomAttributeInfo::ctorArgs
	ObjectU5BU5D_t11523773* ___ctorArgs_1;
	// System.String[] System.Reflection.Emit.CustomAttributeBuilder/CustomAttributeInfo::namedParamNames
	StringU5BU5D_t2956870243* ___namedParamNames_2;
	// System.Object[] System.Reflection.Emit.CustomAttributeBuilder/CustomAttributeInfo::namedParamValues
	ObjectU5BU5D_t11523773* ___namedParamValues_3;

public:
	inline static int32_t get_offset_of_ctor_0() { return static_cast<int32_t>(offsetof(CustomAttributeInfo_t393748825, ___ctor_0)); }
	inline ConstructorInfo_t3542137334 * get_ctor_0() const { return ___ctor_0; }
	inline ConstructorInfo_t3542137334 ** get_address_of_ctor_0() { return &___ctor_0; }
	inline void set_ctor_0(ConstructorInfo_t3542137334 * value)
	{
		___ctor_0 = value;
		Il2CppCodeGenWriteBarrier(&___ctor_0, value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeInfo_t393748825, ___ctorArgs_1)); }
	inline ObjectU5BU5D_t11523773* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline ObjectU5BU5D_t11523773** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(ObjectU5BU5D_t11523773* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier(&___ctorArgs_1, value);
	}

	inline static int32_t get_offset_of_namedParamNames_2() { return static_cast<int32_t>(offsetof(CustomAttributeInfo_t393748825, ___namedParamNames_2)); }
	inline StringU5BU5D_t2956870243* get_namedParamNames_2() const { return ___namedParamNames_2; }
	inline StringU5BU5D_t2956870243** get_address_of_namedParamNames_2() { return &___namedParamNames_2; }
	inline void set_namedParamNames_2(StringU5BU5D_t2956870243* value)
	{
		___namedParamNames_2 = value;
		Il2CppCodeGenWriteBarrier(&___namedParamNames_2, value);
	}

	inline static int32_t get_offset_of_namedParamValues_3() { return static_cast<int32_t>(offsetof(CustomAttributeInfo_t393748825, ___namedParamValues_3)); }
	inline ObjectU5BU5D_t11523773* get_namedParamValues_3() const { return ___namedParamValues_3; }
	inline ObjectU5BU5D_t11523773** get_address_of_namedParamValues_3() { return &___namedParamValues_3; }
	inline void set_namedParamValues_3(ObjectU5BU5D_t11523773* value)
	{
		___namedParamValues_3 = value;
		Il2CppCodeGenWriteBarrier(&___namedParamValues_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
