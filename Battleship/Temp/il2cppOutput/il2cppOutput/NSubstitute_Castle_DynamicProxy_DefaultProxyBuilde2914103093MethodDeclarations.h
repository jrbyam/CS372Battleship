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

// Castle.DynamicProxy.DefaultProxyBuilder
struct DefaultProxyBuilder_t2914103093;
// Castle.DynamicProxy.ModuleScope
struct ModuleScope_t3833971791;
// Castle.Core.Logging.ILogger
struct ILogger_t1490187963;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t1356416995;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_ModuleScope3833971791.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"

// System.Void Castle.DynamicProxy.DefaultProxyBuilder::.ctor()
extern "C"  void DefaultProxyBuilder__ctor_m2062413452 (DefaultProxyBuilder_t2914103093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.DefaultProxyBuilder::.ctor(Castle.DynamicProxy.ModuleScope)
extern "C"  void DefaultProxyBuilder__ctor_m1101047783 (DefaultProxyBuilder_t2914103093 * __this, ModuleScope_t3833971791 * ___scope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.DefaultProxyBuilder::set_Logger(Castle.Core.Logging.ILogger)
extern "C"  void DefaultProxyBuilder_set_Logger_m263513532 (DefaultProxyBuilder_t2914103093 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.DefaultProxyBuilder::CreateClassProxyType(System.Type,System.Type[],Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  Type_t * DefaultProxyBuilder_CreateClassProxyType_m745213669 (DefaultProxyBuilder_t2914103093 * __this, Type_t * ___classToProxy, TypeU5BU5D_t3431720054* ___additionalInterfacesToProxy, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.DefaultProxyBuilder::CreateInterfaceProxyTypeWithoutTarget(System.Type,System.Type[],Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  Type_t * DefaultProxyBuilder_CreateInterfaceProxyTypeWithoutTarget_m3417880205 (DefaultProxyBuilder_t2914103093 * __this, Type_t * ___interfaceToProxy, TypeU5BU5D_t3431720054* ___additionalInterfacesToProxy, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.DefaultProxyBuilder::AssertValidType(System.Type)
extern "C"  void DefaultProxyBuilder_AssertValidType_m1838125599 (DefaultProxyBuilder_t2914103093 * __this, Type_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.DefaultProxyBuilder::AssertValidTypes(System.Collections.Generic.IEnumerable`1<System.Type>)
extern "C"  void DefaultProxyBuilder_AssertValidTypes_m88965545 (DefaultProxyBuilder_t2914103093 * __this, Il2CppObject* ___targetTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.DefaultProxyBuilder::IsAccessible(System.Type)
extern "C"  bool DefaultProxyBuilder_IsAccessible_m2491047721 (DefaultProxyBuilder_t2914103093 * __this, Type_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.DefaultProxyBuilder::IsPublic(System.Type)
extern "C"  bool DefaultProxyBuilder_IsPublic_m2702622422 (DefaultProxyBuilder_t2914103093 * __this, Type_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.DefaultProxyBuilder::IsInternal(System.Type)
extern "C"  bool DefaultProxyBuilder_IsInternal_m2509684034 (Il2CppObject * __this /* static, unused */, Type_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
