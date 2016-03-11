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

// NSubstitute.Core.CallRouter
struct CallRouter_t3364870606;
// NSubstitute.Core.ISubstituteState
struct ISubstituteState_t1664596725;
// NSubstitute.Core.ISubstitutionContext
struct ISubstitutionContext_t3786902352;
// NSubstitute.Routing.IRouteFactory
struct IRouteFactory_t2959192106;
// System.Func`2<NSubstitute.Core.ISubstituteState,NSubstitute.Routing.IRoute>
struct Func_2_t111592927;
// NSubstitute.Routing.IRoute
struct IRoute_t900752960;

#include "codegen/il2cpp-codegen.h"

// System.Void NSubstitute.Core.CallRouter::.ctor(NSubstitute.Core.ISubstituteState,NSubstitute.Core.ISubstitutionContext,NSubstitute.Routing.IRouteFactory)
extern "C"  void CallRouter__ctor_m3933928484 (CallRouter_t3364870606 * __this, Il2CppObject * ___substituteState, Il2CppObject * ___context, Il2CppObject * ___routeFactory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSubstitute.Core.CallRouter::SetRoute(System.Func`2<NSubstitute.Core.ISubstituteState,NSubstitute.Routing.IRoute>)
extern "C"  void CallRouter_SetRoute_m16216788 (CallRouter_t3364870606 * __this, Func_2_t111592927 * ___getRoute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSubstitute.Core.CallRouter::UseDefaultRouteForNextCall()
extern "C"  void CallRouter_UseDefaultRouteForNextCall_m3370627822 (CallRouter_t3364870606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NSubstitute.Routing.IRoute NSubstitute.Core.CallRouter::<UseDefaultRouteForNextCall>b__0(NSubstitute.Core.ISubstituteState)
extern "C"  Il2CppObject * CallRouter_U3CUseDefaultRouteForNextCallU3Eb__0_m2108661686 (CallRouter_t3364870606 * __this, Il2CppObject * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSubstitute.Core.CallRouter::.cctor()
extern "C"  void CallRouter__cctor_m3775785260 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
