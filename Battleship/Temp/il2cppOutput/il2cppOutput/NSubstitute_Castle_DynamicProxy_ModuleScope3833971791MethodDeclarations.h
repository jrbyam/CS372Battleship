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

// Castle.DynamicProxy.ModuleScope
struct ModuleScope_t3833971791;
// System.String
struct String_t;
// Castle.DynamicProxy.Generators.INamingScope
struct INamingScope_t873561430;
// Castle.Core.Internal.Lock
struct Lock_t4015335261;
// System.Type
struct Type_t;
// Castle.DynamicProxy.Generators.CacheKey
struct CacheKey_t3539664464;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t1058295580;
// System.Reflection.AssemblyName
struct AssemblyName_t3481926655;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t4287691406;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_CacheKe3539664464.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_TypeAttributes104824479.h"

// System.Void Castle.DynamicProxy.ModuleScope::.ctor()
extern "C"  void ModuleScope__ctor_m3110092210 (ModuleScope_t3833971791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.ModuleScope::.ctor(System.Boolean,System.Boolean)
extern "C"  void ModuleScope__ctor_m207313076 (ModuleScope_t3833971791 * __this, bool ___savePhysicalAssembly, bool ___disableSignedModule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.ModuleScope::.ctor(System.Boolean,System.Boolean,System.String,System.String,System.String,System.String)
extern "C"  void ModuleScope__ctor_m3641096100 (ModuleScope_t3833971791 * __this, bool ___savePhysicalAssembly, bool ___disableSignedModule, String_t* ___strongAssemblyName, String_t* ___strongModulePath, String_t* ___weakAssemblyName, String_t* ___weakModulePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.ModuleScope::.ctor(System.Boolean,System.Boolean,Castle.DynamicProxy.Generators.INamingScope,System.String,System.String,System.String,System.String)
extern "C"  void ModuleScope__ctor_m2656338152 (ModuleScope_t3833971791 * __this, bool ___savePhysicalAssembly, bool ___disableSignedModule, Il2CppObject * ___namingScope, String_t* ___strongAssemblyName, String_t* ___strongModulePath, String_t* ___weakAssemblyName, String_t* ___weakModulePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.INamingScope Castle.DynamicProxy.ModuleScope::get_NamingScope()
extern "C"  Il2CppObject * ModuleScope_get_NamingScope_m311675134 (ModuleScope_t3833971791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.Core.Internal.Lock Castle.DynamicProxy.ModuleScope::get_Lock()
extern "C"  Lock_t4015335261 * ModuleScope_get_Lock_m957846134 (ModuleScope_t3833971791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Castle.DynamicProxy.ModuleScope::GetFromCache(Castle.DynamicProxy.Generators.CacheKey)
extern "C"  Type_t * ModuleScope_GetFromCache_m1204050390 (ModuleScope_t3833971791 * __this, CacheKey_t3539664464 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.ModuleScope::RegisterInCache(Castle.DynamicProxy.Generators.CacheKey,System.Type)
extern "C"  void ModuleScope_RegisterInCache_m868978681 (ModuleScope_t3833971791 * __this, CacheKey_t3539664464 * ___key, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Castle.DynamicProxy.ModuleScope::GetKeyPair()
extern "C"  ByteU5BU5D_t58506160* ModuleScope_GetKeyPair_m3204448331 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Castle.DynamicProxy.ModuleScope::get_StrongNamedModuleName()
extern "C"  String_t* ModuleScope_get_StrongNamedModuleName_m1248294627 (ModuleScope_t3833971791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Castle.DynamicProxy.ModuleScope::get_StrongNamedModuleDirectory()
extern "C"  String_t* ModuleScope_get_StrongNamedModuleDirectory_m1799226487 (ModuleScope_t3833971791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Castle.DynamicProxy.ModuleScope::get_WeakNamedModuleName()
extern "C"  String_t* ModuleScope_get_WeakNamedModuleName_m3015678562 (ModuleScope_t3833971791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Castle.DynamicProxy.ModuleScope::get_WeakNamedModuleDirectory()
extern "C"  String_t* ModuleScope_get_WeakNamedModuleDirectory_m2872784984 (ModuleScope_t3833971791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder Castle.DynamicProxy.ModuleScope::ObtainDynamicModule(System.Boolean)
extern "C"  ModuleBuilder_t1058295580 * ModuleScope_ObtainDynamicModule_m2102451206 (ModuleScope_t3833971791 * __this, bool ___isStrongNamed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder Castle.DynamicProxy.ModuleScope::ObtainDynamicModuleWithStrongName()
extern "C"  ModuleBuilder_t1058295580 * ModuleScope_ObtainDynamicModuleWithStrongName_m401057175 (ModuleScope_t3833971791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder Castle.DynamicProxy.ModuleScope::ObtainDynamicModuleWithWeakName()
extern "C"  ModuleBuilder_t1058295580 * ModuleScope_ObtainDynamicModuleWithWeakName_m370648760 (ModuleScope_t3833971791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder Castle.DynamicProxy.ModuleScope::CreateModule(System.Boolean)
extern "C"  ModuleBuilder_t1058295580 * ModuleScope_CreateModule_m1652983768 (ModuleScope_t3833971791 * __this, bool ___signStrongName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName Castle.DynamicProxy.ModuleScope::GetAssemblyName(System.Boolean)
extern "C"  AssemblyName_t3481926655 * ModuleScope_GetAssemblyName_m3335397898 (ModuleScope_t3833971791 * __this, bool ___signStrongName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder Castle.DynamicProxy.ModuleScope::DefineType(System.Boolean,System.String,System.Reflection.TypeAttributes)
extern "C"  TypeBuilder_t4287691406 * ModuleScope_DefineType_m2766200894 (ModuleScope_t3833971791 * __this, bool ___inSignedModulePreferably, String_t* ___name, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.ModuleScope::.cctor()
extern "C"  void ModuleScope__cctor_m1441481787 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
