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

// Castle.DynamicProxy.IAttributeDisassembler
struct IAttributeDisassembler_t578618668;
// System.Reflection.Emit.CustomAttributeBuilder
struct CustomAttributeBuilder_t562921149;
// System.Reflection.CustomAttributeData
struct CustomAttributeData_t2584644259;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t2726907876;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IEnumerable`1<System.Reflection.CustomAttributeNamedArgument>
struct IEnumerable_1_t3190889485;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1348579340;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t1144794227;
// System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.CustomAttributeBuilder>
struct IEnumerable_1_t3435075505;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2610273829;
// System.Type
struct Type_t;
// System.Attribute
struct Attribute_t498693649;
// System.Type[]
struct TypeU5BU5D_t3431720054;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_CustomAttributeData2584644259.h"
#include "mscorlib_System_Reflection_CustomAttributeTypedArgu560415562.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"
#include "mscorlib_System_Reflection_ParameterInfo2610273829.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Attribute498693649.h"

// Castle.DynamicProxy.IAttributeDisassembler Castle.DynamicProxy.Internal.AttributeUtil::get_FallbackDisassembler()
extern "C"  Il2CppObject * AttributeUtil_get_FallbackDisassembler_m3350410405 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.CustomAttributeBuilder Castle.DynamicProxy.Internal.AttributeUtil::CreateBuilder(System.Reflection.CustomAttributeData)
extern "C"  CustomAttributeBuilder_t562921149 * AttributeUtil_CreateBuilder_m3721554833 (Il2CppObject * __this /* static, unused */, CustomAttributeData_t2584644259 * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] Castle.DynamicProxy.Internal.AttributeUtil::GetArguments(System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>)
extern "C"  ObjectU5BU5D_t11523773* AttributeUtil_GetArguments_m1649036781 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___constructorArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Castle.DynamicProxy.Internal.AttributeUtil::ReadAttributeValue(System.Reflection.CustomAttributeTypedArgument)
extern "C"  Il2CppObject * AttributeUtil_ReadAttributeValue_m758851077 (Il2CppObject * __this /* static, unused */, CustomAttributeTypedArgument_t560415562  ___argument, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Internal.AttributeUtil::GetSettersAndFields(System.Collections.Generic.IEnumerable`1<System.Reflection.CustomAttributeNamedArgument>,System.Reflection.PropertyInfo[]&,System.Object[]&,System.Reflection.FieldInfo[]&,System.Object[]&)
extern "C"  void AttributeUtil_GetSettersAndFields_m3158391330 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___namedArguments, PropertyInfoU5BU5D_t1348579340** ___properties, ObjectU5BU5D_t11523773** ___propertyValues, FieldInfoU5BU5D_t1144794227** ___fields, ObjectU5BU5D_t11523773** ___fieldValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.CustomAttributeBuilder> Castle.DynamicProxy.Internal.AttributeUtil::GetNonInheritableAttributes(System.Reflection.MemberInfo)
extern "C"  Il2CppObject* AttributeUtil_GetNonInheritableAttributes_m3380528147 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.CustomAttributeBuilder> Castle.DynamicProxy.Internal.AttributeUtil::GetNonInheritableAttributes(System.Reflection.ParameterInfo)
extern "C"  Il2CppObject* AttributeUtil_GetNonInheritableAttributes_m2014582912 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2610273829 * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Internal.AttributeUtil::ShouldSkipAttributeReplication(System.Type)
extern "C"  bool AttributeUtil_ShouldSkipAttributeReplication_m1632857194 (Il2CppObject * __this /* static, unused */, Type_t * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Internal.AttributeUtil::SpecialCaseAttributThatShouldNotBeReplicated(System.Type)
extern "C"  bool AttributeUtil_SpecialCaseAttributThatShouldNotBeReplicated_m281636455 (Il2CppObject * __this /* static, unused */, Type_t * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.CustomAttributeBuilder Castle.DynamicProxy.Internal.AttributeUtil::CreateBuilder(System.Type,System.Object[])
extern "C"  CustomAttributeBuilder_t562921149 * AttributeUtil_CreateBuilder_m275059797 (Il2CppObject * __this /* static, unused */, Type_t * ___attribute, ObjectU5BU5D_t11523773* ___constructorArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.CustomAttributeBuilder Castle.DynamicProxy.Internal.AttributeUtil::CreateBuilder(System.Attribute)
extern "C"  CustomAttributeBuilder_t562921149 * AttributeUtil_CreateBuilder_m1351374227 (Il2CppObject * __this /* static, unused */, Attribute_t498693649 * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] Castle.DynamicProxy.Internal.AttributeUtil::GetTypes(System.Object[])
extern "C"  TypeU5BU5D_t3431720054* AttributeUtil_GetTypes_m145807986 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t11523773* ___objects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Internal.AttributeUtil::.cctor()
extern "C"  void AttributeUtil__cctor_m1138120558 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
