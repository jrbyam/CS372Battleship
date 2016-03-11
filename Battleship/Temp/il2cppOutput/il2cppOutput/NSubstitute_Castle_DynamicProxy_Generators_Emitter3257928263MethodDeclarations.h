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

// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t685103793;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t4287691406;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.Emit.GenericTypeParameterBuilder>
struct Dictionary_2_t609968256;
// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t765486855;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1127461800;
// Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter
struct AbstractTypeEmitter_t2268871968;
// Castle.DynamicProxy.Generators.Emitters.ApplyGenArgs
struct ApplyGenArgs_t439661837;
// System.Reflection.Emit.GenericTypeParameterBuilder
struct GenericTypeParameterBuilder_t3267237648;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "mscorlib_System_Reflection_Emit_TypeBuilder4287691406.h"
#include "mscorlib_System_Reflection_Emit_MethodBuilder765486855.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter2268871968.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters439661837.h"
#include "mscorlib_System_Reflection_Emit_GenericTypeParamet3267237648.h"

// System.Reflection.Emit.GenericTypeParameterBuilder[] Castle.DynamicProxy.Generators.Emitters.GenericUtil::CopyGenericArguments(System.Reflection.MethodInfo,System.Reflection.Emit.TypeBuilder,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.Emit.GenericTypeParameterBuilder>)
extern "C"  GenericTypeParameterBuilderU5BU5D_t685103793* GenericUtil_CopyGenericArguments_m4228115441 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___methodToCopyGenericsFrom, TypeBuilder_t4287691406 * ___builder, Dictionary_2_t609968256 * ___name2GenericType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.GenericTypeParameterBuilder[] Castle.DynamicProxy.Generators.Emitters.GenericUtil::CopyGenericArguments(System.Reflection.MethodInfo,System.Reflection.Emit.MethodBuilder,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.Emit.GenericTypeParameterBuilder>)
extern "C"  GenericTypeParameterBuilderU5BU5D_t685103793* GenericUtil_CopyGenericArguments_m4140573272 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___methodToCopyGenericsFrom, MethodBuilder_t765486855 * ___builder, Dictionary_2_t609968256 * ___name2GenericType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Generators.Emitters.GenericUtil::ExtractCorrectType(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.Emit.GenericTypeParameterBuilder>)
extern "C"  Type_t * GenericUtil_ExtractCorrectType_m2475599491 (Il2CppObject * __this /* static, unused */, Type_t * ___paramType, Dictionary_2_t609968256 * ___name2GenericType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] Castle.DynamicProxy.Generators.Emitters.GenericUtil::ExtractParametersTypes(System.Reflection.ParameterInfo[],System.Collections.Generic.Dictionary`2<System.String,System.Reflection.Emit.GenericTypeParameterBuilder>)
extern "C"  TypeU5BU5D_t3431720054* GenericUtil_ExtractParametersTypes_m3262619802 (Il2CppObject * __this /* static, unused */, ParameterInfoU5BU5D_t1127461800* ___baseMethodParameters, Dictionary_2_t609968256 * ___name2GenericType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.Emit.GenericTypeParameterBuilder> Castle.DynamicProxy.Generators.Emitters.GenericUtil::GetGenericArgumentsMap(Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter)
extern "C"  Dictionary_2_t609968256 * GenericUtil_GetGenericArgumentsMap_m2408127927 (Il2CppObject * __this /* static, unused */, AbstractTypeEmitter_t2268871968 * ___parentEmitter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Generators.Emitters.GenericUtil::AdjustConstraintToNewGenericParameters(System.Type,System.Reflection.MethodInfo,System.Type[],System.Reflection.Emit.GenericTypeParameterBuilder[])
extern "C"  Type_t * GenericUtil_AdjustConstraintToNewGenericParameters_m4279363319 (Il2CppObject * __this /* static, unused */, Type_t * ___constraint, MethodInfo_t * ___methodToCopyGenericsFrom, TypeU5BU5D_t3431720054* ___originalGenericParameters, GenericTypeParameterBuilderU5BU5D_t685103793* ___newGenericParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] Castle.DynamicProxy.Generators.Emitters.GenericUtil::AdjustGenericConstraints(System.Reflection.MethodInfo,System.Reflection.Emit.GenericTypeParameterBuilder[],System.Type[],System.Type[])
extern "C"  TypeU5BU5D_t3431720054* GenericUtil_AdjustGenericConstraints_m3569875535 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___methodToCopyGenericsFrom, GenericTypeParameterBuilderU5BU5D_t685103793* ___newGenericParameters, TypeU5BU5D_t3431720054* ___originalGenericArguments, TypeU5BU5D_t3431720054* ___constraints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.GenericTypeParameterBuilder[] Castle.DynamicProxy.Generators.Emitters.GenericUtil::CopyGenericArguments(System.Reflection.MethodInfo,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.Emit.GenericTypeParameterBuilder>,Castle.DynamicProxy.Generators.Emitters.ApplyGenArgs)
extern "C"  GenericTypeParameterBuilderU5BU5D_t685103793* GenericUtil_CopyGenericArguments_m293770914 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___methodToCopyGenericsFrom, Dictionary_2_t609968256 * ___name2GenericType, ApplyGenArgs_t439661837 * ___genericParameterGenerator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.GenericUtil::CopyNonInheritableAttributes(System.Reflection.Emit.GenericTypeParameterBuilder,System.Type)
extern "C"  void GenericUtil_CopyNonInheritableAttributes_m4046539587 (Il2CppObject * __this /* static, unused */, GenericTypeParameterBuilder_t3267237648 * ___newGenericParameter, Type_t * ___originalGenericArgument, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Castle.DynamicProxy.Generators.Emitters.GenericUtil::GetArgumentNames(System.Type[])
extern "C"  StringU5BU5D_t2956870243* GenericUtil_GetArgumentNames_m1276398491 (Il2CppObject * __this /* static, unused */, TypeU5BU5D_t3431720054* ___originalGenericArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
