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

// System.Reflection.Emit.ParameterBuilder
struct ParameterBuilder_t3382011775;
// System.Reflection.MethodBase
struct MethodBase_t3461000640;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Reflection.Emit.CustomAttributeBuilder
struct CustomAttributeBuilder_t562921149;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MethodBase3461000640.h"
#include "mscorlib_System_Reflection_ParameterAttributes4282458126.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_Emit_CustomAttributeBuil562921149.h"

// System.Void System.Reflection.Emit.ParameterBuilder::.ctor(System.Reflection.MethodBase,System.Int32,System.Reflection.ParameterAttributes,System.String)
extern "C"  void ParameterBuilder__ctor_m2026854158 (ParameterBuilder_t3382011775 * __this, MethodBase_t3461000640 * ___mb, int32_t ___pos, int32_t ___attributes, String_t* ___strParamName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ParameterBuilder::get_Attributes()
extern "C"  int32_t ParameterBuilder_get_Attributes_m2640139997 (ParameterBuilder_t3382011775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ParameterBuilder::get_Name()
extern "C"  String_t* ParameterBuilder_get_Name_m1429816234 (ParameterBuilder_t3382011775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ParameterBuilder::get_Position()
extern "C"  int32_t ParameterBuilder_get_Position_m388196207 (ParameterBuilder_t3382011775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ParameterBuilder::SetConstant(System.Object)
extern "C"  void ParameterBuilder_SetConstant_m450307557 (ParameterBuilder_t3382011775 * __this, Il2CppObject * ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ParameterBuilder::SetCustomAttribute(System.Reflection.Emit.CustomAttributeBuilder)
extern "C"  void ParameterBuilder_SetCustomAttribute_m1052929097 (ParameterBuilder_t3382011775 * __this, CustomAttributeBuilder_t562921149 * ___customBuilder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
