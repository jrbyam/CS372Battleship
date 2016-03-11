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

// Castle.DynamicProxy.ProxyGenerator
struct ProxyGenerator_t3039422796;
// Castle.DynamicProxy.IProxyBuilder
struct IProxyBuilder_t2014528861;
// Castle.Core.Logging.ILogger
struct ILogger_t1490187963;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;
// System.Object
struct Il2CppObject;
// Castle.DynamicProxy.IInterceptor[]
struct IInterceptorU5BU5D_t1966013522;
// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t1356416995;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"

// System.Void Castle.DynamicProxy.ProxyGenerator::.ctor(Castle.DynamicProxy.IProxyBuilder)
extern "C"  void ProxyGenerator__ctor_m1057897918 (ProxyGenerator_t3039422796 * __this, Il2CppObject * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.ProxyGenerator::HasSecurityPermission()
extern "C"  bool ProxyGenerator_HasSecurityPermission_m552786726 (ProxyGenerator_t3039422796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.ProxyGenerator::.ctor()
extern "C"  void ProxyGenerator__ctor_m277797703 (ProxyGenerator_t3039422796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.ProxyGenerator::set_Logger(Castle.Core.Logging.ILogger)
extern "C"  void ProxyGenerator_set_Logger_m4080805495 (ProxyGenerator_t3039422796 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.IProxyBuilder Castle.DynamicProxy.ProxyGenerator::get_ProxyBuilder()
extern "C"  Il2CppObject * ProxyGenerator_get_ProxyBuilder_m832023161 (ProxyGenerator_t3039422796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> Castle.DynamicProxy.ProxyGenerator::GetConstructorArguments(System.Object,Castle.DynamicProxy.IInterceptor[],Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  List_1_t1634065389 * ProxyGenerator_GetConstructorArguments_m760385494 (ProxyGenerator_t3039422796 * __this, Il2CppObject * ___target, IInterceptorU5BU5D_t1966013522* ___interceptors, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Castle.DynamicProxy.ProxyGenerator::CreateInterfaceProxyWithoutTarget(System.Type,System.Type[],Castle.DynamicProxy.ProxyGenerationOptions,Castle.DynamicProxy.IInterceptor[])
extern "C"  Il2CppObject * ProxyGenerator_CreateInterfaceProxyWithoutTarget_m510578668 (ProxyGenerator_t3039422796 * __this, Type_t * ___interfaceToProxy, TypeU5BU5D_t3431720054* ___additionalInterfacesToProxy, ProxyGenerationOptions_t351299295 * ___options, IInterceptorU5BU5D_t1966013522* ___interceptors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Castle.DynamicProxy.ProxyGenerator::CreateClassProxy(System.Type,System.Type[],Castle.DynamicProxy.ProxyGenerationOptions,System.Object[],Castle.DynamicProxy.IInterceptor[])
extern "C"  Il2CppObject * ProxyGenerator_CreateClassProxy_m396946228 (ProxyGenerator_t3039422796 * __this, Type_t * ___classToProxy, TypeU5BU5D_t3431720054* ___additionalInterfacesToProxy, ProxyGenerationOptions_t351299295 * ___options, ObjectU5BU5D_t11523773* ___constructorArguments, IInterceptorU5BU5D_t1966013522* ___interceptors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Castle.DynamicProxy.ProxyGenerator::CreateClassProxyInstance(System.Type,System.Collections.Generic.List`1<System.Object>,System.Type,System.Object[])
extern "C"  Il2CppObject * ProxyGenerator_CreateClassProxyInstance_m946132135 (ProxyGenerator_t3039422796 * __this, Type_t * ___proxyType, List_1_t1634065389 * ___proxyArguments, Type_t * ___classToProxy, ObjectU5BU5D_t11523773* ___constructorArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.ProxyGenerator::CheckNotGenericTypeDefinition(System.Type,System.String)
extern "C"  void ProxyGenerator_CheckNotGenericTypeDefinition_m1347602839 (ProxyGenerator_t3039422796 * __this, Type_t * ___type, String_t* ___argumentName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.ProxyGenerator::CheckNotGenericTypeDefinitions(System.Collections.Generic.IEnumerable`1<System.Type>,System.String)
extern "C"  void ProxyGenerator_CheckNotGenericTypeDefinitions_m1929955113 (ProxyGenerator_t3039422796 * __this, Il2CppObject* ___types, String_t* ___argumentName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> Castle.DynamicProxy.ProxyGenerator::BuildArgumentListForClassProxy(Castle.DynamicProxy.ProxyGenerationOptions,Castle.DynamicProxy.IInterceptor[])
extern "C"  List_1_t1634065389 * ProxyGenerator_BuildArgumentListForClassProxy_m1596380666 (ProxyGenerator_t3039422796 * __this, ProxyGenerationOptions_t351299295 * ___options, IInterceptorU5BU5D_t1966013522* ___interceptors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.ProxyGenerator::CreateClassProxyType(System.Type,System.Type[],Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  Type_t * ProxyGenerator_CreateClassProxyType_m3328494910 (ProxyGenerator_t3039422796 * __this, Type_t * ___classToProxy, TypeU5BU5D_t3431720054* ___additionalInterfacesToProxy, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.ProxyGenerator::CreateInterfaceProxyTypeWithoutTarget(System.Type,System.Type[],Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  Type_t * ProxyGenerator_CreateInterfaceProxyTypeWithoutTarget_m3748287828 (ProxyGenerator_t3039422796 * __this, Type_t * ___interfaceToProxy, TypeU5BU5D_t3431720054* ___additionalInterfacesToProxy, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
