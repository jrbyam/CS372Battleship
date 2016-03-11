#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.ModuleScope
struct ModuleScope_t3833971791;

#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter2268871968.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.ClassEmitter
struct  ClassEmitter_t3355090660  : public AbstractTypeEmitter_t2268871968
{
public:
	// Castle.DynamicProxy.ModuleScope Castle.DynamicProxy.Generators.Emitters.ClassEmitter::moduleScope
	ModuleScope_t3833971791 * ___moduleScope_10;

public:
	inline static int32_t get_offset_of_moduleScope_10() { return static_cast<int32_t>(offsetof(ClassEmitter_t3355090660, ___moduleScope_10)); }
	inline ModuleScope_t3833971791 * get_moduleScope_10() const { return ___moduleScope_10; }
	inline ModuleScope_t3833971791 ** get_address_of_moduleScope_10() { return &___moduleScope_10; }
	inline void set_moduleScope_10(ModuleScope_t3833971791 * value)
	{
		___moduleScope_10 = value;
		Il2CppCodeGenWriteBarrier(&___moduleScope_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
