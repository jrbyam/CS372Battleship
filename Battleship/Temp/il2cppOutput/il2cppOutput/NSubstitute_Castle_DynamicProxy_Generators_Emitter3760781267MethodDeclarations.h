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

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ByRefReference
struct ByRefReference_t3760781267;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference
struct LocalReference_t1252421124;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter1252421124.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.ByRefReference::.ctor(Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference)
extern "C"  void ByRefReference__ctor_m3592879202 (ByRefReference_t3760781267 * __this, LocalReference_t1252421124 * ___localReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.ByRefReference::LoadAddressOfReference(System.Reflection.Emit.ILGenerator)
extern "C"  void ByRefReference_LoadAddressOfReference_m2438325229 (ByRefReference_t3760781267 * __this, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.ByRefReference::LoadReference(System.Reflection.Emit.ILGenerator)
extern "C"  void ByRefReference_LoadReference_m2241176558 (ByRefReference_t3760781267 * __this, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.ByRefReference::StoreReference(System.Reflection.Emit.ILGenerator)
extern "C"  void ByRefReference_StoreReference_m1104478769 (ByRefReference_t3760781267 * __this, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
