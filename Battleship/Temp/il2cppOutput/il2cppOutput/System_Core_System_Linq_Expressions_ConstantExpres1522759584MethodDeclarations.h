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

// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t1522759584;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Linq.Expressions.EmitContext
struct EmitContext_t3183126624;
// System.Action`1<System.Linq.Expressions.EmitContext>
struct Action_1_t3331579329;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Type2779229935.h"
#include "System_Core_System_Linq_Expressions_EmitContext3183126624.h"

// System.Void System.Linq.Expressions.ConstantExpression::.ctor(System.Object,System.Type)
extern "C"  void ConstantExpression__ctor_m3541896474 (ConstantExpression_t1522759584 * __this, Il2CppObject * ___value, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Linq.Expressions.ConstantExpression::get_Value()
extern "C"  Il2CppObject * ConstantExpression_get_Value_m3887370078 (ConstantExpression_t1522759584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ConstantExpression::Emit(System.Linq.Expressions.EmitContext)
extern "C"  void ConstantExpression_Emit_m6612622 (ConstantExpression_t1522759584 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ConstantExpression::EmitNullableConstant(System.Linq.Expressions.EmitContext,System.Type,System.Object)
extern "C"  void ConstantExpression_EmitNullableConstant_m1514871018 (ConstantExpression_t1522759584 * __this, EmitContext_t3183126624 * ___ec, Type_t * ___type, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ConstantExpression::EmitConstant(System.Linq.Expressions.EmitContext,System.Type,System.Object)
extern "C"  void ConstantExpression_EmitConstant_m4043120267 (ConstantExpression_t1522759584 * __this, EmitContext_t3183126624 * ___ec, Type_t * ___type, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ConstantExpression::EmitIfNotNull(System.Linq.Expressions.EmitContext,System.Action`1<System.Linq.Expressions.EmitContext>)
extern "C"  void ConstantExpression_EmitIfNotNull_m1656563817 (ConstantExpression_t1522759584 * __this, EmitContext_t3183126624 * ___ec, Action_1_t3331579329 * ___emit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
