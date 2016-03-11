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

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.DefaultValueExpression
struct DefaultValueExpression_t3505439820;
// System.Type
struct Type_t;
// Castle.DynamicProxy.Generators.Emitters.IMemberEmitter
struct IMemberEmitter_t4173917593;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.DefaultValueExpression::.ctor(System.Type)
extern "C"  void DefaultValueExpression__ctor_m2534899438 (DefaultValueExpression_t3505439820 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.DefaultValueExpression::Emit(Castle.DynamicProxy.Generators.Emitters.IMemberEmitter,System.Reflection.Emit.ILGenerator)
extern "C"  void DefaultValueExpression_Emit_m2575009456 (DefaultValueExpression_t3505439820 * __this, Il2CppObject * ___member, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.DefaultValueExpression::EmitByRef(System.Reflection.Emit.ILGenerator)
extern "C"  void DefaultValueExpression_EmitByRef_m1925296249 (DefaultValueExpression_t3505439820 * __this, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.Emitters.SimpleAST.DefaultValueExpression::IsPrimitiveOrClass(System.Type)
extern "C"  bool DefaultValueExpression_IsPrimitiveOrClass_m3313970304 (DefaultValueExpression_t3505439820 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
