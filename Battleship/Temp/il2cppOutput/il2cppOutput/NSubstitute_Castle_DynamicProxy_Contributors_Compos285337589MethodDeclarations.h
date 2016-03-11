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

// Castle.DynamicProxy.Contributors.CompositeTypeContributor
struct CompositeTypeContributor_t285337589;
// Castle.DynamicProxy.Generators.INamingScope
struct INamingScope_t873561430;
// Castle.Core.Logging.ILogger
struct ILogger_t1490187963;
// Castle.DynamicProxy.IProxyGenerationHook
struct IProxyGenerationHook_t479444615;
// Castle.DynamicProxy.Generators.MetaType
struct MetaType_t3522715058;
// Castle.DynamicProxy.Generators.Emitters.ClassEmitter
struct ClassEmitter_t3355090660;
// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;
// System.Type
struct Type_t;
// Castle.DynamicProxy.Generators.MetaEvent
struct MetaEvent_t524284456;
// Castle.DynamicProxy.Generators.MetaProperty
struct MetaProperty_t2675851725;
// Castle.DynamicProxy.Generators.MetaMethod
struct MetaMethod_t2289943065;
// Castle.DynamicProxy.Contributors.OverrideMethodDelegate
struct OverrideMethodDelegate_t507301037;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaTyp3522715058.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaEven524284456.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaPro2675851725.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaMet2289943065.h"
#include "NSubstitute_Castle_DynamicProxy_Contributors_Overri507301037.h"

// System.Void Castle.DynamicProxy.Contributors.CompositeTypeContributor::.ctor(Castle.DynamicProxy.Generators.INamingScope)
extern "C"  void CompositeTypeContributor__ctor_m3409350688 (CompositeTypeContributor_t285337589 * __this, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.Core.Logging.ILogger Castle.DynamicProxy.Contributors.CompositeTypeContributor::get_Logger()
extern "C"  Il2CppObject * CompositeTypeContributor_get_Logger_m4194962673 (CompositeTypeContributor_t285337589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.CompositeTypeContributor::set_Logger(Castle.Core.Logging.ILogger)
extern "C"  void CompositeTypeContributor_set_Logger_m2450986074 (CompositeTypeContributor_t285337589 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.CompositeTypeContributor::CollectElementsToProxy(Castle.DynamicProxy.IProxyGenerationHook,Castle.DynamicProxy.Generators.MetaType)
extern "C"  void CompositeTypeContributor_CollectElementsToProxy_m3924799179 (CompositeTypeContributor_t285337589 * __this, Il2CppObject * ___hook, MetaType_t3522715058 * ___model, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.CompositeTypeContributor::Generate(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  void CompositeTypeContributor_Generate_m2331349392 (CompositeTypeContributor_t285337589 * __this, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.CompositeTypeContributor::AddInterfaceToProxy(System.Type)
extern "C"  void CompositeTypeContributor_AddInterfaceToProxy_m2726937686 (CompositeTypeContributor_t285337589 * __this, Type_t * ___interface, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.CompositeTypeContributor::ImplementEvent(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.Generators.MetaEvent,Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  void CompositeTypeContributor_ImplementEvent_m6567270 (CompositeTypeContributor_t285337589 * __this, ClassEmitter_t3355090660 * ___emitter, MetaEvent_t524284456 * ___event, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.CompositeTypeContributor::ImplementProperty(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.Generators.MetaProperty,Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  void CompositeTypeContributor_ImplementProperty_m1056578898 (CompositeTypeContributor_t285337589 * __this, ClassEmitter_t3355090660 * ___emitter, MetaProperty_t2675851725 * ___property, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.CompositeTypeContributor::ImplementMethod(Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions,Castle.DynamicProxy.Contributors.OverrideMethodDelegate)
extern "C"  void CompositeTypeContributor_ImplementMethod_m3390253985 (CompositeTypeContributor_t285337589 * __this, MetaMethod_t2289943065 * ___method, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, OverrideMethodDelegate_t507301037 * ___overrideMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
