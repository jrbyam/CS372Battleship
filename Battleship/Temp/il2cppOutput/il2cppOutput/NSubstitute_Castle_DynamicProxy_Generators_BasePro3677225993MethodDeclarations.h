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

// Castle.DynamicProxy.Generators.BaseProxyGenerator
struct BaseProxyGenerator_t3677225993;
// Castle.DynamicProxy.ModuleScope
struct ModuleScope_t3833971791;
// System.Type
struct Type_t;
// Castle.Core.Logging.ILogger
struct ILogger_t1490187963;
// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;
// Castle.DynamicProxy.Contributors.ITypeContributor
struct ITypeContributor_t2076424659;
// System.Collections.Generic.IDictionary`2<System.Type,Castle.DynamicProxy.Contributors.ITypeContributor>
struct IDictionary_2_t1069670865;
// Castle.DynamicProxy.Generators.CacheKey
struct CacheKey_t3539664464;
// Castle.DynamicProxy.Generators.Emitters.ClassEmitter
struct ClassEmitter_t3355090660;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t1356416995;
// Castle.DynamicProxy.Generators.Emitters.CodeBuilders.ConstructorCodeBuilder
struct ConstructorCodeBuilder_t822167367;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference
struct FieldReference_t994901333;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference[]
struct FieldReferenceU5BU5D_t607027640;
// Castle.DynamicProxy.Generators.Emitters.ConstructorEmitter
struct ConstructorEmitter_t3121537570;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t3245061321;
// System.Func`3<System.String,Castle.DynamicProxy.Generators.INamingScope,System.Type>
struct Func_3_t3845076768;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_ModuleScope3833971791.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_CacheKe3539664464.h"
#include "mscorlib_System_String968488902.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters822167367.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "mscorlib_System_Reflection_ConstructorInfo3542137334.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters994901333.h"

