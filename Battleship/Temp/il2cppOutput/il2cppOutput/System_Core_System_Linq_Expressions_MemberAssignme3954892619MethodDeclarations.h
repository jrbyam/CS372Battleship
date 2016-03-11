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

// System.Linq.Expressions.MemberAssignment
struct MemberAssignment_t3954892619;
// System.Linq.Expressions.Expression
struct Expression_t647304412;
// System.Linq.Expressions.EmitContext
struct EmitContext_t3183126624;
// System.Reflection.Emit.LocalBuilder
struct LocalBuilder_t625143165;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_Expressions_EmitContext3183126624.h"
#include "mscorlib_System_Reflection_Emit_LocalBuilder625143165.h"
#include "mscorlib_System_Reflection_FieldInfo1164929782.h"
#include "mscorlib_System_Reflection_PropertyInfo1490548369.h"

// System.Linq.Expressions.Expression System.Linq.Expressions.MemberAssignment::get_Expression()
extern "C"  Expression_t647304412 * MemberAssignment_get_Expression_m309466054 (MemberAssignment_t3954892619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.MemberAssignment::Emit(System.Linq.Expressions.EmitContext,System.Reflection.Emit.LocalBuilder)
extern "C"  void MemberAssignment_Emit_m2021875016 (MemberAssignment_t3954892619 * __this, EmitContext_t3183126624 * ___ec, LocalBuilder_t625143165 * ___local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.MemberAssignment::EmitFieldAssignment(System.Linq.Expressions.EmitContext,System.Reflection.FieldInfo,System.Reflection.Emit.LocalBuilder)
extern "C"  void MemberAssignment_EmitFieldAssignment_m1590492593 (MemberAssignment_t3954892619 * __this, EmitContext_t3183126624 * ___ec, FieldInfo_t * ___field, LocalBuilder_t625143165 * ___local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.MemberAssignment::EmitPropertyAssignment(System.Linq.Expressions.EmitContext,System.Reflection.PropertyInfo,System.Reflection.Emit.LocalBuilder)
extern "C"  void MemberAssignment_EmitPropertyAssignment_m410406723 (MemberAssignment_t3954892619 * __this, EmitContext_t3183126624 * ___ec, PropertyInfo_t * ___property, LocalBuilder_t625143165 * ___local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
