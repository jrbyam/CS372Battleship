#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct  Reference_t1588091119  : public Il2CppObject
{
public:
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference::owner
	Reference_t1588091119 * ___owner_0;

public:
	inline static int32_t get_offset_of_owner_0() { return static_cast<int32_t>(offsetof(Reference_t1588091119, ___owner_0)); }
	inline Reference_t1588091119 * get_owner_0() const { return ___owner_0; }
	inline Reference_t1588091119 ** get_address_of_owner_0() { return &___owner_0; }
	inline void set_owner_0(Reference_t1588091119 * value)
	{
		___owner_0 = value;
		Il2CppCodeGenWriteBarrier(&___owner_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
