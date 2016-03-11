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

// Castle.DynamicProxy.Contributors.InvocationWithGenericDelegateContributor
struct InvocationWithGenericDelegateContributor_t3866695952;
// System.Type
struct Type_t;
// Castle.DynamicProxy.Generators.MetaMethod
struct MetaMethod_t2289943065;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;
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
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter
struct MethodEmitter_t2027936539;
// Castle.DynamicProxy.Generators.Emitters.ClassEmitter
struct ClassEmitter_t3355090660;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.AssignStatement
struct AssignStatement_t2368149220;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference
struct LocalReference_t1252421124;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ReferenceExpression
struct ReferenceExpression_t250940903;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaMet2289943065.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter1588091119.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter2268871968.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter2027936539.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter1252421124.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters250940903.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Void Castle.DynamicProxy.Contributors.InvocationWithGenericDelegateContributor::.ctor(System.Type,Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference)
extern "C"  void InvocationWithGenericDelegateContributor__ctor_m383050638 (InvocationWithGenericDelegateContributor_t3866695952 * __this, Type_t * ___delegateType, MetaMethod_t2289943065 * ___method, Reference_t1588091119 * ___targetReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.ConstructorEmitter Castle.DynamicProxy.Contributors.InvocationWithGenericDelegateContributor::CreateConstructor(Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[],Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter)
extern "C"  ConstructorEmitter_t3121537570 * InvocationWithGenericDelegateContributor_CreateConstructor_m2655746846 (InvocationWithGenericDelegateContributor_t3866695952 * __this, ArgumentReferenceU5BU5D_t2172782151* ___baseCtorArguments, AbstractTypeEmitter_t2268871968 * ___invocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Castle.DynamicProxy.Contributors.InvocationWithGenericDelegateContributor::GetCallbackMethod()
extern "C"  MethodInfo_t * InvocationWithGenericDelegateContributor_GetCallbackMethod_m382299111 (InvocationWithGenericDelegateContributor_t3866695952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.MethodInvocationExpression Castle.DynamicProxy.Contributors.InvocationWithGenericDelegateContributor::GetCallbackMethodInvocation(Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter,Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[],Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference,Castle.DynamicProxy.Generators.Emitters.MethodEmitter)
extern "C"  MethodInvocationExpression_t964809645 * InvocationWithGenericDelegateContributor_GetCallbackMethodInvocation_m366822699 (InvocationWithGenericDelegateContributor_t3866695952 * __this, AbstractTypeEmitter_t2268871968 * ___invocation, ExpressionU5BU5D_t1002953237* ___args, Reference_t1588091119 * ___targetField, MethodEmitter_t2027936539 * ___invokeMethodOnTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[] Castle.DynamicProxy.Contributors.InvocationWithGenericDelegateContributor::GetConstructorInvocationArguments(Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[],Castle.DynamicProxy.Generators.Emitters.ClassEmitter)
extern "C"  ExpressionU5BU5D_t1002953237* InvocationWithGenericDelegateContributor_GetConstructorInvocationArguments_m4087098756 (InvocationWithGenericDelegateContributor_t3866695952 * __this, ExpressionU5BU5D_t1002953237* ___arguments, ClassEmitter_t3355090660 * ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference Castle.DynamicProxy.Contributors.InvocationWithGenericDelegateContributor::GetDelegate(Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter,Castle.DynamicProxy.Generators.Emitters.MethodEmitter)
extern "C"  Reference_t1588091119 * InvocationWithGenericDelegateContributor_GetDelegate_m4249964277 (InvocationWithGenericDelegateContributor_t3866695952 * __this, AbstractTypeEmitter_t2268871968 * ___invocation, MethodEmitter_t2027936539 * ___invokeMethodOnTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.AssignStatement Castle.DynamicProxy.Contributors.InvocationWithGenericDelegateContributor::SetDelegate(Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference,Castle.DynamicProxy.Generators.Emitters.SimpleAST.ReferenceExpression,System.Type,System.Reflection.MethodInfo)
extern "C"  AssignStatement_t2368149220 * InvocationWithGenericDelegateContributor_SetDelegate_m2413110478 (InvocationWithGenericDelegateContributor_t3866695952 * __this, LocalReference_t1252421124 * ___localDelegate, ReferenceExpression_t250940903 * ___localTarget, Type_t * ___closedDelegateType, MethodInfo_t * ___closedMethodOnTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
