﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Predicate`1<System.Char>
struct Predicate_1_t3349670597;
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

// System.Void System.Predicate`1<System.Char>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m3786392874_gshared (Predicate_1_t3349670597 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m3786392874(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t3349670597 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m3786392874_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Char>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m2113613916_gshared (Predicate_1_t3349670597 * __this, uint16_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m2113613916(__this, ___obj, method) ((  bool (*) (Predicate_1_t3349670597 *, uint16_t, const MethodInfo*))Predicate_1_Invoke_m2113613916_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Char>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m2335096367_gshared (Predicate_1_t3349670597 * __this, uint16_t ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m2335096367(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Predicate_1_t3349670597 *, uint16_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m2335096367_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Char>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m1187390712_gshared (Predicate_1_t3349670597 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m1187390712(__this, ___result, method) ((  bool (*) (Predicate_1_t3349670597 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m1187390712_gshared)(__this, ___result, method)
