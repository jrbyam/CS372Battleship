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

// System.Linq.Expressions.MemberInitExpression
struct MemberInitExpression_t267017030;
// System.Linq.Expressions.NewExpression
struct NewExpression_t300312156;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>
struct ReadOnlyCollection_1_t2774078739;
// System.Linq.Expressions.EmitContext
struct EmitContext_t3183126624;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_Expressions_EmitContext3183126624.h"

// System.Linq.Expressions.NewExpression System.Linq.Expressions.MemberInitExpression::get_NewExpression()
extern "C"  NewExpression_t300312156 * MemberInitExpression_get_NewExpression_m4078462711 (MemberInitExpression_t267017030 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding> System.Linq.Expressions.MemberInitExpression::get_Bindings()
extern "C"  ReadOnlyCollection_1_t2774078739 * MemberInitExpression_get_Bindings_m781569453 (MemberInitExpression_t267017030 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.MemberInitExpression::Emit(System.Linq.Expressions.EmitContext)
extern "C"  void MemberInitExpression_Emit_m2536963496 (MemberInitExpression_t267017030 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
