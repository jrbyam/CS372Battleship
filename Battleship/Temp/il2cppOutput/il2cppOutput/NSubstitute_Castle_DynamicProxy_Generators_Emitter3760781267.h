#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference
struct LocalReference_t1252421124;

#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3383065301.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ByRefReference
struct  ByRefReference_t3760781267  : public TypeReference_t3383065301
{
public:
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference Castle.DynamicProxy.Generators.Emitters.SimpleAST.ByRefReference::localReference
	LocalReference_t1252421124 * ___localReference_2;

public:
	inline static int32_t get_offset_of_localReference_2() { return static_cast<int32_t>(offsetof(ByRefReference_t3760781267, ___localReference_2)); }
	inline LocalReference_t1252421124 * get_localReference_2() const { return ___localReference_2; }
	inline LocalReference_t1252421124 ** get_address_of_localReference_2() { return &___localReference_2; }
	inline void set_localReference_2(LocalReference_t1252421124 * value)
	{
		___localReference_2 = value;
		Il2CppCodeGenWriteBarrier(&___localReference_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
