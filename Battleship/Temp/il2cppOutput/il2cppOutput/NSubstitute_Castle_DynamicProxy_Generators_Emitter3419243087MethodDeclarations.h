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

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ConvertExpression
struct ConvertExpression_t3419243087;
// System.Type
struct Type_t;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression
struct Expression_t707291260;
// Castle.DynamicProxy.Generators.Emitters.IMemberEmitter
struct IMemberEmitter_t4173917593;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters707291260.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.ConvertExpression::.ctor(System.Type,Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression)
extern "C"  void ConvertExpression__ctor_m1337512891 (ConvertExpression_t3419243087 * __this, Type_t * ___targetType, Expression_t707291260 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.ConvertExpression::.ctor(System.Type,System.Type,Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression)
extern "C"  void ConvertExpression__ctor_m4130480872 (ConvertExpression_t3419243087 * __this, Type_t * ___targetType, Type_t * ___fromType, Expression_t707291260 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.ConvertExpression::Emit(Castle.DynamicProxy.Generators.Emitters.IMemberEmitter,System.Reflection.Emit.ILGenerator)
extern "C"  void ConvertExpression_Emit_m921492909 (ConvertExpression_t3419243087 * __this, Il2CppObject * ___member, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.ConvertExpression::EmitCastIfNeeded(System.Type,System.Type,System.Reflection.Emit.ILGenerator)
extern "C"  void ConvertExpression_EmitCastIfNeeded_m3678430273 (Il2CppObject * __this /* static, unused */, Type_t * ___from, Type_t * ___target, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
