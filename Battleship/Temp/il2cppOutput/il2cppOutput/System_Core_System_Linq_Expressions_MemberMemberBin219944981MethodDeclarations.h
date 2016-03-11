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

// System.Linq.Expressions.MemberMemberBinding
struct MemberMemberBinding_t219944981;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>
struct ReadOnlyCollection_1_t2774078739;
// System.Linq.Expressions.EmitContext
struct EmitContext_t3183126624;
// System.Reflection.Emit.LocalBuilder
struct LocalBuilder_t625143165;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_Expressions_EmitContext3183126624.h"
#include "mscorlib_System_Reflection_Emit_LocalBuilder625143165.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding> System.Linq.Expressions.MemberMemberBinding::get_Bindings()
extern "C"  ReadOnlyCollection_1_t2774078739 * MemberMemberBinding_get_Bindings_m3016735990 (MemberMemberBinding_t219944981 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.MemberMemberBinding::Emit(System.Linq.Expressions.EmitContext,System.Reflection.Emit.LocalBuilder)
extern "C"  void MemberMemberBinding_Emit_m2702264306 (MemberMemberBinding_t219944981 * __this, EmitContext_t3183126624 * ___ec, LocalBuilder_t625143165 * ___local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
