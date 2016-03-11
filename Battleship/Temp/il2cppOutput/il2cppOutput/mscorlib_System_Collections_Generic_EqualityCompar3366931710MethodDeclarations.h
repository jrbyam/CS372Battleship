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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.Emit.OpCode>
struct DefaultComparer_t3366931710;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_OpCode4028977979.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.Emit.OpCode>::.ctor()
extern "C"  void DefaultComparer__ctor_m3444127875_gshared (DefaultComparer_t3366931710 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m3444127875(__this, method) ((  void (*) (DefaultComparer_t3366931710 *, const MethodInfo*))DefaultComparer__ctor_m3444127875_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.Emit.OpCode>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m1327724232_gshared (DefaultComparer_t3366931710 * __this, OpCode_t4028977979  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m1327724232(__this, ___obj, method) ((  int32_t (*) (DefaultComparer_t3366931710 *, OpCode_t4028977979 , const MethodInfo*))DefaultComparer_GetHashCode_m1327724232_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.Emit.OpCode>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m2512014932_gshared (DefaultComparer_t3366931710 * __this, OpCode_t4028977979  ___x, OpCode_t4028977979  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m2512014932(__this, ___x, ___y, method) ((  bool (*) (DefaultComparer_t3366931710 *, OpCode_t4028977979 , OpCode_t4028977979 , const MethodInfo*))DefaultComparer_Equals_m2512014932_gshared)(__this, ___x, ___y, method)
