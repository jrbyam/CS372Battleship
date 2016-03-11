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

// Castle.DynamicProxy.Contributors.InterfaceProxyTargetContributor
struct InterfaceProxyTargetContributor_t1734352464;
// System.Type
struct Type_t;
// Castle.DynamicProxy.Generators.INamingScope
struct INamingScope_t873561430;
// System.Collections.Generic.IEnumerable`1<Castle.DynamicProxy.Contributors.MembersCollector>
struct IEnumerable_1_t56121507;
// Castle.DynamicProxy.IProxyGenerationHook
struct IProxyGenerationHook_t479444615;
// Castle.DynamicProxy.Contributors.MembersCollector
struct MembersCollector_t1478934447;
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
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression
struct Expression_t707291260;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaMet2289943065.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"
#include "NSubstitute_Castle_DynamicProxy_Contributors_Overri507301037.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Void Castle.DynamicProxy.Contributors.InterfaceProxyTargetContributor::.ctor(System.Type,System.Boolean,Castle.DynamicProxy.Generators.INamingScope)
extern "C"  void InterfaceProxyTargetContributor__ctor_m3346685429 (InterfaceProxyTargetContributor_t1734352464 * __this, Type_t * ___proxyTargetType, bool ___canChangeTarget, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Castle.DynamicProxy.Contributors.MembersCollector> Castle.DynamicProxy.Contributors.InterfaceProxyTargetContributor::CollectElementsToProxyInternal(Castle.DynamicProxy.IProxyGenerationHook)
extern "C"  Il2CppObject* InterfaceProxyTargetContributor_CollectElementsToProxyInternal_m170112106 (InterfaceProxyTargetContributor_t1734352464 * __this, Il2CppObject * ___hook, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Contributors.MembersCollector Castle.DynamicProxy.Contributors.InterfaceProxyTargetContributor::GetCollectorForInterface(System.Type)
extern "C"  MembersCollector_t1478934447 * InterfaceProxyTargetContributor_GetCollectorForInterface_m2357812841 (InterfaceProxyTargetContributor_t1734352464 * __this, Type_t * ___interface, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.MethodGenerator Castle.DynamicProxy.Contributors.InterfaceProxyTargetContributor::GetMethodGenerator(Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions,Castle.DynamicProxy.Contributors.OverrideMethodDelegate)
extern "C"  MethodGenerator_t3295115653 * InterfaceProxyTargetContributor_GetMethodGenerator_m1767248822 (InterfaceProxyTargetContributor_t1734352464 * __this, MetaMethod_t2289943065 * ___method, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, OverrideMethodDelegate_t507301037 * ___overrideMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Contributors.InterfaceProxyTargetContributor::GetInvocationType(Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  Type_t * InterfaceProxyTargetContributor_GetInvocationType_m195078223 (InterfaceProxyTargetContributor_t1734352464 * __this, MetaMethod_t2289943065 * ___method, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference Castle.DynamicProxy.Contributors.InterfaceProxyTargetContributor::<GetMethodGenerator>b__7(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Reflection.MethodInfo)
extern "C"  Reference_t1588091119 * InterfaceProxyTargetContributor_U3CGetMethodGeneratorU3Eb__7_m439747633 (Il2CppObject * __this /* static, unused */, ClassEmitter_t3355090660 * ___c, MethodInfo_t * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Contributors.InterfaceProxyTargetContributor::<GetMethodGenerator>b__8(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Reflection.MethodInfo)
extern "C"  Expression_t707291260 * InterfaceProxyTargetContributor_U3CGetMethodGeneratorU3Eb__8_m3304264899 (Il2CppObject * __this /* static, unused */, ClassEmitter_t3355090660 * ___c, MethodInfo_t * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
