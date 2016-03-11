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

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.AssignArgumentStatement
struct AssignArgumentStatement_t3500792743;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference
struct ArgumentReference_t4040130226;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression
struct Expression_t707291260;
// Castle.DynamicProxy.Generators.Emitters.IMemberEmitter
struct IMemberEmitter_t4173917593;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter4040130226.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters707291260.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.AssignArgumentStatement::.ctor(Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference,Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression)
extern "C"  void AssignArgumentStatement__ctor_m1752933270 (AssignArgumentStatement_t3500792743 * __this, ArgumentReference_t4040130226 * ___argument, Expression_t707291260 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.AssignArgumentStatement::Emit(Castle.DynamicProxy.Generators.Emitters.IMemberEmitter,System.Reflection.Emit.ILGenerator)
extern "C"  void AssignArgumentStatement_Emit_m2326762325 (AssignArgumentStatement_t3500792743 * __this, Il2CppObject * ___member, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
