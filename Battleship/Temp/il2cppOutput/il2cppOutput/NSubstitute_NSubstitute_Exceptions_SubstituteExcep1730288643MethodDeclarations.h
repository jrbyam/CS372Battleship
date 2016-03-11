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

// NSubstitute.Exceptions.SubstituteException
struct SubstituteException_t1730288643;
// System.String
struct String_t;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void NSubstitute.Exceptions.SubstituteException::.ctor(System.String)
extern "C"  void SubstituteException__ctor_m1787363166 (SubstituteException_t1730288643 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSubstitute.Exceptions.SubstituteException::.ctor(System.String,System.Exception)
extern "C"  void SubstituteException__ctor_m2264509848 (SubstituteException_t1730288643 * __this, String_t* ___message, Exception_t1967233988 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
