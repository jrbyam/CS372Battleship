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

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.IfNullExpression
struct IfNullExpression_t755996640;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.IILEmitter
struct IILEmitter_t3887433830;
// Castle.DynamicProxy.Generators.Emitters.IMemberEmitter
struct IMemberEmitter_t4173917593;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter1588091119.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.IfNullExpression::.ctor(Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference,Castle.DynamicProxy.Generators.Emitters.SimpleAST.IILEmitter,Castle.DynamicProxy.Generators.Emitters.SimpleAST.IILEmitter)
extern "C"  void IfNullExpression__ctor_m2294134930 (IfNullExpression_t755996640 * __this, Reference_t1588091119 * ___reference, Il2CppObject * ___ifNull, Il2CppObject * ___ifNotNull, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.IfNullExpression::Emit(Castle.DynamicProxy.Generators.Emitters.IMemberEmitter,System.Reflection.Emit.ILGenerator)
extern "C"  void IfNullExpression_Emit_m1969314204 (IfNullExpression_t755996640 * __this, Il2CppObject * ___member, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
