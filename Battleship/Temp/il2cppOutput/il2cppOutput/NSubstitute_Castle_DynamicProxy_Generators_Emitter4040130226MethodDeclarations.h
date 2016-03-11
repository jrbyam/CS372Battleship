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

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference
struct ArgumentReference_t4040130226;
// System.Type
struct Type_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference::.ctor(System.Type)
extern "C"  void ArgumentReference__ctor_m3716617652 (ArgumentReference_t4040130226 * __this, Type_t * ___argumentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference::.ctor(System.Type,System.Int32)
extern "C"  void ArgumentReference__ctor_m2256006051 (ArgumentReference_t4040130226 * __this, Type_t * ___argumentType, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference::get_Position()
extern "C"  int32_t ArgumentReference_get_Position_m1215282415 (ArgumentReference_t4040130226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference::set_Position(System.Int32)
extern "C"  void ArgumentReference_set_Position_m772806326 (ArgumentReference_t4040130226 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference::LoadAddressOfReference(System.Reflection.Emit.ILGenerator)
extern "C"  void ArgumentReference_LoadAddressOfReference_m3665892780 (ArgumentReference_t4040130226 * __this, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference::LoadReference(System.Reflection.Emit.ILGenerator)
extern "C"  void ArgumentReference_LoadReference_m1304080207 (ArgumentReference_t4040130226 * __this, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference::StoreReference(System.Reflection.Emit.ILGenerator)
extern "C"  void ArgumentReference_StoreReference_m2119262960 (ArgumentReference_t4040130226 * __this, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
