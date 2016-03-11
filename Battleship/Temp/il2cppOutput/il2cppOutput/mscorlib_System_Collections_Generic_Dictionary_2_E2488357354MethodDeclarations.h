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

// System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>
struct Dictionary_2_t2721329413;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2488357354.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22209860711.h"
#include "mscorlib_System_Reflection_Emit_OpCode4028977979.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Reflection.Emit.OpCode>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void Enumerator__ctor_m3895069128_gshared (Enumerator_t2488357355 * __this, Dictionary_2_t2721329413 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m3895069128(__this, ___dictionary, method) ((  void (*) (Enumerator_t2488357355 *, Dictionary_2_t2721329413 *, const MethodInfo*))Enumerator__ctor_m3895069128_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Reflection.Emit.OpCode>::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * Enumerator_System_Collections_IEnumerator_get_Current_m558848985_gshared (Enumerator_t2488357355 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m558848985(__this, method) ((  Il2CppObject * (*) (Enumerator_t2488357355 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m558848985_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Reflection.Emit.OpCode>::System.Collections.IEnumerator.Reset()
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m1765013997_gshared (Enumerator_t2488357355 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1765013997(__this, method) ((  void (*) (Enumerator_t2488357355 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1765013997_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Reflection.Emit.OpCode>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C"  DictionaryEntry_t130027246  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1601485750_gshared (Enumerator_t2488357355 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1601485750(__this, method) ((  DictionaryEntry_t130027246  (*) (Enumerator_t2488357355 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1601485750_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Reflection.Emit.OpCode>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m634819061_gshared (Enumerator_t2488357355 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m634819061(__this, method) ((  Il2CppObject * (*) (Enumerator_t2488357355 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m634819061_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Reflection.Emit.OpCode>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1224197959_gshared (Enumerator_t2488357355 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1224197959(__this, method) ((  Il2CppObject * (*) (Enumerator_t2488357355 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1224197959_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Reflection.Emit.OpCode>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2135701593_gshared (Enumerator_t2488357355 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m2135701593(__this, method) ((  bool (*) (Enumerator_t2488357355 *, const MethodInfo*))Enumerator_MoveNext_m2135701593_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Reflection.Emit.OpCode>::get_Current()
extern "C"  KeyValuePair_2_t2209860711  Enumerator_get_Current_m2455722807_gshared (Enumerator_t2488357355 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m2455722807(__this, method) ((  KeyValuePair_2_t2209860711  (*) (Enumerator_t2488357355 *, const MethodInfo*))Enumerator_get_Current_m2455722807_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Reflection.Emit.OpCode>::get_CurrentKey()
extern "C"  Il2CppObject * Enumerator_get_CurrentKey_m511871334_gshared (Enumerator_t2488357355 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m511871334(__this, method) ((  Il2CppObject * (*) (Enumerator_t2488357355 *, const MethodInfo*))Enumerator_get_CurrentKey_m511871334_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Reflection.Emit.OpCode>::get_CurrentValue()
extern "C"  OpCode_t4028977979  Enumerator_get_CurrentValue_m1632209034_gshared (Enumerator_t2488357355 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1632209034(__this, method) ((  OpCode_t4028977979  (*) (Enumerator_t2488357355 *, const MethodInfo*))Enumerator_get_CurrentValue_m1632209034_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Reflection.Emit.OpCode>::Reset()
extern "C"  void Enumerator_Reset_m807958554_gshared (Enumerator_t2488357355 * __this, const MethodInfo* method);
#define Enumerator_Reset_m807958554(__this, method) ((  void (*) (Enumerator_t2488357355 *, const MethodInfo*))Enumerator_Reset_m807958554_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Reflection.Emit.OpCode>::VerifyState()
extern "C"  void Enumerator_VerifyState_m4016295075_gshared (Enumerator_t2488357355 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m4016295075(__this, method) ((  void (*) (Enumerator_t2488357355 *, const MethodInfo*))Enumerator_VerifyState_m4016295075_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Reflection.Emit.OpCode>::VerifyCurrent()
extern "C"  void Enumerator_VerifyCurrent_m1228839755_gshared (Enumerator_t2488357355 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1228839755(__this, method) ((  void (*) (Enumerator_t2488357355 *, const MethodInfo*))Enumerator_VerifyCurrent_m1228839755_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Reflection.Emit.OpCode>::Dispose()
extern "C"  void Enumerator_Dispose_m1582518890_gshared (Enumerator_t2488357355 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1582518890(__this, method) ((  void (*) (Enumerator_t2488357355 *, const MethodInfo*))Enumerator_Dispose_m1582518890_gshared)(__this, method)
