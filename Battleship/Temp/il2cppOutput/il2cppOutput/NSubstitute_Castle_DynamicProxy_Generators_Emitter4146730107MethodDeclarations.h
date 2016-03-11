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

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.TypeTokenExpression
struct TypeTokenExpression_t4146730107;
// System.Type
struct Type_t;
// Castle.DynamicProxy.Generators.Emitters.IMemberEmitter
struct IMemberEmitter_t4173917593;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.TypeTokenExpression::.ctor(System.Type)
extern "C"  void TypeTokenExpression__ctor_m595689725 (TypeTokenExpression_t4146730107 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.TypeTokenExpression::Emit(Castle.DynamicProxy.Generators.Emitters.IMemberEmitter,System.Reflection.Emit.ILGenerator)
extern "C"  void TypeTokenExpression_Emit_m3540552961 (TypeTokenExpression_t4146730107 * __this, Il2CppObject * ___member, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
