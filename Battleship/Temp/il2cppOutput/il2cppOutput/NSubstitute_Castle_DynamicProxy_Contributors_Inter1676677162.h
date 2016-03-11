#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.Contributors.GetTargetReferenceDelegate
struct GetTargetReferenceDelegate_t3954391140;

#include "NSubstitute_Castle_DynamicProxy_Contributors_Inter3038150834.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Contributors.InterfaceProxyWithOptionalTargetContributor
struct  InterfaceProxyWithOptionalTargetContributor_t1676677162  : public InterfaceProxyWithoutTargetContributor_t3038150834
{
public:
	// Castle.DynamicProxy.Contributors.GetTargetReferenceDelegate Castle.DynamicProxy.Contributors.InterfaceProxyWithOptionalTargetContributor::getTargetReference
	GetTargetReferenceDelegate_t3954391140 * ___getTargetReference_8;

public:
	inline static int32_t get_offset_of_getTargetReference_8() { return static_cast<int32_t>(offsetof(InterfaceProxyWithOptionalTargetContributor_t1676677162, ___getTargetReference_8)); }
	inline GetTargetReferenceDelegate_t3954391140 * get_getTargetReference_8() const { return ___getTargetReference_8; }
	inline GetTargetReferenceDelegate_t3954391140 ** get_address_of_getTargetReference_8() { return &___getTargetReference_8; }
	inline void set_getTargetReference_8(GetTargetReferenceDelegate_t3954391140 * value)
	{
		___getTargetReference_8 = value;
		Il2CppCodeGenWriteBarrier(&___getTargetReference_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
