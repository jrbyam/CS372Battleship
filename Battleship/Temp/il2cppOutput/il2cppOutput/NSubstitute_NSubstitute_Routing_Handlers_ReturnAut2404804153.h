#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IEnumerable`1<NSubstitute.Routing.AutoValues.IAutoValueProvider>
struct IEnumerable_1_t3905609379;
// NSubstitute.Core.IConfigureCall
struct IConfigureCall_t3922690;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Routing.Handlers.ReturnAutoValueForThisAndSubsequentCallsHandler
struct  ReturnAutoValueForThisAndSubsequentCallsHandler_t2404804153  : public Il2CppObject
{
public:
	// System.Collections.Generic.IEnumerable`1<NSubstitute.Routing.AutoValues.IAutoValueProvider> NSubstitute.Routing.Handlers.ReturnAutoValueForThisAndSubsequentCallsHandler::_autoValueProviders
	Il2CppObject* ____autoValueProviders_0;
	// NSubstitute.Core.IConfigureCall NSubstitute.Routing.Handlers.ReturnAutoValueForThisAndSubsequentCallsHandler::ConfigureCall
	Il2CppObject * ___ConfigureCall_1;

public:
	inline static int32_t get_offset_of__autoValueProviders_0() { return static_cast<int32_t>(offsetof(ReturnAutoValueForThisAndSubsequentCallsHandler_t2404804153, ____autoValueProviders_0)); }
	inline Il2CppObject* get__autoValueProviders_0() const { return ____autoValueProviders_0; }
	inline Il2CppObject** get_address_of__autoValueProviders_0() { return &____autoValueProviders_0; }
	inline void set__autoValueProviders_0(Il2CppObject* value)
	{
		____autoValueProviders_0 = value;
		Il2CppCodeGenWriteBarrier(&____autoValueProviders_0, value);
	}

	inline static int32_t get_offset_of_ConfigureCall_1() { return static_cast<int32_t>(offsetof(ReturnAutoValueForThisAndSubsequentCallsHandler_t2404804153, ___ConfigureCall_1)); }
	inline Il2CppObject * get_ConfigureCall_1() const { return ___ConfigureCall_1; }
	inline Il2CppObject ** get_address_of_ConfigureCall_1() { return &___ConfigureCall_1; }
	inline void set_ConfigureCall_1(Il2CppObject * value)
	{
		___ConfigureCall_1 = value;
		Il2CppCodeGenWriteBarrier(&___ConfigureCall_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
