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

// System.Linq.Expressions.EmitContext
struct EmitContext_t3183126624;
// System.Linq.Expressions.CompilationContext
struct CompilationContext_t1096990896;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t262791171;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Collections.Generic.IList`1<System.Linq.Expressions.ParameterExpression>
struct IList_1_t2506087871;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t339595557;
// System.Delegate
struct Delegate_t3660574010;
// System.Runtime.CompilerServices.ExecutionScope
struct ExecutionScope_t3452505026;
// System.Linq.Expressions.Expression
struct Expression_t647304412;
// System.Reflection.Emit.LocalBuilder
struct LocalBuilder_t625143165;
// System.Collections.Generic.IList`1<System.Linq.Expressions.Expression>
struct IList_1_t2813796726;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ElementInit>
struct IEnumerable_1_t1367933220;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.MemberBinding>
struct IEnumerable_1_t2483087747;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_Expressions_CompilationCon1096990896.h"
#include "System_Core_System_Linq_Expressions_EmitContext3183126624.h"
#include "System_Core_System_Linq_Expressions_LambdaExpressio262791171.h"
#include "System_Core_System_Linq_Expressions_ParameterExpres339595557.h"
#include "System_Core_System_Runtime_CompilerServices_Execut3452505026.h"
#include "System_Core_System_Linq_Expressions_Expression647304412.h"
#include "mscorlib_System_Reflection_Emit_LocalBuilder625143165.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Linq.Expressions.EmitContext::.ctor(System.Linq.Expressions.CompilationContext,System.Linq.Expressions.EmitContext,System.Linq.Expressions.LambdaExpression)
extern "C"  void EmitContext__ctor_m3069987200 (EmitContext_t3183126624 * __this, CompilationContext_t1096990896 * ___context, EmitContext_t3183126624 * ___parent, LambdaExpression_t262791171 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.EmitContext::get_HasHoistedLocals()
extern "C"  bool EmitContext_get_HasHoistedLocals_m3707991912 (EmitContext_t3183126624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::Emit()
extern "C"  void EmitContext_Emit_m2799124342 (EmitContext_t3183126624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Linq.Expressions.EmitContext::CreateParameterTypes(System.Collections.Generic.IList`1<System.Linq.Expressions.ParameterExpression>)
extern "C"  TypeU5BU5D_t3431720054* EmitContext_CreateParameterTypes_m3007293961 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.EmitContext::IsLocalParameter(System.Linq.Expressions.ParameterExpression,System.Int32&)
extern "C"  bool EmitContext_IsLocalParameter_m2605670897 (EmitContext_t3183126624 * __this, ParameterExpression_t339595557 * ___parameter, int32_t* ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Linq.Expressions.EmitContext::CreateDelegate(System.Runtime.CompilerServices.ExecutionScope)
extern "C"  Delegate_t3660574010 * EmitContext_CreateDelegate_m3054035517 (EmitContext_t3183126624 * __this, ExecutionScope_t3452505026 * ___scope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::Emit(System.Linq.Expressions.Expression)
extern "C"  void EmitContext_Emit_m915426108 (EmitContext_t3183126624 * __this, Expression_t647304412 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.LocalBuilder System.Linq.Expressions.EmitContext::EmitStored(System.Linq.Expressions.Expression)
extern "C"  LocalBuilder_t625143165 * EmitContext_EmitStored_m3319225107 (EmitContext_t3183126624 * __this, Expression_t647304412 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitLoadAddress(System.Linq.Expressions.Expression)
extern "C"  void EmitContext_EmitLoadAddress_m2156209856 (EmitContext_t3183126624 * __this, Expression_t647304412 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitLoadSubject(System.Linq.Expressions.Expression)
extern "C"  void EmitContext_EmitLoadSubject_m1227203576 (EmitContext_t3183126624 * __this, Expression_t647304412 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitLoadSubject(System.Reflection.Emit.LocalBuilder)
extern "C"  void EmitContext_EmitLoadSubject_m550297881 (EmitContext_t3183126624 * __this, LocalBuilder_t625143165 * ___local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitLoadAddress(System.Reflection.Emit.LocalBuilder)
extern "C"  void EmitContext_EmitLoadAddress_m3579688785 (EmitContext_t3183126624 * __this, LocalBuilder_t625143165 * ___local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitLoad(System.Reflection.Emit.LocalBuilder)
extern "C"  void EmitContext_EmitLoad_m2902034319 (EmitContext_t3183126624 * __this, LocalBuilder_t625143165 * ___local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitCall(System.Reflection.Emit.LocalBuilder,System.Collections.Generic.IList`1<System.Linq.Expressions.Expression>,System.Reflection.MethodInfo)
extern "C"  void EmitContext_EmitCall_m1586499221 (EmitContext_t3183126624 * __this, LocalBuilder_t625143165 * ___local, Il2CppObject* ___arguments, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitCall(System.Reflection.Emit.LocalBuilder,System.Reflection.MethodInfo)
extern "C"  void EmitContext_EmitCall_m326932284 (EmitContext_t3183126624 * __this, LocalBuilder_t625143165 * ___local, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitCall(System.Linq.Expressions.Expression,System.Reflection.MethodInfo)
extern "C"  void EmitContext_EmitCall_m2685508345 (EmitContext_t3183126624 * __this, Expression_t647304412 * ___expression, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitCall(System.Linq.Expressions.Expression,System.Collections.Generic.IList`1<System.Linq.Expressions.Expression>,System.Reflection.MethodInfo)
extern "C"  void EmitContext_EmitCall_m2845914168 (EmitContext_t3183126624 * __this, Expression_t647304412 * ___expression, Il2CppObject* ___arguments, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitArguments(System.Reflection.MethodInfo,System.Collections.Generic.IList`1<System.Linq.Expressions.Expression>)
extern "C"  void EmitContext_EmitArguments_m3140386022 (EmitContext_t3183126624 * __this, MethodInfo_t * ___method, Il2CppObject* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitCall(System.Reflection.MethodInfo)
extern "C"  void EmitContext_EmitCall_m2064604001 (EmitContext_t3183126624 * __this, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitNullableHasValue(System.Reflection.Emit.LocalBuilder)
extern "C"  void EmitContext_EmitNullableHasValue_m4229592509 (EmitContext_t3183126624 * __this, LocalBuilder_t625143165 * ___local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitNullableInitialize(System.Reflection.Emit.LocalBuilder)
extern "C"  void EmitContext_EmitNullableInitialize_m1115009604 (EmitContext_t3183126624 * __this, LocalBuilder_t625143165 * ___local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitNullableGetValue(System.Reflection.Emit.LocalBuilder)
extern "C"  void EmitContext_EmitNullableGetValue_m1382860665 (EmitContext_t3183126624 * __this, LocalBuilder_t625143165 * ___local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitNullableGetValueOrDefault(System.Reflection.Emit.LocalBuilder)
extern "C"  void EmitContext_EmitNullableGetValueOrDefault_m804171581 (EmitContext_t3183126624 * __this, LocalBuilder_t625143165 * ___local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitCall(System.Reflection.Emit.LocalBuilder,System.String)
extern "C"  void EmitContext_EmitCall_m2602389779 (EmitContext_t3183126624 * __this, LocalBuilder_t625143165 * ___local, String_t* ___method_name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitNullableNew(System.Type)
extern "C"  void EmitContext_EmitNullableNew_m329778318 (EmitContext_t3183126624 * __this, Type_t * ___of, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitCollection(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ElementInit>,System.Reflection.Emit.LocalBuilder)
extern "C"  void EmitContext_EmitCollection_m2034586182 (EmitContext_t3183126624 * __this, Il2CppObject* ___initializers, LocalBuilder_t625143165 * ___local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitCollection(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.MemberBinding>,System.Reflection.Emit.LocalBuilder)
extern "C"  void EmitContext_EmitCollection_m3521196261 (EmitContext_t3183126624 * __this, Il2CppObject* ___bindings, LocalBuilder_t625143165 * ___local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitIsInst(System.Linq.Expressions.Expression,System.Type)
extern "C"  void EmitContext_EmitIsInst_m3593999199 (EmitContext_t3183126624 * __this, Expression_t647304412 * ___expression, Type_t * ___candidate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitScope()
extern "C"  void EmitContext_EmitScope_m2653527264 (EmitContext_t3183126624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitReadGlobal(System.Object)
extern "C"  void EmitContext_EmitReadGlobal_m54176261 (EmitContext_t3183126624 * __this, Il2CppObject * ___global, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitLoadGlobals()
extern "C"  void EmitContext_EmitLoadGlobals_m3410473526 (EmitContext_t3183126624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitReadGlobal(System.Object,System.Type)
extern "C"  void EmitContext_EmitReadGlobal_m311056824 (EmitContext_t3183126624 * __this, Il2CppObject * ___global, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitLoadStrongBoxValue(System.Type)
extern "C"  void EmitContext_EmitLoadStrongBoxValue_m1574201760 (EmitContext_t3183126624 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Linq.Expressions.EmitContext::AddGlobal(System.Object,System.Type)
extern "C"  int32_t EmitContext_AddGlobal_m2480634998 (EmitContext_t3183126624 * __this, Il2CppObject * ___value, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitCreateDelegate(System.Linq.Expressions.LambdaExpression)
extern "C"  void EmitContext_EmitCreateDelegate_m1027481974 (EmitContext_t3183126624 * __this, LambdaExpression_t262791171 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitStoreHoistedLocals()
extern "C"  void EmitContext_EmitStoreHoistedLocals_m4263666111 (EmitContext_t3183126624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitStoreHoistedLocal(System.Int32,System.Linq.Expressions.ParameterExpression)
extern "C"  void EmitContext_EmitStoreHoistedLocal_m1846578228 (EmitContext_t3183126624 * __this, int32_t ___position, ParameterExpression_t339595557 * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitLoadHoistedLocalsStore()
extern "C"  void EmitContext_EmitLoadHoistedLocalsStore_m1733564947 (EmitContext_t3183126624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitCreateStrongBox(System.Type)
extern "C"  void EmitContext_EmitCreateStrongBox_m247942933 (EmitContext_t3183126624 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitHoistedLocalsStore()
extern "C"  void EmitContext_EmitHoistedLocalsStore_m1578189453 (EmitContext_t3183126624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitLoadLocals()
extern "C"  void EmitContext_EmitLoadLocals_m3937975492 (EmitContext_t3183126624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitParentScope()
extern "C"  void EmitContext_EmitParentScope_m4292453526 (EmitContext_t3183126624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.EmitContext::EmitIsolateExpression()
extern "C"  void EmitContext_EmitIsolateExpression_m3368059887 (EmitContext_t3183126624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.EmitContext::IsHoistedLocal(System.Linq.Expressions.ParameterExpression,System.Int32&,System.Int32&)
extern "C"  bool EmitContext_IsHoistedLocal_m3069770331 (EmitContext_t3183126624 * __this, ParameterExpression_t339595557 * ___parameter, int32_t* ___level, int32_t* ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Linq.Expressions.EmitContext::AddChildContext(System.Linq.Expressions.LambdaExpression)
extern "C"  int32_t EmitContext_AddChildContext_m3002109248 (EmitContext_t3183126624 * __this, LambdaExpression_t262791171 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Linq.Expressions.EmitContext::CreateStrongBox(System.Object,System.Type)
extern "C"  Il2CppObject * EmitContext_CreateStrongBox_m522919131 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
