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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Reflection.Emit.OpCode,System.Collections.Generic.KeyValuePair`2<System.Object,System.Reflection.Emit.OpCode>>
struct Transform_1_t1062552894;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22209860711.h"
#include "mscorlib_System_Reflection_Emit_OpCode4028977979.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Reflection.Emit.OpCode,System.Collections.Generic.KeyValuePair`2<System.Object,System.Reflection.Emit.OpCode>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2168322474_gshared (Transform_1_t1062552894 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m2168322474(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1062552894 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2168322474_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Reflection.Emit.OpCode,System.Collections.Generic.KeyValuePair`2<System.Object,System.Reflection.Emit.OpCode>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t2209860711  Transform_1_Invoke_m3627388686_gshared (Transform_1_t1062552894 * __this, Il2CppObject * ___key, OpCode_t4028977979  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m3627388686(__this, ___key, ___value, method) ((  KeyValuePair_2_t2209860711  (*) (Transform_1_t1062552894 *, Il2CppObject *, OpCode_t4028977979 , const MethodInfo*))Transform_1_Invoke_m3627388686_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Reflection.Emit.OpCode,System.Collections.Generic.KeyValuePair`2<System.Object,System.Reflection.Emit.OpCode>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m4235623097_gshared (Transform_1_t1062552894 * __this, Il2CppObject * ___key, OpCode_t4028977979  ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m4235623097(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t1062552894 *, Il2CppObject *, OpCode_t4028977979 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m4235623097_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Reflection.Emit.OpCode,System.Collections.Generic.KeyValuePair`2<System.Object,System.Reflection.Emit.OpCode>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t2209860711  Transform_1_EndInvoke_m376224956_gshared (Transform_1_t1062552894 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m376224956(__this, ___result, method) ((  KeyValuePair_2_t2209860711  (*) (Transform_1_t1062552894 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m376224956_gshared)(__this, ___result, method)
