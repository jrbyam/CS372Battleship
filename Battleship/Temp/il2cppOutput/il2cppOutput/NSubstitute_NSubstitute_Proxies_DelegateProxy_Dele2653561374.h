#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.MethodInfo
struct MethodInfo_t;
// NSubstitute.Core.ICallRouter
struct ICallRouter_t1036440279;
// System.Type
struct Type_t;
// NSubstitute.Core.IParameterInfo[]
struct IParameterInfoU5BU5D_t662789496;
// System.Func`2<System.Char,System.Boolean>
struct Func_2_t620049934;
// System.Func`2<System.Type,System.String>
struct Func_2_t1392394819;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Proxies.DelegateProxy.DelegateCall
struct  DelegateCall_t2653561374  : public Il2CppObject
{
public:
	// System.Reflection.MethodInfo NSubstitute.Proxies.DelegateProxy.DelegateCall::_methodToInvoke
	MethodInfo_t * ____methodToInvoke_2;
	// NSubstitute.Core.ICallRouter NSubstitute.Proxies.DelegateProxy.DelegateCall::_callRouter
	Il2CppObject * ____callRouter_3;
	// System.Type NSubstitute.Proxies.DelegateProxy.DelegateCall::_delegateType
	Type_t * ____delegateType_4;
	// System.Type NSubstitute.Proxies.DelegateProxy.DelegateCall::_returnType
	Type_t * ____returnType_5;
	// NSubstitute.Core.IParameterInfo[] NSubstitute.Proxies.DelegateProxy.DelegateCall::_parameterInfos
	IParameterInfoU5BU5D_t662789496* ____parameterInfos_6;

public:
	inline static int32_t get_offset_of__methodToInvoke_2() { return static_cast<int32_t>(offsetof(DelegateCall_t2653561374, ____methodToInvoke_2)); }
	inline MethodInfo_t * get__methodToInvoke_2() const { return ____methodToInvoke_2; }
	inline MethodInfo_t ** get_address_of__methodToInvoke_2() { return &____methodToInvoke_2; }
	inline void set__methodToInvoke_2(MethodInfo_t * value)
	{
		____methodToInvoke_2 = value;
		Il2CppCodeGenWriteBarrier(&____methodToInvoke_2, value);
	}

	inline static int32_t get_offset_of__callRouter_3() { return static_cast<int32_t>(offsetof(DelegateCall_t2653561374, ____callRouter_3)); }
	inline Il2CppObject * get__callRouter_3() const { return ____callRouter_3; }
	inline Il2CppObject ** get_address_of__callRouter_3() { return &____callRouter_3; }
	inline void set__callRouter_3(Il2CppObject * value)
	{
		____callRouter_3 = value;
		Il2CppCodeGenWriteBarrier(&____callRouter_3, value);
	}

	inline static int32_t get_offset_of__delegateType_4() { return static_cast<int32_t>(offsetof(DelegateCall_t2653561374, ____delegateType_4)); }
	inline Type_t * get__delegateType_4() const { return ____delegateType_4; }
	inline Type_t ** get_address_of__delegateType_4() { return &____delegateType_4; }
	inline void set__delegateType_4(Type_t * value)
	{
		____delegateType_4 = value;
		Il2CppCodeGenWriteBarrier(&____delegateType_4, value);
	}

	inline static int32_t get_offset_of__returnType_5() { return static_cast<int32_t>(offsetof(DelegateCall_t2653561374, ____returnType_5)); }
	inline Type_t * get__returnType_5() const { return ____returnType_5; }
	inline Type_t ** get_address_of__returnType_5() { return &____returnType_5; }
	inline void set__returnType_5(Type_t * value)
	{
		____returnType_5 = value;
		Il2CppCodeGenWriteBarrier(&____returnType_5, value);
	}

