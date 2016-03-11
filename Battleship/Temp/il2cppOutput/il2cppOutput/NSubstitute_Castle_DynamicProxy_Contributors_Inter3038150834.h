#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate
struct GetTargetExpressionDelegate_t2473372959;

#include "NSubstitute_Castle_DynamicProxy_Contributors_Compos285337589.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Contributors.InterfaceProxyWithoutTargetContributor
struct  InterfaceProxyWithoutTargetContributor_t3038150834  : public CompositeTypeContributor_t285337589
{
public:
	// Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate Castle.DynamicProxy.Contributors.InterfaceProxyWithoutTargetContributor::getTargetExpression
	GetTargetExpressionDelegate_t2473372959 * ___getTargetExpression_6;
	// System.Boolean Castle.DynamicProxy.Contributors.InterfaceProxyWithoutTargetContributor::canChangeTarget
	bool ___canChangeTarget_7;

public:
	inline static int32_t get_offset_of_getTargetExpression_6() { return static_cast<int32_t>(offsetof(InterfaceProxyWithoutTargetContributor_t3038150834, ___getTargetExpression_6)); }
	inline GetTargetExpressionDelegate_t2473372959 * get_getTargetExpression_6() const { return ___getTargetExpression_6; }
	inline GetTargetExpressionDelegate_t2473372959 ** get_address_of_getTargetExpression_6() { return &___getTargetExpression_6; }
	inline void set_getTargetExpression_6(GetTargetExpressionDelegate_t2473372959 * value)
	{
		___getTargetExpression_6 = value;
		Il2CppCodeGenWriteBarrier(&___getTargetExpression_6, value);
	}

	inline static int32_t get_offset_of_canChangeTarget_7() { return static_cast<int32_t>(offsetof(InterfaceProxyWithoutTargetContributor_t3038150834, ___canChangeTarget_7)); }
	inline bool get_canChangeTarget_7() const { return ___canChangeTarget_7; }
	inline bool* get_address_of_canChangeTarget_7() { return &___canChangeTarget_7; }
	inline void set_canChangeTarget_7(bool value)
	{
		___canChangeTarget_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
