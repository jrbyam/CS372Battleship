#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.IPAddress
struct IPAddress_t3220500535;

#include "System_System_Net_NetworkInformation_UnicastIPAddr1505232104.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.LinuxUnicastIPAddressInformation
struct  LinuxUnicastIPAddressInformation_t1765130132  : public UnicastIPAddressInformation_t1505232104
{
public:
	// System.Net.IPAddress System.Net.NetworkInformation.LinuxUnicastIPAddressInformation::address
	IPAddress_t3220500535 * ___address_0;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(LinuxUnicastIPAddressInformation_t1765130132, ___address_0)); }
	inline IPAddress_t3220500535 * get_address_0() const { return ___address_0; }
	inline IPAddress_t3220500535 ** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(IPAddress_t3220500535 * value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier(&___address_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
