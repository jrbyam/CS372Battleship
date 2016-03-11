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

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.IndirectReference
struct IndirectReference_t2392504129;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.TypeReference
struct TypeReference_t3383065301;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.TypeReference[]
struct TypeReferenceU5BU5D_t2018303544;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3383065301.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.IndirectReference::.ctor(Castle.DynamicProxy.Generators.Emitters.SimpleAST.TypeReference)
extern "C"  void IndirectReference__ctor_m3837465197 (IndirectReference_t2392504129 * __this, TypeReference_t3383065301 * ___byRefReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.IndirectReference::LoadAddressOfReference(System.Reflection.Emit.ILGenerator)
extern "C"  void IndirectReference_LoadAddressOfReference_m547157435 (IndirectReference_t2392504129 * __this, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.IndirectReference::LoadReference(System.Reflection.Emit.ILGenerator)
extern "C"  void IndirectReference_LoadReference_m4157780576 (IndirectReference_t2392504129 * __this, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.IndirectReference::StoreReference(System.Reflection.Emit.ILGenerator)
extern "C"  void IndirectReference_StoreReference_m389661183 (IndirectReference_t2392504129 * __this, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.TypeReference Castle.DynamicProxy.Generators.Emitters.SimpleAST.IndirectReference::WrapIfByRef(Castle.DynamicProxy.Generators.Emitters.SimpleAST.TypeReference)
extern "C"  TypeReference_t3383065301 * IndirectReference_WrapIfByRef_m2141818678 (Il2CppObject * __this /* static, unused */, TypeReference_t3383065301 * ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.TypeReference[] Castle.DynamicProxy.Generators.Emitters.SimpleAST.IndirectReference::WrapIfByRef(Castle.DynamicProxy.Generators.Emitters.SimpleAST.TypeReference[])
extern "C"  TypeReferenceU5BU5D_t2018303544* IndirectReference_WrapIfByRef_m1618387894 (Il2CppObject * __this /* static, unused */, TypeReferenceU5BU5D_t2018303544* ___references, const MethodInfo* method) IL2CPP_METHOD_ATTR;
