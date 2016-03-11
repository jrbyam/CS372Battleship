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

// Castle.DynamicProxy.Generators.AttributeDisassembler
struct AttributeDisassembler_t3863865185;
// System.Reflection.Emit.CustomAttributeBuilder
struct CustomAttributeBuilder_t562921149;
// System.Attribute
struct Attribute_t498693649;
// System.Type
struct Type_t;
// System.Exception
struct Exception_t1967233988;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1348579340;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t1144794227;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1127461800;
// System.Object
struct Il2CppObject;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2610273829;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Collections.Generic.List`1<System.Reflection.PropertyInfo>
struct List_1_t2287507338;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Attribute498693649.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Exception1967233988.h"
#include "mscorlib_System_Reflection_ConstructorInfo3542137334.h"
#include "mscorlib_System_Reflection_ParameterInfo2610273829.h"
#include "mscorlib_System_Reflection_PropertyInfo1490548369.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Attribu3863865185.h"

// System.Reflection.Emit.CustomAttributeBuilder Castle.DynamicProxy.Generators.AttributeDisassembler::Disassemble(System.Attribute)
extern "C"  CustomAttributeBuilder_t562921149 * AttributeDisassembler_Disassemble_m2253240321 (AttributeDisassembler_t3863865185 * __this, Attribute_t498693649 * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.CustomAttributeBuilder Castle.DynamicProxy.Generators.AttributeDisassembler::HandleError(System.Type,System.Exception)
extern "C"  CustomAttributeBuilder_t562921149 * AttributeDisassembler_HandleError_m1463222843 (AttributeDisassembler_t3863865185 * __this, Type_t * ___attributeType, Exception_t1967233988 * ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] Castle.DynamicProxy.Generators.AttributeDisassembler::GetConstructorAndArgs(System.Type,System.Attribute,System.Reflection.ConstructorInfo&)
extern "C"  ObjectU5BU5D_t11523773* AttributeDisassembler_GetConstructorAndArgs_m3054303245 (Il2CppObject * __this /* static, unused */, Type_t * ___attributeType, Attribute_t498693649 * ___attribute, ConstructorInfo_t3542137334 ** ___ctor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] Castle.DynamicProxy.Generators.AttributeDisassembler::GetPropertyValues(System.Type,System.Reflection.PropertyInfo[]&,System.Attribute,System.Attribute)
extern "C"  ObjectU5BU5D_t11523773* AttributeDisassembler_GetPropertyValues_m28649668 (Il2CppObject * __this /* static, unused */, Type_t * ___attType, PropertyInfoU5BU5D_t1348579340** ___properties, Attribute_t498693649 * ___original, Attribute_t498693649 * ___replicated, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] Castle.DynamicProxy.Generators.AttributeDisassembler::GetFieldValues(System.Type,System.Reflection.FieldInfo[]&,System.Attribute,System.Attribute)
extern "C"  ObjectU5BU5D_t11523773* AttributeDisassembler_GetFieldValues_m836109822 (Il2CppObject * __this /* static, unused */, Type_t * ___attType, FieldInfoU5BU5D_t1144794227** ___fields, Attribute_t498693649 * ___original, Attribute_t498693649 * ___replicated, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] Castle.DynamicProxy.Generators.AttributeDisassembler::InitializeConstructorArgs(System.Type,System.Attribute,System.Reflection.ParameterInfo[])
extern "C"  ObjectU5BU5D_t11523773* AttributeDisassembler_InitializeConstructorArgs_m3880970053 (Il2CppObject * __this /* static, unused */, Type_t * ___attributeType, Attribute_t498693649 * ___attribute, ParameterInfoU5BU5D_t1127461800* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Castle.DynamicProxy.Generators.AttributeDisassembler::GetArgumentValue(System.Type,System.Attribute,System.Reflection.ParameterInfo)
extern "C"  Il2CppObject * AttributeDisassembler_GetArgumentValue_m1457225940 (Il2CppObject * __this /* static, unused */, Type_t * ___attributeType, Attribute_t498693649 * ___attribute, ParameterInfo_t2610273829 * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo Castle.DynamicProxy.Generators.AttributeDisassembler::ReplaceIfBetterMatch(System.Reflection.ParameterInfo,System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
extern "C"  PropertyInfo_t * AttributeDisassembler_ReplaceIfBetterMatch_m582952313 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2610273829 * ___parameterInfo, PropertyInfo_t * ___propertyInfo, PropertyInfo_t * ___bestMatch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Castle.DynamicProxy.Generators.AttributeDisassembler::ConvertValue(System.Object,System.Type)
extern "C"  Il2CppObject * AttributeDisassembler_ConvertValue_m1643703260 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, Type_t * ___paramType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Castle.DynamicProxy.Generators.AttributeDisassembler::GetDefaultValueFor(System.Reflection.ParameterInfo)
extern "C"  Il2CppObject * AttributeDisassembler_GetDefaultValueFor_m3437028175 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2610273829 * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Reflection.PropertyInfo> Castle.DynamicProxy.Generators.AttributeDisassembler::GetPropertyCandidates(System.Type)
extern "C"  List_1_t2287507338 * AttributeDisassembler_GetPropertyCandidates_m2473692686 (Il2CppObject * __this /* static, unused */, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.AttributeDisassembler::AreAttributeElementsEqual(System.Object,System.Object)
extern "C"  bool AttributeDisassembler_AreAttributeElementsEqual_m523224363 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___first, Il2CppObject * ___second, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.AttributeDisassembler::AreStringsEqual(System.String,System.String)
extern "C"  bool AttributeDisassembler_AreStringsEqual_m1035789398 (Il2CppObject * __this /* static, unused */, String_t* ___first, String_t* ___second, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.AttributeDisassembler::Equals(Castle.DynamicProxy.Generators.AttributeDisassembler)
extern "C"  bool AttributeDisassembler_Equals_m943335894 (AttributeDisassembler_t3863865185 * __this, AttributeDisassembler_t3863865185 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.AttributeDisassembler::Equals(System.Object)
extern "C"  bool AttributeDisassembler_Equals_m2503982261 (AttributeDisassembler_t3863865185 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Castle.DynamicProxy.Generators.AttributeDisassembler::GetHashCode()
extern "C"  int32_t AttributeDisassembler_GetHashCode_m3170954073 (AttributeDisassembler_t3863865185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.AttributeDisassembler::.ctor()
extern "C"  void AttributeDisassembler__ctor_m3466427436 (AttributeDisassembler_t3863865185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
