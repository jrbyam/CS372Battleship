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

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[]
struct ExpressionU5BU5D_t1002953237;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[]
struct ArgumentReferenceU5BU5D_t2172782151;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ReferenceExpression[]
struct ReferenceExpressionU5BU5D_t3053785758;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1127461800;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter1588091119.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[] Castle.DynamicProxy.Generators.Emitters.ArgumentsUtil::ConvertArgumentReferenceToExpression(Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[])
extern "C"  ExpressionU5BU5D_t1002953237* ArgumentsUtil_ConvertArgumentReferenceToExpression_m3840719012 (Il2CppObject * __this /* static, unused */, ArgumentReferenceU5BU5D_t2172782151* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[] Castle.DynamicProxy.Generators.Emitters.ArgumentsUtil::ConvertToArgumentReference(System.Type[])
extern "C"  ArgumentReferenceU5BU5D_t2172782151* ArgumentsUtil_ConvertToArgumentReference_m4216845237 (Il2CppObject * __this /* static, unused */, TypeU5BU5D_t3431720054* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ReferenceExpression[] Castle.DynamicProxy.Generators.Emitters.ArgumentsUtil::ConvertToArgumentReferenceExpression(System.Reflection.ParameterInfo[])
extern "C"  ReferenceExpressionU5BU5D_t3053785758* ArgumentsUtil_ConvertToArgumentReferenceExpression_m2967373710 (Il2CppObject * __this /* static, unused */, ParameterInfoU5BU5D_t1127461800* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.ArgumentsUtil::EmitLoadOwnerAndReference(Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference,System.Reflection.Emit.ILGenerator)
extern "C"  void ArgumentsUtil_EmitLoadOwnerAndReference_m1973319181 (Il2CppObject * __this /* static, unused */, Reference_t1588091119 * ___reference, ILGenerator_t3869071517 * ___il, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] Castle.DynamicProxy.Generators.Emitters.ArgumentsUtil::GetTypes(System.Reflection.ParameterInfo[])
extern "C"  TypeU5BU5D_t3431720054* ArgumentsUtil_GetTypes_m1400246827 (Il2CppObject * __this /* static, unused */, ParameterInfoU5BU5D_t1127461800* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] Castle.DynamicProxy.Generators.Emitters.ArgumentsUtil::InitializeAndConvert(Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[])
extern "C"  TypeU5BU5D_t3431720054* ArgumentsUtil_InitializeAndConvert_m3654277193 (Il2CppObject * __this /* static, unused */, ArgumentReferenceU5BU5D_t2172782151* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.ArgumentsUtil::InitializeArgumentsByPosition(Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[],System.Boolean)
extern "C"  void ArgumentsUtil_InitializeArgumentsByPosition_m3095401370 (Il2CppObject * __this /* static, unused */, ArgumentReferenceU5BU5D_t2172782151* ___args, bool ___isStatic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.Emitters.ArgumentsUtil::IsAnyByRef(System.Reflection.ParameterInfo[])
extern "C"  bool ArgumentsUtil_IsAnyByRef_m3443993860 (Il2CppObject * __this /* static, unused */, ParameterInfoU5BU5D_t1127461800* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