	inline static int32_t get_offset_of__parameterInfos_6() { return static_cast<int32_t>(offsetof(DelegateCall_t2653561374, ____parameterInfos_6)); }
	inline IParameterInfoU5BU5D_t662789496* get__parameterInfos_6() const { return ____parameterInfos_6; }
	inline IParameterInfoU5BU5D_t662789496** get_address_of__parameterInfos_6() { return &____parameterInfos_6; }
	inline void set__parameterInfos_6(IParameterInfoU5BU5D_t662789496* value)
	{
		____parameterInfos_6 = value;
		Il2CppCodeGenWriteBarrier(&____parameterInfos_6, value);
	}
};

struct DelegateCall_t2653561374_StaticFields
{
public:
	// System.Reflection.MethodInfo NSubstitute.Proxies.DelegateProxy.DelegateCall::InvokeMethodWithObjectOrVoidReturnType
	MethodInfo_t * ___InvokeMethodWithObjectOrVoidReturnType_0;
	// System.Reflection.MethodInfo NSubstitute.Proxies.DelegateProxy.DelegateCall::InvokeMethodWithGenericReturnType
	MethodInfo_t * ___InvokeMethodWithGenericReturnType_1;
	// System.Func`2<System.Char,System.Boolean> NSubstitute.Proxies.DelegateProxy.DelegateCall::CS$<>9__CachedAnonymousMethodDelegate2
	Func_2_t620049934 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_7;
	// System.Func`2<System.Type,System.String> NSubstitute.Proxies.DelegateProxy.DelegateCall::CS$<>9__CachedAnonymousMethodDelegate3
	Func_2_t1392394819 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_8;

public:
	inline static int32_t get_offset_of_InvokeMethodWithObjectOrVoidReturnType_0() { return static_cast<int32_t>(offsetof(DelegateCall_t2653561374_StaticFields, ___InvokeMethodWithObjectOrVoidReturnType_0)); }
	inline MethodInfo_t * get_InvokeMethodWithObjectOrVoidReturnType_0() const { return ___InvokeMethodWithObjectOrVoidReturnType_0; }
	inline MethodInfo_t ** get_address_of_InvokeMethodWithObjectOrVoidReturnType_0() { return &___InvokeMethodWithObjectOrVoidReturnType_0; }
	inline void set_InvokeMethodWithObjectOrVoidReturnType_0(MethodInfo_t * value)
	{
		___InvokeMethodWithObjectOrVoidReturnType_0 = value;
		Il2CppCodeGenWriteBarrier(&___InvokeMethodWithObjectOrVoidReturnType_0, value);
	}

	inline static int32_t get_offset_of_InvokeMethodWithGenericReturnType_1() { return static_cast<int32_t>(offsetof(DelegateCall_t2653561374_StaticFields, ___InvokeMethodWithGenericReturnType_1)); }
	inline MethodInfo_t * get_InvokeMethodWithGenericReturnType_1() const { return ___InvokeMethodWithGenericReturnType_1; }
	inline MethodInfo_t ** get_address_of_InvokeMethodWithGenericReturnType_1() { return &___InvokeMethodWithGenericReturnType_1; }
	inline void set_InvokeMethodWithGenericReturnType_1(MethodInfo_t * value)
	{
		___InvokeMethodWithGenericReturnType_1 = value;
		Il2CppCodeGenWriteBarrier(&___InvokeMethodWithGenericReturnType_1, value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_7() { return static_cast<int32_t>(offsetof(DelegateCall_t2653561374_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_7)); }
	inline Func_2_t620049934 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_7() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_7; }
	inline Func_2_t620049934 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_7() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_7; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_7(Func_2_t620049934 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_7 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_7, value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_8() { return static_cast<int32_t>(offsetof(DelegateCall_t2653561374_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_8)); }
	inline Func_2_t1392394819 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_8() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_8; }
	inline Func_2_t1392394819 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_8() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_8; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_8(Func_2_t1392394819 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_8 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
