#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GridSquare>
struct List_1_t3484696860;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Plane1600081545.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShipController
struct  ShipController_t148785944  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 ShipController::size
	int32_t ___size_2;
	// System.Collections.Generic.List`1<GridSquare> ShipController::gridSquares
	List_1_t3484696860 * ___gridSquares_3;
	// System.Boolean ShipController::sunk
	bool ___sunk_4;
	// System.String ShipController::shipName
	String_t* ___shipName_5;
	// System.Boolean ShipController::followFinger
	bool ___followFinger_6;
	// UnityEngine.Plane ShipController::plane
	Plane_t1600081545  ___plane_7;
	// System.Single ShipController::distance
	float ___distance_8;
	// System.String ShipController::facingDirection
	String_t* ___facingDirection_9;
	// UnityEngine.Vector3 ShipController::startingPosition
	Vector3_t3525329789  ___startingPosition_10;

public:
	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(ShipController_t148785944, ___size_2)); }
	inline int32_t get_size_2() const { return ___size_2; }
	inline int32_t* get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(int32_t value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_gridSquares_3() { return static_cast<int32_t>(offsetof(ShipController_t148785944, ___gridSquares_3)); }
	inline List_1_t3484696860 * get_gridSquares_3() const { return ___gridSquares_3; }
	inline List_1_t3484696860 ** get_address_of_gridSquares_3() { return &___gridSquares_3; }
	inline void set_gridSquares_3(List_1_t3484696860 * value)
	{
		___gridSquares_3 = value;
		Il2CppCodeGenWriteBarrier(&___gridSquares_3, value);
	}

	inline static int32_t get_offset_of_sunk_4() { return static_cast<int32_t>(offsetof(ShipController_t148785944, ___sunk_4)); }
	inline bool get_sunk_4() const { return ___sunk_4; }
	inline bool* get_address_of_sunk_4() { return &___sunk_4; }
	inline void set_sunk_4(bool value)
	{
		___sunk_4 = value;
	}

	inline static int32_t get_offset_of_shipName_5() { return static_cast<int32_t>(offsetof(ShipController_t148785944, ___shipName_5)); }
	inline String_t* get_shipName_5() const { return ___shipName_5; }
	inline String_t** get_address_of_shipName_5() { return &___shipName_5; }
	inline void set_shipName_5(String_t* value)
	{
		___shipName_5 = value;
		Il2CppCodeGenWriteBarrier(&___shipName_5, value);
	}

	inline static int32_t get_offset_of_followFinger_6() { return static_cast<int32_t>(offsetof(ShipController_t148785944, ___followFinger_6)); }
	inline bool get_followFinger_6() const { return ___followFinger_6; }
	inline bool* get_address_of_followFinger_6() { return &___followFinger_6; }
	inline void set_followFinger_6(bool value)
	{
		___followFinger_6 = value;
	}

	inline static int32_t get_offset_of_plane_7() { return static_cast<int32_t>(offsetof(ShipController_t148785944, ___plane_7)); }
	inline Plane_t1600081545  get_plane_7() const { return ___plane_7; }
	inline Plane_t1600081545 * get_address_of_plane_7() { return &___plane_7; }
	inline void set_plane_7(Plane_t1600081545  value)
	{
		___plane_7 = value;
	}

	inline static int32_t get_offset_of_distance_8() { return static_cast<int32_t>(offsetof(ShipController_t148785944, ___distance_8)); }
	inline float get_distance_8() const { return ___distance_8; }
	inline float* get_address_of_distance_8() { return &___distance_8; }
	inline void set_distance_8(float value)
	{
		___distance_8 = value;
	}

	inline static int32_t get_offset_of_facingDirection_9() { return static_cast<int32_t>(offsetof(ShipController_t148785944, ___facingDirection_9)); }
	inline String_t* get_facingDirection_9() const { return ___facingDirection_9; }
	inline String_t** get_address_of_facingDirection_9() { return &___facingDirection_9; }
	inline void set_facingDirection_9(String_t* value)
	{
		___facingDirection_9 = value;
		Il2CppCodeGenWriteBarrier(&___facingDirection_9, value);
	}

	inline static int32_t get_offset_of_startingPosition_10() { return static_cast<int32_t>(offsetof(ShipController_t148785944, ___startingPosition_10)); }
	inline Vector3_t3525329789  get_startingPosition_10() const { return ___startingPosition_10; }
	inline Vector3_t3525329789 * get_address_of_startingPosition_10() { return &___startingPosition_10; }
	inline void set_startingPosition_10(Vector3_t3525329789  value)
	{
		___startingPosition_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
