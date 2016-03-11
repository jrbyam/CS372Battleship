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

// Castle.DynamicProxy.Contributors.ProxyInstanceContributor
struct ProxyInstanceContributor_t4170014707;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.String
struct String_t;
// Castle.DynamicProxy.Generators.Emitters.ClassEmitter
struct ClassEmitter_t3355090660;
// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference
struct FieldReference_t994901333;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference
struct ArgumentReference_t4040130226;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter
struct MethodEmitter_t2027936539;
// Castle.DynamicProxy.IProxyGenerationHook
struct IProxyGenerationHook_t479444615;
// Castle.DynamicProxy.Generators.MetaType
struct MetaType_t3522715058;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters994901333.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter4040130226.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter2027936539.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaTyp3522715058.h"

// System.Void Castle.DynamicProxy.Contributors.ProxyInstanceContributor::.ctor(System.Type,System.Type[],System.String)
extern "C"  void ProxyInstanceContributor__ctor_m3467935642 (ProxyInstanceContributor_t4170014707 * __this, Type_t * ___targetType, TypeU5BU5D_t3431720054* ___interfaces, String_t* ___proxyTypeId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.ProxyInstanceContributor::Generate(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  void ProxyInstanceContributor_Generate_m827012818 (ProxyInstanceContributor_t4170014707 * __this, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.ProxyInstanceContributor::ImplementProxyTargetAccessor(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference)
extern "C"  void ProxyInstanceContributor_ImplementProxyTargetAccessor_m216874450 (ProxyInstanceContributor_t4170014707 * __this, ClassEmitter_t3355090660 * ___emitter, FieldReference_t994901333 * ___interceptorsField, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.ProxyInstanceContributor::ImplementGetObjectData(Castle.DynamicProxy.Generators.Emitters.ClassEmitter)
extern "C"  void ProxyInstanceContributor_ImplementGetObjectData_m2831499962 (ProxyInstanceContributor_t4170014707 * __this, ClassEmitter_t3355090660 * ___emitter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.ProxyInstanceContributor::AddAddValueInvocation(Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference,Castle.DynamicProxy.Generators.Emitters.MethodEmitter,Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference)
extern "C"  void ProxyInstanceContributor_AddAddValueInvocation_m1026986709 (ProxyInstanceContributor_t4170014707 * __this, ArgumentReference_t4040130226 * ___serializationInfo, MethodEmitter_t2027936539 * ___getObjectData, FieldReference_t994901333 * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.ProxyInstanceContributor::CollectElementsToProxy(Castle.DynamicProxy.IProxyGenerationHook,Castle.DynamicProxy.Generators.MetaType)
extern "C"  void ProxyInstanceContributor_CollectElementsToProxy_m4153366857 (ProxyInstanceContributor_t4170014707 * __this, Il2CppObject * ___hook, MetaType_t3522715058 * ___model, const MethodInfo* method) IL2CPP_METHOD_ATTR;
