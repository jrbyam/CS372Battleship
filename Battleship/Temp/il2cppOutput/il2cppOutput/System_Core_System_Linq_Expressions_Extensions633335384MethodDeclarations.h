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

// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Action`1<System.Reflection.FieldInfo>
struct Action_1_t1313382487;
// System.Action`1<System.Reflection.PropertyInfo>
struct Action_1_t1639001074;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"

// System.Boolean System.Linq.Expressions.Extensions::IsGenericInstanceOf(System.Type,System.Type)
extern "C"  bool Extensions_IsGenericInstanceOf_m3807923156 (Il2CppObject * __this /* static, unused */, Type_t * ___self, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Extensions::IsNullable(System.Type)
extern "C"  bool Extensions_IsNullable_m2981634219 (Il2CppObject * __this /* static, unused */, Type_t * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Extensions::IsExpression(System.Type)
extern "C"  bool Extensions_IsExpression_m1489676756 (Il2CppObject * __this /* static, unused */, Type_t * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Extensions::IsAssignableTo(System.Type,System.Type)
extern "C"  bool Extensions_IsAssignableTo_m1711672059 (Il2CppObject * __this /* static, unused */, Type_t * ___self, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Linq.Expressions.Extensions::GetFirstGenericArgument(System.Type)
extern "C"  Type_t * Extensions_GetFirstGenericArgument_m370372198 (Il2CppObject * __this /* static, unused */, Type_t * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Linq.Expressions.Extensions::GetNotNullableType(System.Type)
extern "C"  Type_t * Extensions_GetNotNullableType_m378840504 (Il2CppObject * __this /* static, unused */, Type_t * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Linq.Expressions.Extensions::GetInvokeMethod(System.Type)
extern "C"  MethodInfo_t * Extensions_GetInvokeMethod_m833771233 (Il2CppObject * __this /* static, unused */, Type_t * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Extensions::ArrayTypeIsAssignableTo(System.Type,System.Type)
extern "C"  bool Extensions_ArrayTypeIsAssignableTo_m1959761100 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Type_t * ___candidate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.Extensions::OnFieldOrProperty(System.Reflection.MemberInfo,System.Action`1<System.Reflection.FieldInfo>,System.Action`1<System.Reflection.PropertyInfo>)
extern "C"  void Extensions_OnFieldOrProperty_m494186247 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___self, Action_1_t1313382487 * ___onfield, Action_1_t1639001074 * ___onprop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Linq.Expressions.Extensions::MakeStrongBoxType(System.Type)
extern "C"  Type_t * Extensions_MakeStrongBoxType_m617863616 (Il2CppObject * __this /* static, unused */, Type_t * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
