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

// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t1144794227;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter
struct AbstractTypeEmitter_t2268871968;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t3813794579;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t3245061321;
// System.Reflection.MemberInfo
struct MemberInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter2268871968.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_BindingFlags2090192240.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"

// System.Reflection.FieldInfo[] Castle.DynamicProxy.Internal.TypeUtil::GetAllFields(System.Type)
extern "C"  FieldInfoU5BU5D_t1144794227* TypeUtil_GetAllFields_m1305288811 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] Castle.DynamicProxy.Internal.TypeUtil::GetAllInterfaces(System.Type[])
extern "C"  TypeU5BU5D_t3431720054* TypeUtil_GetAllInterfaces_m2288220179 (Il2CppObject * __this /* static, unused */, TypeU5BU5D_t3431720054* ___types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] Castle.DynamicProxy.Internal.TypeUtil::GetAllInterfaces(System.Type)
extern "C"  TypeU5BU5D_t3431720054* TypeUtil_GetAllInterfaces_m735341109 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Internal.TypeUtil::GetClosedParameterType(Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter,System.Type)
extern "C"  Type_t * TypeUtil_GetClosedParameterType_m1821447097 (Il2CppObject * __this /* static, unused */, AbstractTypeEmitter_t2268871968 * ___type, Type_t * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Internal.TypeUtil::IsFinalizer(System.Reflection.MethodInfo)
extern "C"  bool TypeUtil_IsFinalizer_m332360522 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___methodInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Internal.TypeUtil::IsGetType(System.Reflection.MethodInfo)
extern "C"  bool TypeUtil_IsGetType_m1525003238 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___methodInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Internal.TypeUtil::IsMemberwiseClone(System.Reflection.MethodInfo)
extern "C"  bool TypeUtil_IsMemberwiseClone_m582481333 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___methodInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Internal.TypeUtil::SetStaticField(System.Type,System.String,System.Reflection.BindingFlags,System.Object)
extern "C"  void TypeUtil_SetStaticField_m3903460282 (Il2CppObject * __this /* static, unused */, Type_t * ___type, String_t* ___fieldName, int32_t ___additionalFlags, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo[] Castle.DynamicProxy.Internal.TypeUtil::Sort(System.Reflection.MemberInfo[])
extern "C"  MemberInfoU5BU5D_t3813794579* TypeUtil_Sort_m2291178084 (Il2CppObject * __this /* static, unused */, MemberInfoU5BU5D_t3813794579* ___members, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Internal.TypeUtil::CloseGenericParametersIfAny(Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter,System.Type[])
extern "C"  bool TypeUtil_CloseGenericParametersIfAny_m3346742684 (Il2CppObject * __this /* static, unused */, AbstractTypeEmitter_t2268871968 * ___emitter, TypeU5BU5D_t3431720054* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] Castle.DynamicProxy.Internal.TypeUtil::Sort(System.Collections.Generic.ICollection`1<System.Type>)
extern "C"  TypeU5BU5D_t3431720054* TypeUtil_Sort_m623207805 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Castle.DynamicProxy.Internal.TypeUtil::<Sort>b__0(System.Reflection.MemberInfo,System.Reflection.MemberInfo)
extern "C"  int32_t TypeUtil_U3CSortU3Eb__0_m2696199295 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___l, MemberInfo_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Castle.DynamicProxy.Internal.TypeUtil::<Sort>b__2(System.Type,System.Type)
extern "C"  int32_t TypeUtil_U3CSortU3Eb__2_m40904227 (Il2CppObject * __this /* static, unused */, Type_t * ___l, Type_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
