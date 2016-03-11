#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t2710684728;
struct Win32_IP_ADAPTER_ADDRESSES_t2710684728_marshaled;
// System.Net.NetworkInformation.Win32IPv4InterfaceStatistics
struct Win32IPv4InterfaceStatistics_t519600086;
// System.Net.NetworkInformation.IPInterfaceProperties
struct IPInterfaceProperties_t665993951;

#include "System_System_Net_NetworkInformation_NetworkInterf3855819525.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IFR2617189434.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32NetworkInterface2
struct  Win32NetworkInterface2_t1719223622  : public NetworkInterface_t3855819525
{
public:
	// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES System.Net.NetworkInformation.Win32NetworkInterface2::addr
	Win32_IP_ADAPTER_ADDRESSES_t2710684728 * ___addr_2;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32NetworkInterface2::mib4
	Win32_MIB_IFROW_t2617189434  ___mib4_3;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32NetworkInterface2::mib6
	Win32_MIB_IFROW_t2617189434  ___mib6_4;
	// System.Net.NetworkInformation.Win32IPv4InterfaceStatistics System.Net.NetworkInformation.Win32NetworkInterface2::ip4stats
	Win32IPv4InterfaceStatistics_t519600086 * ___ip4stats_5;
	// System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.Win32NetworkInterface2::ip_if_props
	IPInterfaceProperties_t665993951 * ___ip_if_props_6;

public:
	inline static int32_t get_offset_of_addr_2() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t1719223622, ___addr_2)); }
	inline Win32_IP_ADAPTER_ADDRESSES_t2710684728 * get_addr_2() const { return ___addr_2; }
	inline Win32_IP_ADAPTER_ADDRESSES_t2710684728 ** get_address_of_addr_2() { return &___addr_2; }
	inline void set_addr_2(Win32_IP_ADAPTER_ADDRESSES_t2710684728 * value)
	{
		___addr_2 = value;
		Il2CppCodeGenWriteBarrier(&___addr_2, value);
	}

	inline static int32_t get_offset_of_mib4_3() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t1719223622, ___mib4_3)); }
	inline Win32_MIB_IFROW_t2617189434  get_mib4_3() const { return ___mib4_3; }
	inline Win32_MIB_IFROW_t2617189434 * get_address_of_mib4_3() { return &___mib4_3; }
	inline void set_mib4_3(Win32_MIB_IFROW_t2617189434  value)
	{
		___mib4_3 = value;
	}

	inline static int32_t get_offset_of_mib6_4() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t1719223622, ___mib6_4)); }
	inline Win32_MIB_IFROW_t2617189434  get_mib6_4() const { return ___mib6_4; }
	inline Win32_MIB_IFROW_t2617189434 * get_address_of_mib6_4() { return &___mib6_4; }
	inline void set_mib6_4(Win32_MIB_IFROW_t2617189434  value)
	{
		___mib6_4 = value;
	}

	inline static int32_t get_offset_of_ip4stats_5() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t1719223622, ___ip4stats_5)); }
	inline Win32IPv4InterfaceStatistics_t519600086 * get_ip4stats_5() const { return ___ip4stats_5; }
	inline Win32IPv4InterfaceStatistics_t519600086 ** get_address_of_ip4stats_5() { return &___ip4stats_5; }
	inline void set_ip4stats_5(Win32IPv4InterfaceStatistics_t519600086 * value)
	{
		___ip4stats_5 = value;
		Il2CppCodeGenWriteBarrier(&___ip4stats_5, value);
	}

	inline static int32_t get_offset_of_ip_if_props_6() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t1719223622, ___ip_if_props_6)); }
	inline IPInterfaceProperties_t665993951 * get_ip_if_props_6() const { return ___ip_if_props_6; }
	inline IPInterfaceProperties_t665993951 ** get_address_of_ip_if_props_6() { return &___ip_if_props_6; }
	inline void set_ip_if_props_6(IPInterfaceProperties_t665993951 * value)
	{
		___ip_if_props_6 = value;
		Il2CppCodeGenWriteBarrier(&___ip_if_props_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
