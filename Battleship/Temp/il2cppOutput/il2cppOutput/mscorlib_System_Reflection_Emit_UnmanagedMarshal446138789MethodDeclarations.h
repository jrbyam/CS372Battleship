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

// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t446138789;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1016163854;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_UnmanagedT3644589314.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Guid2778838590.h"

// System.Void System.Reflection.Emit.UnmanagedMarshal::.ctor(System.Runtime.InteropServices.UnmanagedType,System.Int32)
extern "C"  void UnmanagedMarshal__ctor_m895729034 (UnmanagedMarshal_t446138789 * __this, int32_t ___maint, int32_t ___cnt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.UnmanagedMarshal::.ctor(System.Runtime.InteropServices.UnmanagedType,System.Runtime.InteropServices.UnmanagedType)
extern "C"  void UnmanagedMarshal__ctor_m1436963649 (UnmanagedMarshal_t446138789 * __this, int32_t ___maint, int32_t ___elemt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.UnmanagedMarshal::DefineByValArray(System.Int32)
extern "C"  UnmanagedMarshal_t446138789 * UnmanagedMarshal_DefineByValArray_m3465408086 (Il2CppObject * __this /* static, unused */, int32_t ___elemCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.UnmanagedMarshal::DefineByValTStr(System.Int32)
extern "C"  UnmanagedMarshal_t446138789 * UnmanagedMarshal_DefineByValTStr_m799684324 (Il2CppObject * __this /* static, unused */, int32_t ___elemCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.UnmanagedMarshal::DefineLPArray(System.Runtime.InteropServices.UnmanagedType)
extern "C"  UnmanagedMarshal_t446138789 * UnmanagedMarshal_DefineLPArray_m2448475817 (Il2CppObject * __this /* static, unused */, int32_t ___elemType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.UnmanagedMarshal::DefineSafeArray(System.Runtime.InteropServices.UnmanagedType)
extern "C"  UnmanagedMarshal_t446138789 * UnmanagedMarshal_DefineSafeArray_m2620282656 (Il2CppObject * __this /* static, unused */, int32_t ___elemType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.UnmanagedMarshal::DefineUnmanagedMarshal(System.Runtime.InteropServices.UnmanagedType)
extern "C"  UnmanagedMarshal_t446138789 * UnmanagedMarshal_DefineUnmanagedMarshal_m1755157814 (Il2CppObject * __this /* static, unused */, int32_t ___unmanagedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.UnmanagedMarshal::DefineCustom(System.Type,System.String,System.String,System.Guid)
extern "C"  UnmanagedMarshal_t446138789 * UnmanagedMarshal_DefineCustom_m2029390734 (Il2CppObject * __this /* static, unused */, Type_t * ___typeref, String_t* ___cookie, String_t* ___mtype, Guid_t2778838590  ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.UnmanagedMarshal::DefineLPArrayInternal(System.Runtime.InteropServices.UnmanagedType,System.Int32,System.Int32)
extern "C"  UnmanagedMarshal_t446138789 * UnmanagedMarshal_DefineLPArrayInternal_m3901202598 (Il2CppObject * __this /* static, unused */, int32_t ___elemType, int32_t ___sizeConst, int32_t ___sizeParamIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.Emit.UnmanagedMarshal::ToMarshalAsAttribute()
extern "C"  MarshalAsAttribute_t1016163854 * UnmanagedMarshal_ToMarshalAsAttribute_m4201209287 (UnmanagedMarshal_t446138789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
