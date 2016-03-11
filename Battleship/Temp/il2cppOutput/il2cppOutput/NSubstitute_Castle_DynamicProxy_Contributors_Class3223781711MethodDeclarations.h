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

// Castle.DynamicProxy.Contributors.ClassProxyTargetContributor
struct ClassProxyTargetContributor_t3223781711;
// System.Type
struct Type_t;
// System.Collections.Generic.IList`1<System.Reflection.MethodInfo>
struct IList_1_t1332746295;
// Castle.DynamicProxy.Generators.INamingScope
struct INamingScope_t873561430;
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
// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t765486855;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Castle.DynamicProxy.Generators.IInvocationCreationContributor
struct IInvocationCreationContributor_t2813171894;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression
struct Expression_t707291260;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaMet2289943065.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"
#include "NSubstitute_Castle_DynamicProxy_Contributors_Overri507301037.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Void Castle.DynamicProxy.Contributors.ClassProxyTargetContributor::.ctor(System.Type,System.Collections.Generic.IList`1<System.Reflection.MethodInfo>,Castle.DynamicProxy.Generators.INamingScope)
extern "C"  void ClassProxyTargetContributor__ctor_m4031259239 (ClassProxyTargetContributor_t3223781711 * __this, Type_t * ___targetType, Il2CppObject* ___methodsToSkip, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Castle.DynamicProxy.Contributors.MembersCollector> Castle.DynamicProxy.Contributors.ClassProxyTargetContributor::CollectElementsToProxyInternal(Castle.DynamicProxy.IProxyGenerationHook)
extern "C"  Il2CppObject* ClassProxyTargetContributor_CollectElementsToProxyInternal_m1045050281 (ClassProxyTargetContributor_t3223781711 * __this, Il2CppObject * ___hook, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.MethodGenerator Castle.DynamicProxy.Contributors.ClassProxyTargetContributor::GetMethodGenerator(Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions,Castle.DynamicProxy.Contributors.OverrideMethodDelegate)
extern "C"  MethodGenerator_t3295115653 * ClassProxyTargetContributor_GetMethodGenerator_m3876822871 (ClassProxyTargetContributor_t3223781711 * __this, MetaMethod_t2289943065 * ___method, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, OverrideMethodDelegate_t507301037 * ___overrideMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Contributors.ClassProxyTargetContributor::BuildInvocationType(Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  Type_t * ClassProxyTargetContributor_BuildInvocationType_m720768182 (ClassProxyTargetContributor_t3223781711 * __this, MetaMethod_t2289943065 * ___method, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodBuilder Castle.DynamicProxy.Contributors.ClassProxyTargetContributor::CreateCallbackMethod(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Reflection.MethodInfo,System.Reflection.MethodInfo)
extern "C"  MethodBuilder_t765486855 * ClassProxyTargetContributor_CreateCallbackMethod_m3440559148 (ClassProxyTargetContributor_t3223781711 * __this, ClassEmitter_t3355090660 * ___emitter, MethodInfo_t * ___methodInfo, MethodInfo_t * ___methodOnTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Contributors.ClassProxyTargetContributor::ExplicitlyImplementedInterfaceMethod(Castle.DynamicProxy.Generators.MetaMethod)
extern "C"  bool ClassProxyTargetContributor_ExplicitlyImplementedInterfaceMethod_m152021648 (ClassProxyTargetContributor_t3223781711 * __this, MetaMethod_t2289943065 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.MethodGenerator Castle.DynamicProxy.Contributors.ClassProxyTargetContributor::ExplicitlyImplementedInterfaceMethodGenerator(Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions,Castle.DynamicProxy.Contributors.OverrideMethodDelegate)
extern "C"  MethodGenerator_t3295115653 * ClassProxyTargetContributor_ExplicitlyImplementedInterfaceMethodGenerator_m408147467 (ClassProxyTargetContributor_t3223781711 * __this, MetaMethod_t2289943065 * ___method, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, OverrideMethodDelegate_t507301037 * ___overrideMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.IInvocationCreationContributor Castle.DynamicProxy.Contributors.ClassProxyTargetContributor::GetContributor(System.Type,Castle.DynamicProxy.Generators.MetaMethod)
extern "C"  Il2CppObject * ClassProxyTargetContributor_GetContributor_m2242960404 (ClassProxyTargetContributor_t3223781711 * __this, Type_t * ___delegate, MetaMethod_t2289943065 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Contributors.ClassProxyTargetContributor::GetDelegateType(Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  Type_t * ClassProxyTargetContributor_GetDelegateType_m1097028921 (ClassProxyTargetContributor_t3223781711 * __this, MetaMethod_t2289943065 * ___method, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Contributors.ClassProxyTargetContributor::GetInvocationType(Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  Type_t * ClassProxyTargetContributor_GetInvocationType_m3286988942 (ClassProxyTargetContributor_t3223781711 * __this, MetaMethod_t2289943065 * ___method, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Contributors.ClassProxyTargetContributor::<GetMethodGenerator>b__a(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Reflection.MethodInfo)
extern "C"  Expression_t707291260 * ClassProxyTargetContributor_U3CGetMethodGeneratorU3Eb__a_m3743051099 (ClassProxyTargetContributor_t3223781711 * __this, ClassEmitter_t3355090660 * ___c, MethodInfo_t * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Contributors.ClassProxyTargetContributor::<ExplicitlyImplementedInterfaceMethodGenerator>b__b(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Reflection.MethodInfo)
extern "C"  Expression_t707291260 * ClassProxyTargetContributor_U3CExplicitlyImplementedInterfaceMethodGeneratorU3Eb__b_m1950288120 (ClassProxyTargetContributor_t3223781711 * __this, ClassEmitter_t3355090660 * ___c, MethodInfo_t * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
