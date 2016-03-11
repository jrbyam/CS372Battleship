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

// Castle.DynamicProxy.Generators.ClassProxyWithTargetGenerator
struct ClassProxyWithTargetGenerator_t3451566457;
// Castle.DynamicProxy.ModuleScope
struct ModuleScope_t3833971791;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t1356416995;
// System.Collections.Generic.IEnumerable`1<Castle.DynamicProxy.Contributors.ITypeContributor>
struct IEnumerable_1_t653611719;
// Castle.DynamicProxy.Generators.INamingScope
struct INamingScope_t873561430;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference
struct FieldReference_t994901333;
// Castle.DynamicProxy.Generators.Emitters.ClassEmitter
struct ClassEmitter_t3355090660;
// System.String
struct String_t;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression
struct Expression_t707291260;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_ModuleScope3833971791.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Void Castle.DynamicProxy.Generators.ClassProxyWithTargetGenerator::.ctor(Castle.DynamicProxy.ModuleScope,System.Type,System.Type[],Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  void ClassProxyWithTargetGenerator__ctor_m2667451202 (ClassProxyWithTargetGenerator_t3451566457 * __this, ModuleScope_t3833971791 * ___scope, Type_t * ___classToProxy, TypeU5BU5D_t3431720054* ___additionalInterfacesToProxy, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Generators.ClassProxyWithTargetGenerator::GetGeneratedType()
extern "C"  Type_t * ClassProxyWithTargetGenerator_GetGeneratedType_m2606766653 (ClassProxyWithTargetGenerator_t3451566457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Type> Castle.DynamicProxy.Generators.ClassProxyWithTargetGenerator::GetTypeImplementerMapping(System.Collections.Generic.IEnumerable`1<Castle.DynamicProxy.Contributors.ITypeContributor>&,Castle.DynamicProxy.Generators.INamingScope)
extern "C"  Il2CppObject* ClassProxyWithTargetGenerator_GetTypeImplementerMapping_m1314305531 (ClassProxyWithTargetGenerator_t3451566457 * __this, Il2CppObject** ___contributors, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference Castle.DynamicProxy.Generators.ClassProxyWithTargetGenerator::CreateTargetField(Castle.DynamicProxy.Generators.Emitters.ClassEmitter)
extern "C"  FieldReference_t994901333 * ClassProxyWithTargetGenerator_CreateTargetField_m3893752679 (ClassProxyWithTargetGenerator_t3451566457 * __this, ClassEmitter_t3355090660 * ___emitter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.ClassProxyWithTargetGenerator::EnsureDoesNotImplementIProxyTargetAccessor(System.Type,System.String)
extern "C"  void ClassProxyWithTargetGenerator_EnsureDoesNotImplementIProxyTargetAccessor_m3314315393 (ClassProxyWithTargetGenerator_t3451566457 * __this, Type_t * ___type, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Generators.ClassProxyWithTargetGenerator::GenerateType(System.String,Castle.DynamicProxy.Generators.INamingScope)
extern "C"  Type_t * ClassProxyWithTargetGenerator_GenerateType_m1821672717 (ClassProxyWithTargetGenerator_t3451566457 * __this, String_t* ___name, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Generators.ClassProxyWithTargetGenerator::<GetTypeImplementerMapping>b__4(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Reflection.MethodInfo)
extern "C"  Expression_t707291260 * ClassProxyWithTargetGenerator_U3CGetTypeImplementerMappingU3Eb__4_m3625959764 (Il2CppObject * __this /* static, unused */, ClassEmitter_t3355090660 * ___c, MethodInfo_t * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
