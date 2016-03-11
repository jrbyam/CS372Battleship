#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.NetworkInformation.UnixNetworkInterface
struct UnixNetworkInterface_t2637897901;
// System.Collections.Generic.List`1<System.Net.IPAddress>
struct List_1_t4017459504;
// System.Text.RegularExpressions.Regex
struct Regex_t3802381858;

#include "System_System_Net_NetworkInformation_IPInterfacePro665993951.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnixIPInterfaceProperties
struct  UnixIPInterfaceProperties_t3513683511  : public IPInterfaceProperties_t665993951
{
public:
	// System.Net.NetworkInformation.UnixNetworkInterface System.Net.NetworkInformation.UnixIPInterfaceProperties::iface
	UnixNetworkInterface_t2637897901 * ___iface_0;
	// System.Collections.Generic.List`1<System.Net.IPAddress> System.Net.NetworkInformation.UnixIPInterfaceProperties::addresses
	List_1_t4017459504 * ___addresses_1;

public:
	inline static int32_t get_offset_of_iface_0() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t3513683511, ___iface_0)); }
	inline UnixNetworkInterface_t2637897901 * get_iface_0() const { return ___iface_0; }
	inline UnixNetworkInterface_t2637897901 ** get_address_of_iface_0() { return &___iface_0; }
	inline void set_iface_0(UnixNetworkInterface_t2637897901 * value)
	{
		___iface_0 = value;
		Il2CppCodeGenWriteBarrier(&___iface_0, value);
	}

	inline static int32_t get_offset_of_addresses_1() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t3513683511, ___addresses_1)); }
	inline List_1_t4017459504 * get_addresses_1() const { return ___addresses_1; }
	inline List_1_t4017459504 ** get_address_of_addresses_1() { return &___addresses_1; }
	inline void set_addresses_1(List_1_t4017459504 * value)
	{
		___addresses_1 = value;
		Il2CppCodeGenWriteBarrier(&___addresses_1, value);
	}
};

struct UnixIPInterfaceProperties_t3513683511_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex System.Net.NetworkInformation.UnixIPInterfaceProperties::ns
	Regex_t3802381858 * ___ns_2;
	// System.Text.RegularExpressions.Regex System.Net.NetworkInformation.UnixIPInterfaceProperties::search
	Regex_t3802381858 * ___search_3;

public:
	inline static int32_t get_offset_of_ns_2() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t3513683511_StaticFields, ___ns_2)); }
	inline Regex_t3802381858 * get_ns_2() const { return ___ns_2; }
	inline Regex_t3802381858 ** get_address_of_ns_2() { return &___ns_2; }
	inline void set_ns_2(Regex_t3802381858 * value)
	{
		___ns_2 = value;
		Il2CppCodeGenWriteBarrier(&___ns_2, value);
	}

	inline static int32_t get_offset_of_search_3() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t3513683511_StaticFields, ___search_3)); }
	inline Regex_t3802381858 * get_search_3() const { return ___search_3; }
	inline Regex_t3802381858 ** get_address_of_search_3() { return &___search_3; }
	inline void set_search_3(Regex_t3802381858 * value)
	{
		___search_3 = value;
		Il2CppCodeGenWriteBarrier(&___search_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
