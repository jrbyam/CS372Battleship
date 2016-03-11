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

#include "NSubstitute_Castle_DynamicProxy_Contributors_Compos285337589.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Contributors.ClassProxyTargetContributor
struct  ClassProxyTargetContributor_t3223781711  : public CompositeTypeContributor_t285337589
{
public:
	// System.Collections.Generic.IList`1<System.Reflection.MethodInfo> Castle.DynamicProxy.Contributors.ClassProxyTargetContributor::methodsToSkip
	Il2CppObject* ___methodsToSkip_6;
	// System.Type Castle.DynamicProxy.Contributors.ClassProxyTargetContributor::targetType
	Type_t * ___targetType_7;

public:
	inline static int32_t get_offset_of_methodsToSkip_6() { return static_cast<int32_t>(offsetof(ClassProxyTargetContributor_t3223781711, ___methodsToSkip_6)); }
	inline Il2CppObject* get_methodsToSkip_6() const { return ___methodsToSkip_6; }
	inline Il2CppObject** get_address_of_methodsToSkip_6() { return &___methodsToSkip_6; }
	inline void set_methodsToSkip_6(Il2CppObject* value)
	{
		___methodsToSkip_6 = value;
		Il2CppCodeGenWriteBarrier(&___methodsToSkip_6, value);
	}

	inline static int32_t get_offset_of_targetType_7() { return static_cast<int32_t>(offsetof(ClassProxyTargetContributor_t3223781711, ___targetType_7)); }
	inline Type_t * get_targetType_7() const { return ___targetType_7; }
	inline Type_t ** get_address_of_targetType_7() { return &___targetType_7; }
	inline void set_targetType_7(Type_t * value)
	{
		___targetType_7 = value;
		Il2CppCodeGenWriteBarrier(&___targetType_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
