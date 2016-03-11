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

// NSubstitute.Core.SubstituteFactory
struct SubstituteFactory_t3050348887;
// NSubstitute.Core.ISubstitutionContext
struct ISubstitutionContext_t3786902352;
// NSubstitute.Core.ICallRouterFactory
struct ICallRouterFactory_t649303265;
// NSubstitute.Core.IProxyFactory
struct IProxyFactory_t1430189068;
// NSubstitute.Core.ICallRouterResolver
struct ICallRouterResolver_t3320152829;
// System.Object
struct Il2CppObject;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_NSubstitute_Core_SubstituteConfig817543939.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void NSubstitute.Core.SubstituteFactory::.ctor(NSubstitute.Core.ISubstitutionContext,NSubstitute.Core.ICallRouterFactory,NSubstitute.Core.IProxyFactory,NSubstitute.Core.ICallRouterResolver)
extern "C"  void SubstituteFactory__ctor_m1862578026 (SubstituteFactory_t3050348887 * __this, Il2CppObject * ___context, Il2CppObject * ___callRouterFactory, Il2CppObject * ___proxyFactory, Il2CppObject * ___callRouterResolver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object NSubstitute.Core.SubstituteFactory::Create(System.Type[],System.Object[])
extern "C"  Il2CppObject * SubstituteFactory_Create_m382072956 (SubstituteFactory_t3050348887 * __this, TypeU5BU5D_t3431720054* ___typesToProxy, ObjectU5BU5D_t11523773* ___constructorArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object NSubstitute.Core.SubstituteFactory::Create(System.Type[],System.Object[],NSubstitute.Core.SubstituteConfig)
extern "C"  Il2CppObject * SubstituteFactory_Create_m2532457603 (SubstituteFactory_t3050348887 * __this, TypeU5BU5D_t3431720054* ___typesToProxy, ObjectU5BU5D_t11523773* ___constructorArguments, int32_t ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type NSubstitute.Core.SubstituteFactory::GetPrimaryProxyType(System.Type[])
extern "C"  Type_t * SubstituteFactory_GetPrimaryProxyType_m3998560617 (SubstituteFactory_t3050348887 * __this, TypeU5BU5D_t3431720054* ___typesToProxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NSubstitute.Core.SubstituteFactory::<GetPrimaryProxyType>b__3(System.Type)
extern "C"  bool SubstituteFactory_U3CGetPrimaryProxyTypeU3Eb__3_m2501135430 (Il2CppObject * __this /* static, unused */, Type_t * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NSubstitute.Core.SubstituteFactory::<GetPrimaryProxyType>b__4(System.Type)
extern "C"  bool SubstituteFactory_U3CGetPrimaryProxyTypeU3Eb__4_m1995576805 (Il2CppObject * __this /* static, unused */, Type_t * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NSubstitute.Core.SubstituteFactory::<GetPrimaryProxyType>b__5(System.Type)
extern "C"  bool SubstituteFactory_U3CGetPrimaryProxyTypeU3Eb__5_m1490018180 (Il2CppObject * __this /* static, unused */, Type_t * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NSubstitute.Core.SubstituteFactory::<GetPrimaryProxyType>b__6(System.Type)
extern "C"  bool SubstituteFactory_U3CGetPrimaryProxyTypeU3Eb__6_m984459555 (Il2CppObject * __this /* static, unused */, Type_t * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
