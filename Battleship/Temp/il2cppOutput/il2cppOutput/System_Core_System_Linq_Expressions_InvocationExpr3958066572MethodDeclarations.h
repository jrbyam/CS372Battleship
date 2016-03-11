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

// System.Linq.Expressions.InvocationExpression
struct InvocationExpression_t3958066572;
// System.Linq.Expressions.Expression
struct Expression_t647304412;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3810449760;
// System.Linq.Expressions.EmitContext
struct EmitContext_t3183126624;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_Expressions_EmitContext3183126624.h"

// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression::get_Expression()
extern "C"  Expression_t647304412 * InvocationExpression_get_Expression_m2856123719 (InvocationExpression_t3958066572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.InvocationExpression::get_Arguments()
extern "C"  ReadOnlyCollection_1_t3810449760 * InvocationExpression_get_Arguments_m1888238478 (InvocationExpression_t3958066572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.InvocationExpression::Emit(System.Linq.Expressions.EmitContext)
extern "C"  void InvocationExpression_Emit_m58170274 (InvocationExpression_t3958066572 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
