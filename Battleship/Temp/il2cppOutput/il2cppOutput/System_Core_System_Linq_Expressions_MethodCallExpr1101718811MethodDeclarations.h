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

// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t1101718811;
// System.Linq.Expressions.Expression
struct Expression_t647304412;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3810449760;
// System.Linq.Expressions.EmitContext
struct EmitContext_t3183126624;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_Expressions_Expression647304412.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "System_Core_System_Linq_Expressions_EmitContext3183126624.h"

// System.Void System.Linq.Expressions.MethodCallExpression::.ctor(System.Linq.Expressions.Expression,System.Reflection.MethodInfo,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>)
extern "C"  void MethodCallExpression__ctor_m565430706 (MethodCallExpression_t1101718811 * __this, Expression_t647304412 * ___obj, MethodInfo_t * ___method, ReadOnlyCollection_1_t3810449760 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.MethodCallExpression::get_Object()
extern "C"  Expression_t647304412 * MethodCallExpression_get_Object_m2249275517 (MethodCallExpression_t1101718811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Linq.Expressions.MethodCallExpression::get_Method()
extern "C"  MethodInfo_t * MethodCallExpression_get_Method_m2856741254 (MethodCallExpression_t1101718811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.MethodCallExpression::get_Arguments()
extern "C"  ReadOnlyCollection_1_t3810449760 * MethodCallExpression_get_Arguments_m1250612191 (MethodCallExpression_t1101718811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.MethodCallExpression::Emit(System.Linq.Expressions.EmitContext)
extern "C"  void MethodCallExpression_Emit_m2156822707 (MethodCallExpression_t1101718811 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
