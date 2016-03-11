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

// System.Linq.Expressions.ConditionalExpression
struct ConditionalExpression_t1459688386;
// System.Linq.Expressions.Expression
struct Expression_t647304412;
// System.Linq.Expressions.EmitContext
struct EmitContext_t3183126624;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_Expressions_EmitContext3183126624.h"

// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::get_Test()
extern "C"  Expression_t647304412 * ConditionalExpression_get_Test_m258963293 (ConditionalExpression_t1459688386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::get_IfTrue()
extern "C"  Expression_t647304412 * ConditionalExpression_get_IfTrue_m2060050006 (ConditionalExpression_t1459688386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::get_IfFalse()
extern "C"  Expression_t647304412 * ConditionalExpression_get_IfFalse_m3697326845 (ConditionalExpression_t1459688386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ConditionalExpression::Emit(System.Linq.Expressions.EmitContext)
extern "C"  void ConditionalExpression_Emit_m3225417440 (ConditionalExpression_t1459688386 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
