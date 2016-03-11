#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// NSubstitute.Proxies.DelegateProxy.DelegateCall
struct DelegateCall_t2653561374;
// NSubstitute.Core.ICallRouter
struct ICallRouter_t1036440279;
// System.Type
struct Type_t;
// NSubstitute.Core.IParameterInfo[]
struct IParameterInfoU5BU5D_t662789496;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void NSubstitute.Proxies.DelegateProxy.DelegateCall::.ctor(NSubstitute.Core.ICallRouter,System.Type,System.Type,NSubstitute.Core.IParameterInfo[])
extern "C"  void DelegateCall__ctor_m670441719 (DelegateCall_t2653561374 * __this, Il2CppObject * ___callRouter, Type_t * ___delegateType, Type_t * ___returnType, IParameterInfoU5BU5D_t662789496* ___parameterInfos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo NSubstitute.Proxies.DelegateProxy.DelegateCall::GetMethodToInvoke()
extern "C"  MethodInfo_t * DelegateCall_GetMethodToInvoke_m1055075023 (DelegateCall_t2653561374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo NSubstitute.Proxies.DelegateProxy.DelegateCall::get_MethodToInvoke()
extern "C"  MethodInfo_t * DelegateCall_get_MethodToInvoke_m666778778 (DelegateCall_t2653561374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NSubstitute.Proxies.DelegateProxy.DelegateCall::ReturnsVoidType()
extern "C"  bool DelegateCall_ReturnsVoidType_m1783781068 (DelegateCall_t2653561374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NSubstitute.Proxies.DelegateProxy.DelegateCall::ToString()
extern "C"  String_t* DelegateCall_ToString_m1401623150 (DelegateCall_t2653561374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NSubstitute.Proxies.DelegateProxy.DelegateCall::<ToString>b__0(System.Char)
extern "C"  bool DelegateCall_U3CToStringU3Eb__0_m938671602 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NSubstitute.Proxies.DelegateProxy.DelegateCall::<ToString>b__1(System.Type)
extern "C"  String_t* DelegateCall_U3CToStringU3Eb__1_m617498642 (Il2CppObject * __this /* static, unused */, Type_t * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSubstitute.Proxies.DelegateProxy.DelegateCall::.cctor()
extern "C"  void DelegateCall__cctor_m42499784 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
