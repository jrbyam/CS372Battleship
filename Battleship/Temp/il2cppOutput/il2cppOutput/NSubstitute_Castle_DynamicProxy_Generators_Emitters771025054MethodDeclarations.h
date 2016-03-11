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

// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.OpCodeUtil::EmitLoadIndirectOpCodeForType(System.Reflection.Emit.ILGenerator,System.Type)
extern "C"  void OpCodeUtil_EmitLoadIndirectOpCodeForType_m3473576647 (Il2CppObject * __this /* static, unused */, ILGenerator_t3869071517 * ___gen, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.OpCodeUtil::EmitLoadOpCodeForConstantValue(System.Reflection.Emit.ILGenerator,System.Object)
extern "C"  void OpCodeUtil_EmitLoadOpCodeForConstantValue_m1185167555 (Il2CppObject * __this /* static, unused */, ILGenerator_t3869071517 * ___gen, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.OpCodeUtil::EmitLoadOpCodeForDefaultValueOfType(System.Reflection.Emit.ILGenerator,System.Type)
extern "C"  void OpCodeUtil_EmitLoadOpCodeForDefaultValueOfType_m1781888700 (Il2CppObject * __this /* static, unused */, ILGenerator_t3869071517 * ___gen, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.OpCodeUtil::EmitStoreIndirectOpCodeForType(System.Reflection.Emit.ILGenerator,System.Type)
extern "C"  void OpCodeUtil_EmitStoreIndirectOpCodeForType_m3821747126 (Il2CppObject * __this /* static, unused */, ILGenerator_t3869071517 * ___gen, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Generators.Emitters.OpCodeUtil::GetUnderlyingTypeOfEnum(System.Type)
extern "C"  Type_t * OpCodeUtil_GetUnderlyingTypeOfEnum_m883688207 (Il2CppObject * __this /* static, unused */, Type_t * ___enumType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.Emitters.OpCodeUtil::Is64BitTypeLoadedAsInt32(System.Type)
extern "C"  bool OpCodeUtil_Is64BitTypeLoadedAsInt32_m962937622 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