// System.Void Castle.DynamicProxy.Generators.BaseProxyGenerator::.ctor(Castle.DynamicProxy.ModuleScope,System.Type)
extern "C"  void BaseProxyGenerator__ctor_m2335451696 (BaseProxyGenerator_t3677225993 * __this, ModuleScope_t3833971791 * ___scope, Type_t * ___targetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.Core.Logging.ILogger Castle.DynamicProxy.Generators.BaseProxyGenerator::get_Logger()
extern "C"  Il2CppObject * BaseProxyGenerator_get_Logger_m540210405 (BaseProxyGenerator_t3677225993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.BaseProxyGenerator::set_Logger(Castle.Core.Logging.ILogger)
extern "C"  void BaseProxyGenerator_set_Logger_m3920556518 (BaseProxyGenerator_t3677225993 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.ProxyGenerationOptions Castle.DynamicProxy.Generators.BaseProxyGenerator::get_ProxyGenerationOptions()
extern "C"  ProxyGenerationOptions_t351299295 * BaseProxyGenerator_get_ProxyGenerationOptions_m405915711 (BaseProxyGenerator_t3677225993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.BaseProxyGenerator::set_ProxyGenerationOptions(Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  void BaseProxyGenerator_set_ProxyGenerationOptions_m518309218 (BaseProxyGenerator_t3677225993 * __this, ProxyGenerationOptions_t351299295 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.ModuleScope Castle.DynamicProxy.Generators.BaseProxyGenerator::get_Scope()
extern "C"  ModuleScope_t3833971791 * BaseProxyGenerator_get_Scope_m720128083 (BaseProxyGenerator_t3677225993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.BaseProxyGenerator::AddMapping(System.Type,Castle.DynamicProxy.Contributors.ITypeContributor,System.Collections.Generic.IDictionary`2<System.Type,Castle.DynamicProxy.Contributors.ITypeContributor>)
extern "C"  void BaseProxyGenerator_AddMapping_m2524948939 (BaseProxyGenerator_t3677225993 * __this, Type_t * ___interface, Il2CppObject * ___implementer, Il2CppObject* ___mapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.BaseProxyGenerator::AddMappingForISerializable(System.Collections.Generic.IDictionary`2<System.Type,Castle.DynamicProxy.Contributors.ITypeContributor>,Castle.DynamicProxy.Contributors.ITypeContributor)
extern "C"  void BaseProxyGenerator_AddMappingForISerializable_m1722037529 (BaseProxyGenerator_t3677225993 * __this, Il2CppObject* ___typeImplementerMapping, Il2CppObject * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.BaseProxyGenerator::AddMappingNoCheck(System.Type,Castle.DynamicProxy.Contributors.ITypeContributor,System.Collections.Generic.IDictionary`2<System.Type,Castle.DynamicProxy.Contributors.ITypeContributor>)
extern "C"  void BaseProxyGenerator_AddMappingNoCheck_m3407992440 (BaseProxyGenerator_t3677225993 * __this, Type_t * ___interface, Il2CppObject * ___implementer, Il2CppObject* ___mapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.BaseProxyGenerator::AddToCache(Castle.DynamicProxy.Generators.CacheKey,System.Type)
extern "C"  void BaseProxyGenerator_AddToCache_m2733132815 (BaseProxyGenerator_t3677225993 * __this, CacheKey_t3539664464 * ___key, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.ClassEmitter Castle.DynamicProxy.Generators.BaseProxyGenerator::BuildClassEmitter(System.String,System.Type,System.Collections.Generic.IEnumerable`1<System.Type>)
extern "C"  ClassEmitter_t3355090660 * BaseProxyGenerator_BuildClassEmitter_m558373476 (BaseProxyGenerator_t3677225993 * __this, String_t* ___typeName, Type_t * ___parentType, Il2CppObject* ___interfaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.BaseProxyGenerator::CheckNotGenericTypeDefinition(System.Type,System.String)
extern "C"  void BaseProxyGenerator_CheckNotGenericTypeDefinition_m3048237576 (BaseProxyGenerator_t3677225993 * __this, Type_t * ___type, String_t* ___argumentName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.BaseProxyGenerator::CheckNotGenericTypeDefinitions(System.Collections.Generic.IEnumerable`1<System.Type>,System.String)
extern "C"  void BaseProxyGenerator_CheckNotGenericTypeDefinitions_m29469208 (BaseProxyGenerator_t3677225993 * __this, Il2CppObject* ___types, String_t* ___argumentName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.BaseProxyGenerator::CompleteInitCacheMethod(Castle.DynamicProxy.Generators.Emitters.CodeBuilders.ConstructorCodeBuilder)
extern "C"  void BaseProxyGenerator_CompleteInitCacheMethod_m1554807499 (BaseProxyGenerator_t3677225993 * __this, ConstructorCodeBuilder_t822167367 * ___constCodeBuilder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.BaseProxyGenerator::CreateFields(Castle.DynamicProxy.Generators.Emitters.ClassEmitter)
extern "C"  void BaseProxyGenerator_CreateFields_m1176376425 (BaseProxyGenerator_t3677225993 * __this, ClassEmitter_t3355090660 * ___emitter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.BaseProxyGenerator::CreateInterceptorsField(Castle.DynamicProxy.Generators.Emitters.ClassEmitter)
extern "C"  void BaseProxyGenerator_CreateInterceptorsField_m710216618 (BaseProxyGenerator_t3677225993 * __this, ClassEmitter_t3355090660 * ___emitter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference Castle.DynamicProxy.Generators.BaseProxyGenerator::CreateOptionsField(Castle.DynamicProxy.Generators.Emitters.ClassEmitter)
extern "C"  FieldReference_t994901333 * BaseProxyGenerator_CreateOptionsField_m582319566 (BaseProxyGenerator_t3677225993 * __this, ClassEmitter_t3355090660 * ___emitter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.BaseProxyGenerator::CreateSelectorField(Castle.DynamicProxy.Generators.Emitters.ClassEmitter)
extern "C"  void BaseProxyGenerator_CreateSelectorField_m1117347737 (BaseProxyGenerator_t3677225993 * __this, ClassEmitter_t3355090660 * ___emitter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.BaseProxyGenerator::CreateTypeAttributes(Castle.DynamicProxy.Generators.Emitters.ClassEmitter)
extern "C"  void BaseProxyGenerator_CreateTypeAttributes_m164636385 (BaseProxyGenerator_t3677225993 * __this, ClassEmitter_t3355090660 * ___emitter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.BaseProxyGenerator::EnsureOptionsOverrideEqualsAndGetHashCode(Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  void BaseProxyGenerator_EnsureOptionsOverrideEqualsAndGetHashCode_m1972412792 (BaseProxyGenerator_t3677225993 * __this, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.BaseProxyGenerator::GenerateConstructor(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Reflection.ConstructorInfo,Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference[])
extern "C"  void BaseProxyGenerator_GenerateConstructor_m3820550634 (BaseProxyGenerator_t3677225993 * __this, ClassEmitter_t3355090660 * ___emitter, ConstructorInfo_t3542137334 * ___baseConstructor, FieldReferenceU5BU5D_t607027640* ___fields, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.BaseProxyGenerator::GenerateConstructors(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Type,Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference[])
extern "C"  void BaseProxyGenerator_GenerateConstructors_m3243406364 (BaseProxyGenerator_t3677225993 * __this, ClassEmitter_t3355090660 * ___emitter, Type_t * ___baseType, FieldReferenceU5BU5D_t607027640* ___fields, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.BaseProxyGenerator::GenerateParameterlessConstructor(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Type,Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference)
extern "C"  void BaseProxyGenerator_GenerateParameterlessConstructor_m3287698687 (BaseProxyGenerator_t3677225993 * __this, ClassEmitter_t3355090660 * ___emitter, Type_t * ___baseClass, FieldReference_t994901333 * ___interceptorField, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.ConstructorEmitter Castle.DynamicProxy.Generators.BaseProxyGenerator::GenerateStaticConstructor(Castle.DynamicProxy.Generators.Emitters.ClassEmitter)
extern "C"  ConstructorEmitter_t3121537570 * BaseProxyGenerator_GenerateStaticConstructor_m2724455370 (BaseProxyGenerator_t3677225993 * __this, ClassEmitter_t3355090660 * ___emitter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Generators.BaseProxyGenerator::GetFromCache(Castle.DynamicProxy.Generators.CacheKey)
extern "C"  Type_t * BaseProxyGenerator_GetFromCache_m4263912794 (BaseProxyGenerator_t3677225993 * __this, CacheKey_t3539664464 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.BaseProxyGenerator::HandleExplicitlyPassedProxyTargetAccessor(System.Collections.Generic.ICollection`1<System.Type>,System.Collections.Generic.ICollection`1<System.Type>)
extern "C"  void BaseProxyGenerator_HandleExplicitlyPassedProxyTargetAccessor_m1294830925 (BaseProxyGenerator_t3677225993 * __this, Il2CppObject* ___targetInterfaces, Il2CppObject* ___additionalInterfaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.BaseProxyGenerator::InitializeStaticFields(System.Type)
extern "C"  void BaseProxyGenerator_InitializeStaticFields_m820730644 (BaseProxyGenerator_t3677225993 * __this, Type_t * ___builtType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Generators.BaseProxyGenerator::ObtainProxyType(Castle.DynamicProxy.Generators.CacheKey,System.Func`3<System.String,Castle.DynamicProxy.Generators.INamingScope,System.Type>)
extern "C"  Type_t * BaseProxyGenerator_ObtainProxyType_m4064868828 (BaseProxyGenerator_t3677225993 * __this, CacheKey_t3539664464 * ___cacheKey, Func_3_t3845076768 * ___factory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.BaseProxyGenerator::IsConstructorVisible(System.Reflection.ConstructorInfo)
extern "C"  bool BaseProxyGenerator_IsConstructorVisible_m3098069222 (BaseProxyGenerator_t3677225993 * __this, ConstructorInfo_t3542137334 * ___constructor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.BaseProxyGenerator::OverridesEqualsAndGetHashCode(System.Type)
extern "C"  bool BaseProxyGenerator_OverridesEqualsAndGetHashCode_m2346762269 (BaseProxyGenerator_t3677225993 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
