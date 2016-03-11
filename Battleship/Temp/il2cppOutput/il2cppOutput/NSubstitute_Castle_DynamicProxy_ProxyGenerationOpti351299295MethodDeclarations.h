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

// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;
// Castle.DynamicProxy.IProxyGenerationHook
struct IProxyGenerationHook_t479444615;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// Castle.DynamicProxy.IInterceptorSelector
struct IInterceptorSelector_t111911746;
// System.Type
struct Type_t;
// System.Collections.Generic.IList`1<System.Reflection.Emit.CustomAttributeBuilder>
struct IList_1_t2729413463;
// Castle.DynamicProxy.MixinData
struct MixinData_t2184984786;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Castle.DynamicProxy.ProxyGenerationOptions::.ctor(Castle.DynamicProxy.IProxyGenerationHook)
extern "C"  void ProxyGenerationOptions__ctor_m1928810283 (ProxyGenerationOptions_t351299295 * __this, Il2CppObject * ___hook, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.ProxyGenerationOptions::.ctor()
extern "C"  void ProxyGenerationOptions__ctor_m3411253780 (ProxyGenerationOptions_t351299295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.ProxyGenerationOptions::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ProxyGenerationOptions__ctor_m904107349 (ProxyGenerationOptions_t351299295 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.ProxyGenerationOptions::Initialize()
extern "C"  void ProxyGenerationOptions_Initialize_m1902766336 (ProxyGenerationOptions_t351299295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.ProxyGenerationOptions::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ProxyGenerationOptions_GetObjectData_m846772146 (ProxyGenerationOptions_t351299295 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.IProxyGenerationHook Castle.DynamicProxy.ProxyGenerationOptions::get_Hook()
extern "C"  Il2CppObject * ProxyGenerationOptions_get_Hook_m2379452836 (ProxyGenerationOptions_t351299295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.ProxyGenerationOptions::set_Hook(Castle.DynamicProxy.IProxyGenerationHook)
extern "C"  void ProxyGenerationOptions_set_Hook_m1552109863 (ProxyGenerationOptions_t351299295 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.IInterceptorSelector Castle.DynamicProxy.ProxyGenerationOptions::get_Selector()
extern "C"  Il2CppObject * ProxyGenerationOptions_get_Selector_m4203666373 (ProxyGenerationOptions_t351299295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.ProxyGenerationOptions::set_Selector(Castle.DynamicProxy.IInterceptorSelector)
extern "C"  void ProxyGenerationOptions_set_Selector_m2323489160 (ProxyGenerationOptions_t351299295 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.ProxyGenerationOptions::get_BaseTypeForInterfaceProxy()
extern "C"  Type_t * ProxyGenerationOptions_get_BaseTypeForInterfaceProxy_m3553668642 (ProxyGenerationOptions_t351299295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.ProxyGenerationOptions::set_BaseTypeForInterfaceProxy(System.Type)
extern "C"  void ProxyGenerationOptions_set_BaseTypeForInterfaceProxy_m3334147569 (ProxyGenerationOptions_t351299295 * __this, Type_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.Emit.CustomAttributeBuilder> Castle.DynamicProxy.ProxyGenerationOptions::get_AdditionalAttributes()
extern "C"  Il2CppObject* ProxyGenerationOptions_get_AdditionalAttributes_m323016768 (ProxyGenerationOptions_t351299295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.MixinData Castle.DynamicProxy.ProxyGenerationOptions::get_MixinData()
extern "C"  MixinData_t2184984786 * ProxyGenerationOptions_get_MixinData_m206403395 (ProxyGenerationOptions_t351299295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.ProxyGenerationOptions::AddMixinInstance(System.Object)
extern "C"  void ProxyGenerationOptions_AddMixinInstance_m1224439727 (ProxyGenerationOptions_t351299295 * __this, Il2CppObject * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.ProxyGenerationOptions::get_HasMixins()
extern "C"  bool ProxyGenerationOptions_get_HasMixins_m583189165 (ProxyGenerationOptions_t351299295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.ProxyGenerationOptions::Equals(System.Object)
extern "C"  bool ProxyGenerationOptions_Equals_m2180154013 (ProxyGenerationOptions_t351299295 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Castle.DynamicProxy.ProxyGenerationOptions::GetHashCode()
extern "C"  int32_t ProxyGenerationOptions_GetHashCode_m3504971969 (ProxyGenerationOptions_t351299295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.ProxyGenerationOptions::.cctor()
extern "C"  void ProxyGenerationOptions__cctor_m2187555865 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
