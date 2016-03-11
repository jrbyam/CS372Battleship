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

// System.Reflection.Emit.EventBuilder
struct EventBuilder_t2965256046;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t4287691406;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t765486855;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_TypeBuilder4287691406.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_EventAttributes1168020927.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_Emit_MethodBuilder765486855.h"

// System.Void System.Reflection.Emit.EventBuilder::.ctor(System.Reflection.Emit.TypeBuilder,System.String,System.Reflection.EventAttributes,System.Type)
extern "C"  void EventBuilder__ctor_m2224980064 (EventBuilder_t2965256046 * __this, TypeBuilder_t4287691406 * ___tb, String_t* ___eventName, int32_t ___eventAttrs, Type_t * ___eventType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.EventBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C"  int32_t EventBuilder_get_next_table_index_m70558896 (EventBuilder_t2965256046 * __this, Il2CppObject * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.EventBuilder::SetAddOnMethod(System.Reflection.Emit.MethodBuilder)
extern "C"  void EventBuilder_SetAddOnMethod_m1657361988 (EventBuilder_t2965256046 * __this, MethodBuilder_t765486855 * ___mdBuilder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.EventBuilder::SetRemoveOnMethod(System.Reflection.Emit.MethodBuilder)
extern "C"  void EventBuilder_SetRemoveOnMethod_m432648893 (EventBuilder_t2965256046 * __this, MethodBuilder_t765486855 * ___mdBuilder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.EventBuilder::RejectIfCreated()
extern "C"  void EventBuilder_RejectIfCreated_m958024518 (EventBuilder_t2965256046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
