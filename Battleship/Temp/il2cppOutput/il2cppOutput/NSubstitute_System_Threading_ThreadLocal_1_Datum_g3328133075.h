#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Exception
struct Exception_t1967233988;
// NSubstitute.Core.ICallRouter
struct ICallRouter_t1036440279;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadLocal`1/Datum<NSubstitute.Core.ICallRouter>
struct  Datum_t3328133075 
{
public:
	// System.SByte System.Threading.ThreadLocal`1/Datum::state
	int8_t ___state_0;
	// System.Exception System.Threading.ThreadLocal`1/Datum::cachedException
	Exception_t1967233988 * ___cachedException_1;
	// T System.Threading.ThreadLocal`1/Datum::data
	Il2CppObject * ___data_2;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(Datum_t3328133075, ___state_0)); }
	inline int8_t get_state_0() const { return ___state_0; }
	inline int8_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int8_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_cachedException_1() { return static_cast<int32_t>(offsetof(Datum_t3328133075, ___cachedException_1)); }
	inline Exception_t1967233988 * get_cachedException_1() const { return ___cachedException_1; }
	inline Exception_t1967233988 ** get_address_of_cachedException_1() { return &___cachedException_1; }
	inline void set_cachedException_1(Exception_t1967233988 * value)
	{
		___cachedException_1 = value;
		Il2CppCodeGenWriteBarrier(&___cachedException_1, value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(Datum_t3328133075, ___data_2)); }
	inline Il2CppObject * get_data_2() const { return ___data_2; }
	inline Il2CppObject ** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(Il2CppObject * value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier(&___data_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
