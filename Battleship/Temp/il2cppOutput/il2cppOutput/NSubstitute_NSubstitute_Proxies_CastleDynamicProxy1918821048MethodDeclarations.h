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

// NSubstitute.Proxies.CastleDynamicProxy.CastleDynamicProxyFactory
struct CastleDynamicProxyFactory_t1918821048;
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
// Castle.DynamicProxy.IInterceptor
struct IInterceptor_t3481610051;
// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"

// System.Void NSubstitute.Proxies.CastleDynamicProxy.CastleDynamicProxyFactory::.ctor()
extern "C"  void CastleDynamicProxyFactory__ctor_m3662564689 (CastleDynamicProxyFactory_t1918821048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object NSubstitute.Proxies.CastleDynamicProxy.CastleDynamicProxyFactory::GenerateProxy(NSubstitute.Core.ICallRouter,System.Type,System.Type[],System.Object[])
extern "C"  Il2CppObject * CastleDynamicProxyFactory_GenerateProxy_m2886420476 (CastleDynamicProxyFactory_t1918821048 * __this, Il2CppObject * ___callRouter, Type_t * ___typeToProxy, TypeU5BU5D_t3431720054* ___additionalInterfaces, ObjectU5BU5D_t11523773* ___constructorArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object NSubstitute.Proxies.CastleDynamicProxy.CastleDynamicProxyFactory::CreateProxyUsingCastleProxyGenerator(System.Type,System.Type[],System.Object[],Castle.DynamicProxy.IInterceptor,Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  Il2CppObject * CastleDynamicProxyFactory_CreateProxyUsingCastleProxyGenerator_m1248389123 (CastleDynamicProxyFactory_t1918821048 * __this, Type_t * ___typeToProxy, TypeU5BU5D_t3431720054* ___additionalInterfaces, ObjectU5BU5D_t11523773* ___constructorArguments, Il2CppObject * ___interceptor, ProxyGenerationOptions_t351299295 * ___proxyGenerationOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.ProxyGenerationOptions NSubstitute.Proxies.CastleDynamicProxy.CastleDynamicProxyFactory::GetOptionsToMixinCallRouter(NSubstitute.Core.ICallRouter)
extern "C"  ProxyGenerationOptions_t351299295 * CastleDynamicProxyFactory_GetOptionsToMixinCallRouter_m1637949341 (CastleDynamicProxyFactory_t1918821048 * __this, Il2CppObject * ___callRouter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSubstitute.Proxies.CastleDynamicProxy.CastleDynamicProxyFactory::VerifyNoConstructorArgumentsGivenForInterface(System.Object[])
extern "C"  void CastleDynamicProxyFactory_VerifyNoConstructorArgumentsGivenForInterface_m2787680460 (CastleDynamicProxyFactory_t1918821048 * __this, ObjectU5BU5D_t11523773* ___constructorArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSubstitute.Proxies.CastleDynamicProxy.CastleDynamicProxyFactory::VerifyClassHasNotBeenPassedAsAnAdditionalInterface(System.Type[])
extern "C"  void CastleDynamicProxyFactory_VerifyClassHasNotBeenPassedAsAnAdditionalInterface_m4029231205 (CastleDynamicProxyFactory_t1918821048 * __this, TypeU5BU5D_t3431720054* ___additionalInterfaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSubstitute.Proxies.CastleDynamicProxy.CastleDynamicProxyFactory::ConfigureDynamicProxyToAvoidReplicatingProblematicAttributes()
extern "C"  void CastleDynamicProxyFactory_ConfigureDynamicProxyToAvoidReplicatingProblematicAttributes_m1717799957 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NSubstitute.Proxies.CastleDynamicProxy.CastleDynamicProxyFactory::<VerifyClassHasNotBeenPassedAsAnAdditionalInterface>b__0(System.Type)
extern "C"  bool CastleDynamicProxyFactory_U3CVerifyClassHasNotBeenPassedAsAnAdditionalInterfaceU3Eb__0_m1329222989 (Il2CppObject * __this /* static, unused */, Type_t * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
