﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Castle.DynamicProxy.ProxyGenerationException
struct ProxyGenerationException_t3029488144;
// System.String
struct String_t;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void Castle.DynamicProxy.ProxyGenerationException::.ctor(System.String)
extern "C"  void ProxyGenerationException__ctor_m3328298015 (ProxyGenerationException_t3029488144 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.ProxyGenerationException::.ctor(System.String,System.Exception)
extern "C"  void ProxyGenerationException__ctor_m3360545527 (ProxyGenerationException_t3029488144 * __this, String_t* ___message, Exception_t1967233988 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
