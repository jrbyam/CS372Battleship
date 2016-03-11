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

// Castle.DynamicProxy.Generators.Emitters.ClassEmitter
struct ClassEmitter_t3355090660;
// Castle.DynamicProxy.ModuleScope
struct ModuleScope_t3833971791;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t1356416995;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t4287691406;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_ModuleScope3833971791.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_TypeAttributes104824479.h"
#include "mscorlib_System_Reflection_Emit_TypeBuilder4287691406.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.ClassEmitter::.ctor(Castle.DynamicProxy.ModuleScope,System.String,System.Type,System.Collections.Generic.IEnumerable`1<System.Type>)
extern "C"  void ClassEmitter__ctor_m2210303461 (ClassEmitter_t3355090660 * __this, ModuleScope_t3833971791 * ___modulescope, String_t* ___name, Type_t * ___baseType, Il2CppObject* ___interfaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.ClassEmitter::.ctor(Castle.DynamicProxy.ModuleScope,System.String,System.Type,System.Collections.Generic.IEnumerable`1<System.Type>,System.Reflection.TypeAttributes)
extern "C"  void ClassEmitter__ctor_m1685066860 (ClassEmitter_t3355090660 * __this, ModuleScope_t3833971791 * ___modulescope, String_t* ___name, Type_t * ___baseType, Il2CppObject* ___interfaces, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.ClassEmitter::.ctor(Castle.DynamicProxy.ModuleScope,System.String,System.Type,System.Collections.Generic.IEnumerable`1<System.Type>,System.Reflection.TypeAttributes,System.Boolean)
extern "C"  void ClassEmitter__ctor_m3350157713 (ClassEmitter_t3355090660 * __this, ModuleScope_t3833971791 * ___modulescope, String_t* ___name, Type_t * ___baseType, Il2CppObject* ___interfaces, int32_t ___flags, bool ___forceUnsigned, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.ClassEmitter::.ctor(System.Reflection.Emit.TypeBuilder)
extern "C"  void ClassEmitter__ctor_m3865119697 (ClassEmitter_t3355090660 * __this, TypeBuilder_t4287691406 * ___typeBuilder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.ModuleScope Castle.DynamicProxy.Generators.Emitters.ClassEmitter::get_ModuleScope()
extern "C"  ModuleScope_t3833971791 * ClassEmitter_get_ModuleScope_m2260435396 (ClassEmitter_t3355090660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Type> Castle.DynamicProxy.Generators.Emitters.ClassEmitter::InitializeGenericArgumentsFromBases(System.Type&,System.Collections.Generic.IEnumerable`1<System.Type>)
extern "C"  Il2CppObject* ClassEmitter_InitializeGenericArgumentsFromBases_m4053900782 (ClassEmitter_t3355090660 * __this, Type_t ** ___baseType, Il2CppObject* ___interfaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder Castle.DynamicProxy.Generators.Emitters.ClassEmitter::CreateTypeBuilder(Castle.DynamicProxy.ModuleScope,System.String,System.Type,System.Collections.Generic.IEnumerable`1<System.Type>,System.Reflection.TypeAttributes,System.Boolean)
extern "C"  TypeBuilder_t4287691406 * ClassEmitter_CreateTypeBuilder_m1145344469 (Il2CppObject * __this /* static, unused */, ModuleScope_t3833971791 * ___modulescope, String_t* ___name, Type_t * ___baseType, Il2CppObject* ___interfaces, int32_t ___flags, bool ___forceUnsigned, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.Emitters.ClassEmitter::ShouldForceUnsigned()
extern "C"  bool ClassEmitter_ShouldForceUnsigned_m2894299166 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
