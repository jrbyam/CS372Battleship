#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// Castle.DynamicProxy.Contributors.GetTargetReferenceDelegate
struct GetTargetReferenceDelegate_t3954391140;
// Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate
struct GetTargetExpressionDelegate_t2473372959;

#include "NSubstitute_Castle_DynamicProxy_Contributors_Compos285337589.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Contributors.InterfaceProxyTargetContributor
struct  InterfaceProxyTargetContributor_t1734352464  : public CompositeTypeContributor_t285337589
{
public:
	// System.Boolean Castle.DynamicProxy.Contributors.InterfaceProxyTargetContributor::canChangeTarget
	bool ___canChangeTarget_6;
	// System.Type Castle.DynamicProxy.Contributors.InterfaceProxyTargetContributor::proxyTargetType
	Type_t * ___proxyTargetType_7;

public:
	inline static int32_t get_offset_of_canChangeTarget_6() { return static_cast<int32_t>(offsetof(InterfaceProxyTargetContributor_t1734352464, ___canChangeTarget_6)); }
	inline bool get_canChangeTarget_6() const { return ___canChangeTarget_6; }
	inline bool* get_address_of_canChangeTarget_6() { return &___canChangeTarget_6; }
	inline void set_canChangeTarget_6(bool value)
	{
		___canChangeTarget_6 = value;
	}

	inline static int32_t get_offset_of_proxyTargetType_7() { return static_cast<int32_t>(offsetof(InterfaceProxyTargetContributor_t1734352464, ___proxyTargetType_7)); }
	inline Type_t * get_proxyTargetType_7() const { return ___proxyTargetType_7; }
	inline Type_t ** get_address_of_proxyTargetType_7() { return &___proxyTargetType_7; }
	inline void set_proxyTargetType_7(Type_t * value)
	{
		___proxyTargetType_7 = value;
		Il2CppCodeGenWriteBarrier(&___proxyTargetType_7, value);
	}
};

struct InterfaceProxyTargetContributor_t1734352464_StaticFields
{
public:
	// Castle.DynamicProxy.Contributors.GetTargetReferenceDelegate Castle.DynamicProxy.Contributors.InterfaceProxyTargetContributor::CS$<>9__CachedAnonymousMethodDelegate9
	GetTargetReferenceDelegate_t3954391140 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate9_8;
	// Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate Castle.DynamicProxy.Contributors.InterfaceProxyTargetContributor::CS$<>9__CachedAnonymousMethodDelegatea
	GetTargetExpressionDelegate_t2473372959 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegatea_9;

public:
	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate9_8() { return static_cast<int32_t>(offsetof(InterfaceProxyTargetContributor_t1734352464_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate9_8)); }
	inline GetTargetReferenceDelegate_t3954391140 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate9_8() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate9_8; }
	inline GetTargetReferenceDelegate_t3954391140 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate9_8() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate9_8; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate9_8(GetTargetReferenceDelegate_t3954391140 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate9_8 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate9_8, value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegatea_9() { return static_cast<int32_t>(offsetof(InterfaceProxyTargetContributor_t1734352464_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegatea_9)); }
	inline GetTargetExpressionDelegate_t2473372959 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegatea_9() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegatea_9; }
	inline GetTargetExpressionDelegate_t2473372959 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegatea_9() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegatea_9; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegatea_9(GetTargetExpressionDelegate_t2473372959 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegatea_9 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegatea_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
