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

// System.Linq.Expressions.MemberListBinding
struct MemberListBinding_t203196177;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>
struct ReadOnlyCollection_1_t1658924212;
// System.Linq.Expressions.EmitContext
struct EmitContext_t3183126624;
// System.Reflection.Emit.LocalBuilder
struct LocalBuilder_t625143165;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_Expressions_EmitContext3183126624.h"
#include "mscorlib_System_Reflection_Emit_LocalBuilder625143165.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit> System.Linq.Expressions.MemberListBinding::get_Initializers()
extern "C"  ReadOnlyCollection_1_t1658924212 * MemberListBinding_get_Initializers_m3996258164 (MemberListBinding_t203196177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.MemberListBinding::Emit(System.Linq.Expressions.EmitContext,System.Reflection.Emit.LocalBuilder)
extern "C"  void MemberListBinding_Emit_m3738007542 (MemberListBinding_t203196177 * __this, EmitContext_t3183126624 * ___ec, LocalBuilder_t625143165 * ___local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
