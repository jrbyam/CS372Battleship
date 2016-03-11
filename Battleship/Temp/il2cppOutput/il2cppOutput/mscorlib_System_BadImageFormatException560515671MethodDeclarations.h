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

// System.BadImageFormatException
struct BadImageFormatException_t560515671;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void System.BadImageFormatException::.ctor()
extern "C"  void BadImageFormatException__ctor_m65877039 (BadImageFormatException_t560515671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.BadImageFormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void BadImageFormatException__ctor_m95744240 (BadImageFormatException_t560515671 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BadImageFormatException::get_Message()
extern "C"  String_t* BadImageFormatException_get_Message_m3219294696 (BadImageFormatException_t560515671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.BadImageFormatException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void BadImageFormatException_GetObjectData_m3123595341 (BadImageFormatException_t560515671 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BadImageFormatException::ToString()
extern "C"  String_t* BadImageFormatException_ToString_m3818214596 (BadImageFormatException_t560515671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
