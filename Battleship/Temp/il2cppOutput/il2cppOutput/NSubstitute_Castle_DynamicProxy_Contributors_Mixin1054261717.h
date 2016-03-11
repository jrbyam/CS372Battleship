#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IList`1<System.Type>
struct IList_1_t650754953;
// System.Collections.Generic.IDictionary`2<System.Type,Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference>
struct IDictionary_2_t4283114835;
// Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate
struct GetTargetExpressionDelegate_t2473372959;

#include "NSubstitute_Castle_DynamicProxy_Contributors_Compos285337589.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Contributors.MixinContributor
struct  MixinContributor_t1054261717  : public CompositeTypeContributor_t285337589
{
public:
	// System.Boolean Castle.DynamicProxy.Contributors.MixinContributor::canChangeTarget
	bool ___canChangeTarget_6;
	// System.Collections.Generic.IList`1<System.Type> Castle.DynamicProxy.Contributors.MixinContributor::empty
	Il2CppObject* ___empty_7;
	// System.Collections.Generic.IDictionary`2<System.Type,Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference> Castle.DynamicProxy.Contributors.MixinContributor::fields
	Il2CppObject* ___fields_8;
	// Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate Castle.DynamicProxy.Contributors.MixinContributor::getTargetExpression
	GetTargetExpressionDelegate_t2473372959 * ___getTargetExpression_9;

public:
	inline static int32_t get_offset_of_canChangeTarget_6() { return static_cast<int32_t>(offsetof(MixinContributor_t1054261717, ___canChangeTarget_6)); }
	inline bool get_canChangeTarget_6() const { return ___canChangeTarget_6; }
	inline bool* get_address_of_canChangeTarget_6() { return &___canChangeTarget_6; }
	inline void set_canChangeTarget_6(bool value)
	{
		___canChangeTarget_6 = value;
	}

	inline static int32_t get_offset_of_empty_7() { return static_cast<int32_t>(offsetof(MixinContributor_t1054261717, ___empty_7)); }
	inline Il2CppObject* get_empty_7() const { return ___empty_7; }
	inline Il2CppObject** get_address_of_empty_7() { return &___empty_7; }
	inline void set_empty_7(Il2CppObject* value)
	{
		___empty_7 = value;
		Il2CppCodeGenWriteBarrier(&___empty_7, value);
	}

	inline static int32_t get_offset_of_fields_8() { return static_cast<int32_t>(offsetof(MixinContributor_t1054261717, ___fields_8)); }
	inline Il2CppObject* get_fields_8() const { return ___fields_8; }
	inline Il2CppObject** get_address_of_fields_8() { return &___fields_8; }
	inline void set_fields_8(Il2CppObject* value)
	{
		___fields_8 = value;
		Il2CppCodeGenWriteBarrier(&___fields_8, value);
	}

	inline static int32_t get_offset_of_getTargetExpression_9() { return static_cast<int32_t>(offsetof(MixinContributor_t1054261717, ___getTargetExpression_9)); }
	inline GetTargetExpressionDelegate_t2473372959 * get_getTargetExpression_9() const { return ___getTargetExpression_9; }
	inline GetTargetExpressionDelegate_t2473372959 ** get_address_of_getTargetExpression_9() { return &___getTargetExpression_9; }
	inline void set_getTargetExpression_9(GetTargetExpressionDelegate_t2473372959 * value)
	{
		___getTargetExpression_9 = value;
		Il2CppCodeGenWriteBarrier(&___getTargetExpression_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
