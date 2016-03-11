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

// Castle.DynamicProxy.Generators.InterfaceProxyWithTargetInterfaceGenerator
struct InterfaceProxyWithTargetInterfaceGenerator_t3631152665;
// Castle.DynamicProxy.ModuleScope
struct ModuleScope_t3833971791;
// System.Type
struct Type_t;
// System.String
struct String_t;
// Castle.DynamicProxy.Contributors.ITypeContributor
struct ITypeContributor_t2076424659;
// System.Collections.Generic.IDictionary`2<System.Type,Castle.DynamicProxy.Contributors.ITypeContributor>
struct IDictionary_2_t1069670865;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t3245061321;
// Castle.DynamicProxy.Generators.INamingScope
struct INamingScope_t873561430;
// Castle.DynamicProxy.Contributors.InterfaceProxyWithoutTargetContributor
struct InterfaceProxyWithoutTargetContributor_t3038150834;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;
// Castle.DynamicProxy.Generators.Emitters.ClassEmitter
struct ClassEmitter_t3355090660;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression
struct Expression_t707291260;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_ModuleScope3833971791.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Void Castle.DynamicProxy.Generators.InterfaceProxyWithTargetInterfaceGenerator::.ctor(Castle.DynamicProxy.ModuleScope,System.Type)
extern "C"  void InterfaceProxyWithTargetInterfaceGenerator__ctor_m2777261888 (InterfaceProxyWithTargetInterfaceGenerator_t3631152665 * __this, ModuleScope_t3833971791 * ___scope, Type_t * ___interface, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.InterfaceProxyWithTargetInterfaceGenerator::get_AllowChangeTarget()
extern "C"  bool InterfaceProxyWithTargetInterfaceGenerator_get_AllowChangeTarget_m2702686861 (InterfaceProxyWithTargetInterfaceGenerator_t3631152665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Castle.DynamicProxy.Generators.InterfaceProxyWithTargetInterfaceGenerator::get_GeneratorType()
extern "C"  String_t* InterfaceProxyWithTargetInterfaceGenerator_get_GeneratorType_m2964176939 (InterfaceProxyWithTargetInterfaceGenerator_t3631152665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Contributors.ITypeContributor Castle.DynamicProxy.Generators.InterfaceProxyWithTargetInterfaceGenerator::AddMappingForTargetType(System.Collections.Generic.IDictionary`2<System.Type,Castle.DynamicProxy.Contributors.ITypeContributor>,System.Type,System.Collections.Generic.ICollection`1<System.Type>,System.Collections.Generic.ICollection`1<System.Type>,Castle.DynamicProxy.Generators.INamingScope)
extern "C"  Il2CppObject * InterfaceProxyWithTargetInterfaceGenerator_AddMappingForTargetType_m2300001362 (InterfaceProxyWithTargetInterfaceGenerator_t3631152665 * __this, Il2CppObject* ___typeImplementerMapping, Type_t * ___proxyTargetType, Il2CppObject* ___targetInterfaces, Il2CppObject* ___additionalInterfaces, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Contributors.InterfaceProxyWithoutTargetContributor Castle.DynamicProxy.Generators.InterfaceProxyWithTargetInterfaceGenerator::GetContributorForAdditionalInterfaces(Castle.DynamicProxy.Generators.INamingScope)
extern "C"  InterfaceProxyWithoutTargetContributor_t3038150834 * InterfaceProxyWithTargetInterfaceGenerator_GetContributorForAdditionalInterfaces_m622334642 (InterfaceProxyWithTargetInterfaceGenerator_t3631152665 * __this, Il2CppObject * ___namingScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference Castle.DynamicProxy.Generators.InterfaceProxyWithTargetInterfaceGenerator::GetTarget(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Reflection.MethodInfo)
extern "C"  Reference_t1588091119 * InterfaceProxyWithTargetInterfaceGenerator_GetTarget_m514261208 (InterfaceProxyWithTargetInterfaceGenerator_t3631152665 * __this, ClassEmitter_t3355090660 * ___class, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Generators.InterfaceProxyWithTargetInterfaceGenerator::GetTargetExpression(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Reflection.MethodInfo)
extern "C"  Expression_t707291260 * InterfaceProxyWithTargetInterfaceGenerator_GetTargetExpression_m443795667 (InterfaceProxyWithTargetInterfaceGenerator_t3631152665 * __this, ClassEmitter_t3355090660 * ___class, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
