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

// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t915773227;
// System.Linq.Expressions.Expression
struct Expression_t647304412;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Linq.Expressions.EmitContext
struct EmitContext_t3183126624;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_Expressions_ExpressionType2423716918.h"
#include "System_Core_System_Linq_Expressions_Expression647304412.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "System_Core_System_Linq_Expressions_EmitContext3183126624.h"
#include "mscorlib_System_Reflection_Emit_OpCode4028977979.h"

// System.Void System.Linq.Expressions.UnaryExpression::.ctor(System.Linq.Expressions.ExpressionType,System.Linq.Expressions.Expression,System.Type)
extern "C"  void UnaryExpression__ctor_m2606472637 (UnaryExpression_t915773227 * __this, int32_t ___node_type, Expression_t647304412 * ___operand, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.UnaryExpression::.ctor(System.Linq.Expressions.ExpressionType,System.Linq.Expressions.Expression,System.Type,System.Reflection.MethodInfo,System.Boolean)
extern "C"  void UnaryExpression__ctor_m3031972967 (UnaryExpression_t915773227 * __this, int32_t ___node_type, Expression_t647304412 * ___operand, Type_t * ___type, MethodInfo_t * ___method, bool ___is_lifted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::get_Operand()
extern "C"  Expression_t647304412 * UnaryExpression_get_Operand_m2913394743 (UnaryExpression_t915773227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.UnaryExpression::get_IsLifted()
extern "C"  bool UnaryExpression_get_IsLifted_m3487852887 (UnaryExpression_t915773227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.UnaryExpression::get_IsLiftedToNull()
extern "C"  bool UnaryExpression_get_IsLiftedToNull_m2597660441 (UnaryExpression_t915773227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.UnaryExpression::EmitArrayLength(System.Linq.Expressions.EmitContext)
extern "C"  void UnaryExpression_EmitArrayLength_m960509624 (UnaryExpression_t915773227 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.UnaryExpression::EmitTypeAs(System.Linq.Expressions.EmitContext)
extern "C"  void UnaryExpression_EmitTypeAs_m1093709227 (UnaryExpression_t915773227 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.UnaryExpression::EmitLiftedUnary(System.Linq.Expressions.EmitContext)
extern "C"  void UnaryExpression_EmitLiftedUnary_m52119218 (UnaryExpression_t915773227 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.UnaryExpression::EmitUnaryOperator(System.Linq.Expressions.EmitContext)
extern "C"  void UnaryExpression_EmitUnaryOperator_m292703972 (UnaryExpression_t915773227 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.UnaryExpression::EmitConvert(System.Linq.Expressions.EmitContext)
extern "C"  void UnaryExpression_EmitConvert_m3034486820 (UnaryExpression_t915773227 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.UnaryExpression::EmitConvertFromNullableToNullable(System.Linq.Expressions.EmitContext)
extern "C"  void UnaryExpression_EmitConvertFromNullableToNullable_m442852893 (UnaryExpression_t915773227 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.UnaryExpression::EmitConvertToNullable(System.Linq.Expressions.EmitContext)
extern "C"  void UnaryExpression_EmitConvertToNullable_m2064706120 (UnaryExpression_t915773227 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.UnaryExpression::EmitConvertFromNullable(System.Linq.Expressions.EmitContext)
extern "C"  void UnaryExpression_EmitConvertFromNullable_m3224300089 (UnaryExpression_t915773227 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.UnaryExpression::IsBoxing()
extern "C"  bool UnaryExpression_IsBoxing_m2298042203 (UnaryExpression_t915773227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.UnaryExpression::EmitBox(System.Linq.Expressions.EmitContext)
extern "C"  void UnaryExpression_EmitBox_m2644940556 (UnaryExpression_t915773227 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.UnaryExpression::IsUnBoxing()
extern "C"  bool UnaryExpression_IsUnBoxing_m576926804 (UnaryExpression_t915773227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.UnaryExpression::EmitUnbox(System.Linq.Expressions.EmitContext)
extern "C"  void UnaryExpression_EmitUnbox_m3483631781 (UnaryExpression_t915773227 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.UnaryExpression::EmitCast(System.Linq.Expressions.EmitContext)
extern "C"  void UnaryExpression_EmitCast_m3931242328 (UnaryExpression_t915773227 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.UnaryExpression::EmitPrimitiveConversion(System.Linq.Expressions.EmitContext,System.Boolean,System.Reflection.Emit.OpCode,System.Reflection.Emit.OpCode,System.Reflection.Emit.OpCode,System.Reflection.Emit.OpCode)
extern "C"  void UnaryExpression_EmitPrimitiveConversion_m2177212447 (UnaryExpression_t915773227 * __this, EmitContext_t3183126624 * ___ec, bool ___is_unsigned, OpCode_t4028977979  ___signed, OpCode_t4028977979  ___unsigned, OpCode_t4028977979  ___signed_checked, OpCode_t4028977979  ___unsigned_checked, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.UnaryExpression::EmitPrimitiveConversion(System.Linq.Expressions.EmitContext)
extern "C"  void UnaryExpression_EmitPrimitiveConversion_m4119793338 (UnaryExpression_t915773227 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.UnaryExpression::EmitPrimitiveConversion(System.Linq.Expressions.EmitContext,System.Type,System.Type)
extern "C"  void UnaryExpression_EmitPrimitiveConversion_m2230839968 (UnaryExpression_t915773227 * __this, EmitContext_t3183126624 * ___ec, Type_t * ___from, Type_t * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.UnaryExpression::EmitArithmeticUnary(System.Linq.Expressions.EmitContext)
extern "C"  void UnaryExpression_EmitArithmeticUnary_m2021653106 (UnaryExpression_t915773227 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.UnaryExpression::EmitUserDefinedLiftedToNullOperator(System.Linq.Expressions.EmitContext)
extern "C"  void UnaryExpression_EmitUserDefinedLiftedToNullOperator_m970622185 (UnaryExpression_t915773227 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.UnaryExpression::EmitUserDefinedLiftedOperator(System.Linq.Expressions.EmitContext)
extern "C"  void UnaryExpression_EmitUserDefinedLiftedOperator_m3775193707 (UnaryExpression_t915773227 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.UnaryExpression::EmitUserDefinedOperator(System.Linq.Expressions.EmitContext)
extern "C"  void UnaryExpression_EmitUserDefinedOperator_m3653246133 (UnaryExpression_t915773227 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.UnaryExpression::EmitQuote(System.Linq.Expressions.EmitContext)
extern "C"  void UnaryExpression_EmitQuote_m2866333947 (UnaryExpression_t915773227 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.UnaryExpression::Emit(System.Linq.Expressions.EmitContext)
extern "C"  void UnaryExpression_Emit_m4247572311 (UnaryExpression_t915773227 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
