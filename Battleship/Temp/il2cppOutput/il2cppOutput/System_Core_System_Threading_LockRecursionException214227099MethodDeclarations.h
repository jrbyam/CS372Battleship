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

// System.Threading.LockRecursionException
struct LockRecursionException_t214227099;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void System.Threading.LockRecursionException::.ctor()
extern "C"  void LockRecursionException__ctor_m3500342894 (LockRecursionException_t214227099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.LockRecursionException::.ctor(System.String)
extern "C"  void LockRecursionException__ctor_m3092775764 (LockRecursionException_t214227099 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.LockRecursionException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void LockRecursionException__ctor_m4111695535 (LockRecursionException_t214227099 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
