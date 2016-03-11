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

// Castle.DynamicProxy.MixinData
struct MixinData_t2184984786;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3709260776;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t1356416995;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Castle.DynamicProxy.MixinData::.ctor(System.Collections.Generic.IEnumerable`1<System.Object>)
extern "C"  void MixinData__ctor_m623156826 (MixinData_t2184984786 * __this, Il2CppObject* ___mixinInstances, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Type> Castle.DynamicProxy.MixinData::get_MixinInterfaces()
extern "C"  Il2CppObject* MixinData_get_MixinInterfaces_m2241083492 (MixinData_t2184984786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Object> Castle.DynamicProxy.MixinData::get_Mixins()
extern "C"  Il2CppObject* MixinData_get_Mixins_m2771517702 (MixinData_t2184984786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.MixinData::ContainsMixin(System.Type)
extern "C"  bool MixinData_ContainsMixin_m3637561634 (MixinData_t2184984786 * __this, Type_t * ___mixinInterfaceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.MixinData::Equals(System.Object)
extern "C"  bool MixinData_Equals_m1628504424 (MixinData_t2184984786 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Castle.DynamicProxy.MixinData::GetHashCode()
extern "C"  int32_t MixinData_GetHashCode_m2130771456 (MixinData_t2184984786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Castle.DynamicProxy.MixinData::GetMixinInstance(System.Type)
extern "C"  Il2CppObject * MixinData_GetMixinInstance_m1162787449 (MixinData_t2184984786 * __this, Type_t * ___mixinInterfaceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Castle.DynamicProxy.MixinData::<.ctor>b__0(System.Type,System.Type)
extern "C"  int32_t MixinData_U3C_ctorU3Eb__0_m1344948503 (Il2CppObject * __this /* static, unused */, Type_t * ___x, Type_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
