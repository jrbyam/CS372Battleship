#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "System_System_Diagnostics_TraceListener569300024.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DefaultTraceListener
struct  DefaultTraceListener_t140256183  : public TraceListener_t569300024
{
public:
	// System.String System.Diagnostics.DefaultTraceListener::logFileName
	String_t* ___logFileName_11;
	// System.Boolean System.Diagnostics.DefaultTraceListener::assertUiEnabled
	bool ___assertUiEnabled_12;

public:
	inline static int32_t get_offset_of_logFileName_11() { return static_cast<int32_t>(offsetof(DefaultTraceListener_t140256183, ___logFileName_11)); }
	inline String_t* get_logFileName_11() const { return ___logFileName_11; }
	inline String_t** get_address_of_logFileName_11() { return &___logFileName_11; }
	inline void set_logFileName_11(String_t* value)
	{
		___logFileName_11 = value;
		Il2CppCodeGenWriteBarrier(&___logFileName_11, value);
	}

	inline static int32_t get_offset_of_assertUiEnabled_12() { return static_cast<int32_t>(offsetof(DefaultTraceListener_t140256183, ___assertUiEnabled_12)); }
	inline bool get_assertUiEnabled_12() const { return ___assertUiEnabled_12; }
	inline bool* get_address_of_assertUiEnabled_12() { return &___assertUiEnabled_12; }
	inline void set_assertUiEnabled_12(bool value)
	{
		___assertUiEnabled_12 = value;
	}
};

struct DefaultTraceListener_t140256183_StaticFields
{
public:
	// System.Boolean System.Diagnostics.DefaultTraceListener::OnWin32
	bool ___OnWin32_8;
	// System.String System.Diagnostics.DefaultTraceListener::MonoTracePrefix
	String_t* ___MonoTracePrefix_9;
	// System.String System.Diagnostics.DefaultTraceListener::MonoTraceFile
	String_t* ___MonoTraceFile_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Diagnostics.DefaultTraceListener::<>f__switch$map0
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map0_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Diagnostics.DefaultTraceListener::<>f__switch$map1
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map1_14;

public:
	inline static int32_t get_offset_of_OnWin32_8() { return static_cast<int32_t>(offsetof(DefaultTraceListener_t140256183_StaticFields, ___OnWin32_8)); }
	inline bool get_OnWin32_8() const { return ___OnWin32_8; }
	inline bool* get_address_of_OnWin32_8() { return &___OnWin32_8; }
	inline void set_OnWin32_8(bool value)
	{
		___OnWin32_8 = value;
	}

	inline static int32_t get_offset_of_MonoTracePrefix_9() { return static_cast<int32_t>(offsetof(DefaultTraceListener_t140256183_StaticFields, ___MonoTracePrefix_9)); }
	inline String_t* get_MonoTracePrefix_9() const { return ___MonoTracePrefix_9; }
	inline String_t** get_address_of_MonoTracePrefix_9() { return &___MonoTracePrefix_9; }
	inline void set_MonoTracePrefix_9(String_t* value)
	{
		___MonoTracePrefix_9 = value;
		Il2CppCodeGenWriteBarrier(&___MonoTracePrefix_9, value);
	}

	inline static int32_t get_offset_of_MonoTraceFile_10() { return static_cast<int32_t>(offsetof(DefaultTraceListener_t140256183_StaticFields, ___MonoTraceFile_10)); }
	inline String_t* get_MonoTraceFile_10() const { return ___MonoTraceFile_10; }
	inline String_t** get_address_of_MonoTraceFile_10() { return &___MonoTraceFile_10; }
	inline void set_MonoTraceFile_10(String_t* value)
	{
		___MonoTraceFile_10 = value;
		Il2CppCodeGenWriteBarrier(&___MonoTraceFile_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_13() { return static_cast<int32_t>(offsetof(DefaultTraceListener_t140256183_StaticFields, ___U3CU3Ef__switchU24map0_13)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map0_13() const { return ___U3CU3Ef__switchU24map0_13; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map0_13() { return &___U3CU3Ef__switchU24map0_13; }
	inline void set_U3CU3Ef__switchU24map0_13(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map0_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_14() { return static_cast<int32_t>(offsetof(DefaultTraceListener_t140256183_StaticFields, ___U3CU3Ef__switchU24map1_14)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map1_14() const { return ___U3CU3Ef__switchU24map1_14; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map1_14() { return &___U3CU3Ef__switchU24map1_14; }
	inline void set_U3CU3Ef__switchU24map1_14(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map1_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
