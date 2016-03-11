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

// Castle.DynamicProxy.Generators.Emitters.EventEmitter
struct EventEmitter_t4227705730;
// Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter
struct AbstractTypeEmitter_t2268871968;
// System.String
struct String_t;
// System.Type
struct Type_t;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter
struct MethodEmitter_t2027936539;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter2268871968.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_EventAttributes1168020927.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_MethodAttributes455054214.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.EventEmitter::.ctor(Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter,System.String,System.Reflection.EventAttributes,System.Type)
extern "C"  void EventEmitter__ctor_m1268421653 (EventEmitter_t4227705730 * __this, AbstractTypeEmitter_t2268871968 * ___typeEmitter, String_t* ___name, int32_t ___attributes, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Generators.Emitters.EventEmitter::get_ReturnType()
extern "C"  Type_t * EventEmitter_get_ReturnType_m3214974036 (EventEmitter_t4227705730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter Castle.DynamicProxy.Generators.Emitters.EventEmitter::CreateAddMethod(System.String,System.Reflection.MethodAttributes,System.Reflection.MethodInfo)
extern "C"  MethodEmitter_t2027936539 * EventEmitter_CreateAddMethod_m1337525332 (EventEmitter_t4227705730 * __this, String_t* ___addMethodName, int32_t ___attributes, MethodInfo_t * ___methodToOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter Castle.DynamicProxy.Generators.Emitters.EventEmitter::CreateRemoveMethod(System.String,System.Reflection.MethodAttributes,System.Reflection.MethodInfo)
extern "C"  MethodEmitter_t2027936539 * EventEmitter_CreateRemoveMethod_m3118193849 (EventEmitter_t4227705730 * __this, String_t* ___removeMethodName, int32_t ___attributes, MethodInfo_t * ___methodToOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.EventEmitter::EnsureValidCodeBlock()
extern "C"  void EventEmitter_EnsureValidCodeBlock_m2961123657 (EventEmitter_t4227705730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.EventEmitter::Generate()
extern "C"  void EventEmitter_Generate_m4136209692 (EventEmitter_t4227705730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
