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

// System.Reflection.Emit.CustomAttributeBuilder
struct CustomAttributeBuilder_t562921149;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1348579340;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t1144794227;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Reflection.Assembly
struct Assembly_t1882292308;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t446138789;
// System.Object
struct Il2CppObject;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1127461800;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_ConstructorInfo3542137334.h"
#include "mscorlib_System_Reflection_Assembly1882292308.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_Emit_CustomAttributeBuil562921149.h"
#include "mscorlib_System_Reflection_Emit_CustomAttributeBuil393748825.h"

// System.Void System.Reflection.Emit.CustomAttributeBuilder::.ctor(System.Reflection.ConstructorInfo,System.Object[])
extern "C"  void CustomAttributeBuilder__ctor_m1125870445 (CustomAttributeBuilder_t562921149 * __this, ConstructorInfo_t3542137334 * ___con, ObjectU5BU5D_t11523773* ___constructorArgs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.CustomAttributeBuilder::.ctor(System.Reflection.ConstructorInfo,System.Object[],System.Reflection.PropertyInfo[],System.Object[],System.Reflection.FieldInfo[],System.Object[])
extern "C"  void CustomAttributeBuilder__ctor_m471491054 (CustomAttributeBuilder_t562921149 * __this, ConstructorInfo_t3542137334 * ___con, ObjectU5BU5D_t11523773* ___constructorArgs, PropertyInfoU5BU5D_t1348579340* ___namedProperties, ObjectU5BU5D_t11523773* ___propertyValues, FieldInfoU5BU5D_t1144794227* ___namedFields, ObjectU5BU5D_t11523773* ___fieldValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.CustomAttributeBuilder::get_Ctor()
extern "C"  ConstructorInfo_t3542137334 * CustomAttributeBuilder_get_Ctor_m213304389 (CustomAttributeBuilder_t562921149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.Emit.CustomAttributeBuilder::get_Data()
extern "C"  ByteU5BU5D_t58506160* CustomAttributeBuilder_get_Data_m736274976 (CustomAttributeBuilder_t562921149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.Emit.CustomAttributeBuilder::GetBlob(System.Reflection.Assembly,System.Reflection.ConstructorInfo,System.Object[],System.Reflection.PropertyInfo[],System.Object[],System.Reflection.FieldInfo[],System.Object[])
extern "C"  ByteU5BU5D_t58506160* CustomAttributeBuilder_GetBlob_m4239916713 (Il2CppObject * __this /* static, unused */, Assembly_t1882292308 * ___asmb, ConstructorInfo_t3542137334 * ___con, ObjectU5BU5D_t11523773* ___constructorArgs, PropertyInfoU5BU5D_t1348579340* ___namedProperties, ObjectU5BU5D_t11523773* ___propertyValues, FieldInfoU5BU5D_t1144794227* ___namedFields, ObjectU5BU5D_t11523773* ___fieldValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.CustomAttributeBuilder::IsValidType(System.Type)
extern "C"  bool CustomAttributeBuilder_IsValidType_m3667716256 (CustomAttributeBuilder_t562921149 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.CustomAttributeBuilder::Initialize(System.Reflection.ConstructorInfo,System.Object[],System.Reflection.PropertyInfo[],System.Object[],System.Reflection.FieldInfo[],System.Object[])
extern "C"  void CustomAttributeBuilder_Initialize_m225828360 (CustomAttributeBuilder_t562921149 * __this, ConstructorInfo_t3542137334 * ___con, ObjectU5BU5D_t11523773* ___constructorArgs, PropertyInfoU5BU5D_t1348579340* ___namedProperties, ObjectU5BU5D_t11523773* ___propertyValues, FieldInfoU5BU5D_t1144794227* ___namedFields, ObjectU5BU5D_t11523773* ___fieldValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.CustomAttributeBuilder::decode_len(System.Byte[],System.Int32,System.Int32&)
extern "C"  int32_t CustomAttributeBuilder_decode_len_m18468706 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___data, int32_t ___pos, int32_t* ___rpos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.CustomAttributeBuilder::string_from_bytes(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* CustomAttributeBuilder_string_from_bytes_m1912448887 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___data, int32_t ___pos, int32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.CustomAttributeBuilder::get_umarshal(System.Reflection.Emit.CustomAttributeBuilder,System.Boolean)
extern "C"  UnmanagedMarshal_t446138789 * CustomAttributeBuilder_get_umarshal_m285243095 (Il2CppObject * __this /* static, unused */, CustomAttributeBuilder_t562921149 * ___customBuilder, bool ___is_field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.CustomAttributeBuilder::elementTypeToType(System.Int32)
extern "C"  Type_t * CustomAttributeBuilder_elementTypeToType_m1477572865 (Il2CppObject * __this /* static, unused */, int32_t ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.CustomAttributeBuilder::decode_cattr_value(System.Type,System.Byte[],System.Int32,System.Int32&)
extern "C"  Il2CppObject * CustomAttributeBuilder_decode_cattr_value_m3293420039 (Il2CppObject * __this /* static, unused */, Type_t * ___t, ByteU5BU5D_t58506160* ___data, int32_t ___pos, int32_t* ___rpos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.CustomAttributeBuilder/CustomAttributeInfo System.Reflection.Emit.CustomAttributeBuilder::decode_cattr(System.Reflection.Emit.CustomAttributeBuilder)
extern "C"  CustomAttributeInfo_t393748825  CustomAttributeBuilder_decode_cattr_m558204787 (Il2CppObject * __this /* static, unused */, CustomAttributeBuilder_t562921149 * ___customBuilder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.CustomAttributeBuilder::GetParameters(System.Reflection.ConstructorInfo)
extern "C"  ParameterInfoU5BU5D_t1127461800* CustomAttributeBuilder_GetParameters_m2464714661 (Il2CppObject * __this /* static, unused */, ConstructorInfo_t3542137334 * ___ctor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
