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

// Castle.DynamicProxy.Generators.MethodSignatureComparer
struct MethodSignatureComparer_t42243255;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "mscorlib_System_Type2779229935.h"

// System.Boolean Castle.DynamicProxy.Generators.MethodSignatureComparer::EqualGenericParameters(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
extern "C"  bool MethodSignatureComparer_EqualGenericParameters_m2483233315 (MethodSignatureComparer_t42243255 * __this, MethodInfo_t * ___x, MethodInfo_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.MethodSignatureComparer::EqualParameters(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
extern "C"  bool MethodSignatureComparer_EqualParameters_m1944201308 (MethodSignatureComparer_t42243255 * __this, MethodInfo_t * ___x, MethodInfo_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.MethodSignatureComparer::EqualSignatureTypes(System.Type,System.Type)
extern "C"  bool MethodSignatureComparer_EqualSignatureTypes_m2900921099 (MethodSignatureComparer_t42243255 * __this, Type_t * ___x, Type_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.MethodSignatureComparer::Equals(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
extern "C"  bool MethodSignatureComparer_Equals_m2856171377 (MethodSignatureComparer_t42243255 * __this, MethodInfo_t * ___x, MethodInfo_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Castle.DynamicProxy.Generators.MethodSignatureComparer::GetHashCode(System.Reflection.MethodInfo)
extern "C"  int32_t MethodSignatureComparer_GetHashCode_m4057809136 (MethodSignatureComparer_t42243255 * __this, MethodInfo_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Generators.MethodSignatureComparer::EqualNames(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
extern "C"  bool MethodSignatureComparer_EqualNames_m1362641948 (MethodSignatureComparer_t42243255 * __this, MethodInfo_t * ___x, MethodInfo_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.MethodSignatureComparer::.ctor()
extern "C"  void MethodSignatureComparer__ctor_m3367282134 (MethodSignatureComparer_t42243255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.MethodSignatureComparer::.cctor()
extern "C"  void MethodSignatureComparer__cctor_m824434839 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
