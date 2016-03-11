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

// Castle.DynamicProxy.Generators.MethodGenerator
struct MethodGenerator_t3295115653;
// Castle.DynamicProxy.Generators.MetaMethod
struct MetaMethod_t2289943065;
// Castle.DynamicProxy.Contributors.OverrideMethodDelegate
struct OverrideMethodDelegate_t507301037;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter
struct MethodEmitter_t2027936539;
// Castle.DynamicProxy.Generators.Emitters.ClassEmitter
struct ClassEmitter_t3355090660;
// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;
// Castle.DynamicProxy.Generators.INamingScope
struct INamingScope_t873561430;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaMet2289943065.h"
#include "NSubstitute_Castle_DynamicProxy_Contributors_Overri507301037.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"

// System.Void Castle.DynamicProxy.Generators.MethodGenerator::.ctor(Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Contributors.OverrideMethodDelegate)
extern "C"  void MethodGenerator__ctor_m729781772 (MethodGenerator_t3295115653 * __this, MetaMethod_t2289943065 * ___method, OverrideMethodDelegate_t507301037 * ___overrideMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Castle.DynamicProxy.Generators.MethodGenerator::get_MethodToOverride()
extern "C"  MethodInfo_t * MethodGenerator_get_MethodToOverride_m2639890955 (MethodGenerator_t3295115653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter Castle.DynamicProxy.Generators.MethodGenerator::Generate(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions,Castle.DynamicProxy.Generators.INamingScope)
extern "C"  MethodEmitter_t2027936539 * MethodGenerator_Generate_m162188840 (MethodGenerator_t3295115653 * __this, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
