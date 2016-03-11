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

// Castle.DynamicProxy.Generators.MethodWithInvocationGenerator
struct MethodWithInvocationGenerator_t3187752431;
// Castle.DynamicProxy.Generators.MetaMethod
struct MetaMethod_t2289943065;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;
// System.Type
struct Type_t;
// Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate
struct GetTargetExpressionDelegate_t2473372959;
// Castle.DynamicProxy.Contributors.OverrideMethodDelegate
struct OverrideMethodDelegate_t507301037;
// Castle.DynamicProxy.Generators.IInvocationCreationContributor
struct IInvocationCreationContributor_t2813171894;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference
struct FieldReference_t994901333;
// Castle.DynamicProxy.Generators.Emitters.ClassEmitter
struct ClassEmitter_t3355090660;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Castle.DynamicProxy.Generators.INamingScope
struct INamingScope_t873561430;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter
struct MethodEmitter_t2027936539;
// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression
struct Expression_t707291260;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[]
struct ExpressionU5BU5D_t1002953237;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.TypeReference[]
struct TypeReferenceU5BU5D_t2018303544;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[]
struct ArgumentReferenceU5BU5D_t2172782151;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaMet2289943065.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter1588091119.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_Contributors_GetTa2473372959.h"
#include "NSubstitute_Castle_DynamicProxy_Contributors_Overri507301037.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter2027936539.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters707291260.h"

// System.Void Castle.DynamicProxy.Generators.MethodWithInvocationGenerator::.ctor(Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference,System.Type,Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate,Castle.DynamicProxy.Contributors.OverrideMethodDelegate,Castle.DynamicProxy.Generators.IInvocationCreationContributor)
extern "C"  void MethodWithInvocationGenerator__ctor_m933772673 (MethodWithInvocationGenerator_t3187752431 * __this, MetaMethod_t2289943065 * ___method, Reference_t1588091119 * ___interceptors, Type_t * ___invocation, GetTargetExpressionDelegate_t2473372959 * ___getTargetExpression, OverrideMethodDelegate_t507301037 * ___createMethod, Il2CppObject * ___contributor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference Castle.DynamicProxy.Generators.MethodWithInvocationGenerator::BuildMethodInterceptorsField(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Reflection.MethodInfo,Castle.DynamicProxy.Generators.INamingScope)
extern "C"  FieldReference_t994901333 * MethodWithInvocationGenerator_BuildMethodInterceptorsField_m747798032 (MethodWithInvocationGenerator_t3187752431 * __this, ClassEmitter_t3355090660 * ___class, MethodInfo_t * ___method, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter Castle.DynamicProxy.Generators.MethodWithInvocationGenerator::BuildProxiedMethodBody(Castle.DynamicProxy.Generators.Emitters.MethodEmitter,Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions,Castle.DynamicProxy.Generators.INamingScope)
extern "C"  MethodEmitter_t2027936539 * MethodWithInvocationGenerator_BuildProxiedMethodBody_m1158716164 (MethodWithInvocationGenerator_t3187752431 * __this, MethodEmitter_t2027936539 * ___emitter, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Generators.MethodWithInvocationGenerator::SetMethodInterceptors(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.Generators.INamingScope,Castle.DynamicProxy.Generators.Emitters.MethodEmitter,Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression)
extern "C"  Expression_t707291260 * MethodWithInvocationGenerator_SetMethodInterceptors_m3931467433 (MethodWithInvocationGenerator_t3187752431 * __this, ClassEmitter_t3355090660 * ___class, Il2CppObject * ___namingScope, MethodEmitter_t2027936539 * ___emitter, Expression_t707291260 * ___proxiedMethodTokenExpression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.MethodWithInvocationGenerator::EmitLoadGenricMethodArguments(Castle.DynamicProxy.Generators.Emitters.MethodEmitter,System.Reflection.MethodInfo,Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference)
extern "C"  void MethodWithInvocationGenerator_EmitLoadGenricMethodArguments_m1265343337 (MethodWithInvocationGenerator_t3187752431 * __this, MethodEmitter_t2027936539 * ___methodEmitter, MethodInfo_t * ___method, Reference_t1588091119 * ___invocationLocal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[] Castle.DynamicProxy.Generators.MethodWithInvocationGenerator::GetCtorArguments(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression,Castle.DynamicProxy.Generators.Emitters.SimpleAST.TypeReference[],Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression)
extern "C"  ExpressionU5BU5D_t1002953237* MethodWithInvocationGenerator_GetCtorArguments_m2189504434 (MethodWithInvocationGenerator_t3187752431 * __this, ClassEmitter_t3355090660 * ___class, Expression_t707291260 * ___proxiedMethodTokenExpression, TypeReferenceU5BU5D_t2018303544* ___dereferencedArguments, Expression_t707291260 * ___methodInterceptors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[] Castle.DynamicProxy.Generators.MethodWithInvocationGenerator::ModifyArguments(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[])
extern "C"  ExpressionU5BU5D_t1002953237* MethodWithInvocationGenerator_ModifyArguments_m585863425 (MethodWithInvocationGenerator_t3187752431 * __this, ClassEmitter_t3355090660 * ___class, ExpressionU5BU5D_t1002953237* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.MethodWithInvocationGenerator::HasByRefArguments(Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[])
extern "C"  bool MethodWithInvocationGenerator_HasByRefArguments_m1047990844 (MethodWithInvocationGenerator_t3187752431 * __this, ArgumentReferenceU5BU5D_t2172782151* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.MethodWithInvocationGenerator::<EmitLoadGenricMethodArguments>b__1(System.Type)
extern "C"  bool MethodWithInvocationGenerator_U3CEmitLoadGenricMethodArgumentsU3Eb__1_m3025587356 (Il2CppObject * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
