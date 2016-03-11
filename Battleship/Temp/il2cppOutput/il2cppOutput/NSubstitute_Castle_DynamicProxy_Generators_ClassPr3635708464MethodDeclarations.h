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

// Castle.DynamicProxy.Generators.ClassProxyGenerator
struct ClassProxyGenerator_t3635708464;
// Castle.DynamicProxy.ModuleScope
struct ModuleScope_t3833971791;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;
// System.String
struct String_t;
// Castle.DynamicProxy.Generators.INamingScope
struct INamingScope_t873561430;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t1356416995;
// System.Collections.Generic.IEnumerable`1<Castle.DynamicProxy.Contributors.ITypeContributor>
struct IEnumerable_1_t653611719;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression
struct Expression_t707291260;
// Castle.DynamicProxy.Generators.Emitters.ClassEmitter
struct ClassEmitter_t3355090660;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_ModuleScope3833971791.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"
#include "mscorlib_System_String968488902.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Void Castle.DynamicProxy.Generators.ClassProxyGenerator::.ctor(Castle.DynamicProxy.ModuleScope,System.Type)
extern "C"  void ClassProxyGenerator__ctor_m3858043529 (ClassProxyGenerator_t3635708464 * __this, ModuleScope_t3833971791 * ___scope, Type_t * ___targetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Generators.ClassProxyGenerator::GenerateCode(System.Type[],Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  Type_t * ClassProxyGenerator_GenerateCode_m2623478865 (ClassProxyGenerator_t3635708464 * __this, TypeU5BU5D_t3431720054* ___interfaces, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Generators.ClassProxyGenerator::GenerateType(System.String,System.Type[],Castle.DynamicProxy.Generators.INamingScope)
extern "C"  Type_t * ClassProxyGenerator_GenerateType_m1183394567 (ClassProxyGenerator_t3635708464 * __this, String_t* ___name, TypeU5BU5D_t3431720054* ___interfaces, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Type> Castle.DynamicProxy.Generators.ClassProxyGenerator::GetTypeImplementerMapping(System.Type[],System.Collections.Generic.IEnumerable`1<Castle.DynamicProxy.Contributors.ITypeContributor>&,Castle.DynamicProxy.Generators.INamingScope)
extern "C"  Il2CppObject* ClassProxyGenerator_GetTypeImplementerMapping_m4132768563 (ClassProxyGenerator_t3635708464 * __this, TypeU5BU5D_t3431720054* ___interfaces, Il2CppObject** ___contributors, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.ClassProxyGenerator::EnsureDoesNotImplementIProxyTargetAccessor(System.Type,System.String)
extern "C"  void ClassProxyGenerator_EnsureDoesNotImplementIProxyTargetAccessor_m950199466 (ClassProxyGenerator_t3635708464 * __this, Type_t * ___type, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Generators.ClassProxyGenerator::<GetTypeImplementerMapping>b__7(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Reflection.MethodInfo)
extern "C"  Expression_t707291260 * ClassProxyGenerator_U3CGetTypeImplementerMappingU3Eb__7_m333121448 (Il2CppObject * __this /* static, unused */, ClassEmitter_t3355090660 * ___c, MethodInfo_t * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
