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

// System.Linq.Expressions.NewExpression
struct NewExpression_t300312156;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3810449760;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo>
struct ReadOnlyCollection_1_t1711211866;
// System.Linq.Expressions.EmitContext
struct EmitContext_t3183126624;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_Expressions_EmitContext3183126624.h"
#include "mscorlib_System_Type2779229935.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewExpression::get_Arguments()
extern "C"  ReadOnlyCollection_1_t3810449760 * NewExpression_get_Arguments_m263246318 (NewExpression_t300312156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo> System.Linq.Expressions.NewExpression::get_Members()
extern "C"  ReadOnlyCollection_1_t1711211866 * NewExpression_get_Members_m3931297315 (NewExpression_t300312156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.NewExpression::Emit(System.Linq.Expressions.EmitContext)
extern "C"  void NewExpression_Emit_m3630653958 (NewExpression_t300312156 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Linq.Expressions.NewExpression::GetDefaultConstructor(System.Type)
extern "C"  ConstructorInfo_t3542137334 * NewExpression_GetDefaultConstructor_m2110575672 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
