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

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.TypeReference
struct TypeReference_t3383065301;
// System.Type
struct Type_t;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter1588091119.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.TypeReference::.ctor(System.Type)
extern "C"  void TypeReference__ctor_m3563747927 (TypeReference_t3383065301 * __this, Type_t * ___argumentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.TypeReference::.ctor(Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference,System.Type)
extern "C"  void TypeReference__ctor_m4291377242 (TypeReference_t3383065301 * __this, Reference_t1588091119 * ___owner, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Generators.Emitters.SimpleAST.TypeReference::get_Type()
extern "C"  Type_t * TypeReference_get_Type_m1992698635 (TypeReference_t3383065301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
