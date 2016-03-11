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

// Castle.DynamicProxy.Contributors.ClassProxyInstanceContributor
struct ClassProxyInstanceContributor_t1320128843;
// System.Type
struct Type_t;
// System.Collections.Generic.IList`1<System.Reflection.MethodInfo>
struct IList_1_t1332746295;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.String
struct String_t;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression
struct Expression_t707291260;
// Castle.DynamicProxy.Generators.Emitters.ClassEmitter
struct ClassEmitter_t3355090660;
// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference
struct ArgumentReference_t4040130226;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter
struct MethodEmitter_t2027936539;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference
struct FieldReference_t994901333;
// Castle.DynamicProxy.Generators.Emitters.CodeBuilders.AbstractCodeBuilder
struct AbstractCodeBuilder_t3512213983;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter4040130226.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter2027936539.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters994901333.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3512213983.h"

// System.Void Castle.DynamicProxy.Contributors.ClassProxyInstanceContributor::.ctor(System.Type,System.Collections.Generic.IList`1<System.Reflection.MethodInfo>,System.Type[],System.String)
extern "C"  void ClassProxyInstanceContributor__ctor_m2179448052 (ClassProxyInstanceContributor_t1320128843 * __this, Type_t * ___targetType, Il2CppObject* ___methodsToSkip, TypeU5BU5D_t3431720054* ___interfaces, String_t* ___typeId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Contributors.ClassProxyInstanceContributor::GetTargetReferenceExpression(Castle.DynamicProxy.Generators.Emitters.ClassEmitter)
extern "C"  Expression_t707291260 * ClassProxyInstanceContributor_GetTargetReferenceExpression_m4235430571 (ClassProxyInstanceContributor_t1320128843 * __this, ClassEmitter_t3355090660 * ___emitter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.ClassProxyInstanceContributor::Generate(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  void ClassProxyInstanceContributor_Generate_m2955616536 (ClassProxyInstanceContributor_t1320128843 * __this, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.ClassProxyInstanceContributor::AddAddValueInvocation(Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference,Castle.DynamicProxy.Generators.Emitters.MethodEmitter,Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference)
extern "C"  void ClassProxyInstanceContributor_AddAddValueInvocation_m2871725851 (ClassProxyInstanceContributor_t1320128843 * __this, ArgumentReference_t4040130226 * ___serializationInfo, MethodEmitter_t2027936539 * ___getObjectData, FieldReference_t994901333 * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.ClassProxyInstanceContributor::CustomizeGetObjectData(Castle.DynamicProxy.Generators.Emitters.CodeBuilders.AbstractCodeBuilder,Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference,Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference,Castle.DynamicProxy.Generators.Emitters.ClassEmitter)
extern "C"  void ClassProxyInstanceContributor_CustomizeGetObjectData_m4239537605 (ClassProxyInstanceContributor_t1320128843 * __this, AbstractCodeBuilder_t3512213983 * ___codebuilder, ArgumentReference_t4040130226 * ___serializationInfo, ArgumentReference_t4040130226 * ___streamingContext, ClassEmitter_t3355090660 * ___emitter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.ClassProxyInstanceContributor::EmitCustomGetObjectData(Castle.DynamicProxy.Generators.Emitters.CodeBuilders.AbstractCodeBuilder,Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference)
extern "C"  void ClassProxyInstanceContributor_EmitCustomGetObjectData_m687770756 (ClassProxyInstanceContributor_t1320128843 * __this, AbstractCodeBuilder_t3512213983 * ___codebuilder, ArgumentReference_t4040130226 * ___serializationInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.ClassProxyInstanceContributor::EmitCallToBaseGetObjectData(Castle.DynamicProxy.Generators.Emitters.CodeBuilders.AbstractCodeBuilder,Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference,Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference)
extern "C"  void ClassProxyInstanceContributor_EmitCallToBaseGetObjectData_m2161228555 (ClassProxyInstanceContributor_t1320128843 * __this, AbstractCodeBuilder_t3512213983 * ___codebuilder, ArgumentReference_t4040130226 * ___serializationInfo, ArgumentReference_t4040130226 * ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.ClassProxyInstanceContributor::Constructor(Castle.DynamicProxy.Generators.Emitters.ClassEmitter)
extern "C"  void ClassProxyInstanceContributor_Constructor_m4041734288 (ClassProxyInstanceContributor_t1320128843 * __this, ClassEmitter_t3355090660 * ___emitter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.ClassProxyInstanceContributor::GenerateSerializationConstructor(Castle.DynamicProxy.Generators.Emitters.ClassEmitter)
extern "C"  void ClassProxyInstanceContributor_GenerateSerializationConstructor_m1431295639 (ClassProxyInstanceContributor_t1320128843 * __this, ClassEmitter_t3355090660 * ___emitter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Contributors.ClassProxyInstanceContributor::VerifyIfBaseImplementsGetObjectData(System.Type,System.Collections.Generic.IList`1<System.Reflection.MethodInfo>)
extern "C"  bool ClassProxyInstanceContributor_VerifyIfBaseImplementsGetObjectData_m1313129253 (ClassProxyInstanceContributor_t1320128843 * __this, Type_t * ___baseType, Il2CppObject* ___methodsToSkip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Contributors.ClassProxyInstanceContributor::IsDelegate(System.Type)
extern "C"  bool ClassProxyInstanceContributor_IsDelegate_m3219246032 (ClassProxyInstanceContributor_t1320128843 * __this, Type_t * ___baseType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
