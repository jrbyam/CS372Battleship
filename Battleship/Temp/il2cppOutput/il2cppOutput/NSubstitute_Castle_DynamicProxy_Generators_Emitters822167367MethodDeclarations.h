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

// Castle.DynamicProxy.Generators.Emitters.CodeBuilders.ConstructorCodeBuilder
struct ConstructorCodeBuilder_t822167367;
// System.Type
struct Type_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[]
struct ArgumentReferenceU5BU5D_t2172782151;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"
#include "mscorlib_System_Reflection_ConstructorInfo3542137334.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.CodeBuilders.ConstructorCodeBuilder::.ctor(System.Type,System.Reflection.Emit.ILGenerator)
extern "C"  void ConstructorCodeBuilder__ctor_m2447600748 (ConstructorCodeBuilder_t822167367 * __this, Type_t * ___baseType, ILGenerator_t3869071517 * ___generator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.CodeBuilders.ConstructorCodeBuilder::InvokeBaseConstructor()
extern "C"  void ConstructorCodeBuilder_InvokeBaseConstructor_m3951191911 (ConstructorCodeBuilder_t822167367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.CodeBuilders.ConstructorCodeBuilder::InvokeBaseConstructor(System.Reflection.ConstructorInfo)
extern "C"  void ConstructorCodeBuilder_InvokeBaseConstructor_m2912231975 (ConstructorCodeBuilder_t822167367 * __this, ConstructorInfo_t3542137334 * ___constructor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.CodeBuilders.ConstructorCodeBuilder::InvokeBaseConstructor(System.Reflection.ConstructorInfo,Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[])
extern "C"  void ConstructorCodeBuilder_InvokeBaseConstructor_m2341316133 (ConstructorCodeBuilder_t822167367 * __this, ConstructorInfo_t3542137334 * ___constructor, ArgumentReferenceU5BU5D_t2172782151* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
