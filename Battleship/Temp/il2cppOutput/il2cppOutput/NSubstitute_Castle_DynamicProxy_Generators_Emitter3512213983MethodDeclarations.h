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

// Castle.DynamicProxy.Generators.Emitters.CodeBuilders.AbstractCodeBuilder
struct AbstractCodeBuilder_t3512213983;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression
struct Expression_t707291260;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Statement
struct Statement_t428098323;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference
struct LocalReference_t1252421124;
// System.Type
struct Type_t;
// Castle.DynamicProxy.Generators.Emitters.IMemberEmitter
struct IMemberEmitter_t4173917593;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters707291260.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters428098323.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.CodeBuilders.AbstractCodeBuilder::.ctor(System.Reflection.Emit.ILGenerator)
extern "C"  void AbstractCodeBuilder__ctor_m1706429493 (AbstractCodeBuilder_t3512213983 * __this, ILGenerator_t3869071517 * ___generator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.Emitters.CodeBuilders.AbstractCodeBuilder::get_IsEmpty()
extern "C"  bool AbstractCodeBuilder_get_IsEmpty_m2290945598 (AbstractCodeBuilder_t3512213983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.CodeBuilders.AbstractCodeBuilder Castle.DynamicProxy.Generators.Emitters.CodeBuilders.AbstractCodeBuilder::AddExpression(Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression)
extern "C"  AbstractCodeBuilder_t3512213983 * AbstractCodeBuilder_AddExpression_m1734277313 (AbstractCodeBuilder_t3512213983 * __this, Expression_t707291260 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.CodeBuilders.AbstractCodeBuilder Castle.DynamicProxy.Generators.Emitters.CodeBuilders.AbstractCodeBuilder::AddStatement(Castle.DynamicProxy.Generators.Emitters.SimpleAST.Statement)
extern "C"  AbstractCodeBuilder_t3512213983 * AbstractCodeBuilder_AddStatement_m3624865335 (AbstractCodeBuilder_t3512213983 * __this, Statement_t428098323 * ___stmt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference Castle.DynamicProxy.Generators.Emitters.CodeBuilders.AbstractCodeBuilder::DeclareLocal(System.Type)
extern "C"  LocalReference_t1252421124 * AbstractCodeBuilder_DeclareLocal_m3713310707 (AbstractCodeBuilder_t3512213983 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.CodeBuilders.AbstractCodeBuilder::SetNonEmpty()
extern "C"  void AbstractCodeBuilder_SetNonEmpty_m1460634446 (AbstractCodeBuilder_t3512213983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.CodeBuilders.AbstractCodeBuilder::Generate(Castle.DynamicProxy.Generators.Emitters.IMemberEmitter,System.Reflection.Emit.ILGenerator)
extern "C"  void AbstractCodeBuilder_Generate_m4271513489 (AbstractCodeBuilder_t3512213983 * __this, Il2CppObject * ___member, ILGenerator_t3869071517 * ___il, const MethodInfo* method) IL2CPP_METHOD_ATTR;
