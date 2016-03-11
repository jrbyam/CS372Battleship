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

// System.Reflection.Assembly
struct Assembly_t1882292308;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t1356416995;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Assembly1882292308.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.StrongNameUtil::.cctor()
extern "C"  void StrongNameUtil__cctor_m2687865472 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.Emitters.StrongNameUtil::IsAssemblySigned(System.Reflection.Assembly)
extern "C"  bool StrongNameUtil_IsAssemblySigned_m994625345 (Il2CppObject * __this /* static, unused */, Assembly_t1882292308 * ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.Emitters.StrongNameUtil::ContainsPublicKey(System.Reflection.Assembly)
extern "C"  bool StrongNameUtil_ContainsPublicKey_m1232351856 (Il2CppObject * __this /* static, unused */, Assembly_t1882292308 * ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.Emitters.StrongNameUtil::IsAnyTypeFromUnsignedAssembly(System.Collections.Generic.IEnumerable`1<System.Type>)
extern "C"  bool StrongNameUtil_IsAnyTypeFromUnsignedAssembly_m2295553824 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.Emitters.StrongNameUtil::IsAnyTypeFromUnsignedAssembly(System.Type,System.Collections.Generic.IEnumerable`1<System.Type>)
extern "C"  bool StrongNameUtil_IsAnyTypeFromUnsignedAssembly_m589670163 (Il2CppObject * __this /* static, unused */, Type_t * ___baseType, Il2CppObject* ___interfaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.Emitters.StrongNameUtil::get_CanStrongNameAssembly()
extern "C"  bool StrongNameUtil_get_CanStrongNameAssembly_m2743978066 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.StrongNameUtil::set_CanStrongNameAssembly(System.Boolean)
extern "C"  void StrongNameUtil_set_CanStrongNameAssembly_m456001725 (Il2CppObject * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.Emitters.StrongNameUtil::<IsAnyTypeFromUnsignedAssembly>b__0(System.Type)
extern "C"  bool StrongNameUtil_U3CIsAnyTypeFromUnsignedAssemblyU3Eb__0_m2946828175 (Il2CppObject * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
