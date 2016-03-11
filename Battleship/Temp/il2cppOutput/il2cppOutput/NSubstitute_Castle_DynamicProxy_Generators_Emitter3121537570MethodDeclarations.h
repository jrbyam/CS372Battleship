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

// Castle.DynamicProxy.Generators.Emitters.ConstructorEmitter
struct ConstructorEmitter_t3121537570;
// Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter
struct AbstractTypeEmitter_t2268871968;
// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t1859087886;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[]
struct ArgumentReferenceU5BU5D_t2172782151;
// Castle.DynamicProxy.Generators.Emitters.CodeBuilders.ConstructorCodeBuilder
struct ConstructorCodeBuilder_t822167367;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter2268871968.h"
#include "mscorlib_System_Reflection_Emit_ConstructorBuilder1859087886.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.ConstructorEmitter::.ctor(Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter,System.Reflection.Emit.ConstructorBuilder)
extern "C"  void ConstructorEmitter__ctor_m644430491 (ConstructorEmitter_t3121537570 * __this, AbstractTypeEmitter_t2268871968 * ___maintype, ConstructorBuilder_t1859087886 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.ConstructorEmitter::.ctor(Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter,Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[])
extern "C"  void ConstructorEmitter__ctor_m1872861061 (ConstructorEmitter_t3121537570 * __this, AbstractTypeEmitter_t2268871968 * ___maintype, ArgumentReferenceU5BU5D_t2172782151* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.CodeBuilders.ConstructorCodeBuilder Castle.DynamicProxy.Generators.Emitters.ConstructorEmitter::get_CodeBuilder()
extern "C"  ConstructorCodeBuilder_t822167367 * ConstructorEmitter_get_CodeBuilder_m2606187686 (ConstructorEmitter_t3121537570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder Castle.DynamicProxy.Generators.Emitters.ConstructorEmitter::get_ConstructorBuilder()
extern "C"  ConstructorBuilder_t1859087886 * ConstructorEmitter_get_ConstructorBuilder_m734641804 (ConstructorEmitter_t3121537570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Generators.Emitters.ConstructorEmitter::get_ReturnType()
extern "C"  Type_t * ConstructorEmitter_get_ReturnType_m2703978996 (ConstructorEmitter_t3121537570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.Emitters.ConstructorEmitter::get_ImplementedByRuntime()
extern "C"  bool ConstructorEmitter_get_ImplementedByRuntime_m2615836503 (ConstructorEmitter_t3121537570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.ConstructorEmitter::EnsureValidCodeBlock()
extern "C"  void ConstructorEmitter_EnsureValidCodeBlock_m1823818345 (ConstructorEmitter_t3121537570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.ConstructorEmitter::Generate()
extern "C"  void ConstructorEmitter_Generate_m1229215292 (ConstructorEmitter_t3121537570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
