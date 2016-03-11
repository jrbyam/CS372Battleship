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

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ReturnStatement
struct ReturnStatement_t3678573507;
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

// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.ReturnStatement::.ctor()
extern "C"  void ReturnStatement__ctor_m506766004 (ReturnStatement_t3678573507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.ReturnStatement::.ctor(Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference)
extern "C"  void ReturnStatement__ctor_m836960661 (ReturnStatement_t3678573507 * __this, Reference_t1588091119 * ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.ReturnStatement::.ctor(Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression)
extern "C"  void ReturnStatement__ctor_m367744026 (ReturnStatement_t3678573507 * __this, Expression_t707291260 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.ReturnStatement::Emit(Castle.DynamicProxy.Generators.Emitters.IMemberEmitter,System.Reflection.Emit.ILGenerator)
extern "C"  void ReturnStatement_Emit_m316440249 (ReturnStatement_t3678573507 * __this, Il2CppObject * ___member, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
