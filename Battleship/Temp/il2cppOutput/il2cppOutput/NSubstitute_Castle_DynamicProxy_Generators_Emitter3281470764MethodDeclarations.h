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

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.LoadRefArrayElementExpression
struct LoadRefArrayElementExpression_t3281470764;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ConstReference
struct ConstReference_t3369897228;
// Castle.DynamicProxy.Generators.Emitters.IMemberEmitter
struct IMemberEmitter_t4173917593;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter1588091119.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3369897228.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.LoadRefArrayElementExpression::.ctor(System.Int32,Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference)
extern "C"  void LoadRefArrayElementExpression__ctor_m3599748799 (LoadRefArrayElementExpression_t3281470764 * __this, int32_t ___index, Reference_t1588091119 * ___arrayReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.LoadRefArrayElementExpression::.ctor(Castle.DynamicProxy.Generators.Emitters.SimpleAST.ConstReference,Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference)
extern "C"  void LoadRefArrayElementExpression__ctor_m2701635268 (LoadRefArrayElementExpression_t3281470764 * __this, ConstReference_t3369897228 * ___index, Reference_t1588091119 * ___arrayReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.LoadRefArrayElementExpression::Emit(Castle.DynamicProxy.Generators.Emitters.IMemberEmitter,System.Reflection.Emit.ILGenerator)
extern "C"  void LoadRefArrayElementExpression_Emit_m472947312 (LoadRefArrayElementExpression_t3281470764 * __this, Il2CppObject * ___member, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
