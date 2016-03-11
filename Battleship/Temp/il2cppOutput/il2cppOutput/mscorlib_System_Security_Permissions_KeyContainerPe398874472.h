#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Security_CodeAccessPermission1537136389.h"
#include "mscorlib_System_Security_Permissions_KeyContainerP1391209357.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermission
struct  KeyContainerPermission_t398874472  : public CodeAccessPermission_t1537136389
{
public:
	// System.Security.Permissions.KeyContainerPermissionFlags System.Security.Permissions.KeyContainerPermission::_flags
	int32_t ____flags_0;

public:
	inline static int32_t get_offset_of__flags_0() { return static_cast<int32_t>(offsetof(KeyContainerPermission_t398874472, ____flags_0)); }
	inline int32_t get__flags_0() const { return ____flags_0; }
	inline int32_t* get_address_of__flags_0() { return &____flags_0; }
	inline void set__flags_0(int32_t value)
	{
		____flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
