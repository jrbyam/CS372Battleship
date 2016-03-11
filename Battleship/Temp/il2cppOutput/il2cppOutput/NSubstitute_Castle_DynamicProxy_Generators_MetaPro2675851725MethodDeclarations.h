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

// Castle.DynamicProxy.Generators.MetaProperty
struct MetaProperty_t2675851725;
// System.String
struct String_t;
// System.Type
struct Type_t;
// Castle.DynamicProxy.Generators.MetaMethod
struct MetaMethod_t2289943065;
// System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.CustomAttributeBuilder>
struct IEnumerable_1_t3435075505;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// Castle.DynamicProxy.Generators.Emitters.PropertyEmitter
struct PropertyEmitter_t1619303335;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Castle.DynamicProxy.Generators.Emitters.ClassEmitter
struct ClassEmitter_t3355090660;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaMet2289943065.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "mscorlib_System_Object837106420.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaPro2675851725.h"

// System.Void Castle.DynamicProxy.Generators.MetaProperty::.ctor(System.String,System.Type,System.Type,Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Generators.MetaMethod,System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.CustomAttributeBuilder>,System.Type[])
extern "C"  void MetaProperty__ctor_m3854881269 (MetaProperty_t2675851725 * __this, String_t* ___name, Type_t * ___propertyType, Type_t * ___declaringType, MetaMethod_t2289943065 * ___getter, MetaMethod_t2289943065 * ___setter, Il2CppObject* ___customAttributes, TypeU5BU5D_t3431720054* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] Castle.DynamicProxy.Generators.MetaProperty::get_Arguments()
extern "C"  TypeU5BU5D_t3431720054* MetaProperty_get_Arguments_m3952616629 (MetaProperty_t2675851725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.MetaProperty::get_CanRead()
extern "C"  bool MetaProperty_get_CanRead_m4132009429 (MetaProperty_t2675851725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.MetaProperty::get_CanWrite()
extern "C"  bool MetaProperty_get_CanWrite_m4060894242 (MetaProperty_t2675851725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.PropertyEmitter Castle.DynamicProxy.Generators.MetaProperty::get_Emitter()
extern "C"  PropertyEmitter_t1619303335 * MetaProperty_get_Emitter_m562548115 (MetaProperty_t2675851725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Castle.DynamicProxy.Generators.MetaProperty::get_GetMethod()
extern "C"  MethodInfo_t * MetaProperty_get_GetMethod_m829850972 (MetaProperty_t2675851725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.MetaMethod Castle.DynamicProxy.Generators.MetaProperty::get_Getter()
extern "C"  MetaMethod_t2289943065 * MetaProperty_get_Getter_m1909420638 (MetaProperty_t2675851725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Castle.DynamicProxy.Generators.MetaProperty::get_SetMethod()
extern "C"  MethodInfo_t * MetaProperty_get_SetMethod_m741271144 (MetaProperty_t2675851725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.MetaMethod Castle.DynamicProxy.Generators.MetaProperty::get_Setter()
extern "C"  MetaMethod_t2289943065 * MetaProperty_get_Setter_m1348308178 (MetaProperty_t2675851725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.MetaProperty::BuildPropertyEmitter(Castle.DynamicProxy.Generators.Emitters.ClassEmitter)
extern "C"  void MetaProperty_BuildPropertyEmitter_m1344404643 (MetaProperty_t2675851725 * __this, ClassEmitter_t3355090660 * ___classEmitter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.MetaProperty::Equals(System.Object)
extern "C"  bool MetaProperty_Equals_m2614261771 (MetaProperty_t2675851725 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Castle.DynamicProxy.Generators.MetaProperty::GetHashCode()
extern "C"  int32_t MetaProperty_GetHashCode_m3246375459 (MetaProperty_t2675851725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.MetaProperty::Equals(Castle.DynamicProxy.Generators.MetaProperty)
extern "C"  bool MetaProperty_Equals_m855413290 (MetaProperty_t2675851725 * __this, MetaProperty_t2675851725 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.MetaProperty::SwitchToExplicitImplementation()
extern "C"  void MetaProperty_SwitchToExplicitImplementation_m3957265671 (MetaProperty_t2675851725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
