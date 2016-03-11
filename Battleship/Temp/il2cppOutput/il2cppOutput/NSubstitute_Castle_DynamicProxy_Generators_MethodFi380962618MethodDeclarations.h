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

// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1668237648;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_BindingFlags2090192240.h"

// System.Reflection.MethodInfo[] Castle.DynamicProxy.Generators.MethodFinder::GetAllInstanceMethods(System.Type,System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t1668237648* MethodFinder_GetAllInstanceMethods_m611198488 (Il2CppObject * __this /* static, unused */, Type_t * ___type, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] Castle.DynamicProxy.Generators.MethodFinder::MakeFilteredCopy(System.Reflection.MethodInfo[],System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t1668237648* MethodFinder_MakeFilteredCopy_m77282680 (Il2CppObject * __this /* static, unused */, MethodInfoU5BU5D_t1668237648* ___methodsInCache, int32_t ___visibilityFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Castle.DynamicProxy.Generators.MethodFinder::RemoveDuplicates(System.Reflection.MethodInfo[])
extern "C"  Il2CppObject * MethodFinder_RemoveDuplicates_m1960473761 (Il2CppObject * __this /* static, unused */, MethodInfoU5BU5D_t1668237648* ___infos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.MethodFinder::.cctor()
extern "C"  void MethodFinder__cctor_m2066204392 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
