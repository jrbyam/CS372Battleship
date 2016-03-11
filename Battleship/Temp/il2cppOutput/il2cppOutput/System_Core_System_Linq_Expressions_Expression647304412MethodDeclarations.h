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

// System.Linq.Expressions.Expression
struct Expression_t647304412;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2610273829;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t1101718811;
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_t3348369461;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>
struct IEnumerable_1_t3519458768;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t1522759584;
// System.Object
struct Il2CppObject;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t915773227;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t3502740905;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t262791171;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_t3109901480;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>
struct IEnumerable_1_t3211749913;
// System.Collections.Generic.IList`1<System.Linq.Expressions.Expression>
struct IList_1_t2813796726;
// System.Reflection.MethodBase
struct MethodBase_t3461000640;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3810449760;
// System.Linq.Expressions.NewArrayExpression
struct NewArrayExpression_t2668986965;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t339595557;
// System.Linq.Expressions.EmitContext
struct EmitContext_t3183126624;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_Expressions_ExpressionType2423716918.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_ParameterInfo2610273829.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "System_Core_System_Linq_Expressions_Expression647304412.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_MethodBase3461000640.h"
#include "System_Core_System_Linq_Expressions_EmitContext3183126624.h"

// System.Void System.Linq.Expressions.Expression::.ctor(System.Linq.Expressions.ExpressionType,System.Type)
extern "C"  void Expression__ctor_m3602002992 (Expression_t647304412 * __this, int32_t ___node_type, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType()
extern "C"  int32_t Expression_get_NodeType_m2139853313 (Expression_t647304412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Linq.Expressions.Expression::get_Type()
extern "C"  Type_t * Expression_get_Type_m2445344496 (Expression_t647304412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.Expression::ToString()
extern "C"  String_t* Expression_ToString_m288908258 (Expression_t647304412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Linq.Expressions.Expression::GetUnaryOperator(System.String,System.Type,System.Type,System.Type)
extern "C"  MethodInfo_t * Expression_GetUnaryOperator_m139753793 (Il2CppObject * __this /* static, unused */, String_t* ___oper_name, Type_t * ___declaring, Type_t * ___param, Type_t * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Linq.Expressions.Expression::GetTrueOperator(System.Type)
extern "C"  MethodInfo_t * Expression_GetTrueOperator_m4281195052 (Il2CppObject * __this /* static, unused */, Type_t * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Linq.Expressions.Expression::GetFalseOperator(System.Type)
extern "C"  MethodInfo_t * Expression_GetFalseOperator_m3877646251 (Il2CppObject * __this /* static, unused */, Type_t * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Linq.Expressions.Expression::GetBooleanOperator(System.String,System.Type)
extern "C"  MethodInfo_t * Expression_GetBooleanOperator_m2158199874 (Il2CppObject * __this /* static, unused */, String_t* ___op, Type_t * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Expression::IsAssignableToParameterType(System.Type,System.Reflection.ParameterInfo)
extern "C"  bool Expression_IsAssignableToParameterType_m241263170 (Il2CppObject * __this /* static, unused */, Type_t * ___type, ParameterInfo_t2610273829 * ___param, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Linq.Expressions.Expression::CheckUnaryMethod(System.Reflection.MethodInfo,System.Type)
extern "C"  MethodInfo_t * Expression_CheckUnaryMethod_m4107165445 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___method, Type_t * ___param, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.MethodCallExpression System.Linq.Expressions.Expression::Call(System.Linq.Expressions.Expression,System.Reflection.MethodInfo,System.Linq.Expressions.Expression[])
extern "C"  MethodCallExpression_t1101718811 * Expression_Call_m4008432210 (Il2CppObject * __this /* static, unused */, Expression_t647304412 * ___instance, MethodInfo_t * ___method, ExpressionU5BU5D_t3348369461* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.MethodCallExpression System.Linq.Expressions.Expression::Call(System.Linq.Expressions.Expression,System.Reflection.MethodInfo,System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>)
extern "C"  MethodCallExpression_t1101718811 * Expression_Call_m1073653075 (Il2CppObject * __this /* static, unused */, Expression_t647304412 * ___instance, MethodInfo_t * ___method, Il2CppObject* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Expression::Constant(System.Object)
extern "C"  ConstantExpression_t1522759584 * Expression_Constant_m3005634366 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Expression::Constant(System.Object,System.Type)
extern "C"  ConstantExpression_t1522759584 * Expression_Constant_m3766942065 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Expression::IsConvertiblePrimitive(System.Type)
extern "C"  bool Expression_IsConvertiblePrimitive_m1747102150 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Expression::IsPrimitiveConversion(System.Type,System.Type)
extern "C"  bool Expression_IsPrimitiveConversion_m2733552062 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Type_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Expression::IsReferenceConversion(System.Type,System.Type)
extern "C"  bool Expression_IsReferenceConversion_m3278587098 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Type_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.UnaryExpression System.Linq.Expressions.Expression::Convert(System.Linq.Expressions.Expression,System.Type)
extern "C"  UnaryExpression_t915773227 * Expression_Convert_m2348630893 (Il2CppObject * __this /* static, unused */, Expression_t647304412 * ___expression, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Linq.Expressions.Expression::GetUserConversionMethod(System.Type,System.Type)
extern "C"  MethodInfo_t * Expression_GetUserConversionMethod_m950679599 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Type_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.UnaryExpression System.Linq.Expressions.Expression::Convert(System.Linq.Expressions.Expression,System.Type,System.Reflection.MethodInfo)
extern "C"  UnaryExpression_t915773227 * Expression_Convert_m3926333606 (Il2CppObject * __this /* static, unused */, Expression_t647304412 * ___expression, Type_t * ___type, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Expression::IsConvertNodeLifted(System.Reflection.MethodInfo,System.Linq.Expressions.Expression,System.Type)
extern "C"  bool Expression_IsConvertNodeLifted_m2752742658 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___method, Expression_t647304412 * ___operand, Type_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Expression::ParameterMatch(System.Reflection.MethodInfo,System.Type)
extern "C"  bool Expression_ParameterMatch_m942731619 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___method, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Expression::ReturnTypeMatch(System.Reflection.MethodInfo,System.Type)
extern "C"  bool Expression_ReturnTypeMatch_m2828541910 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___method, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Expression::CanAssign(System.Type,System.Type)
extern "C"  bool Expression_CanAssign_m1866936114 (Il2CppObject * __this /* static, unused */, Type_t * ___target, Type_t * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.Expression::CheckLambda(System.Type,System.Linq.Expressions.Expression,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>)
extern "C"  Expression_t647304412 * Expression_CheckLambda_m4108637066 (Il2CppObject * __this /* static, unused */, Type_t * ___delegateType, Expression_t647304412 * ___body, ReadOnlyCollection_1_t3502740905 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.Expression::Lambda(System.Type,System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[])
extern "C"  LambdaExpression_t262791171 * Expression_Lambda_m1584564884 (Il2CppObject * __this /* static, unused */, Type_t * ___delegateType, Expression_t647304412 * ___body, ParameterExpressionU5BU5D_t3109901480* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.Expression::CreateExpressionOf(System.Type,System.Linq.Expressions.Expression,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>)
extern "C"  LambdaExpression_t262791171 * Expression_CreateExpressionOf_m3638101547 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Expression_t647304412 * ___body, ReadOnlyCollection_1_t3502740905 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.Expression::Lambda(System.Type,System.Linq.Expressions.Expression,System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
extern "C"  LambdaExpression_t262791171 * Expression_Lambda_m1638017613 (Il2CppObject * __this /* static, unused */, Type_t * ___delegateType, Expression_t647304412 * ___body, Il2CppObject* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.Expression::CreateArgumentList(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>)
extern "C"  Il2CppObject* Expression_CreateArgumentList_m94411131 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.Expression::CheckNonGenericMethod(System.Reflection.MethodBase)
extern "C"  void Expression_CheckNonGenericMethod_m4141977740 (Il2CppObject * __this /* static, unused */, MethodBase_t3461000640 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.Expression::CheckMethodArguments(System.Reflection.MethodBase,System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>)
extern "C"  ReadOnlyCollection_1_t3810449760 * Expression_CheckMethodArguments_m1168947587 (Il2CppObject * __this /* static, unused */, MethodBase_t3461000640 * ___method, Il2CppObject* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.NewArrayExpression System.Linq.Expressions.Expression::NewArrayInit(System.Type,System.Linq.Expressions.Expression[])
extern "C"  NewArrayExpression_t2668986965 * Expression_NewArrayInit_m3307319735 (Il2CppObject * __this /* static, unused */, Type_t * ___type, ExpressionU5BU5D_t3348369461* ___initializers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.NewArrayExpression System.Linq.Expressions.Expression::NewArrayInit(System.Type,System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>)
extern "C"  NewArrayExpression_t2668986965 * Expression_NewArrayInit_m4258954168 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Il2CppObject* ___initializers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.Expression::CheckNotVoid(System.Type)
extern "C"  void Expression_CheckNotVoid_m2165578887 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.ParameterExpression System.Linq.Expressions.Expression::Parameter(System.Type,System.String)
extern "C"  ParameterExpression_t339595557 * Expression_Parameter_m2229607569 (Il2CppObject * __this /* static, unused */, Type_t * ___type, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.UnaryExpression System.Linq.Expressions.Expression::Quote(System.Linq.Expressions.Expression)
extern "C"  UnaryExpression_t915773227 * Expression_Quote_m2067409795 (Il2CppObject * __this /* static, unused */, Expression_t647304412 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Expression::IsUnsigned(System.Type)
extern "C"  bool Expression_IsUnsigned_m2240896915 (Il2CppObject * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.Expression::Emit(System.Linq.Expressions.EmitContext)
extern "C"  void Expression_Emit_m1335722450 (Expression_t647304412 * __this, EmitContext_t3183126624 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
