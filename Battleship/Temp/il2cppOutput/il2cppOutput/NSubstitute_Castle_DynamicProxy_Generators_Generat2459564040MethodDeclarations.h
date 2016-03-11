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

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.TypeReference[]
struct TypeReferenceU5BU5D_t2018303544;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference
struct LocalReference_t1252421124;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter
struct MethodEmitter_t2027936539;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ConvertExpression
struct ConvertExpression_t3419243087;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.AssignStatement
struct AssignStatement_t2368149220;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter1252421124.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter2027936539.h"

// System.Void Castle.DynamicProxy.Generators.GeneratorUtil::CopyOutAndRefParameters(Castle.DynamicProxy.Generators.Emitters.SimpleAST.TypeReference[],Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference,System.Reflection.MethodInfo,Castle.DynamicProxy.Generators.Emitters.MethodEmitter)
extern "C"  void GeneratorUtil_CopyOutAndRefParameters_m320376305 (Il2CppObject * __this /* static, unused */, TypeReferenceU5BU5D_t2018303544* ___dereferencedArguments, LocalReference_t1252421124 * ___invocation, MethodInfo_t * ___method, MethodEmitter_t2027936539 * ___emitter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ConvertExpression Castle.DynamicProxy.Generators.GeneratorUtil::Argument(System.Int32,Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference,Castle.DynamicProxy.Generators.Emitters.SimpleAST.TypeReference[])
extern "C"  ConvertExpression_t3419243087 * GeneratorUtil_Argument_m1415566376 (Il2CppObject * __this /* static, unused */, int32_t ___i, LocalReference_t1252421124 * ___invocationArgs, TypeReferenceU5BU5D_t2018303544* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.AssignStatement Castle.DynamicProxy.Generators.GeneratorUtil::AssignArgument(Castle.DynamicProxy.Generators.Emitters.SimpleAST.TypeReference[],System.Int32,Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference)
extern "C"  AssignStatement_t2368149220 * GeneratorUtil_AssignArgument_m1599069966 (Il2CppObject * __this /* static, unused */, TypeReferenceU5BU5D_t2018303544* ___dereferencedArguments, int32_t ___i, LocalReference_t1252421124 * ___invocationArgs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.AssignStatement Castle.DynamicProxy.Generators.GeneratorUtil::GetArguments(Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference,Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference)
extern "C"  AssignStatement_t2368149220 * GeneratorUtil_GetArguments_m379922066 (Il2CppObject * __this /* static, unused */, LocalReference_t1252421124 * ___invocationArgs, LocalReference_t1252421124 * ___invocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference Castle.DynamicProxy.Generators.GeneratorUtil::StoreInvocationArgumentsInLocal(Castle.DynamicProxy.Generators.Emitters.MethodEmitter,Castle.DynamicProxy.Generators.Emitters.SimpleAST.LocalReference)
extern "C"  LocalReference_t1252421124 * GeneratorUtil_StoreInvocationArgumentsInLocal_m1204800752 (Il2CppObject * __this /* static, unused */, MethodEmitter_t2027936539 * ___emitter, LocalReference_t1252421124 * ___invocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
