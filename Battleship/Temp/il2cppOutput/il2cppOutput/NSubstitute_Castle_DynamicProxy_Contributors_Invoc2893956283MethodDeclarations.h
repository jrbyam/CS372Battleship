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

// Castle.DynamicProxy.Contributors.InvocationWithDelegateContributor
struct InvocationWithDelegateContributor_t2893956283;
// System.Type
struct Type_t;
// Castle.DynamicProxy.Generators.MetaMethod
struct MetaMethod_t2289943065;
// Castle.DynamicProxy.Generators.INamingScope
struct INamingScope_t873561430;
// Castle.DynamicProxy.Generators.Emitters.ConstructorEmitter
struct ConstructorEmitter_t3121537570;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[]
struct ArgumentReferenceU5BU5D_t2172782151;
// Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter
struct AbstractTypeEmitter_t2268871968;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.MethodInvocationExpression
struct MethodInvocationExpression_t964809645;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[]
struct ExpressionU5BU5D_t1002953237;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter
struct MethodEmitter_t2027936539;
// Castle.DynamicProxy.Generators.Emitters.ClassEmitter
struct ClassEmitter_t3355090660;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference
struct FieldReference_t994901333;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaMet2289943065.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter2268871968.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter1588091119.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter2027936539.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"

// System.Void Castle.DynamicProxy.Contributors.InvocationWithDelegateContributor::.ctor(System.Type,System.Type,Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Generators.INamingScope)
extern "C"  void InvocationWithDelegateContributor__ctor_m2585116111 (InvocationWithDelegateContributor_t2893956283 * __this, Type_t * ___delegateType, Type_t * ___targetType, MetaMethod_t2289943065 * ___method, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.ConstructorEmitter Castle.DynamicProxy.Contributors.InvocationWithDelegateContributor::CreateConstructor(Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[],Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter)
extern "C"  ConstructorEmitter_t3121537570 * InvocationWithDelegateContributor_CreateConstructor_m214674493 (InvocationWithDelegateContributor_t2893956283 * __this, ArgumentReferenceU5BU5D_t2172782151* ___baseCtorArguments, AbstractTypeEmitter_t2268871968 * ___invocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Castle.DynamicProxy.Contributors.InvocationWithDelegateContributor::GetCallbackMethod()
extern "C"  MethodInfo_t * InvocationWithDelegateContributor_GetCallbackMethod_m2316145854 (InvocationWithDelegateContributor_t2893956283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.MethodInvocationExpression Castle.DynamicProxy.Contributors.InvocationWithDelegateContributor::GetCallbackMethodInvocation(Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter,Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[],Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference,Castle.DynamicProxy.Generators.Emitters.MethodEmitter)
extern "C"  MethodInvocationExpression_t964809645 * InvocationWithDelegateContributor_GetCallbackMethodInvocation_m4190324210 (InvocationWithDelegateContributor_t2893956283 * __this, AbstractTypeEmitter_t2268871968 * ___invocation, ExpressionU5BU5D_t1002953237* ___args, Reference_t1588091119 * ___targetField, MethodEmitter_t2027936539 * ___invokeMethodOnTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[] Castle.DynamicProxy.Contributors.InvocationWithDelegateContributor::GetConstructorInvocationArguments(Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[],Castle.DynamicProxy.Generators.Emitters.ClassEmitter)
extern "C"  ExpressionU5BU5D_t1002953237* InvocationWithDelegateContributor_GetConstructorInvocationArguments_m3483139803 (InvocationWithDelegateContributor_t2893956283 * __this, ExpressionU5BU5D_t1002953237* ___arguments, ClassEmitter_t3355090660 * ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference Castle.DynamicProxy.Contributors.InvocationWithDelegateContributor::BuildDelegateToken(Castle.DynamicProxy.Generators.Emitters.ClassEmitter)
extern "C"  FieldReference_t994901333 * InvocationWithDelegateContributor_BuildDelegateToken_m2003573068 (InvocationWithDelegateContributor_t2893956283 * __this, ClassEmitter_t3355090660 * ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[] Castle.DynamicProxy.Contributors.InvocationWithDelegateContributor::GetAllArgs(Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[],Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference)
extern "C"  ExpressionU5BU5D_t1002953237* InvocationWithDelegateContributor_GetAllArgs_m594346534 (InvocationWithDelegateContributor_t2893956283 * __this, ExpressionU5BU5D_t1002953237* ___args, Reference_t1588091119 * ___targetField, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[] Castle.DynamicProxy.Contributors.InvocationWithDelegateContributor::GetArguments(Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[])
extern "C"  ArgumentReferenceU5BU5D_t2172782151* InvocationWithDelegateContributor_GetArguments_m1461421341 (InvocationWithDelegateContributor_t2893956283 * __this, ArgumentReferenceU5BU5D_t2172782151* ___baseCtorArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
