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
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3161373071;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1302937806;
// System.Collections.Generic.ICollection`1<System.Reflection.Emit.OpCode>
struct ICollection_1_t199842069;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Reflection.Emit.OpCode>[]
struct KeyValuePair_2U5BU5D_t3727362590;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Reflection.Emit.OpCode>>
struct IEnumerator_1_t3692967159;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Reflection.Emit.OpCode>
struct KeyCollection_t749637397;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Reflection.Emit.OpCode>
struct ValueCollection_t348499211;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22209860711.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Reflection_Emit_OpCode4028977979.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2488357354.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::.ctor()
extern "C"  void Dictionary_2__ctor_m500211942_gshared (Dictionary_2_t2721329413 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m500211942(__this, method) ((  void (*) (Dictionary_2_t2721329413 *, const MethodInfo*))Dictionary_2__ctor_m500211942_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1018114141_gshared (Dictionary_2_t2721329413 * __this, Il2CppObject* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1018114141(__this, ___comparer, method) ((  void (*) (Dictionary_2_t2721329413 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1018114141_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m707145015_gshared (Dictionary_2_t2721329413 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m707145015(__this, ___capacity, method) ((  void (*) (Dictionary_2_t2721329413 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m707145015_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m496860455_gshared (Dictionary_2_t2721329413 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m496860455(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t2721329413 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2__ctor_m496860455_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1289031080_gshared (Dictionary_2_t2721329413 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1289031080(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t2721329413 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1289031080_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1983177448_gshared (Dictionary_2_t2721329413 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1983177448(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t2721329413 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1983177448_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m4125554402_gshared (Dictionary_2_t2721329413 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m4125554402(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t2721329413 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m4125554402_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m450593287_gshared (Dictionary_2_t2721329413 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m450593287(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t2721329413 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m450593287_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m1898271722_gshared (Dictionary_2_t2721329413 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1898271722(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t2721329413 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1898271722_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m3237937612_gshared (Dictionary_2_t2721329413 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m3237937612(__this, ___key, method) ((  bool (*) (Dictionary_2_t2721329413 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m3237937612_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m4257802821_gshared (Dictionary_2_t2721329413 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m4257802821(__this, ___key, method) ((  void (*) (Dictionary_2_t2721329413 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m4257802821_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3929727240_gshared (Dictionary_2_t2721329413 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3929727240(__this, method) ((  bool (*) (Dictionary_2_t2721329413 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3929727240_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3939756660_gshared (Dictionary_2_t2721329413 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3939756660(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2721329413 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3939756660_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3812753228_gshared (Dictionary_2_t2721329413 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3812753228(__this, method) ((  bool (*) (Dictionary_2_t2721329413 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3812753228_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14872667_gshared (Dictionary_2_t2721329413 * __this, KeyValuePair_2_t2209860711  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14872667(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t2721329413 *, KeyValuePair_2_t2209860711 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14872667_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2921117639_gshared (Dictionary_2_t2721329413 * __this, KeyValuePair_2_t2209860711  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2921117639(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t2721329413 *, KeyValuePair_2_t2209860711 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2921117639_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m4038369151_gshared (Dictionary_2_t2721329413 * __this, KeyValuePair_2U5BU5D_t3727362590* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m4038369151(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t2721329413 *, KeyValuePair_2U5BU5D_t3727362590*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m4038369151_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4080280748_gshared (Dictionary_2_t2721329413 * __this, KeyValuePair_2_t2209860711  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4080280748(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t2721329413 *, KeyValuePair_2_t2209860711 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4080280748_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m3807593246_gshared (Dictionary_2_t2721329413 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m3807593246(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t2721329413 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m3807593246_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2453975193_gshared (Dictionary_2_t2721329413 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2453975193(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2721329413 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2453975193_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2599309782_gshared (Dictionary_2_t2721329413 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2599309782(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t2721329413 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2599309782_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2854895665_gshared (Dictionary_2_t2721329413 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2854895665(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2721329413 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2854895665_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m3979263310_gshared (Dictionary_2_t2721329413 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m3979263310(__this, method) ((  int32_t (*) (Dictionary_2_t2721329413 *, const MethodInfo*))Dictionary_2_get_Count_m3979263310_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::get_Item(TKey)
extern "C"  OpCode_t4028977979  Dictionary_2_get_Item_m298264669_gshared (Dictionary_2_t2721329413 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m298264669(__this, ___key, method) ((  OpCode_t4028977979  (*) (Dictionary_2_t2721329413 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m298264669_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m1867402278_gshared (Dictionary_2_t2721329413 * __this, Il2CppObject * ___key, OpCode_t4028977979  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1867402278(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t2721329413 *, Il2CppObject *, OpCode_t4028977979 , const MethodInfo*))Dictionary_2_set_Item_m1867402278_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m2265663582_gshared (Dictionary_2_t2721329413 * __this, int32_t ___capacity, Il2CppObject* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m2265663582(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t2721329413 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m2265663582_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m2332992281_gshared (Dictionary_2_t2721329413 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m2332992281(__this, ___size, method) ((  void (*) (Dictionary_2_t2721329413 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m2332992281_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m1629855573_gshared (Dictionary_2_t2721329413 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1629855573(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t2721329413 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1629855573_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t2209860711  Dictionary_2_make_pair_m3391553697_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, OpCode_t4028977979  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m3391553697(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t2209860711  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, OpCode_t4028977979 , const MethodInfo*))Dictionary_2_make_pair_m3391553697_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::pick_key(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_key_m1034183477_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, OpCode_t4028977979  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1034183477(__this /* static, unused */, ___key, ___value, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, OpCode_t4028977979 , const MethodInfo*))Dictionary_2_pick_key_m1034183477_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::pick_value(TKey,TValue)
extern "C"  OpCode_t4028977979  Dictionary_2_pick_value_m1313462453_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, OpCode_t4028977979  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1313462453(__this /* static, unused */, ___key, ___value, method) ((  OpCode_t4028977979  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, OpCode_t4028977979 , const MethodInfo*))Dictionary_2_pick_value_m1313462453_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m3466612442_gshared (Dictionary_2_t2721329413 * __this, KeyValuePair_2U5BU5D_t3727362590* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m3466612442(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t2721329413 *, KeyValuePair_2U5BU5D_t3727362590*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m3466612442_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::Resize()
extern "C"  void Dictionary_2_Resize_m2679464978_gshared (Dictionary_2_t2721329413 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m2679464978(__this, method) ((  void (*) (Dictionary_2_t2721329413 *, const MethodInfo*))Dictionary_2_Resize_m2679464978_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m954611343_gshared (Dictionary_2_t2721329413 * __this, Il2CppObject * ___key, OpCode_t4028977979  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m954611343(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t2721329413 *, Il2CppObject *, OpCode_t4028977979 , const MethodInfo*))Dictionary_2_Add_m954611343_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::Clear()
extern "C"  void Dictionary_2_Clear_m2201312529_gshared (Dictionary_2_t2721329413 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m2201312529(__this, method) ((  void (*) (Dictionary_2_t2721329413 *, const MethodInfo*))Dictionary_2_Clear_m2201312529_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m4257281207_gshared (Dictionary_2_t2721329413 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m4257281207(__this, ___key, method) ((  bool (*) (Dictionary_2_t2721329413 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m4257281207_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m2325026103_gshared (Dictionary_2_t2721329413 * __this, OpCode_t4028977979  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m2325026103(__this, ___value, method) ((  bool (*) (Dictionary_2_t2721329413 *, OpCode_t4028977979 , const MethodInfo*))Dictionary_2_ContainsValue_m2325026103_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m2977869188_gshared (Dictionary_2_t2721329413 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m2977869188(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t2721329413 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2_GetObjectData_m2977869188_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m627568480_gshared (Dictionary_2_t2721329413 * __this, Il2CppObject * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m627568480(__this, ___sender, method) ((  void (*) (Dictionary_2_t2721329413 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m627568480_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m2341006809_gshared (Dictionary_2_t2721329413 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m2341006809(__this, ___key, method) ((  bool (*) (Dictionary_2_t2721329413 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m2341006809_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m2214897168_gshared (Dictionary_2_t2721329413 * __this, Il2CppObject * ___key, OpCode_t4028977979 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m2214897168(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t2721329413 *, Il2CppObject *, OpCode_t4028977979 *, const MethodInfo*))Dictionary_2_TryGetValue_m2214897168_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::get_Keys()
extern "C"  KeyCollection_t749637397 * Dictionary_2_get_Keys_m3372996207_gshared (Dictionary_2_t2721329413 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m3372996207(__this, method) ((  KeyCollection_t749637397 * (*) (Dictionary_2_t2721329413 *, const MethodInfo*))Dictionary_2_get_Keys_m3372996207_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::get_Values()
extern "C"  ValueCollection_t348499211 * Dictionary_2_get_Values_m822270767_gshared (Dictionary_2_t2721329413 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m822270767(__this, method) ((  ValueCollection_t348499211 * (*) (Dictionary_2_t2721329413 *, const MethodInfo*))Dictionary_2_get_Values_m822270767_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m484042384_gshared (Dictionary_2_t2721329413 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m484042384(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t2721329413 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m484042384_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::ToTValue(System.Object)
extern "C"  OpCode_t4028977979  Dictionary_2_ToTValue_m3920743888_gshared (Dictionary_2_t2721329413 * __this, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m3920743888(__this, ___value, method) ((  OpCode_t4028977979  (*) (Dictionary_2_t2721329413 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m3920743888_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m3071202236_gshared (Dictionary_2_t2721329413 * __this, KeyValuePair_2_t2209860711  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m3071202236(__this, ___pair, method) ((  bool (*) (Dictionary_2_t2721329413 *, KeyValuePair_2_t2209860711 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m3071202236_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::GetEnumerator()
extern "C"  Enumerator_t2488357355  Dictionary_2_GetEnumerator_m3794180331_gshared (Dictionary_2_t2721329413 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m3794180331(__this, method) ((  Enumerator_t2488357355  (*) (Dictionary_2_t2721329413 *, const MethodInfo*))Dictionary_2_GetEnumerator_m3794180331_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Reflection.Emit.OpCode>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Dictionary_2_U3CCopyToU3Em__0_m3991416698_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, OpCode_t4028977979  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m3991416698(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t130027246  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, OpCode_t4028977979 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m3991416698_gshared)(__this /* static, unused */, ___key, ___value, method)
