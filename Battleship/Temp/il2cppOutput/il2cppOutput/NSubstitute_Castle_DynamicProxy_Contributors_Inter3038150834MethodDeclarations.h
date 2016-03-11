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

// Castle.DynamicProxy.Contributors.InterfaceProxyWithoutTargetContributor
struct InterfaceProxyWithoutTargetContributor_t3038150834;
// Castle.DynamicProxy.Generators.INamingScope
struct INamingScope_t873561430;
// Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate
struct GetTargetExpressionDelegate_t2473372959;
// System.Collections.Generic.IEnumerable`1<Castle.DynamicProxy.Contributors.MembersCollector>
struct IEnumerable_1_t56121507;
// Castle.DynamicProxy.IProxyGenerationHook
struct IProxyGenerationHook_t479444615;
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
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_Contributors_GetTa2473372959.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaMet2289943065.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"
#include "NSubstitute_Castle_DynamicProxy_Contributors_Overri507301037.h"

// System.Void Castle.DynamicProxy.Contributors.InterfaceProxyWithoutTargetContributor::.ctor(Castle.DynamicProxy.Generators.INamingScope,Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate)
extern "C"  void InterfaceProxyWithoutTargetContributor__ctor_m3939587218 (InterfaceProxyWithoutTargetContributor_t3038150834 * __this, Il2CppObject * ___namingScope, GetTargetExpressionDelegate_t2473372959 * ___getTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Castle.DynamicProxy.Contributors.MembersCollector> Castle.DynamicProxy.Contributors.InterfaceProxyWithoutTargetContributor::CollectElementsToProxyInternal(Castle.DynamicProxy.IProxyGenerationHook)
extern "C"  Il2CppObject* InterfaceProxyWithoutTargetContributor_CollectElementsToProxyInternal_m1773009712 (InterfaceProxyWithoutTargetContributor_t3038150834 * __this, Il2CppObject * ___hook, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.MethodGenerator Castle.DynamicProxy.Contributors.InterfaceProxyWithoutTargetContributor::GetMethodGenerator(Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions,Castle.DynamicProxy.Contributors.OverrideMethodDelegate)
extern "C"  MethodGenerator_t3295115653 * InterfaceProxyWithoutTargetContributor_GetMethodGenerator_m1134411710 (InterfaceProxyWithoutTargetContributor_t3038150834 * __this, MetaMethod_t2289943065 * ___method, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, OverrideMethodDelegate_t507301037 * ___overrideMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Contributors.InterfaceProxyWithoutTargetContributor::GetInvocationType(Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  Type_t * InterfaceProxyWithoutTargetContributor_GetInvocationType_m3758562331 (InterfaceProxyWithoutTargetContributor_t3038150834 * __this, MetaMethod_t2289943065 * ___method, ClassEmitter_t3355090660 * ___emitter, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
