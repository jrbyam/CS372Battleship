#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NSubstitute.Core.IConfigureCall
struct IConfigureCall_t3922690;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Routing.Handlers.ReturnFromAndConfigureDynamicCall
struct  ReturnFromAndConfigureDynamicCall_t2081412673  : public Il2CppObject
{
public:
	// NSubstitute.Core.IConfigureCall NSubstitute.Routing.Handlers.ReturnFromAndConfigureDynamicCall::_configureCall
	Il2CppObject * ____configureCall_0;

public:
	inline static int32_t get_offset_of__configureCall_0() { return static_cast<int32_t>(offsetof(ReturnFromAndConfigureDynamicCall_t2081412673, ____configureCall_0)); }
	inline Il2CppObject * get__configureCall_0() const { return ____configureCall_0; }
	inline Il2CppObject ** get_address_of__configureCall_0() { return &____configureCall_0; }
	inline void set__configureCall_0(Il2CppObject * value)
	{
		____configureCall_0 = value;
		Il2CppCodeGenWriteBarrier(&____configureCall_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
