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

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.AssignArrayStatement
struct AssignArrayStatement_t3967096777;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression
struct Expression_t707291260;
// Castle.DynamicProxy.Generators.Emitters.IMemberEmitter
struct IMemberEmitter_t4173917593;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter1588091119.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters707291260.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.AssignArrayStatement::.ctor(Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference,System.Int32,Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression)
extern "C"  void AssignArrayStatement__ctor_m158848752 (AssignArrayStatement_t3967096777 * __this, Reference_t1588091119 * ___targetArray, int32_t ___targetPosition, Expression_t707291260 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.AssignArrayStatement::Emit(Castle.DynamicProxy.Generators.Emitters.IMemberEmitter,System.Reflection.Emit.ILGenerator)
extern "C"  void AssignArrayStatement_Emit_m3370265299 (AssignArrayStatement_t3967096777 * __this, Il2CppObject * ___member, ILGenerator_t3869071517 * ___il, const MethodInfo* method) IL2CPP_METHOD_ATTR;
