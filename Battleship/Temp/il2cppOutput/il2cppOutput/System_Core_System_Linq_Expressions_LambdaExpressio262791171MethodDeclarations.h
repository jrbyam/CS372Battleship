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

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t262791171;
// System.Linq.Expressions.Expression
struct Expression_t647304412;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t3502740905;
// System.Linq.Expressions.EmitContext
struct EmitContext_t3183126624;
// System.Type
struct Type_t;
// System.Delegate
struct Delegate_t3660574010;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_Expressions_EmitContext3183126624.h"

// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
extern "C"  Expression_t647304412 * LambdaExpression_get_Body_m583480008 (LambdaExpression_t262791171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.LambdaExpression::get_Parameters()
extern "C"  ReadOnlyCollection_1_t3502740905 * LambdaExpression_get_Parameters_m2076479516 (LambdaExpression_t262791171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.LambdaExpression::EmitPopIfNeeded(System.Linq.Expressions.EmitContext)
extern "C"  void LambdaExpression_EmitPopIfNeeded_m2589152832 (LambdaExpression_t262791171 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.LambdaExpression::Emit(System.Linq.Expressions.EmitContext)
extern "C"  void LambdaExpression_Emit_m4170061771 (LambdaExpression_t262791171 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.LambdaExpression::EmitBody(System.Linq.Expressions.EmitContext)
extern "C"  void LambdaExpression_EmitBody_m2697167177 (LambdaExpression_t262791171 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Linq.Expressions.LambdaExpression::GetReturnType()
extern "C"  Type_t * LambdaExpression_GetReturnType_m1032841102 (LambdaExpression_t262791171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Linq.Expressions.LambdaExpression::Compile()
extern "C"  Delegate_t3660574010 * LambdaExpression_Compile_m1902768908 (LambdaExpression_t262791171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
