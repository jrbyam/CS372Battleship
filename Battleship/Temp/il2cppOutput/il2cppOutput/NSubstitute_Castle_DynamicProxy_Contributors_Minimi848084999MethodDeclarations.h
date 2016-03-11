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

// Castle.DynamicProxy.Contributors.MinimialisticMethodGenerator
struct MinimialisticMethodGenerator_t848084999;
// Castle.DynamicProxy.Generators.MetaMethod
struct MetaMethod_t2289943065;
// Castle.DynamicProxy.Contributors.OverrideMethodDelegate
struct OverrideMethodDelegate_t507301037;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter
struct MethodEmitter_t2027936539;
// Castle.DynamicProxy.Generators.Emitters.ClassEmitter
struct ClassEmitter_t3355090660;
// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;
// Castle.DynamicProxy.Generators.INamingScope
struct INamingScope_t873561430;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1127461800;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaMet2289943065.h"
#include "NSubstitute_Castle_DynamicProxy_Contributors_Overri507301037.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter2027936539.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"

// System.Void Castle.DynamicProxy.Contributors.MinimialisticMethodGenerator::.ctor(Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Contributors.OverrideMethodDelegate)
extern "C"  void MinimialisticMethodGenerator__ctor_m1773657852 (MinimialisticMethodGenerator_t848084999 * __this, MetaMethod_t2289943065 * ___method, OverrideMethodDelegate_t507301037 * ___overrideMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter Castle.DynamicProxy.Contributors.MinimialisticMethodGenerator::BuildProxiedMethodBody(Castle.DynamicProxy.Generators.Emitters.MethodEmitter,Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions,Castle.DynamicProxy.Generators.INamingScope)
extern "C"  MethodEmitter_t2027936539 * MinimialisticMethodGenerator_BuildProxiedMethodBody_m3895369298 (MinimialisticMethodGenerator_t848084999 * __this, MethodEmitter_t2027936539 * ___emitter, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.MinimialisticMethodGenerator::InitOutParameters(Castle.DynamicProxy.Generators.Emitters.MethodEmitter,System.Reflection.ParameterInfo[])
extern "C"  void MinimialisticMethodGenerator_InitOutParameters_m2986702210 (MinimialisticMethodGenerator_t848084999 * __this, MethodEmitter_t2027936539 * ___emitter, ParameterInfoU5BU5D_t1127461800* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
