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

// System.Linq.Expressions.CompilationContext/HoistedVariableDetector
struct HoistedVariableDetector_t2706281572;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.LambdaExpression,System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>>
struct Dictionary_2_t4062183869;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t262791171;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t339595557;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_Expressions_LambdaExpressio262791171.h"
#include "System_Core_System_Linq_Expressions_ParameterExpres339595557.h"

// System.Void System.Linq.Expressions.CompilationContext/HoistedVariableDetector::.ctor()
extern "C"  void HoistedVariableDetector__ctor_m1626587528 (HoistedVariableDetector_t2706281572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.LambdaExpression,System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>> System.Linq.Expressions.CompilationContext/HoistedVariableDetector::Process(System.Linq.Expressions.LambdaExpression)
extern "C"  Dictionary_2_t4062183869 * HoistedVariableDetector_Process_m211822258 (HoistedVariableDetector_t2706281572 * __this, LambdaExpression_t262791171 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.CompilationContext/HoistedVariableDetector::VisitLambda(System.Linq.Expressions.LambdaExpression)
extern "C"  void HoistedVariableDetector_VisitLambda_m888431255 (HoistedVariableDetector_t2706281572 * __this, LambdaExpression_t262791171 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.CompilationContext/HoistedVariableDetector::VisitParameter(System.Linq.Expressions.ParameterExpression)
extern "C"  void HoistedVariableDetector_VisitParameter_m2503016377 (HoistedVariableDetector_t2706281572 * __this, ParameterExpression_t339595557 * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.CompilationContext/HoistedVariableDetector::Hoist(System.Linq.Expressions.ParameterExpression)
extern "C"  void HoistedVariableDetector_Hoist_m4008756330 (HoistedVariableDetector_t2706281572 * __this, ParameterExpression_t339595557 * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
