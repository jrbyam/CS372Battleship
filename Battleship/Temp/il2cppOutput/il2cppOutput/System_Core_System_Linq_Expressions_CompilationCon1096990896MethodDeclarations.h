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

// System.Linq.Expressions.CompilationContext
struct CompilationContext_t1096990896;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t262791171;
// System.Linq.Expressions.EmitContext
struct EmitContext_t3183126624;
// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1136554526;
// System.Delegate
struct Delegate_t3660574010;
// System.Runtime.CompilerServices.ExecutionScope
struct ExecutionScope_t3452505026;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Core_System_Linq_Expressions_LambdaExpressio262791171.h"
#include "System_Core_System_Linq_Expressions_EmitContext3183126624.h"
#include "System_Core_System_Runtime_CompilerServices_Execut3452505026.h"

// System.Void System.Linq.Expressions.CompilationContext::.ctor()
extern "C"  void CompilationContext__ctor_m2110402365 (CompilationContext_t1096990896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Linq.Expressions.CompilationContext::AddGlobal(System.Object)
extern "C"  int32_t CompilationContext_AddGlobal_m4021821667 (CompilationContext_t1096990896 * __this, Il2CppObject * ___global, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Linq.Expressions.CompilationContext::GetGlobals()
extern "C"  ObjectU5BU5D_t11523773* CompilationContext_GetGlobals_m1134463412 (CompilationContext_t1096990896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Linq.Expressions.CompilationContext::AddCompilationUnit(System.Linq.Expressions.LambdaExpression)
extern "C"  int32_t CompilationContext_AddCompilationUnit_m3634715546 (CompilationContext_t1096990896 * __this, LambdaExpression_t262791171 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Linq.Expressions.CompilationContext::AddCompilationUnit(System.Linq.Expressions.EmitContext,System.Linq.Expressions.LambdaExpression)
extern "C"  int32_t CompilationContext_AddCompilationUnit_m4078644328 (CompilationContext_t1096990896 * __this, EmitContext_t3183126624 * ___parent, LambdaExpression_t262791171 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.CompilationContext::DetectHoistedVariables(System.Linq.Expressions.LambdaExpression)
extern "C"  void CompilationContext_DetectHoistedVariables_m2851429758 (CompilationContext_t1096990896 * __this, LambdaExpression_t262791171 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.CompilationContext::GetHoistedLocals(System.Linq.Expressions.LambdaExpression)
extern "C"  List_1_t1136554526 * CompilationContext_GetHoistedLocals_m1095044826 (CompilationContext_t1096990896 * __this, LambdaExpression_t262791171 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Linq.Expressions.CompilationContext::CreateDelegate()
extern "C"  Delegate_t3660574010 * CompilationContext_CreateDelegate_m4137627895 (CompilationContext_t1096990896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Linq.Expressions.CompilationContext::CreateDelegate(System.Int32,System.Runtime.CompilerServices.ExecutionScope)
extern "C"  Delegate_t3660574010 * CompilationContext_CreateDelegate_m4289752262 (CompilationContext_t1096990896 * __this, int32_t ___unit, ExecutionScope_t3452505026 * ___scope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
