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

// Castle.DynamicProxy.Generators.InterfaceProxyWithoutTargetGenerator
struct InterfaceProxyWithoutTargetGenerator_t461682754;
// Castle.DynamicProxy.ModuleScope
struct ModuleScope_t3833971791;
// System.Type
struct Type_t;
// System.String
struct String_t;
// Castle.DynamicProxy.Contributors.ITypeContributor
struct ITypeContributor_t2076424659;
// System.Collections.Generic.IDictionary`2<System.Type,Castle.DynamicProxy.Contributors.ITypeContributor>
struct IDictionary_2_t1069670865;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t3245061321;
// Castle.DynamicProxy.Generators.INamingScope
struct INamingScope_t873561430;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression
struct Expression_t707291260;
// Castle.DynamicProxy.Generators.Emitters.ClassEmitter
struct ClassEmitter_t3355090660;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_ModuleScope3833971791.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Void Castle.DynamicProxy.Generators.InterfaceProxyWithoutTargetGenerator::.ctor(Castle.DynamicProxy.ModuleScope,System.Type)
extern "C"  void InterfaceProxyWithoutTargetGenerator__ctor_m3506555945 (InterfaceProxyWithoutTargetGenerator_t461682754 * __this, ModuleScope_t3833971791 * ___scope, Type_t * ___interface, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Castle.DynamicProxy.Generators.InterfaceProxyWithoutTargetGenerator::get_GeneratorType()
extern "C"  String_t* InterfaceProxyWithoutTargetGenerator_get_GeneratorType_m3674233506 (InterfaceProxyWithoutTargetGenerator_t461682754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Contributors.ITypeContributor Castle.DynamicProxy.Generators.InterfaceProxyWithoutTargetGenerator::AddMappingForTargetType(System.Collections.Generic.IDictionary`2<System.Type,Castle.DynamicProxy.Contributors.ITypeContributor>,System.Type,System.Collections.Generic.ICollection`1<System.Type>,System.Collections.Generic.ICollection`1<System.Type>,Castle.DynamicProxy.Generators.INamingScope)
extern "C"  Il2CppObject * InterfaceProxyWithoutTargetGenerator_AddMappingForTargetType_m4216607355 (InterfaceProxyWithoutTargetGenerator_t461682754 * __this, Il2CppObject* ___interfaceTypeImplementerMapping, Type_t * ___proxyTargetType, Il2CppObject* ___targetInterfaces, Il2CppObject* ___additionalInterfaces, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Generators.InterfaceProxyWithoutTargetGenerator::GenerateType(System.String,System.Type,System.Type[],Castle.DynamicProxy.Generators.INamingScope)
extern "C"  Type_t * InterfaceProxyWithoutTargetGenerator_GenerateType_m4271067726 (InterfaceProxyWithoutTargetGenerator_t461682754 * __this, String_t* ___typeName, Type_t * ___proxyTargetType, TypeU5BU5D_t3431720054* ___interfaces, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Generators.InterfaceProxyWithoutTargetGenerator::<AddMappingForTargetType>b__a(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Reflection.MethodInfo)
extern "C"  Expression_t707291260 * InterfaceProxyWithoutTargetGenerator_U3CAddMappingForTargetTypeU3Eb__a_m948378633 (Il2CppObject * __this /* static, unused */, ClassEmitter_t3355090660 * ___c, MethodInfo_t * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
