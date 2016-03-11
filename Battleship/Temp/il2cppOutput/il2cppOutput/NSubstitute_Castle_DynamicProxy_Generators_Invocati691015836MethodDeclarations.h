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

// Castle.DynamicProxy.Generators.InvocationTypeGenerator
struct InvocationTypeGenerator_t691015836;
// System.Type
struct Type_t;
// Castle.DynamicProxy.Generators.MetaMethod
struct MetaMethod_t2289943065;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Castle.DynamicProxy.Generators.IInvocationCreationContributor
struct IInvocationCreationContributor_t2813171894;
// Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter
struct AbstractTypeEmitter_t2268871968;
// Castle.DynamicProxy.Generators.Emitters.ClassEmitter
struct ClassEmitter_t3355090660;
// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;
// Castle.DynamicProxy.Generators.INamingScope
struct INamingScope_t873561430;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.MethodInvocationExpression
struct MethodInvocationExpression_t964809645;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[]
struct ExpressionU5BU5D_t1002953237;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter
struct MethodEmitter_t2027936539;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1127461800;
// System.Collections.Generic.Dictionary`2<System.Int32,Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference>
struct Dictionary_2_t1743231907;
// Castle.DynamicProxy.Generators.Emitters.ConstructorEmitter
struct ConstructorEmitter_t3121537570;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[]
struct ArgumentReferenceU5BU5D_t2172782151;
// Castle.DynamicProxy.Generators.Emitters.CodeBuilders.AbstractCodeBuilder
struct AbstractCodeBuilder_t3512213983;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference
struct FieldReference_t994901333;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaMet2289943065.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter2268871968.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter1588091119.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter2027936539.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters994901333.h"

