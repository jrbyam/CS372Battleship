﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.IPAddress
struct IPAddress_t3220500535;

#include "System_System_Net_EndPoint1294049535.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.IPEndPoint
struct  IPEndPoint_t1265996582  : public EndPoint_t1294049535
{
public:
	// System.Net.IPAddress System.Net.IPEndPoint::address
	IPAddress_t3220500535 * ___address_2;
	// System.Int32 System.Net.IPEndPoint::port
	int32_t ___port_3;

public:
	inline static int32_t get_offset_of_address_2() { return static_cast<int32_t>(offsetof(IPEndPoint_t1265996582, ___address_2)); }
	inline IPAddress_t3220500535 * get_address_2() const { return ___address_2; }
	inline IPAddress_t3220500535 ** get_address_of_address_2() { return &___address_2; }
	inline void set_address_2(IPAddress_t3220500535 * value)
	{
		___address_2 = value;
		Il2CppCodeGenWriteBarrier(&___address_2, value);
	}

	inline static int32_t get_offset_of_port_3() { return static_cast<int32_t>(offsetof(IPEndPoint_t1265996582, ___port_3)); }
	inline int32_t get_port_3() const { return ___port_3; }
	inline int32_t* get_address_of_port_3() { return &___port_3; }
	inline void set_port_3(int32_t value)
	{
		___port_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
