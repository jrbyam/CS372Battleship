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

// NSubstitute.Proxies.DelegateProxy.DelegateProxyFactory
struct DelegateProxyFactory_t2901449084;
// System.Object
struct Il2CppObject;
// NSubstitute.Core.ICallRouter
struct ICallRouter_t1036440279;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// NSubstitute.Core.ParameterInfoWrapper
struct ParameterInfoWrapper_t158722851;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2610273829;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t339595557;
// System.Linq.Expressions.Expression
struct Expression_t647304412;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_ParameterInfo2610273829.h"
#include "System_Core_System_Linq_Expressions_ParameterExpres339595557.h"

// System.Object NSubstitute.Proxies.DelegateProxy.DelegateProxyFactory::GenerateProxy(NSubstitute.Core.ICallRouter,System.Type,System.Type[],System.Object[])
extern "C"  Il2CppObject * DelegateProxyFactory_GenerateProxy_m3068924114 (DelegateProxyFactory_t2901449084 * __this, Il2CppObject * ___callRouter, Type_t * ___typeToProxy, TypeU5BU5D_t3431720054* ___additionalInterfaces, ObjectU5BU5D_t11523773* ___constructorArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object NSubstitute.Proxies.DelegateProxy.DelegateProxyFactory::DelegateProxy(System.Type,NSubstitute.Core.ICallRouter)
extern "C"  Il2CppObject * DelegateProxyFactory_DelegateProxy_m2582751359 (DelegateProxyFactory_t2901449084 * __this, Type_t * ___delegateType, Il2CppObject * ___callRouter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSubstitute.Proxies.DelegateProxy.DelegateProxyFactory::.ctor()
extern "C"  void DelegateProxyFactory__ctor_m700504807 (DelegateProxyFactory_t2901449084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NSubstitute.Core.ParameterInfoWrapper NSubstitute.Proxies.DelegateProxy.DelegateProxyFactory::<DelegateProxy>b__0(System.Reflection.ParameterInfo)
extern "C"  ParameterInfoWrapper_t158722851 * DelegateProxyFactory_U3CDelegateProxyU3Eb__0_m4086771209 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2610273829 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.ParameterExpression NSubstitute.Proxies.DelegateProxy.DelegateProxyFactory::<DelegateProxy>b__1(System.Reflection.ParameterInfo)
extern "C"  ParameterExpression_t339595557 * DelegateProxyFactory_U3CDelegateProxyU3Eb__1_m1451132046 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2610273829 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression NSubstitute.Proxies.DelegateProxy.DelegateProxyFactory::<DelegateProxy>b__2(System.Linq.Expressions.ParameterExpression)
extern "C"  Expression_t647304412 * DelegateProxyFactory_U3CDelegateProxyU3Eb__2_m3404259492 (Il2CppObject * __this /* static, unused */, ParameterExpression_t339595557 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
