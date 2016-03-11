#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NSubstitute.Core.Arguments.IArgumentSpecificationsFactory
struct IArgumentSpecificationsFactory_t802005331;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Core.CallSpecificationFactory
struct  CallSpecificationFactory_t3220546700  : public Il2CppObject
{
public:
	// NSubstitute.Core.Arguments.IArgumentSpecificationsFactory NSubstitute.Core.CallSpecificationFactory::_argumentSpecificationsFactory
	Il2CppObject * ____argumentSpecificationsFactory_0;

public:
	inline static int32_t get_offset_of__argumentSpecificationsFactory_0() { return static_cast<int32_t>(offsetof(CallSpecificationFactory_t3220546700, ____argumentSpecificationsFactory_0)); }
	inline Il2CppObject * get__argumentSpecificationsFactory_0() const { return ____argumentSpecificationsFactory_0; }
	inline Il2CppObject ** get_address_of__argumentSpecificationsFactory_0() { return &____argumentSpecificationsFactory_0; }
	inline void set__argumentSpecificationsFactory_0(Il2CppObject * value)
	{
		____argumentSpecificationsFactory_0 = value;
		Il2CppCodeGenWriteBarrier(&____argumentSpecificationsFactory_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
