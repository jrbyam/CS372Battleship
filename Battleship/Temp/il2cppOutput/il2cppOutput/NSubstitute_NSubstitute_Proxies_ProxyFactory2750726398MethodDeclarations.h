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

// NSubstitute.Proxies.ProxyFactory
struct ProxyFactory_t2750726398;
// NSubstitute.Core.IProxyFactory
struct IProxyFactory_t1430189068;
// System.Object
struct Il2CppObject;
// NSubstitute.Core.ICallRouter
struct ICallRouter_t1036440279;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void NSubstitute.Proxies.ProxyFactory::.ctor(NSubstitute.Core.IProxyFactory,NSubstitute.Core.IProxyFactory)
extern "C"  void ProxyFactory__ctor_m2990297301 (ProxyFactory_t2750726398 * __this, Il2CppObject * ___delegateFactory, Il2CppObject * ___dynamicProxyFactory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object NSubstitute.Proxies.ProxyFactory::GenerateProxy(NSubstitute.Core.ICallRouter,System.Type,System.Type[],System.Object[])
extern "C"  Il2CppObject * ProxyFactory_GenerateProxy_m1535560956 (ProxyFactory_t2750726398 * __this, Il2CppObject * ___callRouter, Type_t * ___typeToProxy, TypeU5BU5D_t3431720054* ___additionalInterfaces, ObjectU5BU5D_t11523773* ___constructorArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
