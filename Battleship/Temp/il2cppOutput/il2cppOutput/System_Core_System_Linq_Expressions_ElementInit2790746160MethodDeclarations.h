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

// System.Linq.Expressions.ElementInit
struct ElementInit_t2790746160;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3810449760;
// System.String
struct String_t;
// System.Linq.Expressions.EmitContext
struct EmitContext_t3183126624;
// System.Reflection.Emit.LocalBuilder
struct LocalBuilder_t625143165;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_Expressions_EmitContext3183126624.h"
#include "mscorlib_System_Reflection_Emit_LocalBuilder625143165.h"

// System.Reflection.MethodInfo System.Linq.Expressions.ElementInit::get_AddMethod()
extern "C"  MethodInfo_t * ElementInit_get_AddMethod_m1899447314 (ElementInit_t2790746160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.ElementInit::get_Arguments()
extern "C"  ReadOnlyCollection_1_t3810449760 * ElementInit_get_Arguments_m2788137114 (ElementInit_t2790746160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ElementInit::ToString()
extern "C"  String_t* ElementInit_ToString_m2924048924 (ElementInit_t2790746160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ElementInit::EmitPopIfNeeded(System.Linq.Expressions.EmitContext)
extern "C"  void ElementInit_EmitPopIfNeeded_m572554617 (ElementInit_t2790746160 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ElementInit::Emit(System.Linq.Expressions.EmitContext,System.Reflection.Emit.LocalBuilder)
extern "C"  void ElementInit_Emit_m92655735 (ElementInit_t2790746160 * __this, EmitContext_t3183126624 * ___ec, LocalBuilder_t625143165 * ___local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
