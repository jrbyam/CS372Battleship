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

// Castle.DynamicProxy.Generators.Emitters.PropertyEmitter
struct PropertyEmitter_t1619303335;
// Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter
struct AbstractTypeEmitter_t2268871968;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter
struct MethodEmitter_t2027936539;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Emit.CustomAttributeBuilder
struct CustomAttributeBuilder_t562921149;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter2268871968.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_PropertyAttributes3095558010.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_MethodAttributes455054214.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "mscorlib_System_Reflection_Emit_CustomAttributeBuil562921149.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.PropertyEmitter::.ctor(Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter,System.String,System.Reflection.PropertyAttributes,System.Type,System.Type[])
extern "C"  void PropertyEmitter__ctor_m3322341398 (PropertyEmitter_t1619303335 * __this, AbstractTypeEmitter_t2268871968 * ___parentTypeEmitter, String_t* ___name, int32_t ___attributes, Type_t * ___propertyType, TypeU5BU5D_t3431720054* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Generators.Emitters.PropertyEmitter::get_ReturnType()
extern "C"  Type_t * PropertyEmitter_get_ReturnType_m867286945 (PropertyEmitter_t1619303335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter Castle.DynamicProxy.Generators.Emitters.PropertyEmitter::CreateGetMethod(System.String,System.Reflection.MethodAttributes,System.Reflection.MethodInfo,System.Type[])
extern "C"  MethodEmitter_t2027936539 * PropertyEmitter_CreateGetMethod_m4142658557 (PropertyEmitter_t1619303335 * __this, String_t* ___name, int32_t ___attrs, MethodInfo_t * ___methodToOverride, TypeU5BU5D_t3431720054* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter Castle.DynamicProxy.Generators.Emitters.PropertyEmitter::CreateGetMethod(System.String,System.Reflection.MethodAttributes,System.Reflection.MethodInfo)
extern "C"  MethodEmitter_t2027936539 * PropertyEmitter_CreateGetMethod_m952175468 (PropertyEmitter_t1619303335 * __this, String_t* ___name, int32_t ___attributes, MethodInfo_t * ___methodToOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter Castle.DynamicProxy.Generators.Emitters.PropertyEmitter::CreateSetMethod(System.String,System.Reflection.MethodAttributes,System.Reflection.MethodInfo,System.Type[])
extern "C"  MethodEmitter_t2027936539 * PropertyEmitter_CreateSetMethod_m1532341105 (PropertyEmitter_t1619303335 * __this, String_t* ___name, int32_t ___attrs, MethodInfo_t * ___methodToOverride, TypeU5BU5D_t3431720054* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter Castle.DynamicProxy.Generators.Emitters.PropertyEmitter::CreateSetMethod(System.String,System.Reflection.MethodAttributes,System.Reflection.MethodInfo)
extern "C"  MethodEmitter_t2027936539 * PropertyEmitter_CreateSetMethod_m3573947872 (PropertyEmitter_t1619303335 * __this, String_t* ___name, int32_t ___attributes, MethodInfo_t * ___methodToOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.PropertyEmitter::DefineCustomAttribute(System.Reflection.Emit.CustomAttributeBuilder)
extern "C"  void PropertyEmitter_DefineCustomAttribute_m1580280865 (PropertyEmitter_t1619303335 * __this, CustomAttributeBuilder_t562921149 * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.PropertyEmitter::EnsureValidCodeBlock()
extern "C"  void PropertyEmitter_EnsureValidCodeBlock_m2326637898 (PropertyEmitter_t1619303335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.PropertyEmitter::Generate()
extern "C"  void PropertyEmitter_Generate_m1432701597 (PropertyEmitter_t1619303335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
