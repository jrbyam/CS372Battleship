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

// UnityEngine.ParticleSystem
struct ParticleSystem_t56787138;
// UnityEngine.ParticleSystem/IteratorDelegate
struct IteratorDelegate_t3855630387;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleSystem_EmissionMod1434063603.h"
#include "UnityEngine_UnityEngine_ParticleSystem56787138.h"
#include "UnityEngine_UnityEngine_ParticleSystem_IteratorDel3855630387.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"

// System.Single UnityEngine.ParticleSystem::get_startSpeed()
extern "C"  float ParticleSystem_get_startSpeed_m4044573254 (ParticleSystem_t56787138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_startSpeed(System.Single)
extern "C"  void ParticleSystem_set_startSpeed_m1808614589 (ParticleSystem_t56787138 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem::get_startSize()
extern "C"  float ParticleSystem_get_startSize_m3726859844 (ParticleSystem_t56787138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_startSize(System.Single)
extern "C"  void ParticleSystem_set_startSize_m1264710479 (ParticleSystem_t56787138 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem::get_startLifetime()
extern "C"  float ParticleSystem_get_startLifetime_m4275191564 (ParticleSystem_t56787138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_startLifetime(System.Single)
extern "C"  void ParticleSystem_set_startLifetime_m653632391 (ParticleSystem_t56787138 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
extern "C"  EmissionModule_t1434063603  ParticleSystem_get_emission_m3239150265 (ParticleSystem_t56787138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::Internal_Play(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_Internal_Play_m594025146 (Il2CppObject * __this /* static, unused */, ParticleSystem_t56787138 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::Internal_Clear(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_Internal_Clear_m3791641553 (Il2CppObject * __this /* static, unused */, ParticleSystem_t56787138 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play()
extern "C"  void ParticleSystem_Play_m1237476160 (ParticleSystem_t56787138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C"  void ParticleSystem_Play_m1637509303 (ParticleSystem_t56787138 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Clear()
extern "C"  void ParticleSystem_Clear_m1057459555 (ParticleSystem_t56787138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Clear(System.Boolean)
extern "C"  void ParticleSystem_Clear_m2190317978 (ParticleSystem_t56787138 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IterateParticleSystems(System.Boolean,UnityEngine.ParticleSystem/IteratorDelegate)
extern "C"  bool ParticleSystem_IterateParticleSystems_m2232250723 (ParticleSystem_t56787138 * __this, bool ___recurse, IteratorDelegate_t3855630387 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IterateParticleSystemsRecursive(UnityEngine.Transform,UnityEngine.ParticleSystem/IteratorDelegate)
extern "C"  bool ParticleSystem_IterateParticleSystemsRecursive_m389741621 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___transform, IteratorDelegate_t3855630387 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::<Play>m__1(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_U3CPlayU3Em__1_m745236472 (Il2CppObject * __this /* static, unused */, ParticleSystem_t56787138 * ___ps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::<Clear>m__4(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_U3CClearU3Em__4_m898235192 (Il2CppObject * __this /* static, unused */, ParticleSystem_t56787138 * ___ps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
