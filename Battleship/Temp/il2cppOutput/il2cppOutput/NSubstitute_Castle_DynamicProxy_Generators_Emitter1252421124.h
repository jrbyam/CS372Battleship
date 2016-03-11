#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Emit.LocalBuilder
struct LocalBuilder_t625143165;

#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3383065301.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference
struct  LocalReference_t1252421124  : public TypeReference_t3383065301
{
public:
	// System.Reflection.Emit.LocalBuilder Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference::localbuilder
	LocalBuilder_t625143165 * ___localbuilder_2;

public:
	inline static int32_t get_offset_of_localbuilder_2() { return static_cast<int32_t>(offsetof(LocalReference_t1252421124, ___localbuilder_2)); }
	inline LocalBuilder_t625143165 * get_localbuilder_2() const { return ___localbuilder_2; }
	inline LocalBuilder_t625143165 ** get_address_of_localbuilder_2() { return &___localbuilder_2; }
	inline void set_localbuilder_2(LocalBuilder_t625143165 * value)
	{
		___localbuilder_2 = value;
		Il2CppCodeGenWriteBarrier(&___localbuilder_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
