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

// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t1666521021;
// System.Linq.Expressions.Expression
struct Expression_t647304412;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t262791171;
// System.Linq.Expressions.EmitContext
struct EmitContext_t3183126624;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_Expressions_EmitContext3183126624.h"
#include "mscorlib_System_Type2779229935.h"

// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::get_Left()
extern "C"  Expression_t647304412 * BinaryExpression_get_Left_m3490645159 (BinaryExpression_t1666521021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::get_Right()
extern "C"  Expression_t647304412 * BinaryExpression_get_Right_m1981027998 (BinaryExpression_t1666521021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.BinaryExpression::get_IsLifted()
extern "C"  bool BinaryExpression_get_IsLifted_m1220967621 (BinaryExpression_t1666521021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.BinaryExpression::get_IsLiftedToNull()
extern "C"  bool BinaryExpression_get_IsLiftedToNull_m864710663 (BinaryExpression_t1666521021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.BinaryExpression::get_Conversion()
extern "C"  LambdaExpression_t262791171 * BinaryExpression_get_Conversion_m591936751 (BinaryExpression_t1666521021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.BinaryExpression::EmitArrayAccess(System.Linq.Expressions.EmitContext)
extern "C"  void BinaryExpression_EmitArrayAccess_m1763091008 (BinaryExpression_t1666521021 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.BinaryExpression::EmitLogicalBinary(System.Linq.Expressions.EmitContext)
extern "C"  void BinaryExpression_EmitLogicalBinary_m991473811 (BinaryExpression_t1666521021 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.BinaryExpression::EmitLogical(System.Linq.Expressions.EmitContext)
extern "C"  void BinaryExpression_EmitLogical_m2599393748 (BinaryExpression_t1666521021 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.BinaryExpression::EmitLiftedLogical(System.Linq.Expressions.EmitContext)
extern "C"  void BinaryExpression_EmitLiftedLogical_m3626436446 (BinaryExpression_t1666521021 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.BinaryExpression::EmitLogicalShortCircuit(System.Linq.Expressions.EmitContext)
extern "C"  void BinaryExpression_EmitLogicalShortCircuit_m819716743 (BinaryExpression_t1666521021 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Linq.Expressions.BinaryExpression::GetFalseOperator()
extern "C"  MethodInfo_t * BinaryExpression_GetFalseOperator_m1563160687 (BinaryExpression_t1666521021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Linq.Expressions.BinaryExpression::GetTrueOperator()
extern "C"  MethodInfo_t * BinaryExpression_GetTrueOperator_m3526439340 (BinaryExpression_t1666521021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.BinaryExpression::EmitUserDefinedLogicalShortCircuit(System.Linq.Expressions.EmitContext)
extern "C"  void BinaryExpression_EmitUserDefinedLogicalShortCircuit_m4228759385 (BinaryExpression_t1666521021 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.BinaryExpression::EmitLiftedLogicalShortCircuit(System.Linq.Expressions.EmitContext)
extern "C"  void BinaryExpression_EmitLiftedLogicalShortCircuit_m2952352017 (BinaryExpression_t1666521021 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.BinaryExpression::EmitCoalesce(System.Linq.Expressions.EmitContext)
extern "C"  void BinaryExpression_EmitCoalesce_m1974256234 (BinaryExpression_t1666521021 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.BinaryExpression::EmitConvertedCoalesce(System.Linq.Expressions.EmitContext)
extern "C"  void BinaryExpression_EmitConvertedCoalesce_m516703492 (BinaryExpression_t1666521021 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.BinaryExpression::IsInt32OrInt64(System.Type)
extern "C"  bool BinaryExpression_IsInt32OrInt64_m4044542155 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.BinaryExpression::IsSingleOrDouble(System.Type)
extern "C"  bool BinaryExpression_IsSingleOrDouble_m1839305067 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.BinaryExpression::EmitBinaryOperator(System.Linq.Expressions.EmitContext)
extern "C"  void BinaryExpression_EmitBinaryOperator_m1643022732 (BinaryExpression_t1666521021 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.BinaryExpression::IsLeftLiftedBinary()
extern "C"  bool BinaryExpression_IsLeftLiftedBinary_m213889732 (BinaryExpression_t1666521021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.BinaryExpression::EmitLeftLiftedToNullBinary(System.Linq.Expressions.EmitContext)
extern "C"  void BinaryExpression_EmitLeftLiftedToNullBinary_m1144222973 (BinaryExpression_t1666521021 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.BinaryExpression::EmitLiftedArithmeticBinary(System.Linq.Expressions.EmitContext)
extern "C"  void BinaryExpression_EmitLiftedArithmeticBinary_m263148284 (BinaryExpression_t1666521021 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.BinaryExpression::EmitLiftedToNullBinary(System.Linq.Expressions.EmitContext)
extern "C"  void BinaryExpression_EmitLiftedToNullBinary_m3177928196 (BinaryExpression_t1666521021 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.BinaryExpression::EmitLiftedRelationalBinary(System.Linq.Expressions.EmitContext)
extern "C"  void BinaryExpression_EmitLiftedRelationalBinary_m1311361119 (BinaryExpression_t1666521021 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.BinaryExpression::EmitArithmeticBinary(System.Linq.Expressions.EmitContext)
extern "C"  void BinaryExpression_EmitArithmeticBinary_m1782916422 (BinaryExpression_t1666521021 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.BinaryExpression::EmitNonLiftedBinary(System.Linq.Expressions.EmitContext)
extern "C"  void BinaryExpression_EmitNonLiftedBinary_m1418752069 (BinaryExpression_t1666521021 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.BinaryExpression::EmitRelationalBinary(System.Linq.Expressions.EmitContext)
extern "C"  void BinaryExpression_EmitRelationalBinary_m2831129257 (BinaryExpression_t1666521021 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.BinaryExpression::EmitLiftedUserDefinedOperator(System.Linq.Expressions.EmitContext)
extern "C"  void BinaryExpression_EmitLiftedUserDefinedOperator_m1737979013 (BinaryExpression_t1666521021 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.BinaryExpression::EmitLiftedToNullUserDefinedOperator(System.Linq.Expressions.EmitContext)
extern "C"  void BinaryExpression_EmitLiftedToNullUserDefinedOperator_m1454520647 (BinaryExpression_t1666521021 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.BinaryExpression::EmitUserDefinedLiftedLogicalShortCircuit(System.Linq.Expressions.EmitContext)
extern "C"  void BinaryExpression_EmitUserDefinedLiftedLogicalShortCircuit_m3526543459 (BinaryExpression_t1666521021 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.BinaryExpression::EmitUserDefinedOperator(System.Linq.Expressions.EmitContext)
extern "C"  void BinaryExpression_EmitUserDefinedOperator_m3900311035 (BinaryExpression_t1666521021 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.BinaryExpression::Emit(System.Linq.Expressions.EmitContext)
extern "C"  void BinaryExpression_Emit_m2456489937 (BinaryExpression_t1666521021 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
