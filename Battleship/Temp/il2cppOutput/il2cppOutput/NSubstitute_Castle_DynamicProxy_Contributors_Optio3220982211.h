﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.Contributors.GetTargetReferenceDelegate
struct GetTargetReferenceDelegate_t3954391140;

#include "NSubstitute_Castle_DynamicProxy_Generators_MethodG3295115653.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Contributors.OptionallyForwardingMethodGenerator
struct  OptionallyForwardingMethodGenerator_t3220982211  : public MethodGenerator_t3295115653
{
public:
	// Castle.DynamicProxy.Contributors.GetTargetReferenceDelegate Castle.DynamicProxy.Contributors.OptionallyForwardingMethodGenerator::getTargetReference
	GetTargetReferenceDelegate_t3954391140 * ___getTargetReference_2;

public:
	inline static int32_t get_offset_of_getTargetReference_2() { return static_cast<int32_t>(offsetof(OptionallyForwardingMethodGenerator_t3220982211, ___getTargetReference_2)); }
	inline GetTargetReferenceDelegate_t3954391140 * get_getTargetReference_2() const { return ___getTargetReference_2; }
	inline GetTargetReferenceDelegate_t3954391140 ** get_address_of_getTargetReference_2() { return &___getTargetReference_2; }
	inline void set_getTargetReference_2(GetTargetReferenceDelegate_t3954391140 * value)
	{
		___getTargetReference_2 = value;
		Il2CppCodeGenWriteBarrier(&___getTargetReference_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
