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

// Castle.DynamicProxy.Generators.CompositionInvocationTypeGenerator
struct CompositionInvocationTypeGenerator_t3479651282;
// System.Type
struct Type_t;
// Castle.DynamicProxy.Generators.MetaMethod
struct MetaMethod_t2289943065;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Castle.DynamicProxy.Generators.IInvocationCreationContributor
struct IInvocationCreationContributor_t2813171894;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[]
struct ArgumentReferenceU5BU5D_t2172782151;
// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference
struct FieldReference_t994901333;
// Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter
struct AbstractTypeEmitter_t2268871968;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1127461800;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter
struct MethodEmitter_t2027936539;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaMet2289943065.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"
#include "mscorlib_System_Reflection_ConstructorInfo3542137334.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter2268871968.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter2027936539.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter1588091119.h"

// System.Void Castle.DynamicProxy.Generators.CompositionInvocationTypeGenerator::.ctor(System.Type,Castle.DynamicProxy.Generators.MetaMethod,System.Reflection.MethodInfo,System.Boolean,Castle.DynamicProxy.Generators.IInvocationCreationContributor)
extern "C"  void CompositionInvocationTypeGenerator__ctor_m2942745211 (CompositionInvocationTypeGenerator_t3479651282 * __this, Type_t * ___target, MetaMethod_t2289943065 * ___method, MethodInfo_t * ___callback, bool ___canChangeTarget, Il2CppObject * ___contributor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[] Castle.DynamicProxy.Generators.CompositionInvocationTypeGenerator::GetBaseCtorArguments(System.Type,Castle.DynamicProxy.ProxyGenerationOptions,System.Reflection.ConstructorInfo&)
extern "C"  ArgumentReferenceU5BU5D_t2172782151* CompositionInvocationTypeGenerator_GetBaseCtorArguments_m2013405547 (CompositionInvocationTypeGenerator_t3479651282 * __this, Type_t * ___targetFieldType, ProxyGenerationOptions_t351299295 * ___proxyGenerationOptions, ConstructorInfo_t3542137334 ** ___baseConstructor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Generators.CompositionInvocationTypeGenerator::GetBaseType()
extern "C"  Type_t * CompositionInvocationTypeGenerator_GetBaseType_m3762497190 (CompositionInvocationTypeGenerator_t3479651282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference Castle.DynamicProxy.Generators.CompositionInvocationTypeGenerator::GetTargetReference()
extern "C"  FieldReference_t994901333 * CompositionInvocationTypeGenerator_GetTargetReference_m1700703933 (CompositionInvocationTypeGenerator_t3479651282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.CompositionInvocationTypeGenerator::ImplementInvokeMethodOnTarget(Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter,System.Reflection.ParameterInfo[],Castle.DynamicProxy.Generators.Emitters.MethodEmitter,Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference)
extern "C"  void CompositionInvocationTypeGenerator_ImplementInvokeMethodOnTarget_m2665543594 (CompositionInvocationTypeGenerator_t3479651282 * __this, AbstractTypeEmitter_t2268871968 * ___invocation, ParameterInfoU5BU5D_t1127461800* ___parameters, MethodEmitter_t2027936539 * ___invokeMethodOnTarget, Reference_t1588091119 * ___targetField, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.CompositionInvocationTypeGenerator::.cctor()
extern "C"  void CompositionInvocationTypeGenerator__cctor_m860506688 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
