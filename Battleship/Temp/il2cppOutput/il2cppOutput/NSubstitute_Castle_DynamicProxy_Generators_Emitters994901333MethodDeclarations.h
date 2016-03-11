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

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference
struct FieldReference_t994901333;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.Emit.FieldBuilder
struct FieldBuilder_t2184649998;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_FieldInfo1164929782.h"
#include "mscorlib_System_Reflection_Emit_FieldBuilder2184649998.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference::.ctor(System.Reflection.FieldInfo)
extern "C"  void FieldReference__ctor_m3607348076 (FieldReference_t994901333 * __this, FieldInfo_t * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference::.ctor(System.Reflection.Emit.FieldBuilder)
extern "C"  void FieldReference__ctor_m1987516440 (FieldReference_t994901333 * __this, FieldBuilder_t2184649998 * ___fieldbuilder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.FieldBuilder Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference::get_Fieldbuilder()
extern "C"  FieldBuilder_t2184649998 * FieldReference_get_Fieldbuilder_m1310745639 (FieldReference_t994901333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference::get_Reference()
extern "C"  FieldInfo_t * FieldReference_get_Reference_m2432245459 (FieldReference_t994901333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference::LoadAddressOfReference(System.Reflection.Emit.ILGenerator)
extern "C"  void FieldReference_LoadAddressOfReference_m4200065647 (FieldReference_t994901333 * __this, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference::LoadReference(System.Reflection.Emit.ILGenerator)
extern "C"  void FieldReference_LoadReference_m2197021484 (FieldReference_t994901333 * __this, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference::StoreReference(System.Reflection.Emit.ILGenerator)
extern "C"  void FieldReference_StoreReference_m4030638771 (FieldReference_t994901333 * __this, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
