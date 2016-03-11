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

// Castle.DynamicProxy.Contributors.MembersCollector
struct MembersCollector_t1478934447;
// System.Type
struct Type_t;
// Castle.Core.Logging.ILogger
struct ILogger_t1490187963;
// System.Collections.Generic.IEnumerable`1<Castle.DynamicProxy.Generators.MetaMethod>
struct IEnumerable_1_t867130125;
// System.Collections.Generic.IEnumerable`1<Castle.DynamicProxy.Generators.MetaProperty>
struct IEnumerable_1_t1253038785;
// System.Collections.Generic.IEnumerable`1<Castle.DynamicProxy.Generators.MetaEvent>
struct IEnumerable_1_t3396438812;
// Castle.DynamicProxy.IProxyGenerationHook
struct IProxyGenerationHook_t479444615;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.EventInfo
struct EventInfo_t;
// Castle.DynamicProxy.Generators.MetaMethod
struct MetaMethod_t2289943065;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2610273829;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_PropertyInfo1490548369.h"
#include "mscorlib_System_Reflection_EventInfo4226116758.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "mscorlib_System_Reflection_ParameterInfo2610273829.h"

// System.Void Castle.DynamicProxy.Contributors.MembersCollector::.ctor(System.Type)
extern "C"  void MembersCollector__ctor_m2029793737 (MembersCollector_t1478934447 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.Core.Logging.ILogger Castle.DynamicProxy.Contributors.MembersCollector::get_Logger()
extern "C"  Il2CppObject * MembersCollector_get_Logger_m1895826475 (MembersCollector_t1478934447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.MembersCollector::set_Logger(Castle.Core.Logging.ILogger)
extern "C"  void MembersCollector_set_Logger_m2572715744 (MembersCollector_t1478934447 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Castle.DynamicProxy.Generators.MetaMethod> Castle.DynamicProxy.Contributors.MembersCollector::get_Methods()
extern "C"  Il2CppObject* MembersCollector_get_Methods_m3875033614 (MembersCollector_t1478934447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Castle.DynamicProxy.Generators.MetaProperty> Castle.DynamicProxy.Contributors.MembersCollector::get_Properties()
extern "C"  Il2CppObject* MembersCollector_get_Properties_m1582753221 (MembersCollector_t1478934447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Castle.DynamicProxy.Generators.MetaEvent> Castle.DynamicProxy.Contributors.MembersCollector::get_Events()
extern "C"  Il2CppObject* MembersCollector_get_Events_m3102310026 (MembersCollector_t1478934447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.MembersCollector::CollectMembersToProxy(Castle.DynamicProxy.IProxyGenerationHook)
extern "C"  void MembersCollector_CollectMembersToProxy_m3453885961 (MembersCollector_t1478934447 * __this, Il2CppObject * ___hook, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.MembersCollector::CollectProperties(Castle.DynamicProxy.IProxyGenerationHook)
extern "C"  void MembersCollector_CollectProperties_m2211954210 (MembersCollector_t1478934447 * __this, Il2CppObject * ___hook, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.MembersCollector::CollectEvents(Castle.DynamicProxy.IProxyGenerationHook)
extern "C"  void MembersCollector_CollectEvents_m1226126856 (MembersCollector_t1478934447 * __this, Il2CppObject * ___hook, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.MembersCollector::CollectMethods(Castle.DynamicProxy.IProxyGenerationHook)
extern "C"  void MembersCollector_CollectMethods_m2020425235 (MembersCollector_t1478934447 * __this, Il2CppObject * ___hook, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.MembersCollector::AddProperty(System.Reflection.PropertyInfo,Castle.DynamicProxy.IProxyGenerationHook)
extern "C"  void MembersCollector_AddProperty_m4207848416 (MembersCollector_t1478934447 * __this, PropertyInfo_t * ___property, Il2CppObject * ___hook, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.MembersCollector::AddEvent(System.Reflection.EventInfo,Castle.DynamicProxy.IProxyGenerationHook)
extern "C"  void MembersCollector_AddEvent_m3963617116 (MembersCollector_t1478934447 * __this, EventInfo_t * ___event, Il2CppObject * ___hook, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.MetaMethod Castle.DynamicProxy.Contributors.MembersCollector::AddMethod(System.Reflection.MethodInfo,Castle.DynamicProxy.IProxyGenerationHook,System.Boolean)
extern "C"  MetaMethod_t2289943065 * MembersCollector_AddMethod_m708953893 (MembersCollector_t1478934447 * __this, MethodInfo_t * ___method, Il2CppObject * ___hook, bool ___isStandalone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Contributors.MembersCollector::AcceptMethod(System.Reflection.MethodInfo,System.Boolean,Castle.DynamicProxy.IProxyGenerationHook)
extern "C"  bool MembersCollector_AcceptMethod_m3524258466 (MembersCollector_t1478934447 * __this, MethodInfo_t * ___method, bool ___onlyVirtuals, Il2CppObject * ___hook, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Contributors.MembersCollector::IsInternalAndNotVisibleToDynamicProxy(System.Reflection.MethodInfo)
extern "C"  bool MembersCollector_IsInternalAndNotVisibleToDynamicProxy_m3342726876 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Contributors.MembersCollector::<AddProperty>b__0(System.Reflection.ParameterInfo)
extern "C"  Type_t * MembersCollector_U3CAddPropertyU3Eb__0_m4185318245 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2610273829 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
