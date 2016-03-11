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

// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t765486855;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t4287691406;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t2239438067;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1127461800;
// System.Object
struct Il2CppObject;
// System.Reflection.Binder
struct Binder_t4180926488;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;
// System.Reflection.Emit.ParameterBuilder
struct ParameterBuilder_t3382011775;
// System.Reflection.Emit.CustomAttributeBuilder
struct CustomAttributeBuilder_t562921149;
// System.Exception
struct Exception_t1967233988;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t685103793;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Reflection.Module
struct Module_t206139610;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_TypeBuilder4287691406.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_MethodAttributes455054214.h"
#include "mscorlib_System_Reflection_CallingConventions3959446060.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_RuntimeMethodHandle2360005078.h"
#include "mscorlib_System_Reflection_Emit_MethodToken2392331557.h"
#include "mscorlib_System_Reflection_MethodImplAttributes3301691718.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_BindingFlags2090192240.h"
#include "mscorlib_System_Reflection_Binder4180926488.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "mscorlib_System_Reflection_ParameterAttributes4282458126.h"
#include "mscorlib_System_Reflection_Emit_CustomAttributeBuil562921149.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Void System.Reflection.Emit.MethodBuilder::.ctor(System.Reflection.Emit.TypeBuilder,System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[],System.Type[],System.Type[],System.Type[][],System.Type[][])
extern "C"  void MethodBuilder__ctor_m531243935 (MethodBuilder_t765486855 * __this, TypeBuilder_t4287691406 * ___tb, String_t* ___name, int32_t ___attributes, int32_t ___callingConvention, Type_t * ___returnType, TypeU5BU5D_t3431720054* ___returnModReq, TypeU5BU5D_t3431720054* ___returnModOpt, TypeU5BU5D_t3431720054* ___parameterTypes, TypeU5BU5DU5BU5D_t2239438067* ___paramModReq, TypeU5BU5DU5BU5D_t2239438067* ___paramModOpt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_ContainsGenericParameters()
extern "C"  bool MethodBuilder_get_ContainsGenericParameters_m3420227972 (MethodBuilder_t765486855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.MethodBuilder::get_MethodHandle()
extern "C"  RuntimeMethodHandle_t2360005078  MethodBuilder_get_MethodHandle_m1281364144 (MethodBuilder_t765486855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReturnType()
extern "C"  Type_t * MethodBuilder_get_ReturnType_m1886811394 (MethodBuilder_t765486855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReflectedType()
extern "C"  Type_t * MethodBuilder_get_ReflectedType_m3784090528 (MethodBuilder_t765486855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_DeclaringType()
extern "C"  Type_t * MethodBuilder_get_DeclaringType_m258676459 (MethodBuilder_t765486855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::get_Name()
extern "C"  String_t* MethodBuilder_get_Name_m3413262028 (MethodBuilder_t765486855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.MethodBuilder::get_Attributes()
extern "C"  int32_t MethodBuilder_get_Attributes_m2121429796 (MethodBuilder_t765486855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.MethodBuilder::get_CallingConvention()
extern "C"  int32_t MethodBuilder_get_CallingConvention_m3756269872 (MethodBuilder_t765486855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodBuilder::set_BestFitMapping(System.Boolean)
extern "C"  void MethodBuilder_set_BestFitMapping_m748641738 (MethodBuilder_t765486855 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodBuilder::set_ThrowOnUnmappableChar(System.Boolean)
extern "C"  void MethodBuilder_set_ThrowOnUnmappableChar_m389103433 (MethodBuilder_t765486855 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodBuilder::set_ExactSpelling(System.Boolean)
extern "C"  void MethodBuilder_set_ExactSpelling_m3368405984 (MethodBuilder_t765486855 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodBuilder::set_SetLastError(System.Boolean)
extern "C"  void MethodBuilder_set_SetLastError_m4271209049 (MethodBuilder_t765486855 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodToken System.Reflection.Emit.MethodBuilder::GetToken()
extern "C"  MethodToken_t2392331557  MethodBuilder_GetToken_m920069858 (MethodBuilder_t765486855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::GetBaseDefinition()
extern "C"  MethodInfo_t * MethodBuilder_GetBaseDefinition_m3625992879 (MethodBuilder_t765486855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodImplAttributes System.Reflection.Emit.MethodBuilder::GetMethodImplementationFlags()
extern "C"  int32_t MethodBuilder_GetMethodImplementationFlags_m2706393954 (MethodBuilder_t765486855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.MethodBuilder::GetParameters()
extern "C"  ParameterInfoU5BU5D_t1127461800* MethodBuilder_GetParameters_m1297633455 (MethodBuilder_t765486855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::GetParameterCount()
extern "C"  int32_t MethodBuilder_GetParameterCount_m1078755501 (MethodBuilder_t765486855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.MethodBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Il2CppObject * MethodBuilder_Invoke_m1851679456 (MethodBuilder_t765486855 * __this, Il2CppObject * ___obj, int32_t ___invokeAttr, Binder_t4180926488 * ___binder, ObjectU5BU5D_t11523773* ___parameters, CultureInfo_t3603717042 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool MethodBuilder_IsDefined_m3379756494 (MethodBuilder_t765486855 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t11523773* MethodBuilder_GetCustomAttributes_m1111063247 (MethodBuilder_t765486855 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t11523773* MethodBuilder_GetCustomAttributes_m3294549052 (MethodBuilder_t765486855 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.MethodBuilder::GetILGenerator()
extern "C"  ILGenerator_t3869071517 * MethodBuilder_GetILGenerator_m2927401921 (MethodBuilder_t765486855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.MethodBuilder::GetILGenerator(System.Int32)
extern "C"  ILGenerator_t3869071517 * MethodBuilder_GetILGenerator_m281130898 (MethodBuilder_t765486855 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ParameterBuilder System.Reflection.Emit.MethodBuilder::DefineParameter(System.Int32,System.Reflection.ParameterAttributes,System.String)
extern "C"  ParameterBuilder_t3382011775 * MethodBuilder_DefineParameter_m158707278 (MethodBuilder_t765486855 * __this, int32_t ___position, int32_t ___attributes, String_t* ___strParamName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodBuilder::check_override()
extern "C"  void MethodBuilder_check_override_m3740987736 (MethodBuilder_t765486855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodBuilder::fixup()
extern "C"  void MethodBuilder_fixup_m526432253 (MethodBuilder_t765486855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodBuilder::SetCustomAttribute(System.Reflection.Emit.CustomAttributeBuilder)
extern "C"  void MethodBuilder_SetCustomAttribute_m1267800141 (MethodBuilder_t765486855 * __this, CustomAttributeBuilder_t562921149 * ___customBuilder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodBuilder::SetImplementationFlags(System.Reflection.MethodImplAttributes)
extern "C"  void MethodBuilder_SetImplementationFlags_m3293269420 (MethodBuilder_t765486855 * __this, int32_t ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::ToString()
extern "C"  String_t* MethodBuilder_ToString_m2774987108 (MethodBuilder_t765486855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::Equals(System.Object)
extern "C"  bool MethodBuilder_Equals_m341293246 (MethodBuilder_t765486855 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::GetHashCode()
extern "C"  int32_t MethodBuilder_GetHashCode_m2330513698 (MethodBuilder_t765486855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C"  int32_t MethodBuilder_get_next_table_index_m3631261195 (MethodBuilder_t765486855 * __this, Il2CppObject * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodBuilder::set_override(System.Reflection.MethodInfo)
extern "C"  void MethodBuilder_set_override_m3395137323 (MethodBuilder_t765486855 * __this, MethodInfo_t * ___mdecl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodBuilder::RejectIfCreated()
extern "C"  void MethodBuilder_RejectIfCreated_m3872333465 (MethodBuilder_t765486855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.MethodBuilder::NotSupported()
extern "C"  Exception_t1967233988 * MethodBuilder_NotSupported_m538712043 (MethodBuilder_t765486855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])
extern "C"  MethodInfo_t * MethodBuilder_MakeGenericMethod_m3048833464 (MethodBuilder_t765486855 * __this, TypeU5BU5D_t3431720054* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethodDefinition()
extern "C"  bool MethodBuilder_get_IsGenericMethodDefinition_m2676161411 (MethodBuilder_t765486855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethod()
extern "C"  bool MethodBuilder_get_IsGenericMethod_m3124339088 (MethodBuilder_t765486855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.MethodBuilder::GetGenericArguments()
extern "C"  TypeU5BU5D_t3431720054* MethodBuilder_GetGenericArguments_m2521139370 (MethodBuilder_t765486855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.GenericTypeParameterBuilder[] System.Reflection.Emit.MethodBuilder::DefineGenericParameters(System.String[])
extern "C"  GenericTypeParameterBuilderU5BU5D_t685103793* MethodBuilder_DefineGenericParameters_m3912025994 (MethodBuilder_t765486855 * __this, StringU5BU5D_t2956870243* ___names, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodBuilder::SetReturnType(System.Type)
extern "C"  void MethodBuilder_SetReturnType_m1676650464 (MethodBuilder_t765486855 * __this, Type_t * ___returnType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodBuilder::SetParameters(System.Type[])
extern "C"  void MethodBuilder_SetParameters_m82866590 (MethodBuilder_t765486855 * __this, TypeU5BU5D_t3431720054* ___parameterTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodBuilder::SetSignature(System.Type,System.Type[],System.Type[],System.Type[],System.Type[][],System.Type[][])
extern "C"  void MethodBuilder_SetSignature_m2134106207 (MethodBuilder_t765486855 * __this, Type_t * ___returnType, TypeU5BU5D_t3431720054* ___returnTypeRequiredCustomModifiers, TypeU5BU5D_t3431720054* ___returnTypeOptionalCustomModifiers, TypeU5BU5D_t3431720054* ___parameterTypes, TypeU5BU5DU5BU5D_t2239438067* ___parameterTypeRequiredCustomModifiers, TypeU5BU5DU5BU5D_t2239438067* ___parameterTypeOptionalCustomModifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.MethodBuilder::get_Module()
extern "C"  Module_t206139610 * MethodBuilder_get_Module_m2724160805 (MethodBuilder_t765486855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
