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

// System.Resources.MissingManifestResourceException
struct MissingManifestResourceException_t1089815118;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void System.Resources.MissingManifestResourceException::.ctor()
extern "C"  void MissingManifestResourceException__ctor_m3264668576 (MissingManifestResourceException_t1089815118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.MissingManifestResourceException::.ctor(System.String)
extern "C"  void MissingManifestResourceException__ctor_m1274126178 (MissingManifestResourceException_t1089815118 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.MissingManifestResourceException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MissingManifestResourceException__ctor_m1505621217 (MissingManifestResourceException_t1089815118 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;