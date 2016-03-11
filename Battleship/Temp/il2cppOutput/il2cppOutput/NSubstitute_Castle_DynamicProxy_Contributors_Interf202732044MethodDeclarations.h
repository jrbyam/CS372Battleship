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

// Castle.DynamicProxy.Contributors.InterfaceProxyInstanceContributor
struct InterfaceProxyInstanceContributor_t202732044;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression
struct Expression_t707291260;
// Castle.DynamicProxy.Generators.Emitters.ClassEmitter
struct ClassEmitter_t3355090660;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// Castle.DynamicProxy.Generators.Emitters.CodeBuilders.AbstractCodeBuilder
struct AbstractCodeBuilder_t3512213983;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference
struct ArgumentReference_t4040130226;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3512213983.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter4040130226.h"

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Contributors.InterfaceProxyInstanceContributor::GetTargetReferenceExpression(Castle.DynamicProxy.Generators.Emitters.ClassEmitter)
extern "C"  Expression_t707291260 * InterfaceProxyInstanceContributor_GetTargetReferenceExpression_m1987038444 (InterfaceProxyInstanceContributor_t202732044 * __this, ClassEmitter_t3355090660 * ___emitter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.InterfaceProxyInstanceContributor::.ctor(System.Type,System.String,System.Type[])
extern "C"  void InterfaceProxyInstanceContributor__ctor_m866880533 (InterfaceProxyInstanceContributor_t202732044 * __this, Type_t * ___targetType, String_t* ___proxyGeneratorId, TypeU5BU5D_t3431720054* ___interfaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.InterfaceProxyInstanceContributor::CustomizeGetObjectData(Castle.DynamicProxy.Generators.Emitters.CodeBuilders.AbstractCodeBuilder,Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference,Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference,Castle.DynamicProxy.Generators.Emitters.ClassEmitter)
extern "C"  void InterfaceProxyInstanceContributor_CustomizeGetObjectData_m2002613604 (InterfaceProxyInstanceContributor_t202732044 * __this, AbstractCodeBuilder_t3512213983 * ___codebuilder, ArgumentReference_t4040130226 * ___serializationInfo, ArgumentReference_t4040130226 * ___streamingContext, ClassEmitter_t3355090660 * ___emitter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
