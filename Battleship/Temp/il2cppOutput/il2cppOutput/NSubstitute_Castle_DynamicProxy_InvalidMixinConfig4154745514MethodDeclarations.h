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

// Castle.DynamicProxy.InvalidMixinConfigurationException
struct InvalidMixinConfigurationException_t4154745514;
// System.String
struct String_t;
// System.Exception
struct Exception_t1967233988;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Exception1967233988.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void Castle.DynamicProxy.InvalidMixinConfigurationException::.ctor(System.String,System.Exception)
extern "C"  void InvalidMixinConfigurationException__ctor_m860531165 (InvalidMixinConfigurationException_t4154745514 * __this, String_t* ___message, Exception_t1967233988 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.InvalidMixinConfigurationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void InvalidMixinConfigurationException__ctor_m1289461482 (InvalidMixinConfigurationException_t4154745514 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
