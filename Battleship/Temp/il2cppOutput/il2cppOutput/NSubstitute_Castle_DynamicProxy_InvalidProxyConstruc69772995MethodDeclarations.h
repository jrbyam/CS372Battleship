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

// Castle.DynamicProxy.InvalidProxyConstructorArgumentsException
struct InvalidProxyConstructorArgumentsException_t69772995;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void Castle.DynamicProxy.InvalidProxyConstructorArgumentsException::.ctor(System.String,System.Type,System.Type)
extern "C"  void InvalidProxyConstructorArgumentsException__ctor_m1102736938 (InvalidProxyConstructorArgumentsException_t69772995 * __this, String_t* ___message, Type_t * ___proxyType, Type_t * ___classToProxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.InvalidProxyConstructorArgumentsException::set_ClassToProxy(System.Type)
extern "C"  void InvalidProxyConstructorArgumentsException_set_ClassToProxy_m2997604187 (InvalidProxyConstructorArgumentsException_t69772995 * __this, Type_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.InvalidProxyConstructorArgumentsException::set_ProxyType(System.Type)
extern "C"  void InvalidProxyConstructorArgumentsException_set_ProxyType_m2471109394 (InvalidProxyConstructorArgumentsException_t69772995 * __this, Type_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
