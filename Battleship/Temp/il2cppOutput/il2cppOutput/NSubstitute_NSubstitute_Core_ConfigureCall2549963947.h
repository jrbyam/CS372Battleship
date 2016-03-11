#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NSubstitute.Core.ICallResults
struct ICallResults_t3001098774;
// NSubstitute.Core.ICallActions
struct ICallActions_t741748509;
// NSubstitute.Core.IGetCallSpec
struct IGetCallSpec_t4222243597;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Core.ConfigureCall
struct  ConfigureCall_t2549963947  : public Il2CppObject
{
public:
	// NSubstitute.Core.ICallResults NSubstitute.Core.ConfigureCall::_configuredResults
	Il2CppObject * ____configuredResults_0;
	// NSubstitute.Core.ICallActions NSubstitute.Core.ConfigureCall::_callActions
	Il2CppObject * ____callActions_1;
	// NSubstitute.Core.IGetCallSpec NSubstitute.Core.ConfigureCall::_getCallSpec
	Il2CppObject * ____getCallSpec_2;

public:
	inline static int32_t get_offset_of__configuredResults_0() { return static_cast<int32_t>(offsetof(ConfigureCall_t2549963947, ____configuredResults_0)); }
	inline Il2CppObject * get__configuredResults_0() const { return ____configuredResults_0; }
	inline Il2CppObject ** get_address_of__configuredResults_0() { return &____configuredResults_0; }
	inline void set__configuredResults_0(Il2CppObject * value)
	{
		____configuredResults_0 = value;
		Il2CppCodeGenWriteBarrier(&____configuredResults_0, value);
	}

	inline static int32_t get_offset_of__callActions_1() { return static_cast<int32_t>(offsetof(ConfigureCall_t2549963947, ____callActions_1)); }
	inline Il2CppObject * get__callActions_1() const { return ____callActions_1; }
	inline Il2CppObject ** get_address_of__callActions_1() { return &____callActions_1; }
	inline void set__callActions_1(Il2CppObject * value)
	{
		____callActions_1 = value;
		Il2CppCodeGenWriteBarrier(&____callActions_1, value);
	}

	inline static int32_t get_offset_of__getCallSpec_2() { return static_cast<int32_t>(offsetof(ConfigureCall_t2549963947, ____getCallSpec_2)); }
	inline Il2CppObject * get__getCallSpec_2() const { return ____getCallSpec_2; }
	inline Il2CppObject ** get_address_of__getCallSpec_2() { return &____getCallSpec_2; }
	inline void set__getCallSpec_2(Il2CppObject * value)
	{
		____getCallSpec_2 = value;
		Il2CppCodeGenWriteBarrier(&____getCallSpec_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
