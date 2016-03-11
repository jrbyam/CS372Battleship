#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Plane1600081545.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GridSquare
struct  GridSquare_t2687737891  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 GridSquare::row
	int32_t ___row_2;
	// System.Int32 GridSquare::column
	int32_t ___column_3;
	// System.Boolean GridSquare::hit
	bool ___hit_4;
	// System.Boolean GridSquare::occupied
	bool ___occupied_5;
	// System.Boolean GridSquare::inGame
	bool ___inGame_6;
	// UnityEngine.Plane GridSquare::plane
	Plane_t1600081545  ___plane_7;
	// System.Single GridSquare::distance
	float ___distance_8;

public:
	inline static int32_t get_offset_of_row_2() { return static_cast<int32_t>(offsetof(GridSquare_t2687737891, ___row_2)); }
	inline int32_t get_row_2() const { return ___row_2; }
	inline int32_t* get_address_of_row_2() { return &___row_2; }
	inline void set_row_2(int32_t value)
	{
		___row_2 = value;
	}

	inline static int32_t get_offset_of_column_3() { return static_cast<int32_t>(offsetof(GridSquare_t2687737891, ___column_3)); }
	inline int32_t get_column_3() const { return ___column_3; }
	inline int32_t* get_address_of_column_3() { return &___column_3; }
	inline void set_column_3(int32_t value)
	{
		___column_3 = value;
	}

	inline static int32_t get_offset_of_hit_4() { return static_cast<int32_t>(offsetof(GridSquare_t2687737891, ___hit_4)); }
	inline bool get_hit_4() const { return ___hit_4; }
	inline bool* get_address_of_hit_4() { return &___hit_4; }
	inline void set_hit_4(bool value)
	{
		___hit_4 = value;
	}

	inline static int32_t get_offset_of_occupied_5() { return static_cast<int32_t>(offsetof(GridSquare_t2687737891, ___occupied_5)); }
	inline bool get_occupied_5() const { return ___occupied_5; }
	inline bool* get_address_of_occupied_5() { return &___occupied_5; }
	inline void set_occupied_5(bool value)
	{
		___occupied_5 = value;
	}

	inline static int32_t get_offset_of_inGame_6() { return static_cast<int32_t>(offsetof(GridSquare_t2687737891, ___inGame_6)); }
	inline bool get_inGame_6() const { return ___inGame_6; }
	inline bool* get_address_of_inGame_6() { return &___inGame_6; }
	inline void set_inGame_6(bool value)
	{
		___inGame_6 = value;
	}

	inline static int32_t get_offset_of_plane_7() { return static_cast<int32_t>(offsetof(GridSquare_t2687737891, ___plane_7)); }
	inline Plane_t1600081545  get_plane_7() const { return ___plane_7; }
	inline Plane_t1600081545 * get_address_of_plane_7() { return &___plane_7; }
	inline void set_plane_7(Plane_t1600081545  value)
	{
		___plane_7 = value;
	}

	inline static int32_t get_offset_of_distance_8() { return static_cast<int32_t>(offsetof(GridSquare_t2687737891, ___distance_8)); }
	inline float get_distance_8() const { return ___distance_8; }
	inline float* get_address_of_distance_8() { return &___distance_8; }
	inline void set_distance_8(float value)
	{
		___distance_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
