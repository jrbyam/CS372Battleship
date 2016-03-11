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

// System.Reflection.Emit.GenericTypeParameterBuilder
struct GenericTypeParameterBuilder_t3267237648;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t4287691406;
// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t765486855;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// System.Reflection.Binder
struct Binder_t4180926488;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t3379147067;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t3572023667;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.EventInfo[]
struct EventInfoU5BU5D_t511103059;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t1144794227;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1668237648;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1348579340;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Reflection.Assembly
struct Assembly_t1882292308;
// System.Reflection.Module
struct Module_t206139610;
// System.Reflection.MethodBase
struct MethodBase_t3461000640;
// System.Reflection.Emit.CustomAttributeBuilder
struct CustomAttributeBuilder_t562921149;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_TypeBuilder4287691406.h"
#include "mscorlib_System_Reflection_Emit_MethodBuilder765486855.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_GenericParameterAttribu3719437559.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_TypeAttributes104824479.h"
#include "mscorlib_System_Reflection_BindingFlags2090192240.h"
#include "mscorlib_System_Reflection_Binder4180926488.h"
#include "mscorlib_System_Reflection_CallingConventions3959446060.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "mscorlib_System_Guid2778838590.h"
#include "mscorlib_System_Reflection_InterfaceMapping455787459.h"
#include "mscorlib_System_RuntimeTypeHandle1864875887.h"
#include "mscorlib_System_Reflection_Emit_CustomAttributeBuil562921149.h"

