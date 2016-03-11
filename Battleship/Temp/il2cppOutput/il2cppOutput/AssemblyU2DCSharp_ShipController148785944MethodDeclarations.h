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

// ShipController
struct ShipController_t148785944;
// System.String
struct String_t;
// System.Collections.Generic.List`1<GridSquare>
struct List_1_t3484696860;
// GridSquare
struct GridSquare_t2687737891;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GridSquare2687737891.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void ShipController::.ctor()
extern "C"  void ShipController__ctor_m3791551619 (ShipController_t148785944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShipController::.ctor(System.Int32,System.String)
extern "C"  void ShipController__ctor_m2515126928 (ShipController_t148785944 * __this, int32_t ___shipSize, String_t* ___shipName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShipController::Start()
extern "C"  void ShipController_Start_m2738689411 (ShipController_t148785944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShipController::Update()
extern "C"  void ShipController_Update_m3300845290 (ShipController_t148785944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GridSquare> ShipController::getLegalGridSquares(GridSquare)
extern "C"  List_1_t3484696860 * ShipController_getLegalGridSquares_m913358997 (ShipController_t148785944 * __this, GridSquare_t2687737891 * ___anchor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ShipController::getLegalPosition(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  ShipController_getLegalPosition_m2936130802 (ShipController_t148785944 * __this, Vector3_t3525329789  ___rawPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShipController::updateSunk()
extern "C"  void ShipController_updateSunk_m800391753 (ShipController_t148785944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShipController::placeShip(UnityEngine.Vector3)
extern "C"  void ShipController_placeShip_m3535623285 (ShipController_t148785944 * __this, Vector3_t3525329789  ___rawPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ShipController::isPlacedLegally()
extern "C"  bool ShipController_isPlacedLegally_m2197851084 (ShipController_t148785944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ShipController::isNameLegal()
extern "C"  bool ShipController_isNameLegal_m1195091825 (ShipController_t148785944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
