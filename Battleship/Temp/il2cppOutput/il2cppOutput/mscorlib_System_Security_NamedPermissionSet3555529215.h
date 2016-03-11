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

#include "mscorlib_System_Security_PermissionSet2781735032.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.NamedPermissionSet
struct  NamedPermissionSet_t3555529215  : public PermissionSet_t2781735032
{
public:
	// System.String System.Security.NamedPermissionSet::name
	String_t* ___name_2;
	// System.String System.Security.NamedPermissionSet::description
	String_t* ___description_3;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(NamedPermissionSet_t3555529215, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_description_3() { return static_cast<int32_t>(offsetof(NamedPermissionSet_t3555529215, ___description_3)); }
	inline String_t* get_description_3() const { return ___description_3; }
	inline String_t** get_address_of_description_3() { return &___description_3; }
	inline void set_description_3(String_t* value)
	{
		___description_3 = value;
		Il2CppCodeGenWriteBarrier(&___description_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
