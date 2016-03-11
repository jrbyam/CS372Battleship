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

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.AsTypeReference
struct AsTypeReference_t285018051;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;
// System.Type
struct Type_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter1588091119.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.AsTypeReference::.ctor(Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference,System.Type)
extern "C"  void AsTypeReference__ctor_m3805171016 (AsTypeReference_t285018051 * __this, Reference_t1588091119 * ___reference, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.AsTypeReference::LoadAddressOfReference(System.Reflection.Emit.ILGenerator)
extern "C"  void AsTypeReference_LoadAddressOfReference_m1133392701 (AsTypeReference_t285018051 * __this, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.AsTypeReference::LoadReference(System.Reflection.Emit.ILGenerator)
extern "C"  void AsTypeReference_LoadReference_m301456030 (AsTypeReference_t285018051 * __this, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.AsTypeReference::StoreReference(System.Reflection.Emit.ILGenerator)
extern "C"  void AsTypeReference_StoreReference_m1102684545 (AsTypeReference_t285018051 * __this, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
