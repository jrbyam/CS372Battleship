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

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ConstructorInvocationStatement
struct ConstructorInvocationStatement_t3155812937;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[]
struct ExpressionU5BU5D_t1002953237;
// Castle.DynamicProxy.Generators.Emitters.IMemberEmitter
struct IMemberEmitter_t4173917593;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_ConstructorInfo3542137334.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.ConstructorInvocationStatement::.ctor(System.Reflection.ConstructorInfo,Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[])
extern "C"  void ConstructorInvocationStatement__ctor_m2565703402 (ConstructorInvocationStatement_t3155812937 * __this, ConstructorInfo_t3542137334 * ___method, ExpressionU5BU5D_t1002953237* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.ConstructorInvocationStatement::Emit(Castle.DynamicProxy.Generators.Emitters.IMemberEmitter,System.Reflection.Emit.ILGenerator)
extern "C"  void ConstructorInvocationStatement_Emit_m2968294483 (ConstructorInvocationStatement_t3155812937 * __this, Il2CppObject * ___member, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