// System.Void Castle.DynamicProxy.Generators.InvocationTypeGenerator::.ctor(System.Type,Castle.DynamicProxy.Generators.MetaMethod,System.Reflection.MethodInfo,System.Boolean,Castle.DynamicProxy.Generators.IInvocationCreationContributor)
extern "C"  void InvocationTypeGenerator__ctor_m69276023 (InvocationTypeGenerator_t691015836 * __this, Type_t * ___targetType, MetaMethod_t2289943065 * ___method, MethodInfo_t * ___callback, bool ___canChangeTarget, Il2CppObject * ___contributor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter Castle.DynamicProxy.Generators.InvocationTypeGenerator::Generate(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions,Castle.DynamicProxy.Generators.INamingScope)
extern "C"  AbstractTypeEmitter_t2268871968 * InvocationTypeGenerator_Generate_m456578358 (InvocationTypeGenerator_t691015836 * __this, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.MethodInvocationExpression Castle.DynamicProxy.Generators.InvocationTypeGenerator::GetCallbackMethodInvocation(Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter,Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[],System.Reflection.MethodInfo,Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference,Castle.DynamicProxy.Generators.Emitters.MethodEmitter)
extern "C"  MethodInvocationExpression_t964809645 * InvocationTypeGenerator_GetCallbackMethodInvocation_m3788550878 (InvocationTypeGenerator_t691015836 * __this, AbstractTypeEmitter_t2268871968 * ___invocation, ExpressionU5BU5D_t1002953237* ___args, MethodInfo_t * ___callbackMethod, Reference_t1588091119 * ___targetField, MethodEmitter_t2027936539 * ___invokeMethodOnTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.InvocationTypeGenerator::ImplementInvokeMethodOnTarget(Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter,System.Reflection.ParameterInfo[],Castle.DynamicProxy.Generators.Emitters.MethodEmitter,Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference)
extern "C"  void InvocationTypeGenerator_ImplementInvokeMethodOnTarget_m3102519974 (InvocationTypeGenerator_t691015836 * __this, AbstractTypeEmitter_t2268871968 * ___invocation, ParameterInfoU5BU5D_t1127461800* ___parameters, MethodEmitter_t2027936539 * ___invokeMethodOnTarget, Reference_t1588091119 * ___targetField, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.InvocationTypeGenerator::AssignBackByRefArguments(Castle.DynamicProxy.Generators.Emitters.MethodEmitter,System.Collections.Generic.Dictionary`2<System.Int32,Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference>)
extern "C"  void InvocationTypeGenerator_AssignBackByRefArguments_m916764092 (InvocationTypeGenerator_t691015836 * __this, MethodEmitter_t2027936539 * ___invokeMethodOnTarget, Dictionary_2_t1743231907 * ___byRefArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.InvocationTypeGenerator::CreateConstructor(Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter,Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  void InvocationTypeGenerator_CreateConstructor_m347351118 (InvocationTypeGenerator_t691015836 * __this, AbstractTypeEmitter_t2268871968 * ___invocation, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.ConstructorEmitter Castle.DynamicProxy.Generators.InvocationTypeGenerator::CreateConstructor(Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter,Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[])
extern "C"  ConstructorEmitter_t3121537570 * InvocationTypeGenerator_CreateConstructor_m1880455886 (InvocationTypeGenerator_t691015836 * __this, AbstractTypeEmitter_t2268871968 * ___invocation, ArgumentReferenceU5BU5D_t2172782151* ___baseCtorArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.CodeBuilders.AbstractCodeBuilder Castle.DynamicProxy.Generators.InvocationTypeGenerator::EmitCallEnsureValidTarget(Castle.DynamicProxy.Generators.Emitters.MethodEmitter)
extern "C"  AbstractCodeBuilder_t3512213983 * InvocationTypeGenerator_EmitCallEnsureValidTarget_m1241862630 (InvocationTypeGenerator_t691015836 * __this, MethodEmitter_t2027936539 * ___invokeMethodOnTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.InvocationTypeGenerator::EmitCallThrowOnNoTarget(Castle.DynamicProxy.Generators.Emitters.MethodEmitter)
extern "C"  void InvocationTypeGenerator_EmitCallThrowOnNoTarget_m481050804 (InvocationTypeGenerator_t691015836 * __this, MethodEmitter_t2027936539 * ___invokeMethodOnTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Castle.DynamicProxy.Generators.InvocationTypeGenerator::GetCallbackMethod(Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter)
extern "C"  MethodInfo_t * InvocationTypeGenerator_GetCallbackMethod_m1437242135 (InvocationTypeGenerator_t691015836 * __this, AbstractTypeEmitter_t2268871968 * ___invocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter Castle.DynamicProxy.Generators.InvocationTypeGenerator::GetEmitter(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Type[],Castle.DynamicProxy.Generators.INamingScope,System.Reflection.MethodInfo)
extern "C"  AbstractTypeEmitter_t2268871968 * InvocationTypeGenerator_GetEmitter_m3769522888 (InvocationTypeGenerator_t691015836 * __this, ClassEmitter_t3355090660 * ___class, TypeU5BU5D_t3431720054* ___interfaces, Il2CppObject * ___namingScope, MethodInfo_t * ___methodInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.InvocationTypeGenerator::ImplemementInvokeMethodOnTarget(Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter,System.Reflection.ParameterInfo[],Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference,System.Reflection.MethodInfo)
extern "C"  void InvocationTypeGenerator_ImplemementInvokeMethodOnTarget_m3437510728 (InvocationTypeGenerator_t691015836 * __this, AbstractTypeEmitter_t2268871968 * ___invocation, ParameterInfoU5BU5D_t1127461800* ___parameters, FieldReference_t994901333 * ___targetField, MethodInfo_t * ___callbackMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.InvocationTypeGenerator::ImplementChangeInvocationTarget(Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter,Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference)
extern "C"  void InvocationTypeGenerator_ImplementChangeInvocationTarget_m3116945586 (InvocationTypeGenerator_t691015836 * __this, AbstractTypeEmitter_t2268871968 * ___invocation, FieldReference_t994901333 * ___targetField, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.InvocationTypeGenerator::ImplementChangeProxyTarget(Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter,Castle.DynamicProxy.Generators.Emitters.ClassEmitter)
extern "C"  void InvocationTypeGenerator_ImplementChangeProxyTarget_m567262023 (InvocationTypeGenerator_t691015836 * __this, AbstractTypeEmitter_t2268871968 * ___invocation, ClassEmitter_t3355090660 * ___class, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.InvocationTypeGenerator::ImplementChangeProxyTargetInterface(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter,Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference)
extern "C"  void InvocationTypeGenerator_ImplementChangeProxyTargetInterface_m595626131 (InvocationTypeGenerator_t691015836 * __this, ClassEmitter_t3355090660 * ___class, AbstractTypeEmitter_t2268871968 * ___invocation, FieldReference_t994901333 * ___targetField, const MethodInfo* method) IL2CPP_METHOD_ATTR;
