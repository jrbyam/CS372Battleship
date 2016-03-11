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

// System.Linq.Expressions.MemberBinding
struct MemberBinding_t3905900687;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.String
struct String_t;
// System.Reflection.Emit.LocalBuilder
struct LocalBuilder_t625143165;
// System.Linq.Expressions.EmitContext
struct EmitContext_t3183126624;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_Expressions_MemberBindingT4009109097.h"
#include "System_Core_System_Linq_Expressions_EmitContext3183126624.h"
#include "mscorlib_System_Reflection_Emit_LocalBuilder625143165.h"
#include "mscorlib_System_Reflection_PropertyInfo1490548369.h"
#include "mscorlib_System_Reflection_FieldInfo1164929782.h"

// System.Linq.Expressions.MemberBindingType System.Linq.Expressions.MemberBinding::get_BindingType()
extern "C"  int32_t MemberBinding_get_BindingType_m2754734582 (MemberBinding_t3905900687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo System.Linq.Expressions.MemberBinding::get_Member()
extern "C"  MemberInfo_t * MemberBinding_get_Member_m1357992612 (MemberBinding_t3905900687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.MemberBinding::ToString()
extern "C"  String_t* MemberBinding_ToString_m3297066811 (MemberBinding_t3905900687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.LocalBuilder System.Linq.Expressions.MemberBinding::EmitLoadMember(System.Linq.Expressions.EmitContext,System.Reflection.Emit.LocalBuilder)
extern "C"  LocalBuilder_t625143165 * MemberBinding_EmitLoadMember_m734995364 (MemberBinding_t3905900687 * __this, EmitContext_t3183126624 * ___ec, LocalBuilder_t625143165 * ___local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.LocalBuilder System.Linq.Expressions.MemberBinding::EmitLoadProperty(System.Linq.Expressions.EmitContext,System.Reflection.PropertyInfo)
extern "C"  LocalBuilder_t625143165 * MemberBinding_EmitLoadProperty_m1423813819 (MemberBinding_t3905900687 * __this, EmitContext_t3183126624 * ___ec, PropertyInfo_t * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.LocalBuilder System.Linq.Expressions.MemberBinding::EmitLoadField(System.Linq.Expressions.EmitContext,System.Reflection.FieldInfo)
extern "C"  LocalBuilder_t625143165 * MemberBinding_EmitLoadField_m2619360419 (MemberBinding_t3905900687 * __this, EmitContext_t3183126624 * ___ec, FieldInfo_t * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
