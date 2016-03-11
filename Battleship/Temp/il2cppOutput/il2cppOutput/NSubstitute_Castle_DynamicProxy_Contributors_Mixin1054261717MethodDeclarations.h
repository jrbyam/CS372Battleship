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

// Castle.DynamicProxy.Contributors.MixinContributor
struct MixinContributor_t1054261717;
// Castle.DynamicProxy.Generators.INamingScope
struct INamingScope_t873561430;
// System.Collections.Generic.IEnumerable`1<Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference>
struct IEnumerable_1_t3867055689;
// System.Type
struct Type_t;
// Castle.DynamicProxy.Generators.Emitters.ClassEmitter
struct ClassEmitter_t3355090660;
// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;
// System.Collections.Generic.IEnumerable`1<Castle.DynamicProxy.Contributors.MembersCollector>
struct IEnumerable_1_t56121507;
// Castle.DynamicProxy.IProxyGenerationHook
struct IProxyGenerationHook_t479444615;
// Castle.DynamicProxy.Generators.MethodGenerator
struct MethodGenerator_t3295115653;
// Castle.DynamicProxy.Generators.MetaMethod
struct MetaMethod_t2289943065;
// Castle.DynamicProxy.Contributors.OverrideMethodDelegate
struct OverrideMethodDelegate_t507301037;
// Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate
struct GetTargetExpressionDelegate_t2473372959;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference
struct FieldReference_t994901333;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression
struct Expression_t707291260;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_MetaMet2289943065.h"
#include "NSubstitute_Castle_DynamicProxy_Contributors_Overri507301037.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Void Castle.DynamicProxy.Contributors.MixinContributor::.ctor(Castle.DynamicProxy.Generators.INamingScope,System.Boolean)
extern "C"  void MixinContributor__ctor_m2111138429 (MixinContributor_t1054261717 * __this, Il2CppObject * ___namingScope, bool ___canChangeTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference> Castle.DynamicProxy.Contributors.MixinContributor::get_Fields()
extern "C"  Il2CppObject* MixinContributor_get_Fields_m3472460749 (MixinContributor_t1054261717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.MixinContributor::AddEmptyInterface(System.Type)
extern "C"  void MixinContributor_AddEmptyInterface_m3296503620 (MixinContributor_t1054261717 * __this, Type_t * ___interface, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.MixinContributor::Generate(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  void MixinContributor_Generate_m1660279984 (MixinContributor_t1054261717 * __this, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Castle.DynamicProxy.Contributors.MembersCollector> Castle.DynamicProxy.Contributors.MixinContributor::CollectElementsToProxyInternal(Castle.DynamicProxy.IProxyGenerationHook)
extern "C"  Il2CppObject* MixinContributor_CollectElementsToProxyInternal_m2747780627 (MixinContributor_t1054261717 * __this, Il2CppObject * ___hook, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.MethodGenerator Castle.DynamicProxy.Contributors.MixinContributor::GetMethodGenerator(Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions,Castle.DynamicProxy.Contributors.OverrideMethodDelegate)
extern "C"  MethodGenerator_t3295115653 * MixinContributor_GetMethodGenerator_m1504237819 (MixinContributor_t1054261717 * __this, MetaMethod_t2289943065 * ___method, ClassEmitter_t3355090660 * ___class, ProxyGenerationOptions_t351299295 * ___options, OverrideMethodDelegate_t507301037 * ___overrideMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate Castle.DynamicProxy.Contributors.MixinContributor::BuildGetTargetExpression()
extern "C"  GetTargetExpressionDelegate_t2473372959 * MixinContributor_BuildGetTargetExpression_m1095287409 (MixinContributor_t1054261717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference Castle.DynamicProxy.Contributors.MixinContributor::BuildTargetField(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Type)
extern "C"  FieldReference_t994901333 * MixinContributor_BuildTargetField_m3352853360 (MixinContributor_t1054261717 * __this, ClassEmitter_t3355090660 * ___class, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.Contributors.MixinContributor::GetInvocationType(Castle.DynamicProxy.Generators.MetaMethod,Castle.DynamicProxy.Generators.Emitters.ClassEmitter,Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  Type_t * MixinContributor_GetInvocationType_m2478690238 (MixinContributor_t1054261717 * __this, MetaMethod_t2289943065 * ___method, ClassEmitter_t3355090660 * ___emitter, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference Castle.DynamicProxy.Contributors.MixinContributor::<GetMethodGenerator>b__7(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Reflection.MethodInfo)
extern "C"  Reference_t1588091119 * MixinContributor_U3CGetMethodGeneratorU3Eb__7_m360600962 (MixinContributor_t1054261717 * __this, ClassEmitter_t3355090660 * ___c, MethodInfo_t * ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Contributors.MixinContributor::<BuildGetTargetExpression>b__9(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Reflection.MethodInfo)
extern "C"  Expression_t707291260 * MixinContributor_U3CBuildGetTargetExpressionU3Eb__9_m2720997986 (MixinContributor_t1054261717 * __this, ClassEmitter_t3355090660 * ___c, MethodInfo_t * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Contributors.MixinContributor::<BuildGetTargetExpression>b__a(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Reflection.MethodInfo)
extern "C"  Expression_t707291260 * MixinContributor_U3CBuildGetTargetExpressionU3Eb__a_m3793084730 (MixinContributor_t1054261717 * __this, ClassEmitter_t3355090660 * ___c, MethodInfo_t * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
