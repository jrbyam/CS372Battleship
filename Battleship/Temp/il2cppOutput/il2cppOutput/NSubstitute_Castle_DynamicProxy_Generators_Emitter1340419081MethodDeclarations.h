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

// Castle.DynamicProxy.Generators.Emitters.PropertyEmitter/DefineProperty_Clr2_0
struct DefineProperty_Clr2_0_t1340419081;
// System.Object
struct Il2CppObject;
// System.Reflection.Emit.PropertyBuilder
struct PropertyBuilder_t356853651;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_PropertyAttributes3095558010.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.PropertyEmitter/DefineProperty_Clr2_0::.ctor(System.Object,System.IntPtr)
extern "C"  void DefineProperty_Clr2_0__ctor_m759473600 (DefineProperty_Clr2_0_t1340419081 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.PropertyBuilder Castle.DynamicProxy.Generators.Emitters.PropertyEmitter/DefineProperty_Clr2_0::Invoke(System.String,System.Reflection.PropertyAttributes,System.Type,System.Type[])
extern "C"  PropertyBuilder_t356853651 * DefineProperty_Clr2_0_Invoke_m2819692496 (DefineProperty_Clr2_0_t1340419081 * __this, String_t* ___name, int32_t ___attributes, Type_t * ___propertyType, TypeU5BU5D_t3431720054* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" PropertyBuilder_t356853651 * pinvoke_delegate_wrapper_DefineProperty_Clr2_0_t1340419081(Il2CppObject* delegate, String_t* ___name, int32_t ___attributes, Type_t * ___propertyType, TypeU5BU5D_t3431720054* ___parameters);
// System.IAsyncResult Castle.DynamicProxy.Generators.Emitters.PropertyEmitter/DefineProperty_Clr2_0::BeginInvoke(System.String,System.Reflection.PropertyAttributes,System.Type,System.Type[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DefineProperty_Clr2_0_BeginInvoke_m3148730325 (DefineProperty_Clr2_0_t1340419081 * __this, String_t* ___name, int32_t ___attributes, Type_t * ___propertyType, TypeU5BU5D_t3431720054* ___parameters, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.PropertyBuilder Castle.DynamicProxy.Generators.Emitters.PropertyEmitter/DefineProperty_Clr2_0::EndInvoke(System.IAsyncResult)
extern "C"  PropertyBuilder_t356853651 * DefineProperty_Clr2_0_EndInvoke_m4066360974 (DefineProperty_Clr2_0_t1340419081 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
