#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.ParameterInfo
struct ParameterInfo_t2610273829;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Core.ParameterInfoWrapper
struct  ParameterInfoWrapper_t158722851  : public Il2CppObject
{
public:
	// System.Reflection.ParameterInfo NSubstitute.Core.ParameterInfoWrapper::_parameterInfo
	ParameterInfo_t2610273829 * ____parameterInfo_0;

public:
	inline static int32_t get_offset_of__parameterInfo_0() { return static_cast<int32_t>(offsetof(ParameterInfoWrapper_t158722851, ____parameterInfo_0)); }
	inline ParameterInfo_t2610273829 * get__parameterInfo_0() const { return ____parameterInfo_0; }
	inline ParameterInfo_t2610273829 ** get_address_of__parameterInfo_0() { return &____parameterInfo_0; }
	inline void set__parameterInfo_0(ParameterInfo_t2610273829 * value)
	{
		____parameterInfo_0 = value;
		Il2CppCodeGenWriteBarrier(&____parameterInfo_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
