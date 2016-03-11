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

// Castle.DynamicProxy.Serialization.ProxyObjectReference
struct ProxyObjectReference_t1851053403;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// Castle.DynamicProxy.IInterceptor[]
struct IInterceptorU5BU5D_t1966013522;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Castle.DynamicProxy.Serialization.ProxyObjectReference::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ProxyObjectReference__ctor_m3363492369 (ProxyObjectReference_t1851053403 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Serialization.ProxyObjectReference::DeserializeTypeFromString(System.String)
extern "C"  Type_t * ProxyObjectReference_DeserializeTypeFromString_m4065627226 (ProxyObjectReference_t1851053403 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Castle.DynamicProxy.Serialization.ProxyObjectReference::RecreateProxy()
extern "C"  Il2CppObject * ProxyObjectReference_RecreateProxy_m1508558616 (ProxyObjectReference_t1851053403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Castle.DynamicProxy.Serialization.ProxyObjectReference::RecreateClassProxyWithTarget()
extern "C"  Il2CppObject * ProxyObjectReference_RecreateClassProxyWithTarget_m2012230117 (ProxyObjectReference_t1851053403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Castle.DynamicProxy.Serialization.ProxyObjectReference::RecreateInterfaceProxy(System.String)
extern "C"  Il2CppObject * ProxyObjectReference_RecreateInterfaceProxy_m2594160821 (ProxyObjectReference_t1851053403 * __this, String_t* ___generatorType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Castle.DynamicProxy.Serialization.ProxyObjectReference::RecreateClassProxy()
extern "C"  Il2CppObject * ProxyObjectReference_RecreateClassProxy_m982153678 (ProxyObjectReference_t1851053403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Castle.DynamicProxy.Serialization.ProxyObjectReference::InstantiateClassProxy(System.Type)
extern "C"  Il2CppObject * ProxyObjectReference_InstantiateClassProxy_m2670500704 (ProxyObjectReference_t1851053403 * __this, Type_t * ___proxy_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Serialization.ProxyObjectReference::InvokeCallback(System.Object)
extern "C"  void ProxyObjectReference_InvokeCallback_m3221391587 (ProxyObjectReference_t1851053403 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Castle.DynamicProxy.Serialization.ProxyObjectReference::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C"  Il2CppObject * ProxyObjectReference_GetRealObject_m3875298438 (ProxyObjectReference_t1851053403 * __this, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Serialization.ProxyObjectReference::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ProxyObjectReference_GetObjectData_m710244462 (ProxyObjectReference_t1851053403 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Serialization.ProxyObjectReference::OnDeserialization(System.Object)
extern "C"  void ProxyObjectReference_OnDeserialization_m4016603830 (ProxyObjectReference_t1851053403 * __this, Il2CppObject * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Serialization.ProxyObjectReference::DeserializeProxyMembers()
extern "C"  void ProxyObjectReference_DeserializeProxyMembers_m496828952 (ProxyObjectReference_t1851053403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Serialization.ProxyObjectReference::DeserializeProxyState()
extern "C"  void ProxyObjectReference_DeserializeProxyState_m2624878352 (ProxyObjectReference_t1851053403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Serialization.ProxyObjectReference::SetTarget(System.Object)
extern "C"  void ProxyObjectReference_SetTarget_m348869619 (ProxyObjectReference_t1851053403 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Serialization.ProxyObjectReference::SetInterceptors(Castle.DynamicProxy.IInterceptor[])
extern "C"  void ProxyObjectReference_SetInterceptors_m2255594711 (ProxyObjectReference_t1851053403 * __this, IInterceptorU5BU5D_t1966013522* ___interceptors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Serialization.ProxyObjectReference::.cctor()
extern "C"  void ProxyObjectReference__cctor_m702348509 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
