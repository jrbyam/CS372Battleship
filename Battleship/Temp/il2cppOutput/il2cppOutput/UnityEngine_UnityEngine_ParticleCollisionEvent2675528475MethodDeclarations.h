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

// UnityEngine.Collider
struct Collider_t955670625;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleCollisionEvent2675528475.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::get_velocity()
extern "C"  Vector3_t3525329789  ParticleCollisionEvent_get_velocity_m1889477221 (ParticleCollisionEvent_t2675528475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.ParticleCollisionEvent::get_collider()
extern "C"  Collider_t955670625 * ParticleCollisionEvent_get_collider_m1680737446 (ParticleCollisionEvent_t2675528475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.ParticleCollisionEvent::InstanceIDToCollider(System.Int32)
extern "C"  Collider_t955670625 * ParticleCollisionEvent_InstanceIDToCollider_m3381908217 (Il2CppObject * __this /* static, unused */, int32_t ___instanceID, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ParticleCollisionEvent_t2675528475;
struct ParticleCollisionEvent_t2675528475_marshaled;

extern "C" void ParticleCollisionEvent_t2675528475_marshal(const ParticleCollisionEvent_t2675528475& unmarshaled, ParticleCollisionEvent_t2675528475_marshaled& marshaled);
extern "C" void ParticleCollisionEvent_t2675528475_marshal_back(const ParticleCollisionEvent_t2675528475_marshaled& marshaled, ParticleCollisionEvent_t2675528475& unmarshaled);
extern "C" void ParticleCollisionEvent_t2675528475_marshal_cleanup(ParticleCollisionEvent_t2675528475_marshaled& marshaled);
