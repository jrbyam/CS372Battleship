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

// Castle.DynamicProxy.Contributors.InterfaceProxyWithOptionalTargetContributor
struct InterfaceProxyWithOptionalTargetContributor_t1676677162;
// Castle.DynamicProxy.Generators.INamingScope
struct INamingScope_t873561430;
// Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate
struct GetTargetExpressionDelegate_t2473372959;
// Castle.DynamicProxy.Contributors.GetTargetReferenceDelegate
struct GetTargetReferenceDelegate_t3954391140;
// Castle.DynamicProxy.Generators.MethodGenerator
struct MethodGenerator_t3295115653;
// Castle.DynamicProxy.Generators.MetaMethod
struct MetaMethod_t2289943065;
// Castle.DynamicProxy.Generators.Emitters.ClassEmitter
struct ClassEmitter_t3355090660;
// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;
// Castle.DynamicProxy.Contributors.OverrideMethodDelegate
struct OverrideMethodDelegate_t507301037;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_Contributors_GetTa2473372959.h"
#include "NSubstitute_Castle_DynamicProxy_Contributors_GetTa3954391140.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaMet2289943065.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"
#include "NSubstitute_Castle_DynamicProxy_Contributors_Overri507301037.h"

// System.Void Castle.DynamicProxy.Contributors.InterfaceProxyWithOptionalTargetContributor::.ctor(Castle.DynamicProxy.Generators.INamingScope,Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate,Castle.DynamicProxy.Contributors.GetTargetReferenceDelegate)
extern "C"  void InterfaceProxyWithOptionalTargetContributor__ctor_m3609763214 (InterfaceProxyWithOptionalTargetContributor_t1676677162 * __this, Il2CppObject * ___namingScope, GetTargetExpressionDelegate_t2473372959 * ___getTarget, GetTargetReferenceDelegate_t3954391140 * ___getTargetReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.MethodGenerator Castle.DynamicProxy.Contributors.InterfaceProxyWithOptionalTargetContributor::GetMethodGenerator(Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions,Castle.DynamicProxy.Contributors.OverrideMethodDelegate)
extern "C"  MethodGenerator_t3295115653 * InterfaceProxyWithOptionalTargetContributor_GetMethodGenerator_m1342618652 (InterfaceProxyWithOptionalTargetContributor_t1676677162 * __this, MetaMethod_t2289943065 * ___method, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, OverrideMethodDelegate_t507301037 * ___overrideMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
