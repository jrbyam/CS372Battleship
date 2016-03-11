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

// Castle.DynamicProxy.Generators.MetaEvent
struct MetaEvent_t524284456;
// System.String
struct String_t;
// System.Type
struct Type_t;
// Castle.DynamicProxy.Generators.MetaMethod
struct MetaMethod_t2289943065;
// Castle.DynamicProxy.Generators.Emitters.EventEmitter
struct EventEmitter_t4227705730;
// Castle.DynamicProxy.Generators.Emitters.ClassEmitter
struct ClassEmitter_t3355090660;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaMet2289943065.h"
#include "mscorlib_System_Reflection_EventAttributes1168020927.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "mscorlib_System_Object837106420.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaEven524284456.h"

// System.Void Castle.DynamicProxy.Generators.MetaEvent::.ctor(System.String,System.Type,System.Type,Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Generators.MetaMethod,System.Reflection.EventAttributes)
extern "C"  void MetaEvent__ctor_m1864089412 (MetaEvent_t524284456 * __this, String_t* ___name, Type_t * ___declaringType, Type_t * ___eventDelegateType, MetaMethod_t2289943065 * ___adder, MetaMethod_t2289943065 * ___remover, int32_t ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.MetaMethod Castle.DynamicProxy.Generators.MetaEvent::get_Adder()
extern "C"  MetaMethod_t2289943065 * MetaEvent_get_Adder_m51907776 (MetaEvent_t524284456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventAttributes Castle.DynamicProxy.Generators.MetaEvent::get_Attributes()
extern "C"  int32_t MetaEvent_get_Attributes_m909694309 (MetaEvent_t524284456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.MetaEvent::set_Attributes(System.Reflection.EventAttributes)
extern "C"  void MetaEvent_set_Attributes_m2746641586 (MetaEvent_t524284456 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.EventEmitter Castle.DynamicProxy.Generators.MetaEvent::get_Emitter()
extern "C"  EventEmitter_t4227705730 * MetaEvent_get_Emitter_m409326319 (MetaEvent_t524284456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.MetaMethod Castle.DynamicProxy.Generators.MetaEvent::get_Remover()
extern "C"  MetaMethod_t2289943065 * MetaEvent_get_Remover_m3409060832 (MetaEvent_t524284456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.MetaEvent::BuildEventEmitter(Castle.DynamicProxy.Generators.Emitters.ClassEmitter)
extern "C"  void MetaEvent_BuildEventEmitter_m2251601259 (MetaEvent_t524284456 * __this, ClassEmitter_t3355090660 * ___classEmitter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.MetaEvent::Equals(System.Object)
extern "C"  bool MetaEvent_Equals_m230142094 (MetaEvent_t524284456 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Castle.DynamicProxy.Generators.MetaEvent::GetHashCode()
extern "C"  int32_t MetaEvent_GetHashCode_m2627137842 (MetaEvent_t524284456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.MetaEvent::Equals(Castle.DynamicProxy.Generators.MetaEvent)
extern "C"  bool MetaEvent_Equals_m3780687094 (MetaEvent_t524284456 * __this, MetaEvent_t524284456 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.MetaEvent::SwitchToExplicitImplementation()
extern "C"  void MetaEvent_SwitchToExplicitImplementation_m94785748 (MetaEvent_t524284456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
