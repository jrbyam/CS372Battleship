#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<NSubstitute.Core.CallInfo>
struct Action_1_t4151135252;
// NSubstitute.Core.ICallInfoFactory
struct ICallInfoFactory_t3961505308;
// System.Collections.Generic.List`1<NSubstitute.Core.CallActions/CallAction>
struct List_1_t3847988045;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Core.CallActions
struct  CallActions_t4203611910  : public Il2CppObject
{
public:
	// NSubstitute.Core.ICallInfoFactory NSubstitute.Core.CallActions::_callInfoFactory
	Il2CppObject * ____callInfoFactory_1;
	// System.Collections.Generic.List`1<NSubstitute.Core.CallActions/CallAction> NSubstitute.Core.CallActions::_actions
	List_1_t3847988045 * ____actions_2;

public:
	inline static int32_t get_offset_of__callInfoFactory_1() { return static_cast<int32_t>(offsetof(CallActions_t4203611910, ____callInfoFactory_1)); }
	inline Il2CppObject * get__callInfoFactory_1() const { return ____callInfoFactory_1; }
	inline Il2CppObject ** get_address_of__callInfoFactory_1() { return &____callInfoFactory_1; }
	inline void set__callInfoFactory_1(Il2CppObject * value)
	{
		____callInfoFactory_1 = value;
		Il2CppCodeGenWriteBarrier(&____callInfoFactory_1, value);
	}

	inline static int32_t get_offset_of__actions_2() { return static_cast<int32_t>(offsetof(CallActions_t4203611910, ____actions_2)); }
	inline List_1_t3847988045 * get__actions_2() const { return ____actions_2; }
	inline List_1_t3847988045 ** get_address_of__actions_2() { return &____actions_2; }
	inline void set__actions_2(List_1_t3847988045 * value)
	{
		____actions_2 = value;
		Il2CppCodeGenWriteBarrier(&____actions_2, value);
	}
};

struct CallActions_t4203611910_StaticFields
{
public:
	// System.Action`1<NSubstitute.Core.CallInfo> NSubstitute.Core.CallActions::EmptyAction
	Action_1_t4151135252 * ___EmptyAction_0;
	// System.Action`1<NSubstitute.Core.CallInfo> NSubstitute.Core.CallActions::CS$<>9__CachedAnonymousMethodDelegate7
	Action_1_t4151135252 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate7_3;

public:
	inline static int32_t get_offset_of_EmptyAction_0() { return static_cast<int32_t>(offsetof(CallActions_t4203611910_StaticFields, ___EmptyAction_0)); }
	inline Action_1_t4151135252 * get_EmptyAction_0() const { return ___EmptyAction_0; }
	inline Action_1_t4151135252 ** get_address_of_EmptyAction_0() { return &___EmptyAction_0; }
	inline void set_EmptyAction_0(Action_1_t4151135252 * value)
	{
		___EmptyAction_0 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyAction_0, value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate7_3() { return static_cast<int32_t>(offsetof(CallActions_t4203611910_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate7_3)); }
	inline Action_1_t4151135252 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate7_3() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate7_3; }
	inline Action_1_t4151135252 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate7_3() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate7_3; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate7_3(Action_1_t4151135252 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate7_3 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate7_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
