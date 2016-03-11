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

// Castle.DynamicProxy.Contributors.OptionallyForwardingMethodGenerator
struct OptionallyForwardingMethodGenerator_t3220982211;
// Castle.DynamicProxy.Generators.MetaMethod
struct MetaMethod_t2289943065;
// Castle.DynamicProxy.Contributors.OverrideMethodDelegate
struct OverrideMethodDelegate_t507301037;
// Castle.DynamicProxy.Contributors.GetTargetReferenceDelegate
struct GetTargetReferenceDelegate_t3954391140;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter
struct MethodEmitter_t2027936539;
// Castle.DynamicProxy.Generators.Emitters.ClassEmitter
struct ClassEmitter_t3355090660;
// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;
// Castle.DynamicProxy.Generators.INamingScope
struct INamingScope_t873561430;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression
struct Expression_t707291260;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;
// System.Type
struct Type_t;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.MultiStatementExpression
struct MultiStatementExpression_t1541113170;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1127461800;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaMet2289943065.h"
#include "NSubstitute_Castle_DynamicProxy_Contributors_Overri507301037.h"
#include "NSubstitute_Castle_DynamicProxy_Contributors_GetTa3954391140.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter2027936539.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter1588091119.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter1541113170.h"

// System.Void Castle.DynamicProxy.Contributors.OptionallyForwardingMethodGenerator::.ctor(Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Contributors.OverrideMethodDelegate,Castle.DynamicProxy.Contributors.GetTargetReferenceDelegate)
extern "C"  void OptionallyForwardingMethodGenerator__ctor_m3754652912 (OptionallyForwardingMethodGenerator_t3220982211 * __this, MetaMethod_t2289943065 * ___method, OverrideMethodDelegate_t507301037 * ___overrideMethod, GetTargetReferenceDelegate_t3954391140 * ___getTargetReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter Castle.DynamicProxy.Contributors.OptionallyForwardingMethodGenerator::BuildProxiedMethodBody(Castle.DynamicProxy.Generators.Emitters.MethodEmitter,Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions,Castle.DynamicProxy.Generators.INamingScope)
extern "C"  MethodEmitter_t2027936539 * OptionallyForwardingMethodGenerator_BuildProxiedMethodBody_m3120654752 (OptionallyForwardingMethodGenerator_t3220982211 * __this, MethodEmitter_t2027936539 * ___emitter, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Contributors.OptionallyForwardingMethodGenerator::IfNotNull(Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference)
extern "C"  Expression_t707291260 * OptionallyForwardingMethodGenerator_IfNotNull_m2702426379 (OptionallyForwardingMethodGenerator_t3220982211 * __this, Reference_t1588091119 * ___targetReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Contributors.OptionallyForwardingMethodGenerator::IfNull(System.Type)
extern "C"  Expression_t707291260 * OptionallyForwardingMethodGenerator_IfNull_m3722376756 (OptionallyForwardingMethodGenerator_t3220982211 * __this, Type_t * ___returnType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.OptionallyForwardingMethodGenerator::InitOutParameters(Castle.DynamicProxy.Generators.Emitters.SimpleAST.MultiStatementExpression,System.Reflection.ParameterInfo[])
extern "C"  void OptionallyForwardingMethodGenerator_InitOutParameters_m50338055 (OptionallyForwardingMethodGenerator_t3220982211 * __this, MultiStatementExpression_t1541113170 * ___expression, ParameterInfoU5BU5D_t1127461800* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
