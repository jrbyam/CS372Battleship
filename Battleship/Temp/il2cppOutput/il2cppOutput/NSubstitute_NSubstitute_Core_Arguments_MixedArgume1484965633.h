#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NSubstitute.Core.Arguments.IArgumentSpecificationFactory
struct IArgumentSpecificationFactory_t274220684;
// NSubstitute.Core.Arguments.ISuppliedArgumentSpecificationsFactory
struct ISuppliedArgumentSpecificationsFactory_t1916727605;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Core.Arguments.MixedArgumentSpecificationsFactory
struct  MixedArgumentSpecificationsFactory_t1484965633  : public Il2CppObject
{
public:
	// NSubstitute.Core.Arguments.IArgumentSpecificationFactory NSubstitute.Core.Arguments.MixedArgumentSpecificationsFactory::_argumentSpecificationFactory
	Il2CppObject * ____argumentSpecificationFactory_0;
	// NSubstitute.Core.Arguments.ISuppliedArgumentSpecificationsFactory NSubstitute.Core.Arguments.MixedArgumentSpecificationsFactory::_suppliedArgumentSpecificationsFactory
	Il2CppObject * ____suppliedArgumentSpecificationsFactory_1;

public:
	inline static int32_t get_offset_of__argumentSpecificationFactory_0() { return static_cast<int32_t>(offsetof(MixedArgumentSpecificationsFactory_t1484965633, ____argumentSpecificationFactory_0)); }
	inline Il2CppObject * get__argumentSpecificationFactory_0() const { return ____argumentSpecificationFactory_0; }
	inline Il2CppObject ** get_address_of__argumentSpecificationFactory_0() { return &____argumentSpecificationFactory_0; }
	inline void set__argumentSpecificationFactory_0(Il2CppObject * value)
	{
		____argumentSpecificationFactory_0 = value;
		Il2CppCodeGenWriteBarrier(&____argumentSpecificationFactory_0, value);
	}

	inline static int32_t get_offset_of__suppliedArgumentSpecificationsFactory_1() { return static_cast<int32_t>(offsetof(MixedArgumentSpecificationsFactory_t1484965633, ____suppliedArgumentSpecificationsFactory_1)); }
	inline Il2CppObject * get__suppliedArgumentSpecificationsFactory_1() const { return ____suppliedArgumentSpecificationsFactory_1; }
	inline Il2CppObject ** get_address_of__suppliedArgumentSpecificationsFactory_1() { return &____suppliedArgumentSpecificationsFactory_1; }
	inline void set__suppliedArgumentSpecificationsFactory_1(Il2CppObject * value)
	{
		____suppliedArgumentSpecificationsFactory_1 = value;
		Il2CppCodeGenWriteBarrier(&____suppliedArgumentSpecificationsFactory_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
