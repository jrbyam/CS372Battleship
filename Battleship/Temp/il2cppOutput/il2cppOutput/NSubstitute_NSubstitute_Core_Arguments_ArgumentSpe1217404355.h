#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NSubstitute.Core.Arguments.IParamsArgumentSpecificationFactory
struct IParamsArgumentSpecificationFactory_t3475201138;
// NSubstitute.Core.Arguments.INonParamsArgumentSpecificationFactory
struct INonParamsArgumentSpecificationFactory_t3515981613;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Core.Arguments.ArgumentSpecificationFactory
struct  ArgumentSpecificationFactory_t1217404355  : public Il2CppObject
{
public:
	// NSubstitute.Core.Arguments.IParamsArgumentSpecificationFactory NSubstitute.Core.Arguments.ArgumentSpecificationFactory::_paramsArgumentSpecificationFactory
	Il2CppObject * ____paramsArgumentSpecificationFactory_0;
	// NSubstitute.Core.Arguments.INonParamsArgumentSpecificationFactory NSubstitute.Core.Arguments.ArgumentSpecificationFactory::_nonParamsArgumentSpecificationFactory
	Il2CppObject * ____nonParamsArgumentSpecificationFactory_1;

public:
	inline static int32_t get_offset_of__paramsArgumentSpecificationFactory_0() { return static_cast<int32_t>(offsetof(ArgumentSpecificationFactory_t1217404355, ____paramsArgumentSpecificationFactory_0)); }
	inline Il2CppObject * get__paramsArgumentSpecificationFactory_0() const { return ____paramsArgumentSpecificationFactory_0; }
	inline Il2CppObject ** get_address_of__paramsArgumentSpecificationFactory_0() { return &____paramsArgumentSpecificationFactory_0; }
	inline void set__paramsArgumentSpecificationFactory_0(Il2CppObject * value)
	{
		____paramsArgumentSpecificationFactory_0 = value;
		Il2CppCodeGenWriteBarrier(&____paramsArgumentSpecificationFactory_0, value);
	}

	inline static int32_t get_offset_of__nonParamsArgumentSpecificationFactory_1() { return static_cast<int32_t>(offsetof(ArgumentSpecificationFactory_t1217404355, ____nonParamsArgumentSpecificationFactory_1)); }
	inline Il2CppObject * get__nonParamsArgumentSpecificationFactory_1() const { return ____nonParamsArgumentSpecificationFactory_1; }
	inline Il2CppObject ** get_address_of__nonParamsArgumentSpecificationFactory_1() { return &____nonParamsArgumentSpecificationFactory_1; }
	inline void set__nonParamsArgumentSpecificationFactory_1(Il2CppObject * value)
	{
		____nonParamsArgumentSpecificationFactory_1 = value;
		Il2CppCodeGenWriteBarrier(&____nonParamsArgumentSpecificationFactory_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
