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

// System.Linq.Expressions.NewArrayExpression
struct NewArrayExpression_t2668986965;
// System.Type
struct Type_t;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3810449760;
// System.Linq.Expressions.EmitContext
struct EmitContext_t3183126624;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// System.Type[]
struct TypeU5BU5D_t3431720054;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_Expressions_ExpressionType2423716918.h"
#include "mscorlib_System_Type2779229935.h"
#include "System_Core_System_Linq_Expressions_EmitContext3183126624.h"

// System.Void System.Linq.Expressions.NewArrayExpression::.ctor(System.Linq.Expressions.ExpressionType,System.Type,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>)
extern "C"  void NewArrayExpression__ctor_m3182416206 (NewArrayExpression_t2668986965 * __this, int32_t ___et, Type_t * ___type, ReadOnlyCollection_1_t3810449760 * ___expressions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewArrayExpression::get_Expressions()
extern "C"  ReadOnlyCollection_1_t3810449760 * NewArrayExpression_get_Expressions_m579197610 (NewArrayExpression_t2668986965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.NewArrayExpression::EmitNewArrayInit(System.Linq.Expressions.EmitContext,System.Type)
extern "C"  void NewArrayExpression_EmitNewArrayInit_m639199523 (NewArrayExpression_t2668986965 * __this, EmitContext_t3183126624 * ___ec, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.NewArrayExpression::EmitNewArrayBounds(System.Linq.Expressions.EmitContext,System.Type)
extern "C"  void NewArrayExpression_EmitNewArrayBounds_m1694725086 (NewArrayExpression_t2668986965 * __this, EmitContext_t3183126624 * ___ec, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Linq.Expressions.NewArrayExpression::GetArrayConstructor(System.Type,System.Int32)
extern "C"  ConstructorInfo_t3542137334 * NewArrayExpression_GetArrayConstructor_m4029017148 (Il2CppObject * __this /* static, unused */, Type_t * ___type, int32_t ___rank, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Linq.Expressions.NewArrayExpression::CreateTypeParameters(System.Int32)
extern "C"  TypeU5BU5D_t3431720054* NewArrayExpression_CreateTypeParameters_m1781798581 (Il2CppObject * __this /* static, unused */, int32_t ___rank, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Linq.Expressions.NewArrayExpression::CreateArray(System.Type,System.Int32)
extern "C"  Type_t * NewArrayExpression_CreateArray_m1715232055 (Il2CppObject * __this /* static, unused */, Type_t * ___type, int32_t ___rank, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.NewArrayExpression::Emit(System.Linq.Expressions.EmitContext)
extern "C"  void NewArrayExpression_Emit_m169286841 (NewArrayExpression_t2668986965 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
