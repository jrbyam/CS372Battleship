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

// System.Action`1<System.Char>
struct Action_1_t2927159404;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`1<System.Char>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m1328190063_gshared (Action_1_t2927159404 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m1328190063(__this, ___object, ___method, method) ((  void (*) (Action_1_t2927159404 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m1328190063_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Char>::Invoke(T)
extern "C"  void Action_1_Invoke_m259754741_gshared (Action_1_t2927159404 * __this, uint16_t ___obj, const MethodInfo* method);
#define Action_1_Invoke_m259754741(__this, ___obj, method) ((  void (*) (Action_1_t2927159404 *, uint16_t, const MethodInfo*))Action_1_Invoke_m259754741_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Char>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m1985327554_gshared (Action_1_t2927159404 * __this, uint16_t ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m1985327554(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Action_1_t2927159404 *, uint16_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m1985327554_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Char>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m248419327_gshared (Action_1_t2927159404 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m248419327(__this, ___result, method) ((  void (*) (Action_1_t2927159404 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m248419327_gshared)(__this, ___result, method)
