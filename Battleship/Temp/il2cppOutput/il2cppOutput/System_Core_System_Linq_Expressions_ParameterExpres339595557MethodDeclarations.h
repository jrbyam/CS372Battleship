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

// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t339595557;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Linq.Expressions.EmitContext
struct EmitContext_t3183126624;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "System_Core_System_Linq_Expressions_EmitContext3183126624.h"

// System.Void System.Linq.Expressions.ParameterExpression::.ctor(System.Type,System.String)
extern "C"  void ParameterExpression__ctor_m3082822617 (ParameterExpression_t339595557 * __this, Type_t * ___type, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ParameterExpression::get_Name()
extern "C"  String_t* ParameterExpression_get_Name_m1357606393 (ParameterExpression_t339595557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ParameterExpression::EmitLocalParameter(System.Linq.Expressions.EmitContext,System.Int32)
extern "C"  void ParameterExpression_EmitLocalParameter_m3325541240 (ParameterExpression_t339595557 * __this, EmitContext_t3183126624 * ___ec, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ParameterExpression::EmitHoistedLocal(System.Linq.Expressions.EmitContext,System.Int32,System.Int32)
extern "C"  void ParameterExpression_EmitHoistedLocal_m1155741300 (ParameterExpression_t339595557 * __this, EmitContext_t3183126624 * ___ec, int32_t ___level, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ParameterExpression::Emit(System.Linq.Expressions.EmitContext)
extern "C"  void ParameterExpression_Emit_m573018141 (ParameterExpression_t339595557 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
