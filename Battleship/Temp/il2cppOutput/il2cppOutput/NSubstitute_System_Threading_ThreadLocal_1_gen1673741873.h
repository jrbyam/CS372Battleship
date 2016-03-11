#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`1<System.Func`2<NSubstitute.Core.ICall,System.Object[]>>
struct Func_1_t3832644318;

#include "mscorlib_System_Object837106420.h"
#include "NSubstitute_System_Threading_ThreadLocal_1_Datum_ge686588571.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadLocal`1<System.Func`2<NSubstitute.Core.ICall,System.Object[]>>
struct  ThreadLocal_1_t1673741873  : public Il2CppObject
{
public:
	// System.Func`1<T> System.Threading.ThreadLocal`1::valueFactory
	Func_1_t3832644318 * ___valueFactory_0;
	// System.UInt32 System.Threading.ThreadLocal`1::m_offset
	uint32_t ___m_offset_1;
	// System.Threading.ThreadLocal`1/Datum<T> System.Threading.ThreadLocal`1::m_data
	Datum_t686588571  ___m_data_2;

public:
	inline static int32_t get_offset_of_valueFactory_0() { return static_cast<int32_t>(offsetof(ThreadLocal_1_t1673741873, ___valueFactory_0)); }
	inline Func_1_t3832644318 * get_valueFactory_0() const { return ___valueFactory_0; }
	inline Func_1_t3832644318 ** get_address_of_valueFactory_0() { return &___valueFactory_0; }
	inline void set_valueFactory_0(Func_1_t3832644318 * value)
	{
		___valueFactory_0 = value;
		Il2CppCodeGenWriteBarrier(&___valueFactory_0, value);
	}

	inline static int32_t get_offset_of_m_offset_1() { return static_cast<int32_t>(offsetof(ThreadLocal_1_t1673741873, ___m_offset_1)); }
	inline uint32_t get_m_offset_1() const { return ___m_offset_1; }
	inline uint32_t* get_address_of_m_offset_1() { return &___m_offset_1; }
	inline void set_m_offset_1(uint32_t value)
	{
		___m_offset_1 = value;
	}

	inline static int32_t get_offset_of_m_data_2() { return static_cast<int32_t>(offsetof(ThreadLocal_1_t1673741873, ___m_data_2)); }
	inline Datum_t686588571  get_m_data_2() const { return ___m_data_2; }
	inline Datum_t686588571 * get_address_of_m_data_2() { return &___m_data_2; }
	inline void set_m_data_2(Datum_t686588571  value)
	{
		___m_data_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
