#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IList`1<System.Reflection.MethodInfo>
struct IList_1_t1332746295;
// System.Type
struct Type_t;
// Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate
struct GetTargetExpressionDelegate_t2473372959;

#include "NSubstitute_Castle_DynamicProxy_Contributors_Compos285337589.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Contributors.ClassProxyWithTargetTargetContributor
struct  ClassProxyWithTargetTargetContributor_t1250549656  : public CompositeTypeContributor_t285337589
{
public:
	// System.Collections.Generic.IList`1<System.Reflection.MethodInfo> Castle.DynamicProxy.Contributors.ClassProxyWithTargetTargetContributor::methodsToSkip
	Il2CppObject* ___methodsToSkip_6;
	// System.Type Castle.DynamicProxy.Contributors.ClassProxyWithTargetTargetContributor::targetType
	Type_t * ___targetType_7;

public:
	inline static int32_t get_offset_of_methodsToSkip_6() { return static_cast<int32_t>(offsetof(ClassProxyWithTargetTargetContributor_t1250549656, ___methodsToSkip_6)); }
	inline Il2CppObject* get_methodsToSkip_6() const { return ___methodsToSkip_6; }
	inline Il2CppObject** get_address_of_methodsToSkip_6() { return &___methodsToSkip_6; }
	inline void set_methodsToSkip_6(Il2CppObject* value)
	{
		___methodsToSkip_6 = value;
		Il2CppCodeGenWriteBarrier(&___methodsToSkip_6, value);
	}

	inline static int32_t get_offset_of_targetType_7() { return static_cast<int32_t>(offsetof(ClassProxyWithTargetTargetContributor_t1250549656, ___targetType_7)); }
	inline Type_t * get_targetType_7() const { return ___targetType_7; }
	inline Type_t ** get_address_of_targetType_7() { return &___targetType_7; }
	inline void set_targetType_7(Type_t * value)
	{
		___targetType_7 = value;
		Il2CppCodeGenWriteBarrier(&___targetType_7, value);
	}
};

struct ClassProxyWithTargetTargetContributor_t1250549656_StaticFields
{
public:
	// Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate Castle.DynamicProxy.Contributors.ClassProxyWithTargetTargetContributor::CS$<>9__CachedAnonymousMethodDelegateb
	GetTargetExpressionDelegate_t2473372959 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegateb_8;
	// Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate Castle.DynamicProxy.Contributors.ClassProxyWithTargetTargetContributor::CS$<>9__CachedAnonymousMethodDelegated
	GetTargetExpressionDelegate_t2473372959 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegated_9;

public:
	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegateb_8() { return static_cast<int32_t>(offsetof(ClassProxyWithTargetTargetContributor_t1250549656_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegateb_8)); }
	inline GetTargetExpressionDelegate_t2473372959 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegateb_8() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegateb_8; }
	inline GetTargetExpressionDelegate_t2473372959 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegateb_8() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegateb_8; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegateb_8(GetTargetExpressionDelegate_t2473372959 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegateb_8 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegateb_8, value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegated_9() { return static_cast<int32_t>(offsetof(ClassProxyWithTargetTargetContributor_t1250549656_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegated_9)); }
	inline GetTargetExpressionDelegate_t2473372959 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegated_9() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegated_9; }
	inline GetTargetExpressionDelegate_t2473372959 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegated_9() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegated_9; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegated_9(GetTargetExpressionDelegate_t2473372959 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegated_9 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegated_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
