#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Collections.Generic.IList`1<NSubstitute.Core.Arguments.IArgumentSpecification>
struct IList_1_t1286506966;
// NSubstitute.Core.ISubstituteState
struct ISubstituteState_t1664596725;
// NSubstitute.Core.ISubstitutionContext
struct ISubstitutionContext_t3786902352;
// NSubstitute.Core.IReceivedCalls
struct IReceivedCalls_t16017682;
// NSubstitute.Core.IConfigureCall
struct IConfigureCall_t3922690;
// NSubstitute.Routing.IRouteFactory
struct IRouteFactory_t2959192106;
// NSubstitute.Routing.IRoute
struct IRoute_t900752960;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Core.CallRouter
struct  CallRouter_t3364870606  : public Il2CppObject
{
public:
	// NSubstitute.Core.ISubstituteState NSubstitute.Core.CallRouter::_substituteState
	Il2CppObject * ____substituteState_2;
	// NSubstitute.Core.ISubstitutionContext NSubstitute.Core.CallRouter::_context
	Il2CppObject * ____context_3;
	// NSubstitute.Core.IReceivedCalls NSubstitute.Core.CallRouter::_receivedCalls
	Il2CppObject * ____receivedCalls_4;
	// NSubstitute.Core.IConfigureCall NSubstitute.Core.CallRouter::ConfigureCall
	Il2CppObject * ___ConfigureCall_5;
	// NSubstitute.Routing.IRouteFactory NSubstitute.Core.CallRouter::_routeFactory
	Il2CppObject * ____routeFactory_6;
	// NSubstitute.Routing.IRoute NSubstitute.Core.CallRouter::_currentRoute
	Il2CppObject * ____currentRoute_7;
	// System.Boolean NSubstitute.Core.CallRouter::_isSetToDefaultRoute
	bool ____isSetToDefaultRoute_8;

public:
	inline static int32_t get_offset_of__substituteState_2() { return static_cast<int32_t>(offsetof(CallRouter_t3364870606, ____substituteState_2)); }
	inline Il2CppObject * get__substituteState_2() const { return ____substituteState_2; }
	inline Il2CppObject ** get_address_of__substituteState_2() { return &____substituteState_2; }
	inline void set__substituteState_2(Il2CppObject * value)
	{
		____substituteState_2 = value;
		Il2CppCodeGenWriteBarrier(&____substituteState_2, value);
	}

	inline static int32_t get_offset_of__context_3() { return static_cast<int32_t>(offsetof(CallRouter_t3364870606, ____context_3)); }
	inline Il2CppObject * get__context_3() const { return ____context_3; }
	inline Il2CppObject ** get_address_of__context_3() { return &____context_3; }
	inline void set__context_3(Il2CppObject * value)
	{
		____context_3 = value;
		Il2CppCodeGenWriteBarrier(&____context_3, value);
	}

	inline static int32_t get_offset_of__receivedCalls_4() { return static_cast<int32_t>(offsetof(CallRouter_t3364870606, ____receivedCalls_4)); }
	inline Il2CppObject * get__receivedCalls_4() const { return ____receivedCalls_4; }
	inline Il2CppObject ** get_address_of__receivedCalls_4() { return &____receivedCalls_4; }
	inline void set__receivedCalls_4(Il2CppObject * value)
	{
		____receivedCalls_4 = value;
		Il2CppCodeGenWriteBarrier(&____receivedCalls_4, value);
	}

	inline static int32_t get_offset_of_ConfigureCall_5() { return static_cast<int32_t>(offsetof(CallRouter_t3364870606, ___ConfigureCall_5)); }
	inline Il2CppObject * get_ConfigureCall_5() const { return ___ConfigureCall_5; }
	inline Il2CppObject ** get_address_of_ConfigureCall_5() { return &___ConfigureCall_5; }
	inline void set_ConfigureCall_5(Il2CppObject * value)
	{
		___ConfigureCall_5 = value;
		Il2CppCodeGenWriteBarrier(&___ConfigureCall_5, value);
	}

	inline static int32_t get_offset_of__routeFactory_6() { return static_cast<int32_t>(offsetof(CallRouter_t3364870606, ____routeFactory_6)); }
	inline Il2CppObject * get__routeFactory_6() const { return ____routeFactory_6; }
	inline Il2CppObject ** get_address_of__routeFactory_6() { return &____routeFactory_6; }
	inline void set__routeFactory_6(Il2CppObject * value)
	{
		____routeFactory_6 = value;
		Il2CppCodeGenWriteBarrier(&____routeFactory_6, value);
	}

	inline static int32_t get_offset_of__currentRoute_7() { return static_cast<int32_t>(offsetof(CallRouter_t3364870606, ____currentRoute_7)); }
	inline Il2CppObject * get__currentRoute_7() const { return ____currentRoute_7; }
	inline Il2CppObject ** get_address_of__currentRoute_7() { return &____currentRoute_7; }
	inline void set__currentRoute_7(Il2CppObject * value)
	{
		____currentRoute_7 = value;
		Il2CppCodeGenWriteBarrier(&____currentRoute_7, value);
	}

	inline static int32_t get_offset_of__isSetToDefaultRoute_8() { return static_cast<int32_t>(offsetof(CallRouter_t3364870606, ____isSetToDefaultRoute_8)); }
	inline bool get__isSetToDefaultRoute_8() const { return ____isSetToDefaultRoute_8; }
	inline bool* get_address_of__isSetToDefaultRoute_8() { return &____isSetToDefaultRoute_8; }
	inline void set__isSetToDefaultRoute_8(bool value)
	{
		____isSetToDefaultRoute_8 = value;
	}
};

struct CallRouter_t3364870606_StaticFields
{
public:
	// System.Object[] NSubstitute.Core.CallRouter::EmptyArgs
	ObjectU5BU5D_t11523773* ___EmptyArgs_0;
	// System.Collections.Generic.IList`1<NSubstitute.Core.Arguments.IArgumentSpecification> NSubstitute.Core.CallRouter::EmptyArgSpecs
	Il2CppObject* ___EmptyArgSpecs_1;

public:
	inline static int32_t get_offset_of_EmptyArgs_0() { return static_cast<int32_t>(offsetof(CallRouter_t3364870606_StaticFields, ___EmptyArgs_0)); }
	inline ObjectU5BU5D_t11523773* get_EmptyArgs_0() const { return ___EmptyArgs_0; }
	inline ObjectU5BU5D_t11523773** get_address_of_EmptyArgs_0() { return &___EmptyArgs_0; }
	inline void set_EmptyArgs_0(ObjectU5BU5D_t11523773* value)
	{
		___EmptyArgs_0 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyArgs_0, value);
	}

	inline static int32_t get_offset_of_EmptyArgSpecs_1() { return static_cast<int32_t>(offsetof(CallRouter_t3364870606_StaticFields, ___EmptyArgSpecs_1)); }
	inline Il2CppObject* get_EmptyArgSpecs_1() const { return ___EmptyArgSpecs_1; }
	inline Il2CppObject** get_address_of_EmptyArgSpecs_1() { return &___EmptyArgSpecs_1; }
	inline void set_EmptyArgSpecs_1(Il2CppObject* value)
	{
		___EmptyArgSpecs_1 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyArgSpecs_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
