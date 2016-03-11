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

// Castle.DynamicProxy.Generators.InheritanceInvocationTypeGenerator
struct InheritanceInvocationTypeGenerator_t2837933234;
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

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaMet2289943065.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"
#include "mscorlib_System_Reflection_ConstructorInfo3542137334.h"

// System.Void Castle.DynamicProxy.Generators.InheritanceInvocationTypeGenerator::.ctor(System.Type,Castle.DynamicProxy.Generators.MetaMethod,System.Reflection.MethodInfo,Castle.DynamicProxy.Generators.IInvocationCreationContributor)
extern "C"  void InheritanceInvocationTypeGenerator__ctor_m1763616618 (InheritanceInvocationTypeGenerator_t2837933234 * __this, Type_t * ___targetType, MetaMethod_t2289943065 * ___method, MethodInfo_t * ___callback, Il2CppObject * ___contributor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[] Castle.DynamicProxy.Generators.InheritanceInvocationTypeGenerator::GetBaseCtorArguments(System.Type,Castle.DynamicProxy.ProxyGenerationOptions,System.Reflection.ConstructorInfo&)
extern "C"  ArgumentReferenceU5BU5D_t2172782151* InheritanceInvocationTypeGenerator_GetBaseCtorArguments_m4185871499 (InheritanceInvocationTypeGenerator_t2837933234 * __this, Type_t * ___targetFieldType, ProxyGenerationOptions_t351299295 * ___proxyGenerationOptions, ConstructorInfo_t3542137334 ** ___baseConstructor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Generators.InheritanceInvocationTypeGenerator::GetBaseType()
extern "C"  Type_t * InheritanceInvocationTypeGenerator_GetBaseType_m2026906054 (InheritanceInvocationTypeGenerator_t2837933234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference Castle.DynamicProxy.Generators.InheritanceInvocationTypeGenerator::GetTargetReference()
extern "C"  FieldReference_t994901333 * InheritanceInvocationTypeGenerator_GetTargetReference_m444002205 (InheritanceInvocationTypeGenerator_t2837933234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.InheritanceInvocationTypeGenerator::.cctor()
extern "C"  void InheritanceInvocationTypeGenerator__cctor_m3776240416 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
