#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "System_System_Net_NetworkInformation_IPv4Interface1818239313.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IFR2617189434.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPv4InterfaceStatistics
struct  Win32IPv4InterfaceStatistics_t519600086  : public IPv4InterfaceStatistics_t1818239313
{
public:
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32IPv4InterfaceStatistics::info
	Win32_MIB_IFROW_t2617189434  ___info_0;

public:
	inline static int32_t get_offset_of_info_0() { return static_cast<int32_t>(offsetof(Win32IPv4InterfaceStatistics_t519600086, ___info_0)); }
	inline Win32_MIB_IFROW_t2617189434  get_info_0() const { return ___info_0; }
	inline Win32_MIB_IFROW_t2617189434 * get_address_of_info_0() { return &___info_0; }
	inline void set_info_0(Win32_MIB_IFROW_t2617189434  value)
	{
		___info_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
