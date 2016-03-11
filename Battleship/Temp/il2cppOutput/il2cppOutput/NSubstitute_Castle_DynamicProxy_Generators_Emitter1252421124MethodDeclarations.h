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

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference
struct LocalReference_t1252421124;
// System.Type
struct Type_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference::.ctor(System.Type)
extern "C"  void LocalReference__ctor_m3053284518 (LocalReference_t1252421124 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference::Generate(System.Reflection.Emit.ILGenerator)
extern "C"  void LocalReference_Generate_m3721674349 (LocalReference_t1252421124 * __this, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference::LoadAddressOfReference(System.Reflection.Emit.ILGenerator)
extern "C"  void LocalReference_LoadAddressOfReference_m1121063582 (LocalReference_t1252421124 * __this, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference::LoadReference(System.Reflection.Emit.ILGenerator)
extern "C"  void LocalReference_LoadReference_m3650484765 (LocalReference_t1252421124 * __this, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference::StoreReference(System.Reflection.Emit.ILGenerator)
extern "C"  void LocalReference_StoreReference_m1843360226 (LocalReference_t1252421124 * __this, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
