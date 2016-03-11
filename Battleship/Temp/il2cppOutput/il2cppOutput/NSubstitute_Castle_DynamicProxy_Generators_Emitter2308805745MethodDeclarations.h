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

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.NewInstanceExpression
struct NewInstanceExpression_t2308805745;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[]
struct ExpressionU5BU5D_t1002953237;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// Castle.DynamicProxy.Generators.Emitters.IMemberEmitter
struct IMemberEmitter_t4173917593;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_ConstructorInfo3542137334.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.NewInstanceExpression::.ctor(System.Reflection.ConstructorInfo,Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[])
extern "C"  void NewInstanceExpression__ctor_m3515349602 (NewInstanceExpression_t2308805745 * __this, ConstructorInfo_t3542137334 * ___constructor, ExpressionU5BU5D_t1002953237* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.NewInstanceExpression::.ctor(System.Type,System.Type[],Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[])
extern "C"  void NewInstanceExpression__ctor_m172847174 (NewInstanceExpression_t2308805745 * __this, Type_t * ___target, TypeU5BU5D_t3431720054* ___constructor_args, ExpressionU5BU5D_t1002953237* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.NewInstanceExpression::Emit(Castle.DynamicProxy.Generators.Emitters.IMemberEmitter,System.Reflection.Emit.ILGenerator)
extern "C"  void NewInstanceExpression_Emit_m2148401099 (NewInstanceExpression_t2308805745 * __this, Il2CppObject * ___member, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
