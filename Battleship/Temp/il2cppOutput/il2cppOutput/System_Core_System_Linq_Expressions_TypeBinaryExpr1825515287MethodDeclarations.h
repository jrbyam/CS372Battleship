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

// System.Linq.Expressions.TypeBinaryExpression
struct TypeBinaryExpression_t1825515287;
// System.Linq.Expressions.Expression
struct Expression_t647304412;
// System.Type
struct Type_t;
// System.Linq.Expressions.EmitContext
struct EmitContext_t3183126624;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_Expressions_EmitContext3183126624.h"

// System.Linq.Expressions.Expression System.Linq.Expressions.TypeBinaryExpression::get_Expression()
extern "C"  Expression_t647304412 * TypeBinaryExpression_get_Expression_m4039092754 (TypeBinaryExpression_t1825515287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Linq.Expressions.TypeBinaryExpression::get_TypeOperand()
extern "C"  Type_t * TypeBinaryExpression_get_TypeOperand_m568437120 (TypeBinaryExpression_t1825515287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.TypeBinaryExpression::Emit(System.Linq.Expressions.EmitContext)
extern "C"  void TypeBinaryExpression_Emit_m778262839 (TypeBinaryExpression_t1825515287 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
