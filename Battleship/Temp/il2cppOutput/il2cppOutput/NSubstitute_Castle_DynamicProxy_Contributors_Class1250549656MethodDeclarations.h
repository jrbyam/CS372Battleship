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

// Castle.DynamicProxy.Contributors.ClassProxyWithTargetTargetContributor
struct ClassProxyWithTargetTargetContributor_t1250549656;
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
// Castle.DynamicProxy.Generators.IInvocationCreationContributor
struct IInvocationCreationContributor_t2813171894;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression
struct Expression_t707291260;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaMet2289943065.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"
#include "NSubstitute_Castle_DynamicProxy_Contributors_Overri507301037.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Void Castle.DynamicProxy.Contributors.ClassProxyWithTargetTargetContributor::.ctor(System.Type,System.Collections.Generic.IList`1<System.Reflection.MethodInfo>,Castle.DynamicProxy.Generators.INamingScope)
extern "C"  void ClassProxyWithTargetTargetContributor__ctor_m1235763838 (ClassProxyWithTargetTargetContributor_t1250549656 * __this, Type_t * ___targetType, Il2CppObject* ___methodsToSkip, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Castle.DynamicProxy.Contributors.MembersCollector> Castle.DynamicProxy.Contributors.ClassProxyWithTargetTargetContributor::CollectElementsToProxyInternal(Castle.DynamicProxy.IProxyGenerationHook)
extern "C"  Il2CppObject* ClassProxyWithTargetTargetContributor_CollectElementsToProxyInternal_m3207823666 (ClassProxyWithTargetTargetContributor_t1250549656 * __this, Il2CppObject * ___hook, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.MethodGenerator Castle.DynamicProxy.Contributors.ClassProxyWithTargetTargetContributor::GetMethodGenerator(Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions,Castle.DynamicProxy.Contributors.OverrideMethodDelegate)
extern "C"  MethodGenerator_t3295115653 * ClassProxyWithTargetTargetContributor_GetMethodGenerator_m699390254 (ClassProxyWithTargetTargetContributor_t1250549656 * __this, MetaMethod_t2289943065 * ___method, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, OverrideMethodDelegate_t507301037 * ___overrideMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Contributors.ClassProxyWithTargetTargetContributor::BuildInvocationType(Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  Type_t * ClassProxyWithTargetTargetContributor_BuildInvocationType_m682021183 (ClassProxyWithTargetTargetContributor_t1250549656 * __this, MetaMethod_t2289943065 * ___method, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.IInvocationCreationContributor Castle.DynamicProxy.Contributors.ClassProxyWithTargetTargetContributor::GetContributor(System.Type,Castle.DynamicProxy.Generators.MetaMethod)
extern "C"  Il2CppObject * ClassProxyWithTargetTargetContributor_GetContributor_m604250283 (ClassProxyWithTargetTargetContributor_t1250549656 * __this, Type_t * ___delegate, MetaMethod_t2289943065 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Contributors.ClassProxyWithTargetTargetContributor::GetDelegateType(Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  Type_t * ClassProxyWithTargetTargetContributor_GetDelegateType_m1060488770 (ClassProxyWithTargetTargetContributor_t1250549656 * __this, MetaMethod_t2289943065 * ___method, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Contributors.ClassProxyWithTargetTargetContributor::GetInvocationType(Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  Type_t * ClassProxyWithTargetTargetContributor_GetInvocationType_m2531642199 (ClassProxyWithTargetTargetContributor_t1250549656 * __this, MetaMethod_t2289943065 * ___method, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.MethodGenerator Castle.DynamicProxy.Contributors.ClassProxyWithTargetTargetContributor::IndirectlyCalledMethodGenerator(Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions,Castle.DynamicProxy.Contributors.OverrideMethodDelegate)
extern "C"  MethodGenerator_t3295115653 * ClassProxyWithTargetTargetContributor_IndirectlyCalledMethodGenerator_m1939322196 (ClassProxyWithTargetTargetContributor_t1250549656 * __this, MetaMethod_t2289943065 * ___method, ClassEmitter_t3355090660 * ___proxy, ProxyGenerationOptions_t351299295 * ___options, OverrideMethodDelegate_t507301037 * ___overrideMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Contributors.ClassProxyWithTargetTargetContributor::IsDirectlyAccessible(Castle.DynamicProxy.Generators.MetaMethod)
extern "C"  bool ClassProxyWithTargetTargetContributor_IsDirectlyAccessible_m1213963754 (ClassProxyWithTargetTargetContributor_t1250549656 * __this, MetaMethod_t2289943065 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Contributors.ClassProxyWithTargetTargetContributor::<GetMethodGenerator>b__a(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Reflection.MethodInfo)
extern "C"  Expression_t707291260 * ClassProxyWithTargetTargetContributor_U3CGetMethodGeneratorU3Eb__a_m4218709938 (Il2CppObject * __this /* static, unused */, ClassEmitter_t3355090660 * ___c, MethodInfo_t * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Contributors.ClassProxyWithTargetTargetContributor::<IndirectlyCalledMethodGenerator>b__c(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Reflection.MethodInfo)
extern "C"  Expression_t707291260 * ClassProxyWithTargetTargetContributor_U3CIndirectlyCalledMethodGeneratorU3Eb__c_m4289469024 (Il2CppObject * __this /* static, unused */, ClassEmitter_t3355090660 * ___c, MethodInfo_t * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
