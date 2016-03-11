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

// Water
struct Water_t83350775;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Water_WaterMode1789603642.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

// System.Void Water::.ctor()
extern "C"  void Water__ctor_m2328648736 (Water_t83350775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Water::.cctor()
extern "C"  void Water__cctor_m2986537869 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Water::OnWillRenderObject()
extern "C"  void Water_OnWillRenderObject_m2650826698 (Water_t83350775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Water::OnDisable()
extern "C"  void Water_OnDisable_m1695064199 (Water_t83350775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Water::Update()
extern "C"  void Water_Update_m900528877 (Water_t83350775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Water::UpdateCameraModes(UnityEngine.Camera,UnityEngine.Camera)
extern "C"  void Water_UpdateCameraModes_m2300241094 (Water_t83350775 * __this, Camera_t3533968274 * ___src, Camera_t3533968274 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Water::CreateWaterObjects(UnityEngine.Camera,UnityEngine.Camera&,UnityEngine.Camera&)
extern "C"  void Water_CreateWaterObjects_m1553734885 (Water_t83350775 * __this, Camera_t3533968274 * ___currentCamera, Camera_t3533968274 ** ___reflectionCamera, Camera_t3533968274 ** ___refractionCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Water/WaterMode Water::GetWaterMode()
extern "C"  int32_t Water_GetWaterMode_m1846920759 (Water_t83350775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Water/WaterMode Water::FindHardwareWaterSupport()
extern "C"  int32_t Water_FindHardwareWaterSupport_m861265260 (Water_t83350775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Water::sgn(System.Single)
extern "C"  float Water_sgn_m3318896039 (Il2CppObject * __this /* static, unused */, float ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 Water::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector4_t3525329790  Water_CameraSpacePlane_m152892437 (Water_t83350775 * __this, Camera_t3533968274 * ___cam, Vector3_t3525329789  ___pos, Vector3_t3525329789  ___normal, float ___sideSign, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Water::CalculateObliqueMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector4)
extern "C"  void Water_CalculateObliqueMatrix_m2120741428 (Il2CppObject * __this /* static, unused */, Matrix4x4_t277289660 * ___projection, Vector4_t3525329790  ___clipPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Water::CalculateReflectionMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector4)
extern "C"  void Water_CalculateReflectionMatrix_m3384168148 (Il2CppObject * __this /* static, unused */, Matrix4x4_t277289660 * ___reflectionMat, Vector4_t3525329790  ___plane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
