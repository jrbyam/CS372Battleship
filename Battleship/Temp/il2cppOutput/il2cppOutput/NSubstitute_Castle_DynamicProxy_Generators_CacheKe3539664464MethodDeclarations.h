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

// Castle.DynamicProxy.Generators.CacheKey
struct CacheKey_t3539664464;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"
#include "mscorlib_System_Type2779229935.h"
#include "NSubstitute_Castle_DynamicProxy_ProxyGenerationOpti351299295.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Castle.DynamicProxy.Generators.CacheKey::.ctor(System.Reflection.MemberInfo,System.Type,System.Type[],Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  void CacheKey__ctor_m2703997630 (CacheKey_t3539664464 * __this, MemberInfo_t * ___target, Type_t * ___type, TypeU5BU5D_t3431720054* ___interfaces, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.CacheKey::.ctor(System.Type,System.Type[],Castle.DynamicProxy.ProxyGenerationOptions)
extern "C"  void CacheKey__ctor_m3940944330 (CacheKey_t3539664464 * __this, Type_t * ___target, TypeU5BU5D_t3431720054* ___interfaces, ProxyGenerationOptions_t351299295 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Castle.DynamicProxy.Generators.CacheKey::GetHashCode()
extern "C"  int32_t CacheKey_GetHashCode_m627870912 (CacheKey_t3539664464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.CacheKey::Equals(System.Object)
extern "C"  bool CacheKey_Equals_m1311611048 (CacheKey_t3539664464 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
