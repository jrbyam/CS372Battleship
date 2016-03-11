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

// Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter
struct AbstractTypeEmitter_t2268871968;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t4287691406;
// System.Type
struct Type_t;
// Castle.DynamicProxy.Generators.Emitters.TypeConstructorEmitter
struct TypeConstructorEmitter_t1296204540;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t685103793;
// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Castle.DynamicProxy.Generators.Emitters.ConstructorEmitter
struct ConstructorEmitter_t3121537570;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[]
struct ArgumentReferenceU5BU5D_t2172782151;
// Castle.DynamicProxy.Generators.Emitters.EventEmitter
struct EventEmitter_t4227705730;
// System.String
struct String_t;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference
struct FieldReference_t994901333;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter
struct MethodEmitter_t2027936539;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// Castle.DynamicProxy.Generators.Emitters.PropertyEmitter
struct PropertyEmitter_t1619303335;
// System.Reflection.Emit.CustomAttributeBuilder
struct CustomAttributeBuilder_t562921149;
// System.Collections.Generic.IEnumerable`1<Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference>
struct IEnumerable_1_t3867055689;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_TypeBuilder4287691406.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter1296204540.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_EventAttributes1168020927.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_FieldAttributes3381152799.h"
#include "mscorlib_System_Reflection_MethodAttributes455054214.h"
#include "mscorlib_System_Reflection_PropertyAttributes3095558010.h"
#include "mscorlib_System_Reflection_Emit_CustomAttributeBuil562921149.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::.ctor(System.Reflection.Emit.TypeBuilder)
extern "C"  void AbstractTypeEmitter__ctor_m964386489 (AbstractTypeEmitter_t2268871968 * __this, TypeBuilder_t4287691406 * ___typeBuilder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::get_BaseType()
extern "C"  Type_t * AbstractTypeEmitter_get_BaseType_m2206887803 (AbstractTypeEmitter_t2268871968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.TypeConstructorEmitter Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::get_ClassConstructor()
extern "C"  TypeConstructorEmitter_t1296204540 * AbstractTypeEmitter_get_ClassConstructor_m3072385741 (AbstractTypeEmitter_t2268871968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::set_ClassConstructor(Castle.DynamicProxy.Generators.Emitters.TypeConstructorEmitter)
extern "C"  void AbstractTypeEmitter_set_ClassConstructor_m517892078 (AbstractTypeEmitter_t2268871968 * __this, TypeConstructorEmitter_t1296204540 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.GenericTypeParameterBuilder[] Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::get_GenericTypeParams()
extern "C"  GenericTypeParameterBuilderU5BU5D_t685103793* AbstractTypeEmitter_get_GenericTypeParams_m2459076946 (AbstractTypeEmitter_t2268871968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::get_TypeBuilder()
extern "C"  TypeBuilder_t4287691406 * AbstractTypeEmitter_get_TypeBuilder_m1717518304 (AbstractTypeEmitter_t2268871968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::AddCustomAttributes(Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  void AbstractTypeEmitter_AddCustomAttributes_m3481260681 (AbstractTypeEmitter_t2268871968 * __this, ProxyGenerationOptions_t351299295 * ___proxyGenerationOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::BuildType()
extern "C"  Type_t * AbstractTypeEmitter_BuildType_m3961174147 (AbstractTypeEmitter_t2268871968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::CopyGenericParametersFromMethod(System.Reflection.MethodInfo)
extern "C"  void AbstractTypeEmitter_CopyGenericParametersFromMethod_m4195970245 (AbstractTypeEmitter_t2268871968 * __this, MethodInfo_t * ___methodToCopyGenericsFrom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.ConstructorEmitter Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::CreateConstructor(Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[])
extern "C"  ConstructorEmitter_t3121537570 * AbstractTypeEmitter_CreateConstructor_m4088947404 (AbstractTypeEmitter_t2268871968 * __this, ArgumentReferenceU5BU5D_t2172782151* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::CreateDefaultConstructor()
extern "C"  void AbstractTypeEmitter_CreateDefaultConstructor_m3036161846 (AbstractTypeEmitter_t2268871968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.EventEmitter Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::CreateEvent(System.String,System.Reflection.EventAttributes,System.Type)
extern "C"  EventEmitter_t4227705730 * AbstractTypeEmitter_CreateEvent_m4230137340 (AbstractTypeEmitter_t2268871968 * __this, String_t* ___name, int32_t ___atts, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::CreateField(System.String,System.Type)
extern "C"  FieldReference_t994901333 * AbstractTypeEmitter_CreateField_m2920410040 (AbstractTypeEmitter_t2268871968 * __this, String_t* ___name, Type_t * ___fieldType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::CreateField(System.String,System.Type,System.Boolean)
extern "C"  FieldReference_t994901333 * AbstractTypeEmitter_CreateField_m1620213957 (AbstractTypeEmitter_t2268871968 * __this, String_t* ___name, Type_t * ___fieldType, bool ___serializable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::CreateField(System.String,System.Type,System.Reflection.FieldAttributes)
extern "C"  FieldReference_t994901333 * AbstractTypeEmitter_CreateField_m3824359831 (AbstractTypeEmitter_t2268871968 * __this, String_t* ___name, Type_t * ___fieldType, int32_t ___atts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::CreateMethod(System.String,System.Reflection.MethodAttributes,System.Type,System.Type[])
extern "C"  MethodEmitter_t2027936539 * AbstractTypeEmitter_CreateMethod_m3072002432 (AbstractTypeEmitter_t2268871968 * __this, String_t* ___name, int32_t ___attrs, Type_t * ___returnType, TypeU5BU5D_t3431720054* ___argumentTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::CreateMethod(System.String,System.Type,System.Type[])
extern "C"  MethodEmitter_t2027936539 * AbstractTypeEmitter_CreateMethod_m3372955058 (AbstractTypeEmitter_t2268871968 * __this, String_t* ___name, Type_t * ___returnType, TypeU5BU5D_t3431720054* ___parameterTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::CreateMethod(System.String,System.Reflection.MethodInfo)
extern "C"  MethodEmitter_t2027936539 * AbstractTypeEmitter_CreateMethod_m1856318469 (AbstractTypeEmitter_t2268871968 * __this, String_t* ___name, MethodInfo_t * ___methodToUseAsATemplate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::CreateMethod(System.String,System.Reflection.MethodAttributes,System.Reflection.MethodInfo)
extern "C"  MethodEmitter_t2027936539 * AbstractTypeEmitter_CreateMethod_m4068351351 (AbstractTypeEmitter_t2268871968 * __this, String_t* ___name, int32_t ___attributes, MethodInfo_t * ___methodToUseAsATemplate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.PropertyEmitter Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::CreateProperty(System.String,System.Reflection.PropertyAttributes,System.Type,System.Type[])
extern "C"  PropertyEmitter_t1619303335 * AbstractTypeEmitter_CreateProperty_m1979714188 (AbstractTypeEmitter_t2268871968 * __this, String_t* ___name, int32_t ___attributes, Type_t * ___propertyType, TypeU5BU5D_t3431720054* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::CreateStaticField(System.String,System.Type)
extern "C"  FieldReference_t994901333 * AbstractTypeEmitter_CreateStaticField_m145479622 (AbstractTypeEmitter_t2268871968 * __this, String_t* ___name, Type_t * ___fieldType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::CreateStaticField(System.String,System.Type,System.Reflection.FieldAttributes)
extern "C"  FieldReference_t994901333 * AbstractTypeEmitter_CreateStaticField_m3370943013 (AbstractTypeEmitter_t2268871968 * __this, String_t* ___name, Type_t * ___fieldType, int32_t ___atts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.ConstructorEmitter Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::CreateTypeConstructor()
extern "C"  ConstructorEmitter_t3121537570 * AbstractTypeEmitter_CreateTypeConstructor_m728476318 (AbstractTypeEmitter_t2268871968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::DefineCustomAttribute(System.Reflection.Emit.CustomAttributeBuilder)
extern "C"  void AbstractTypeEmitter_DefineCustomAttribute_m3802001370 (AbstractTypeEmitter_t2268871968 * __this, CustomAttributeBuilder_t562921149 * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference> Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::GetAllFields()
extern "C"  Il2CppObject* AbstractTypeEmitter_GetAllFields_m1155441014 (AbstractTypeEmitter_t2268871968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::GetField(System.String)
extern "C"  FieldReference_t994901333 * AbstractTypeEmitter_GetField_m1137368475 (AbstractTypeEmitter_t2268871968 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::GetGenericArgument(System.String)
extern "C"  Type_t * AbstractTypeEmitter_GetGenericArgument_m4235869085 (AbstractTypeEmitter_t2268871968 * __this, String_t* ___genericArgumentName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::GetGenericArgumentsFor(System.Type)
extern "C"  TypeU5BU5D_t3431720054* AbstractTypeEmitter_GetGenericArgumentsFor_m2763479068 (AbstractTypeEmitter_t2268871968 * __this, Type_t * ___genericType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::GetGenericArgumentsFor(System.Reflection.MethodInfo)
extern "C"  TypeU5BU5D_t3431720054* AbstractTypeEmitter_GetGenericArgumentsFor_m4252790570 (AbstractTypeEmitter_t2268871968 * __this, MethodInfo_t * ___genericMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::SetGenericTypeParameters(System.Reflection.Emit.GenericTypeParameterBuilder[])
extern "C"  void AbstractTypeEmitter_SetGenericTypeParameters_m1653684012 (AbstractTypeEmitter_t2268871968 * __this, GenericTypeParameterBuilderU5BU5D_t685103793* ___genericTypeParameterBuilders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::CreateType(System.Reflection.Emit.TypeBuilder)
extern "C"  Type_t * AbstractTypeEmitter_CreateType_m3371975955 (AbstractTypeEmitter_t2268871968 * __this, TypeBuilder_t4287691406 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter::EnsureBuildersAreInAValidState()
extern "C"  void AbstractTypeEmitter_EnsureBuildersAreInAValidState_m683733556 (AbstractTypeEmitter_t2268871968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
