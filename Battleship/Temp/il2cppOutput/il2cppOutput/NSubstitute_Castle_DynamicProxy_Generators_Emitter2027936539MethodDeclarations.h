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

// Castle.DynamicProxy.Generators.Emitters.MethodEmitter
struct MethodEmitter_t2027936539;
// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t765486855;
// Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter
struct AbstractTypeEmitter_t2268871968;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[]
struct ArgumentReferenceU5BU5D_t2172782151;
// Castle.DynamicProxy.Generators.Emitters.CodeBuilders.MethodCodeBuilder
struct MethodCodeBuilder_t3159038912;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t685103793;
// System.Reflection.Emit.CustomAttributeBuilder
struct CustomAttributeBuilder_t562921149;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1127461800;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2610273829;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_MethodBuilder765486855.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter2268871968.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_MethodAttributes455054214.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "mscorlib_System_Reflection_Emit_CustomAttributeBuil562921149.h"
#include "mscorlib_System_Reflection_ParameterInfo2610273829.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.MethodEmitter::.ctor(System.Reflection.Emit.MethodBuilder)
extern "C"  void MethodEmitter__ctor_m3497847941 (MethodEmitter_t2027936539 * __this, MethodBuilder_t765486855 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.MethodEmitter::.ctor(Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter,System.String,System.Reflection.MethodAttributes)
extern "C"  void MethodEmitter__ctor_m2394564434 (MethodEmitter_t2027936539 * __this, AbstractTypeEmitter_t2268871968 * ___owner, String_t* ___name, int32_t ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.MethodEmitter::.ctor(Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter,System.String,System.Reflection.MethodAttributes,System.Type,System.Type[])
extern "C"  void MethodEmitter__ctor_m4056388694 (MethodEmitter_t2027936539 * __this, AbstractTypeEmitter_t2268871968 * ___owner, String_t* ___name, int32_t ___attributes, Type_t * ___returnType, TypeU5BU5D_t3431720054* ___argumentTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.MethodEmitter::.ctor(Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter,System.String,System.Reflection.MethodAttributes,System.Reflection.MethodInfo)
extern "C"  void MethodEmitter__ctor_m3882785505 (MethodEmitter_t2027936539 * __this, AbstractTypeEmitter_t2268871968 * ___owner, String_t* ___name, int32_t ___attributes, MethodInfo_t * ___methodToUseAsATemplate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[] Castle.DynamicProxy.Generators.Emitters.MethodEmitter::get_Arguments()
extern "C"  ArgumentReferenceU5BU5D_t2172782151* MethodEmitter_get_Arguments_m268356568 (MethodEmitter_t2027936539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.CodeBuilders.MethodCodeBuilder Castle.DynamicProxy.Generators.Emitters.MethodEmitter::get_CodeBuilder()
extern "C"  MethodCodeBuilder_t3159038912 * MethodEmitter_get_CodeBuilder_m1826273300 (MethodEmitter_t2027936539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.GenericTypeParameterBuilder[] Castle.DynamicProxy.Generators.Emitters.MethodEmitter::get_GenericTypeParams()
extern "C"  GenericTypeParameterBuilderU5BU5D_t685103793* MethodEmitter_get_GenericTypeParams_m2748127095 (MethodEmitter_t2027936539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodBuilder Castle.DynamicProxy.Generators.Emitters.MethodEmitter::get_MethodBuilder()
extern "C"  MethodBuilder_t765486855 * MethodEmitter_get_MethodBuilder_m3826835109 (MethodEmitter_t2027936539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Generators.Emitters.MethodEmitter::get_ReturnType()
extern "C"  Type_t * MethodEmitter_get_ReturnType_m4087207701 (MethodEmitter_t2027936539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.Emitters.MethodEmitter::get_ImplementedByRuntime()
extern "C"  bool MethodEmitter_get_ImplementedByRuntime_m2212207324 (MethodEmitter_t2027936539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.MethodEmitter::DefineCustomAttribute(System.Reflection.Emit.CustomAttributeBuilder)
extern "C"  void MethodEmitter_DefineCustomAttribute_m2286067733 (MethodEmitter_t2027936539 * __this, CustomAttributeBuilder_t562921149 * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.MethodEmitter::SetParameters(System.Type[])
extern "C"  void MethodEmitter_SetParameters_m1576917285 (MethodEmitter_t2027936539 * __this, TypeU5BU5D_t3431720054* ___paramTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.MethodEmitter::EnsureValidCodeBlock()
extern "C"  void MethodEmitter_EnsureValidCodeBlock_m4081003582 (MethodEmitter_t2027936539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.MethodEmitter::Generate()
extern "C"  void MethodEmitter_Generate_m1554421649 (MethodEmitter_t2027936539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.MethodEmitter::DefineParameters(System.Reflection.ParameterInfo[])
extern "C"  void MethodEmitter_DefineParameters_m2638426108 (MethodEmitter_t2027936539 * __this, ParameterInfoU5BU5D_t1127461800* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.MethodEmitter::SetReturnType(System.Type)
extern "C"  void MethodEmitter_SetReturnType_m1584350503 (MethodEmitter_t2027936539 * __this, Type_t * ___returnType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.MethodEmitter::SetSignature(System.Type,System.Reflection.ParameterInfo,System.Type[],System.Reflection.ParameterInfo[])
extern "C"  void MethodEmitter_SetSignature_m1250515016 (MethodEmitter_t2027936539 * __this, Type_t * ___returnType, ParameterInfo_t2610273829 * ___returnParameter, TypeU5BU5D_t3431720054* ___parameters, ParameterInfoU5BU5D_t1127461800* ___baseMethodParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] Castle.DynamicProxy.Generators.Emitters.MethodEmitter::<SetSignature>b__0(System.Reflection.ParameterInfo)
extern "C"  TypeU5BU5D_t3431720054* MethodEmitter_U3CSetSignatureU3Eb__0_m1112278913 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2610273829 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] Castle.DynamicProxy.Generators.Emitters.MethodEmitter::<SetSignature>b__1(System.Reflection.ParameterInfo)
extern "C"  TypeU5BU5D_t3431720054* MethodEmitter_U3CSetSignatureU3Eb__1_m2137770912 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2610273829 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
