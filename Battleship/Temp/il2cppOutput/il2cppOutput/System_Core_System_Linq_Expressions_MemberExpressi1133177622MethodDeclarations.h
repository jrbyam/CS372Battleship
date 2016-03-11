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

// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1133177622;
// System.Linq.Expressions.Expression
struct Expression_t647304412;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Linq.Expressions.EmitContext
struct EmitContext_t3183126624;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_Expressions_EmitContext3183126624.h"
#include "mscorlib_System_Reflection_PropertyInfo1490548369.h"
#include "mscorlib_System_Reflection_FieldInfo1164929782.h"

// System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::get_Expression()
extern "C"  Expression_t647304412 * MemberExpression_get_Expression_m2123424465 (MemberExpression_t1133177622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::get_Member()
extern "C"  MemberInfo_t * MemberExpression_get_Member_m3829779553 (MemberExpression_t1133177622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.MemberExpression::Emit(System.Linq.Expressions.EmitContext)
extern "C"  void MemberExpression_Emit_m572522200 (MemberExpression_t1133177622 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.MemberExpression::EmitPropertyAccess(System.Linq.Expressions.EmitContext,System.Reflection.PropertyInfo)
extern "C"  void MemberExpression_EmitPropertyAccess_m2891948384 (MemberExpression_t1133177622 * __this, EmitContext_t3183126624 * ___ec, PropertyInfo_t * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.MemberExpression::EmitFieldAccess(System.Linq.Expressions.EmitContext,System.Reflection.FieldInfo)
extern "C"  void MemberExpression_EmitFieldAccess_m163351744 (MemberExpression_t1133177622 * __this, EmitContext_t3183126624 * ___ec, FieldInfo_t * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
