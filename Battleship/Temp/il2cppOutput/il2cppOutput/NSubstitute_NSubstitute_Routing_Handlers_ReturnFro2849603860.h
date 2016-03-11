#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NSubstitute.Core.ICallBaseExclusions
struct ICallBaseExclusions_t543257252;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Routing.Handlers.ReturnFromBaseIfRequired
struct  ReturnFromBaseIfRequired_t2849603860  : public Il2CppObject
{
public:
	// System.Boolean NSubstitute.Routing.Handlers.ReturnFromBaseIfRequired::_required
	bool ____required_0;
	// NSubstitute.Core.ICallBaseExclusions NSubstitute.Routing.Handlers.ReturnFromBaseIfRequired::_callBaseExclusions
	Il2CppObject * ____callBaseExclusions_1;

public:
	inline static int32_t get_offset_of__required_0() { return static_cast<int32_t>(offsetof(ReturnFromBaseIfRequired_t2849603860, ____required_0)); }
	inline bool get__required_0() const { return ____required_0; }
	inline bool* get_address_of__required_0() { return &____required_0; }
	inline void set__required_0(bool value)
	{
		____required_0 = value;
	}

	inline static int32_t get_offset_of__callBaseExclusions_1() { return static_cast<int32_t>(offsetof(ReturnFromBaseIfRequired_t2849603860, ____callBaseExclusions_1)); }
	inline Il2CppObject * get__callBaseExclusions_1() const { return ____callBaseExclusions_1; }
	inline Il2CppObject ** get_address_of__callBaseExclusions_1() { return &____callBaseExclusions_1; }
	inline void set__callBaseExclusions_1(Il2CppObject * value)
	{
		____callBaseExclusions_1 = value;
		Il2CppCodeGenWriteBarrier(&____callBaseExclusions_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