// System.Void System.Reflection.Emit.GenericTypeParameterBuilder::.ctor(System.Reflection.Emit.TypeBuilder,System.Reflection.Emit.MethodBuilder,System.String,System.Int32)
extern "C"  void GenericTypeParameterBuilder__ctor_m3582951156 (GenericTypeParameterBuilder_t3267237648 * __this, TypeBuilder_t4287691406 * ___tbuilder, MethodBuilder_t765486855 * ___mbuilder, String_t* ___name, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.GenericTypeParameterBuilder::SetInterfaceConstraints(System.Type[])
extern "C"  void GenericTypeParameterBuilder_SetInterfaceConstraints_m1749016308 (GenericTypeParameterBuilder_t3267237648 * __this, TypeU5BU5D_t3431720054* ___interfaceConstraints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.GenericTypeParameterBuilder::SetGenericParameterAttributes(System.Reflection.GenericParameterAttributes)
extern "C"  void GenericTypeParameterBuilder_SetGenericParameterAttributes_m3417963938 (GenericTypeParameterBuilder_t3267237648 * __this, int32_t ___genericParameterAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.GenericTypeParameterBuilder::initialize()
extern "C"  void GenericTypeParameterBuilder_initialize_m1470973262 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsSubclassOf(System.Type)
extern "C"  bool GenericTypeParameterBuilder_IsSubclassOf_m952653568 (GenericTypeParameterBuilder_t3267237648 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.GenericTypeParameterBuilder::GetAttributeFlagsImpl()
extern "C"  int32_t GenericTypeParameterBuilder_GetAttributeFlagsImpl_m1663262351 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t3542137334 * GenericTypeParameterBuilder_GetConstructorImpl_m545561302 (GenericTypeParameterBuilder_t3267237648 * __this, int32_t ___bindingAttr, Binder_t4180926488 * ___binder, int32_t ___callConvention, TypeU5BU5D_t3431720054* ___types, ParameterModifierU5BU5D_t3379147067* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t3572023667* GenericTypeParameterBuilder_GetConstructors_m3161529504 (GenericTypeParameterBuilder_t3267237648 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * GenericTypeParameterBuilder_GetEvent_m2196072623 (GenericTypeParameterBuilder_t3267237648 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetEvents(System.Reflection.BindingFlags)
extern "C"  EventInfoU5BU5D_t511103059* GenericTypeParameterBuilder_GetEvents_m2108760992 (GenericTypeParameterBuilder_t3267237648 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C"  FieldInfo_t * GenericTypeParameterBuilder_GetField_m2024354991 (GenericTypeParameterBuilder_t3267237648 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetFields(System.Reflection.BindingFlags)
extern "C"  FieldInfoU5BU5D_t1144794227* GenericTypeParameterBuilder_GetFields_m128303008 (GenericTypeParameterBuilder_t3267237648 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetInterfaces()
extern "C"  TypeU5BU5D_t3431720054* GenericTypeParameterBuilder_GetInterfaces_m437688604 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t1668237648* GenericTypeParameterBuilder_GetMethods_m1386969194 (GenericTypeParameterBuilder_t3267237648 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * GenericTypeParameterBuilder_GetMethodImpl_m3486858252 (GenericTypeParameterBuilder_t3267237648 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t4180926488 * ___binder, int32_t ___callConvention, TypeU5BU5D_t3431720054* ___types, ParameterModifierU5BU5D_t3379147067* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetProperties(System.Reflection.BindingFlags)
extern "C"  PropertyInfoU5BU5D_t1348579340* GenericTypeParameterBuilder_GetProperties_m2721295173 (GenericTypeParameterBuilder_t3267237648 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * GenericTypeParameterBuilder_GetPropertyImpl_m3933236897 (GenericTypeParameterBuilder_t3267237648 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t4180926488 * ___binder, Type_t * ___returnType, TypeU5BU5D_t3431720054* ___types, ParameterModifierU5BU5D_t3379147067* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::HasElementTypeImpl()
extern "C"  bool GenericTypeParameterBuilder_HasElementTypeImpl_m814733436 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsAssignableFrom(System.Type)
extern "C"  bool GenericTypeParameterBuilder_IsAssignableFrom_m2291646236 (GenericTypeParameterBuilder_t3267237648 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsInstanceOfType(System.Object)
extern "C"  bool GenericTypeParameterBuilder_IsInstanceOfType_m2833041284 (GenericTypeParameterBuilder_t3267237648 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsArrayImpl()
extern "C"  bool GenericTypeParameterBuilder_IsArrayImpl_m3637457745 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsByRefImpl()
extern "C"  bool GenericTypeParameterBuilder_IsByRefImpl_m1167485812 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPointerImpl()
extern "C"  bool GenericTypeParameterBuilder_IsPointerImpl_m763708021 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPrimitiveImpl()
extern "C"  bool GenericTypeParameterBuilder_IsPrimitiveImpl_m2352879583 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsValueTypeImpl()
extern "C"  bool GenericTypeParameterBuilder_IsValueTypeImpl_m2835178563 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.GenericTypeParameterBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C"  Il2CppObject * GenericTypeParameterBuilder_InvokeMember_m2055705555 (GenericTypeParameterBuilder_t3267237648 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t4180926488 * ___binder, Il2CppObject * ___target, ObjectU5BU5D_t11523773* ___args, ParameterModifierU5BU5D_t3379147067* ___modifiers, CultureInfo_t3603717042 * ___culture, StringU5BU5D_t2956870243* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetElementType()
extern "C"  Type_t * GenericTypeParameterBuilder_GetElementType_m3868625048 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_UnderlyingSystemType()
extern "C"  Type_t * GenericTypeParameterBuilder_get_UnderlyingSystemType_m2109324167 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.GenericTypeParameterBuilder::get_Assembly()
extern "C"  Assembly_t1882292308 * GenericTypeParameterBuilder_get_Assembly_m3923688878 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_AssemblyQualifiedName()
extern "C"  String_t* GenericTypeParameterBuilder_get_AssemblyQualifiedName_m1986145049 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType()
extern "C"  Type_t * GenericTypeParameterBuilder_get_BaseType_m1305573036 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_FullName()
extern "C"  String_t* GenericTypeParameterBuilder_get_FullName_m79189380 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Reflection.Emit.GenericTypeParameterBuilder::get_GUID()
extern "C"  Guid_t2778838590  GenericTypeParameterBuilder_get_GUID_m3112356539 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool GenericTypeParameterBuilder_IsDefined_m1789048485 (GenericTypeParameterBuilder_t3267237648 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t11523773* GenericTypeParameterBuilder_GetCustomAttributes_m3157542694 (GenericTypeParameterBuilder_t3267237648 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t11523773* GenericTypeParameterBuilder_GetCustomAttributes_m2400114195 (GenericTypeParameterBuilder_t3267237648 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.InterfaceMapping System.Reflection.Emit.GenericTypeParameterBuilder::GetInterfaceMap(System.Type)
extern "C"  InterfaceMapping_t455787459  GenericTypeParameterBuilder_GetInterfaceMap_m3640510542 (GenericTypeParameterBuilder_t3267237648 * __this, Type_t * ___interfaceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Name()
extern "C"  String_t* GenericTypeParameterBuilder_get_Name_m1381612181 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Namespace()
extern "C"  String_t* GenericTypeParameterBuilder_get_Namespace_m2668458867 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.GenericTypeParameterBuilder::get_Module()
extern "C"  Module_t206139610 * GenericTypeParameterBuilder_get_Module_m4212322478 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_DeclaringType()
extern "C"  Type_t * GenericTypeParameterBuilder_get_DeclaringType_m2257580418 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_ReflectedType()
extern "C"  Type_t * GenericTypeParameterBuilder_get_ReflectedType_m1488027191 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.GenericTypeParameterBuilder::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t1864875887  GenericTypeParameterBuilder_get_TypeHandle_m1599953625 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericArguments()
extern "C"  TypeU5BU5D_t3431720054* GenericTypeParameterBuilder_GetGenericArguments_m4080596481 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericTypeDefinition()
extern "C"  Type_t * GenericTypeParameterBuilder_GetGenericTypeDefinition_m1742966118 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_ContainsGenericParameters()
extern "C"  bool GenericTypeParameterBuilder_get_ContainsGenericParameters_m2518773659 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericParameter()
extern "C"  bool GenericTypeParameterBuilder_get_IsGenericParameter_m633698693 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericType()
extern "C"  bool GenericTypeParameterBuilder_get_IsGenericType_m1264804288 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericTypeDefinition()
extern "C"  bool GenericTypeParameterBuilder_get_IsGenericTypeDefinition_m39731123 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.GenericParameterAttributes System.Reflection.Emit.GenericTypeParameterBuilder::get_GenericParameterAttributes()
extern "C"  int32_t GenericTypeParameterBuilder_get_GenericParameterAttributes_m975856398 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.GenericTypeParameterBuilder::get_GenericParameterPosition()
extern "C"  int32_t GenericTypeParameterBuilder_get_GenericParameterPosition_m2281373790 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericParameterConstraints()
extern "C"  TypeU5BU5D_t3431720054* GenericTypeParameterBuilder_GetGenericParameterConstraints_m1476720932 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Emit.GenericTypeParameterBuilder::get_DeclaringMethod()
extern "C"  MethodBase_t3461000640 * GenericTypeParameterBuilder_get_DeclaringMethod_m1191708846 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.GenericTypeParameterBuilder::SetCustomAttribute(System.Reflection.Emit.CustomAttributeBuilder)
extern "C"  void GenericTypeParameterBuilder_SetCustomAttribute_m2862374180 (GenericTypeParameterBuilder_t3267237648 * __this, CustomAttributeBuilder_t562921149 * ___customBuilder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.GenericTypeParameterBuilder::not_supported()
extern "C"  Exception_t1967233988 * GenericTypeParameterBuilder_not_supported_m716718603 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::ToString()
extern "C"  String_t* GenericTypeParameterBuilder_ToString_m743337261 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::Equals(System.Object)
extern "C"  bool GenericTypeParameterBuilder_Equals_m1747582869 (GenericTypeParameterBuilder_t3267237648 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.GenericTypeParameterBuilder::GetHashCode()
extern "C"  int32_t GenericTypeParameterBuilder_GetHashCode_m3071919225 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::MakeArrayType()
extern "C"  Type_t * GenericTypeParameterBuilder_MakeArrayType_m1728494415 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::MakeArrayType(System.Int32)
extern "C"  Type_t * GenericTypeParameterBuilder_MakeArrayType_m1958933024 (GenericTypeParameterBuilder_t3267237648 * __this, int32_t ___rank, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::MakeByRefType()
extern "C"  Type_t * GenericTypeParameterBuilder_MakeByRefType_m3553489778 (GenericTypeParameterBuilder_t3267237648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::MakeGenericType(System.Type[])
extern "C"  Type_t * GenericTypeParameterBuilder_MakeGenericType_m3404220394 (GenericTypeParameterBuilder_t3267237648 * __this, TypeU5BU5D_t3431720054* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
