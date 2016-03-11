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

// System.Linq.Expressions.ExpressionPrinter
struct ExpressionPrinter_t1508972646;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// System.String
struct String_t;
// System.Linq.Expressions.Expression
struct Expression_t647304412;
// System.Linq.Expressions.ElementInit
struct ElementInit_t2790746160;
// System.Linq.Expressions.MemberBinding
struct MemberBinding_t3905900687;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t915773227;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t1666521021;
// System.Linq.Expressions.TypeBinaryExpression
struct TypeBinaryExpression_t1825515287;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t1522759584;
// System.Linq.Expressions.ConditionalExpression
struct ConditionalExpression_t1459688386;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t339595557;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1133177622;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t1101718811;
// System.Linq.Expressions.MemberAssignment
struct MemberAssignment_t3954892619;
// System.Linq.Expressions.MemberMemberBinding
struct MemberMemberBinding_t219944981;
// System.Linq.Expressions.MemberListBinding
struct MemberListBinding_t203196177;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t262791171;
// System.Linq.Expressions.NewExpression
struct NewExpression_t300312156;
// System.Linq.Expressions.MemberInitExpression
struct MemberInitExpression_t267017030;
// System.Linq.Expressions.ListInitExpression
struct ListInitExpression_t663499338;
// System.Linq.Expressions.NewArrayExpression
struct NewArrayExpression_t2668986965;
// System.Linq.Expressions.InvocationExpression
struct InvocationExpression_t3958066572;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"
#include "System_Core_System_Linq_Expressions_Expression647304412.h"
#include "System_Core_System_Linq_Expressions_ElementInit2790746160.h"
#include "System_Core_System_Linq_Expressions_MemberBinding3905900687.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Core_System_Linq_Expressions_UnaryExpression915773227.h"
#include "System_Core_System_Linq_Expressions_BinaryExpressi1666521021.h"
#include "System_Core_System_Linq_Expressions_TypeBinaryExpr1825515287.h"
#include "System_Core_System_Linq_Expressions_ConstantExpres1522759584.h"
#include "System_Core_System_Linq_Expressions_ConditionalExp1459688386.h"
#include "System_Core_System_Linq_Expressions_ParameterExpres339595557.h"
#include "System_Core_System_Linq_Expressions_MemberExpressi1133177622.h"
#include "System_Core_System_Linq_Expressions_MethodCallExpr1101718811.h"
#include "System_Core_System_Linq_Expressions_MemberAssignme3954892619.h"
#include "System_Core_System_Linq_Expressions_MemberMemberBin219944981.h"
#include "System_Core_System_Linq_Expressions_MemberListBindi203196177.h"
#include "System_Core_System_Linq_Expressions_LambdaExpressio262791171.h"
#include "System_Core_System_Linq_Expressions_NewExpression300312156.h"
#include "System_Core_System_Linq_Expressions_MemberInitExpre267017030.h"
#include "System_Core_System_Linq_Expressions_ListInitExpress663499338.h"
#include "System_Core_System_Linq_Expressions_NewArrayExpres2668986965.h"
#include "System_Core_System_Linq_Expressions_InvocationExpr3958066572.h"

// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor(System.Text.StringBuilder)
extern "C"  void ExpressionPrinter__ctor_m4107327567 (ExpressionPrinter_t1508972646 * __this, StringBuilder_t3822575854 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor()
extern "C"  void ExpressionPrinter__ctor_m4051061755 (ExpressionPrinter_t1508972646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.Expression)
extern "C"  String_t* ExpressionPrinter_ToString_m547071960 (Il2CppObject * __this /* static, unused */, Expression_t647304412 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.ElementInit)
extern "C"  String_t* ExpressionPrinter_ToString_m2333420822 (Il2CppObject * __this /* static, unused */, ElementInit_t2790746160 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.MemberBinding)
extern "C"  String_t* ExpressionPrinter_ToString_m522507863 (Il2CppObject * __this /* static, unused */, MemberBinding_t3905900687 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String)
extern "C"  void ExpressionPrinter_Print_m3017882684 (ExpressionPrinter_t1508972646 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.Object)
extern "C"  void ExpressionPrinter_Print_m3239993038 (ExpressionPrinter_t1508972646 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String,System.Object[])
extern "C"  void ExpressionPrinter_Print_m319347368 (ExpressionPrinter_t1508972646 * __this, String_t* ___str, ObjectU5BU5D_t11523773* ___objs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitElementInitializer(System.Linq.Expressions.ElementInit)
extern "C"  void ExpressionPrinter_VisitElementInitializer_m1350232926 (ExpressionPrinter_t1508972646 * __this, ElementInit_t2790746160 * ___initializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitUnary(System.Linq.Expressions.UnaryExpression)
extern "C"  void ExpressionPrinter_VisitUnary_m2081576480 (ExpressionPrinter_t1508972646 * __this, UnaryExpression_t915773227 * ___unary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::OperatorToString(System.Linq.Expressions.BinaryExpression)
extern "C"  String_t* ExpressionPrinter_OperatorToString_m571184795 (Il2CppObject * __this /* static, unused */, BinaryExpression_t1666521021 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.ExpressionPrinter::IsBoolean(System.Linq.Expressions.Expression)
extern "C"  bool ExpressionPrinter_IsBoolean_m2211668817 (Il2CppObject * __this /* static, unused */, Expression_t647304412 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::PrintArrayIndex(System.Linq.Expressions.BinaryExpression)
extern "C"  void ExpressionPrinter_PrintArrayIndex_m327605732 (ExpressionPrinter_t1508972646 * __this, BinaryExpression_t1666521021 * ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitBinary(System.Linq.Expressions.BinaryExpression)
extern "C"  void ExpressionPrinter_VisitBinary_m2717788938 (ExpressionPrinter_t1508972646 * __this, BinaryExpression_t1666521021 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitTypeIs(System.Linq.Expressions.TypeBinaryExpression)
extern "C"  void ExpressionPrinter_VisitTypeIs_m787702451 (ExpressionPrinter_t1508972646 * __this, TypeBinaryExpression_t1825515287 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitConstant(System.Linq.Expressions.ConstantExpression)
extern "C"  void ExpressionPrinter_VisitConstant_m2755257194 (ExpressionPrinter_t1508972646 * __this, ConstantExpression_t1522759584 * ___constant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.ExpressionPrinter::HasStringRepresentation(System.Object)
extern "C"  bool ExpressionPrinter_HasStringRepresentation_m2360999695 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitConditional(System.Linq.Expressions.ConditionalExpression)
extern "C"  void ExpressionPrinter_VisitConditional_m1439796594 (ExpressionPrinter_t1508972646 * __this, ConditionalExpression_t1459688386 * ___conditional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitParameter(System.Linq.Expressions.ParameterExpression)
extern "C"  void ExpressionPrinter_VisitParameter_m1572882092 (ExpressionPrinter_t1508972646 * __this, ParameterExpression_t339595557 * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberAccess(System.Linq.Expressions.MemberExpression)
extern "C"  void ExpressionPrinter_VisitMemberAccess_m3679421678 (ExpressionPrinter_t1508972646 * __this, MemberExpression_t1133177622 * ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMethodCall(System.Linq.Expressions.MethodCallExpression)
extern "C"  void ExpressionPrinter_VisitMethodCall_m3513915722 (ExpressionPrinter_t1508972646 * __this, MethodCallExpression_t1101718811 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberAssignment(System.Linq.Expressions.MemberAssignment)
extern "C"  void ExpressionPrinter_VisitMemberAssignment_m4128100098 (ExpressionPrinter_t1508972646 * __this, MemberAssignment_t3954892619 * ___assignment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberMemberBinding(System.Linq.Expressions.MemberMemberBinding)
extern "C"  void ExpressionPrinter_VisitMemberMemberBinding_m3091544212 (ExpressionPrinter_t1508972646 * __this, MemberMemberBinding_t219944981 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberListBinding(System.Linq.Expressions.MemberListBinding)
extern "C"  void ExpressionPrinter_VisitMemberListBinding_m3512713308 (ExpressionPrinter_t1508972646 * __this, MemberListBinding_t203196177 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitLambda(System.Linq.Expressions.LambdaExpression)
extern "C"  void ExpressionPrinter_VisitLambda_m3497302986 (ExpressionPrinter_t1508972646 * __this, LambdaExpression_t262791171 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitNew(System.Linq.Expressions.NewExpression)
extern "C"  void ExpressionPrinter_VisitNew_m3016434622 (ExpressionPrinter_t1508972646 * __this, NewExpression_t300312156 * ___nex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberInit(System.Linq.Expressions.MemberInitExpression)
extern "C"  void ExpressionPrinter_VisitMemberInit_m1317954858 (ExpressionPrinter_t1508972646 * __this, MemberInitExpression_t267017030 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitListInit(System.Linq.Expressions.ListInitExpression)
extern "C"  void ExpressionPrinter_VisitListInit_m3532787242 (ExpressionPrinter_t1508972646 * __this, ListInitExpression_t663499338 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitNewArray(System.Linq.Expressions.NewArrayExpression)
extern "C"  void ExpressionPrinter_VisitNewArray_m3367521482 (ExpressionPrinter_t1508972646 * __this, NewArrayExpression_t2668986965 * ___newArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitInvocation(System.Linq.Expressions.InvocationExpression)
extern "C"  void ExpressionPrinter_VisitInvocation_m3565126378 (ExpressionPrinter_t1508972646 * __this, InvocationExpression_t3958066572 * ___invocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
