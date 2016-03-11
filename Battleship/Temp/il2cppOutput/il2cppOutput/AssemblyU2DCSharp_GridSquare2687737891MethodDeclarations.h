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

// GridSquare
struct GridSquare_t2687737891;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void GridSquare::.ctor()
extern "C"  void GridSquare__ctor_m3518394328 (GridSquare_t2687737891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GridSquare::.ctor(System.Int32,System.Int32)
extern "C"  void GridSquare__ctor_m501409358 (GridSquare_t2687737891 * __this, int32_t ___row, int32_t ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GridSquare::Update()
extern "C"  void GridSquare_Update_m3422903861 (GridSquare_t2687737891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GridSquare::DestroyExplosion(UnityEngine.GameObject)
extern "C"  Il2CppObject * GridSquare_DestroyExplosion_m1305495015 (GridSquare_t2687737891 * __this, GameObject_t4012695102 * ___explosion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GridSquare::isPlacedLegally()
extern "C"  bool GridSquare_isPlacedLegally_m224386785 (GridSquare_t2687737891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
