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

// Castle.DynamicProxy.Generators.MetaMethod
struct MetaMethod_t2289943065;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "mscorlib_System_Reflection_MethodAttributes455054214.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaMet2289943065.h"

// System.Void Castle.DynamicProxy.Generators.MetaMethod::.ctor(System.Reflection.MethodInfo,System.Reflection.MethodInfo,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void MetaMethod__ctor_m1230474077 (MetaMethod_t2289943065 * __this, MethodInfo_t * ___method, MethodInfo_t * ___methodOnTarget, bool ___standalone, bool ___proxyable, bool ___hasTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes Castle.DynamicProxy.Generators.MetaMethod::get_Attributes()
extern "C"  int32_t MetaMethod_get_Attributes_m1002388233 (MetaMethod_t2289943065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.MetaMethod::set_Attributes(System.Reflection.MethodAttributes)
extern "C"  void MetaMethod_set_Attributes_m3784880342 (MetaMethod_t2289943065 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.MetaMethod::get_HasTarget()
extern "C"  bool MetaMethod_get_HasTarget_m3441808846 (MetaMethod_t2289943065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.MetaMethod::set_HasTarget(System.Boolean)
extern "C"  void MetaMethod_set_HasTarget_m178085225 (MetaMethod_t2289943065 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Castle.DynamicProxy.Generators.MetaMethod::get_Method()
extern "C"  MethodInfo_t * MetaMethod_get_Method_m4008449898 (MetaMethod_t2289943065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.MetaMethod::set_Method(System.Reflection.MethodInfo)
extern "C"  void MetaMethod_set_Method_m3918930537 (MetaMethod_t2289943065 * __this, MethodInfo_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Castle.DynamicProxy.Generators.MetaMethod::get_MethodOnTarget()
extern "C"  MethodInfo_t * MetaMethod_get_MethodOnTarget_m3831492314 (MetaMethod_t2289943065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.MetaMethod::set_MethodOnTarget(System.Reflection.MethodInfo)
extern "C"  void MetaMethod_set_MethodOnTarget_m2991374297 (MetaMethod_t2289943065 * __this, MethodInfo_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Castle.DynamicProxy.Generators.MetaMethod::get_Name()
extern "C"  String_t* MetaMethod_get_Name_m2440236655 (MetaMethod_t2289943065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.MetaMethod::get_Proxyable()
extern "C"  bool MetaMethod_get_Proxyable_m3490983563 (MetaMethod_t2289943065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.MetaMethod::set_Proxyable(System.Boolean)
extern "C"  void MetaMethod_set_Proxyable_m412034918 (MetaMethod_t2289943065 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.MetaMethod::get_Standalone()
extern "C"  bool MetaMethod_get_Standalone_m3630595460 (MetaMethod_t2289943065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.MetaMethod::set_Standalone(System.Boolean)
extern "C"  void MetaMethod_set_Standalone_m565804503 (MetaMethod_t2289943065 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.MetaMethod::Equals(Castle.DynamicProxy.Generators.MetaMethod)
extern "C"  bool MetaMethod_Equals_m3541656210 (MetaMethod_t2289943065 * __this, MetaMethod_t2289943065 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.MetaMethod::SwitchToExplicitImplementation()
extern "C"  void MetaMethod_SwitchToExplicitImplementation_m618937363 (MetaMethod_t2289943065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes Castle.DynamicProxy.Generators.MetaMethod::ObtainAttributes()
extern "C"  int32_t MetaMethod_ObtainAttributes_m973893637 (MetaMethod_t2289943065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
