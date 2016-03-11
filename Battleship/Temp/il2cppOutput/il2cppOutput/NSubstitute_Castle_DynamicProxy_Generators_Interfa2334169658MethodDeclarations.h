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

// Castle.DynamicProxy.Generators.InterfaceProxyWithTargetGenerator
struct InterfaceProxyWithTargetGenerator_t2334169658;
// Castle.DynamicProxy.ModuleScope
struct ModuleScope_t3833971791;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;
// Castle.DynamicProxy.Contributors.ITypeContributor
struct ITypeContributor_t2076424659;
// System.Collections.Generic.IDictionary`2<System.Type,Castle.DynamicProxy.Contributors.ITypeContributor>
struct IDictionary_2_t1069670865;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t3245061321;
// Castle.DynamicProxy.Generators.INamingScope
struct INamingScope_t873561430;
// Castle.DynamicProxy.Generators.Emitters.ClassEmitter
struct ClassEmitter_t3355090660;
// Castle.DynamicProxy.Contributors.InterfaceProxyWithoutTargetContributor
struct InterfaceProxyWithoutTargetContributor_t3038150834;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t1356416995;
// System.Collections.Generic.IEnumerable`1<Castle.DynamicProxy.Contributors.ITypeContributor>
struct IEnumerable_1_t653611719;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference
struct FieldReference_t994901333;
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
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters994901333.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Void Castle.DynamicProxy.Generators.InterfaceProxyWithTargetGenerator::.ctor(Castle.DynamicProxy.ModuleScope,System.Type)
extern "C"  void InterfaceProxyWithTargetGenerator__ctor_m2622334419 (InterfaceProxyWithTargetGenerator_t2334169658 * __this, ModuleScope_t3833971791 * ___scope, Type_t * ___interface, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.InterfaceProxyWithTargetGenerator::get_AllowChangeTarget()
extern "C"  bool InterfaceProxyWithTargetGenerator_get_AllowChangeTarget_m773274634 (InterfaceProxyWithTargetGenerator_t2334169658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Castle.DynamicProxy.Generators.InterfaceProxyWithTargetGenerator::get_GeneratorType()
extern "C"  String_t* InterfaceProxyWithTargetGenerator_get_GeneratorType_m1647987154 (InterfaceProxyWithTargetGenerator_t2334169658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Generators.InterfaceProxyWithTargetGenerator::GenerateCode(System.Type,System.Type[],Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  Type_t * InterfaceProxyWithTargetGenerator_GenerateCode_m3202656968 (InterfaceProxyWithTargetGenerator_t2334169658 * __this, Type_t * ___proxyTargetType, TypeU5BU5D_t3431720054* ___interfaces, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Contributors.ITypeContributor Castle.DynamicProxy.Generators.InterfaceProxyWithTargetGenerator::AddMappingForTargetType(System.Collections.Generic.IDictionary`2<System.Type,Castle.DynamicProxy.Contributors.ITypeContributor>,System.Type,System.Collections.Generic.ICollection`1<System.Type>,System.Collections.Generic.ICollection`1<System.Type>,Castle.DynamicProxy.Generators.INamingScope)
extern "C"  Il2CppObject * InterfaceProxyWithTargetGenerator_AddMappingForTargetType_m238112193 (InterfaceProxyWithTargetGenerator_t2334169658 * __this, Il2CppObject* ___typeImplementerMapping, Type_t * ___proxyTargetType, Il2CppObject* ___targetInterfaces, Il2CppObject* ___additionalInterfaces, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.InterfaceProxyWithTargetGenerator::CreateTypeAttributes(Castle.DynamicProxy.Generators.Emitters.ClassEmitter)
extern "C"  void InterfaceProxyWithTargetGenerator_CreateTypeAttributes_m4289309060 (InterfaceProxyWithTargetGenerator_t2334169658 * __this, ClassEmitter_t3355090660 * ___emitter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Generators.InterfaceProxyWithTargetGenerator::GenerateType(System.String,System.Type,System.Type[],Castle.DynamicProxy.Generators.INamingScope)
extern "C"  Type_t * InterfaceProxyWithTargetGenerator_GenerateType_m2188945008 (InterfaceProxyWithTargetGenerator_t2334169658 * __this, String_t* ___typeName, Type_t * ___proxyTargetType, TypeU5BU5D_t3431720054* ___interfaces, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Contributors.InterfaceProxyWithoutTargetContributor Castle.DynamicProxy.Generators.InterfaceProxyWithTargetGenerator::GetContributorForAdditionalInterfaces(Castle.DynamicProxy.Generators.INamingScope)
extern "C"  InterfaceProxyWithoutTargetContributor_t3038150834 * InterfaceProxyWithTargetGenerator_GetContributorForAdditionalInterfaces_m2248069059 (InterfaceProxyWithTargetGenerator_t2334169658 * __this, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Type> Castle.DynamicProxy.Generators.InterfaceProxyWithTargetGenerator::GetTypeImplementerMapping(System.Type[],System.Type,System.Collections.Generic.IEnumerable`1<Castle.DynamicProxy.Contributors.ITypeContributor>&,Castle.DynamicProxy.Generators.INamingScope)
extern "C"  Il2CppObject* InterfaceProxyWithTargetGenerator_GetTypeImplementerMapping_m1825526038 (InterfaceProxyWithTargetGenerator_t2334169658 * __this, TypeU5BU5D_t3431720054* ___interfaces, Type_t * ___proxyTargetType, Il2CppObject** ___contributors, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Generators.InterfaceProxyWithTargetGenerator::Init(System.String,Castle.DynamicProxy.Generators.Emitters.ClassEmitter&,System.Type,Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference&,System.Collections.Generic.IEnumerable`1<System.Type>)
extern "C"  Type_t * InterfaceProxyWithTargetGenerator_Init_m3667040241 (InterfaceProxyWithTargetGenerator_t2334169658 * __this, String_t* ___typeName, ClassEmitter_t3355090660 ** ___emitter, Type_t * ___proxyTargetType, FieldReference_t994901333 ** ___interceptorsField, Il2CppObject* ___interfaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.InterfaceProxyWithTargetGenerator::CreateFields(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Type)
extern "C"  void InterfaceProxyWithTargetGenerator_CreateFields_m386844479 (InterfaceProxyWithTargetGenerator_t2334169658 * __this, ClassEmitter_t3355090660 * ___emitter, Type_t * ___proxyTargetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.InterfaceProxyWithTargetGenerator::EnsureValidBaseType(System.Type)
extern "C"  void InterfaceProxyWithTargetGenerator_EnsureValidBaseType_m461119295 (InterfaceProxyWithTargetGenerator_t2334169658 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.InterfaceProxyWithTargetGenerator::ImplementedByTarget(System.Collections.Generic.ICollection`1<System.Type>,System.Type)
extern "C"  bool InterfaceProxyWithTargetGenerator_ImplementedByTarget_m1549583066 (InterfaceProxyWithTargetGenerator_t2334169658 * __this, Il2CppObject* ___targetInterfaces, Type_t * ___interface, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.InterfaceProxyWithTargetGenerator::ThrowInvalidBaseType(System.Type,System.String)
extern "C"  void InterfaceProxyWithTargetGenerator_ThrowInvalidBaseType_m1000526504 (InterfaceProxyWithTargetGenerator_t2334169658 * __this, Type_t * ___type, String_t* ___doesNotHaveAccessibleParameterlessConstructor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Generators.InterfaceProxyWithTargetGenerator::<GetContributorForAdditionalInterfaces>b__5(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Reflection.MethodInfo)
extern "C"  Expression_t707291260 * InterfaceProxyWithTargetGenerator_U3CGetContributorForAdditionalInterfacesU3Eb__5_m3015876075 (Il2CppObject * __this /* static, unused */, ClassEmitter_t3355090660 * ___c, MethodInfo_t * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
