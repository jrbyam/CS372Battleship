#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NSubstitute.Core.Arguments.IDefaultChecker
struct IDefaultChecker_t3198392220;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Core.Arguments.SuppliedArgumentSpecificationsFactory
struct  SuppliedArgumentSpecificationsFactory_t2981119966  : public Il2CppObject
{
public:
	// NSubstitute.Core.Arguments.IDefaultChecker NSubstitute.Core.Arguments.SuppliedArgumentSpecificationsFactory::_defaultChecker
	Il2CppObject * ____defaultChecker_0;

public:
	inline static int32_t get_offset_of__defaultChecker_0() { return static_cast<int32_t>(offsetof(SuppliedArgumentSpecificationsFactory_t2981119966, ____defaultChecker_0)); }
	inline Il2CppObject * get__defaultChecker_0() const { return ____defaultChecker_0; }
	inline Il2CppObject ** get_address_of__defaultChecker_0() { return &____defaultChecker_0; }
	inline void set__defaultChecker_0(Il2CppObject * value)
	{
		____defaultChecker_0 = value;
		Il2CppCodeGenWriteBarrier(&____defaultChecker_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
