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

// System.Linq.Expressions.ListInitExpression
struct ListInitExpression_t663499338;
// System.Linq.Expressions.NewExpression
struct NewExpression_t300312156;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>
struct ReadOnlyCollection_1_t1658924212;
// System.Linq.Expressions.EmitContext
struct EmitContext_t3183126624;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_Expressions_EmitContext3183126624.h"

// System.Linq.Expressions.NewExpression System.Linq.Expressions.ListInitExpression::get_NewExpression()
extern "C"  NewExpression_t300312156 * ListInitExpression_get_NewExpression_m2635970739 (ListInitExpression_t663499338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit> System.Linq.Expressions.ListInitExpression::get_Initializers()
extern "C"  ReadOnlyCollection_1_t1658924212 * ListInitExpression_get_Initializers_m510878613 (ListInitExpression_t663499338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ListInitExpression::Emit(System.Linq.Expressions.EmitContext)
extern "C"  void ListInitExpression_Emit_m1009378724 (ListInitExpression_t663499338 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
