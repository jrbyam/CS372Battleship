﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Castle.DynamicProxy.Contributors.ForwardingMethodGenerator
struct ForwardingMethodGenerator_t3139915312;
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

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaMet2289943065.h"
#include "NSubstitute_Castle_DynamicProxy_Contributors_Overri507301037.h"
#include "NSubstitute_Castle_DynamicProxy_Contributors_GetTa3954391140.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter2027936539.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"

// System.Void Castle.DynamicProxy.Contributors.ForwardingMethodGenerator::.ctor(Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Contributors.OverrideMethodDelegate,Castle.DynamicProxy.Contributors.GetTargetReferenceDelegate)
extern "C"  void ForwardingMethodGenerator__ctor_m3637288157 (ForwardingMethodGenerator_t3139915312 * __this, MetaMethod_t2289943065 * ___method, OverrideMethodDelegate_t507301037 * ___overrideMethod, GetTargetReferenceDelegate_t3954391140 * ___getTargetReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter Castle.DynamicProxy.Contributors.ForwardingMethodGenerator::BuildProxiedMethodBody(Castle.DynamicProxy.Generators.Emitters.MethodEmitter,Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions,Castle.DynamicProxy.Generators.INamingScope)
extern "C"  MethodEmitter_t2027936539 * ForwardingMethodGenerator_BuildProxiedMethodBody_m772138835 (ForwardingMethodGenerator_t3139915312 * __this, MethodEmitter_t2027936539 * ___emitter, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;