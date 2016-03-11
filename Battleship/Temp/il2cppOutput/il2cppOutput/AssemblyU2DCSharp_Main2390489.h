#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ShipController
struct ShipController_t148785944;
// System.Collections.Generic.List`1<ShipController>
struct List_1_t945744913;
// System.Collections.Generic.List`1<GridSquare>
struct List_1_t3484696860;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Main
struct  Main_t2390489  : public MonoBehaviour_t3012272455
{
public:

public:
};

struct Main_t2390489_StaticFields
{
public:
	// System.Boolean Main::shipIsMoving
	bool ___shipIsMoving_2;
	// ShipController Main::movingShip
	ShipController_t148785944 * ___movingShip_3;
	// System.Collections.Generic.List`1<ShipController> Main::player1Ships
	List_1_t945744913 * ___player1Ships_4;
	// System.Collections.Generic.List`1<ShipController> Main::player2Ships
	List_1_t945744913 * ___player2Ships_5;
	// System.Collections.Generic.List`1<GridSquare> Main::player1Misses
	List_1_t3484696860 * ___player1Misses_6;
	// System.Collections.Generic.List`1<GridSquare> Main::player2Misses
	List_1_t3484696860 * ___player2Misses_7;
	// System.String Main::winner
	String_t* ___winner_8;

public:
	inline static int32_t get_offset_of_shipIsMoving_2() { return static_cast<int32_t>(offsetof(Main_t2390489_StaticFields, ___shipIsMoving_2)); }
	inline bool get_shipIsMoving_2() const { return ___shipIsMoving_2; }
	inline bool* get_address_of_shipIsMoving_2() { return &___shipIsMoving_2; }
	inline void set_shipIsMoving_2(bool value)
	{
		___shipIsMoving_2 = value;
	}

	inline static int32_t get_offset_of_movingShip_3() { return static_cast<int32_t>(offsetof(Main_t2390489_StaticFields, ___movingShip_3)); }
	inline ShipController_t148785944 * get_movingShip_3() const { return ___movingShip_3; }
	inline ShipController_t148785944 ** get_address_of_movingShip_3() { return &___movingShip_3; }
	inline void set_movingShip_3(ShipController_t148785944 * value)
	{
		___movingShip_3 = value;
		Il2CppCodeGenWriteBarrier(&___movingShip_3, value);
	}

	inline static int32_t get_offset_of_player1Ships_4() { return static_cast<int32_t>(offsetof(Main_t2390489_StaticFields, ___player1Ships_4)); }
	inline List_1_t945744913 * get_player1Ships_4() const { return ___player1Ships_4; }
	inline List_1_t945744913 ** get_address_of_player1Ships_4() { return &___player1Ships_4; }
	inline void set_player1Ships_4(List_1_t945744913 * value)
	{
		___player1Ships_4 = value;
		Il2CppCodeGenWriteBarrier(&___player1Ships_4, value);
	}

	inline static int32_t get_offset_of_player2Ships_5() { return static_cast<int32_t>(offsetof(Main_t2390489_StaticFields, ___player2Ships_5)); }
	inline List_1_t945744913 * get_player2Ships_5() const { return ___player2Ships_5; }
	inline List_1_t945744913 ** get_address_of_player2Ships_5() { return &___player2Ships_5; }
	inline void set_player2Ships_5(List_1_t945744913 * value)
	{
		___player2Ships_5 = value;
		Il2CppCodeGenWriteBarrier(&___player2Ships_5, value);
	}

	inline static int32_t get_offset_of_player1Misses_6() { return static_cast<int32_t>(offsetof(Main_t2390489_StaticFields, ___player1Misses_6)); }
	inline List_1_t3484696860 * get_player1Misses_6() const { return ___player1Misses_6; }
	inline List_1_t3484696860 ** get_address_of_player1Misses_6() { return &___player1Misses_6; }
	inline void set_player1Misses_6(List_1_t3484696860 * value)
	{
		___player1Misses_6 = value;
		Il2CppCodeGenWriteBarrier(&___player1Misses_6, value);
	}

	inline static int32_t get_offset_of_player2Misses_7() { return static_cast<int32_t>(offsetof(Main_t2390489_StaticFields, ___player2Misses_7)); }
	inline List_1_t3484696860 * get_player2Misses_7() const { return ___player2Misses_7; }
	inline List_1_t3484696860 ** get_address_of_player2Misses_7() { return &___player2Misses_7; }
	inline void set_player2Misses_7(List_1_t3484696860 * value)
	{
		___player2Misses_7 = value;
		Il2CppCodeGenWriteBarrier(&___player2Misses_7, value);
	}

	inline static int32_t get_offset_of_winner_8() { return static_cast<int32_t>(offsetof(Main_t2390489_StaticFields, ___winner_8)); }
	inline String_t* get_winner_8() const { return ___winner_8; }
	inline String_t** get_address_of_winner_8() { return &___winner_8; }
	inline void set_winner_8(String_t* value)
	{
		___winner_8 = value;
		Il2CppCodeGenWriteBarrier(&___winner_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
