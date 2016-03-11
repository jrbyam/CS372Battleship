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

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.MethodInvocationExpression
struct MethodInvocationExpression_t964809645;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[]
struct ExpressionU5BU5D_t1002953237;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;
// Castle.DynamicProxy.Generators.Emitters.IMemberEmitter
struct IMemberEmitter_t4173917593;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter1588091119.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.MethodInvocationExpression::.ctor(System.Reflection.MethodInfo,Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[])
extern "C"  void MethodInvocationExpression__ctor_m2277351507 (MethodInvocationExpression_t964809645 * __this, MethodInfo_t * ___method, ExpressionU5BU5D_t1002953237* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.MethodInvocationExpression::.ctor(Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference,System.Reflection.MethodInfo,Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[])
extern "C"  void MethodInvocationExpression__ctor_m4102036566 (MethodInvocationExpression_t964809645 * __this, Reference_t1588091119 * ___owner, MethodInfo_t * ___method, ExpressionU5BU5D_t1002953237* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.Emitters.SimpleAST.MethodInvocationExpression::get_VirtualCall()
extern "C"  bool MethodInvocationExpression_get_VirtualCall_m3707654656 (MethodInvocationExpression_t964809645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.MethodInvocationExpression::set_VirtualCall(System.Boolean)
extern "C"  void MethodInvocationExpression_set_VirtualCall_m4193389803 (MethodInvocationExpression_t964809645 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.MethodInvocationExpression::Emit(Castle.DynamicProxy.Generators.Emitters.IMemberEmitter,System.Reflection.Emit.ILGenerator)
extern "C"  void MethodInvocationExpression_Emit_m2141476719 (MethodInvocationExpression_t964809645 * __this, Il2CppObject * ___member, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
