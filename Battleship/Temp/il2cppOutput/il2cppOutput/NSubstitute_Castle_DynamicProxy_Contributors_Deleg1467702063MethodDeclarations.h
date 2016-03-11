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

// Castle.DynamicProxy.Contributors.DelegateTypeGenerator
struct DelegateTypeGenerator_t1467702063;
// Castle.DynamicProxy.Generators.MetaMethod
struct MetaMethod_t2289943065;
// System.Type
struct Type_t;
// Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter
struct AbstractTypeEmitter_t2268871968;
// Castle.DynamicProxy.Generators.Emitters.ClassEmitter
struct ClassEmitter_t3355090660;
// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;
// Castle.DynamicProxy.Generators.INamingScope
struct INamingScope_t873561430;
// System.Type[]
struct TypeU5BU5D_t3431720054;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaMet2289943065.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter2268871968.h"

// System.Void Castle.DynamicProxy.Contributors.DelegateTypeGenerator::.ctor(Castle.DynamicProxy.Generators.MetaMethod,System.Type)
extern "C"  void DelegateTypeGenerator__ctor_m1207590220 (DelegateTypeGenerator_t1467702063 * __this, MetaMethod_t2289943065 * ___method, Type_t * ___targetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter Castle.DynamicProxy.Contributors.DelegateTypeGenerator::Generate(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions,Castle.DynamicProxy.Generators.INamingScope)
extern "C"  AbstractTypeEmitter_t2268871968 * DelegateTypeGenerator_Generate_m3884050227 (DelegateTypeGenerator_t1467702063 * __this, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.DelegateTypeGenerator::BuildConstructor(Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter)
extern "C"  void DelegateTypeGenerator_BuildConstructor_m1980456866 (DelegateTypeGenerator_t1467702063 * __this, AbstractTypeEmitter_t2268871968 * ___emitter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.DelegateTypeGenerator::BuildInvokeMethod(Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter)
extern "C"  void DelegateTypeGenerator_BuildInvokeMethod_m2613509681 (DelegateTypeGenerator_t1467702063 * __this, AbstractTypeEmitter_t2268871968 * ___delegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter Castle.DynamicProxy.Contributors.DelegateTypeGenerator::GetEmitter(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.Generators.INamingScope)
extern "C"  AbstractTypeEmitter_t2268871968 * DelegateTypeGenerator_GetEmitter_m3393854941 (DelegateTypeGenerator_t1467702063 * __this, ClassEmitter_t3355090660 * ___class, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] Castle.DynamicProxy.Contributors.DelegateTypeGenerator::GetParamTypes(Castle.DynamicProxy.Generators.Emitters.AbstractTypeEmitter)
extern "C"  TypeU5BU5D_t3431720054* DelegateTypeGenerator_GetParamTypes_m515908526 (DelegateTypeGenerator_t1467702063 * __this, AbstractTypeEmitter_t2268871968 * ___delegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
