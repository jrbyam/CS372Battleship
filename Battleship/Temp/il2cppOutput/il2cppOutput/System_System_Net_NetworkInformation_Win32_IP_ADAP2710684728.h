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
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.UInt32[]
struct UInt32U5BU5D_t2133601851;

#include "mscorlib_System_Object837106420.h"
#include "System_System_Net_NetworkInformation_AlignmentUnio3476184838.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_System_Net_NetworkInformation_NetworkInterf4245866719.h"
#include "System_System_Net_NetworkInformation_OperationalSt2581172862.h"
#include "mscorlib_System_Byte2778693821.h"
#include "mscorlib_System_UInt32985925326.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct  Win32_IP_ADAPTER_ADDRESSES_t2710684728  : public Il2CppObject
{
public:
	// System.Net.NetworkInformation.AlignmentUnion System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Alignment
	AlignmentUnion_t3476184838  ___Alignment_0;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Next
	IntPtr_t ___Next_1;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::AdapterName
	String_t* ___AdapterName_2;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstUnicastAddress
	IntPtr_t ___FirstUnicastAddress_3;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstAnycastAddress
	IntPtr_t ___FirstAnycastAddress_4;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstMulticastAddress
	IntPtr_t ___FirstMulticastAddress_5;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstDnsServerAddress
	IntPtr_t ___FirstDnsServerAddress_6;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::DnsSuffix
	String_t* ___DnsSuffix_7;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Description
	String_t* ___Description_8;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FriendlyName
	String_t* ___FriendlyName_9;
	// System.Byte[] System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::PhysicalAddress
	ByteU5BU5D_t58506160* ___PhysicalAddress_10;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::PhysicalAddressLength
	uint32_t ___PhysicalAddressLength_11;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Flags
	uint32_t ___Flags_12;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Mtu
	uint32_t ___Mtu_13;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::IfType
	int32_t ___IfType_14;
	// System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::OperStatus
	int32_t ___OperStatus_15;
	// System.Int32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Ipv6IfIndex
	int32_t ___Ipv6IfIndex_16;
	// System.UInt32[] System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::ZoneIndices
	UInt32U5BU5D_t2133601851* ___ZoneIndices_17;

public:
	inline static int32_t get_offset_of_Alignment_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t2710684728, ___Alignment_0)); }
	inline AlignmentUnion_t3476184838  get_Alignment_0() const { return ___Alignment_0; }
	inline AlignmentUnion_t3476184838 * get_address_of_Alignment_0() { return &___Alignment_0; }
	inline void set_Alignment_0(AlignmentUnion_t3476184838  value)
	{
		___Alignment_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t2710684728, ___Next_1)); }
	inline IntPtr_t get_Next_1() const { return ___Next_1; }
	inline IntPtr_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(IntPtr_t value)
	{
		___Next_1 = value;
	}

	inline static int32_t get_offset_of_AdapterName_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t2710684728, ___AdapterName_2)); }
	inline String_t* get_AdapterName_2() const { return ___AdapterName_2; }
	inline String_t** get_address_of_AdapterName_2() { return &___AdapterName_2; }
	inline void set_AdapterName_2(String_t* value)
	{
		___AdapterName_2 = value;
		Il2CppCodeGenWriteBarrier(&___AdapterName_2, value);
	}

	inline static int32_t get_offset_of_FirstUnicastAddress_3() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t2710684728, ___FirstUnicastAddress_3)); }
	inline IntPtr_t get_FirstUnicastAddress_3() const { return ___FirstUnicastAddress_3; }
	inline IntPtr_t* get_address_of_FirstUnicastAddress_3() { return &___FirstUnicastAddress_3; }
	inline void set_FirstUnicastAddress_3(IntPtr_t value)
	{
		___FirstUnicastAddress_3 = value;
	}

	inline static int32_t get_offset_of_FirstAnycastAddress_4() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t2710684728, ___FirstAnycastAddress_4)); }
	inline IntPtr_t get_FirstAnycastAddress_4() const { return ___FirstAnycastAddress_4; }
	inline IntPtr_t* get_address_of_FirstAnycastAddress_4() { return &___FirstAnycastAddress_4; }
	inline void set_FirstAnycastAddress_4(IntPtr_t value)
	{
		___FirstAnycastAddress_4 = value;
	}

	inline static int32_t get_offset_of_FirstMulticastAddress_5() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t2710684728, ___FirstMulticastAddress_5)); }
	inline IntPtr_t get_FirstMulticastAddress_5() const { return ___FirstMulticastAddress_5; }
	inline IntPtr_t* get_address_of_FirstMulticastAddress_5() { return &___FirstMulticastAddress_5; }
	inline void set_FirstMulticastAddress_5(IntPtr_t value)
	{
		___FirstMulticastAddress_5 = value;
	}

	inline static int32_t get_offset_of_FirstDnsServerAddress_6() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t2710684728, ___FirstDnsServerAddress_6)); }
	inline IntPtr_t get_FirstDnsServerAddress_6() const { return ___FirstDnsServerAddress_6; }
	inline IntPtr_t* get_address_of_FirstDnsServerAddress_6() { return &___FirstDnsServerAddress_6; }
	inline void set_FirstDnsServerAddress_6(IntPtr_t value)
	{
		___FirstDnsServerAddress_6 = value;
	}

	inline static int32_t get_offset_of_DnsSuffix_7() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t2710684728, ___DnsSuffix_7)); }
	inline String_t* get_DnsSuffix_7() const { return ___DnsSuffix_7; }
	inline String_t** get_address_of_DnsSuffix_7() { return &___DnsSuffix_7; }
	inline void set_DnsSuffix_7(String_t* value)
	{
		___DnsSuffix_7 = value;
		Il2CppCodeGenWriteBarrier(&___DnsSuffix_7, value);
	}

	inline static int32_t get_offset_of_Description_8() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t2710684728, ___Description_8)); }
	inline String_t* get_Description_8() const { return ___Description_8; }
	inline String_t** get_address_of_Description_8() { return &___Description_8; }
	inline void set_Description_8(String_t* value)
	{
		___Description_8 = value;
		Il2CppCodeGenWriteBarrier(&___Description_8, value);
	}

	inline static int32_t get_offset_of_FriendlyName_9() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t2710684728, ___FriendlyName_9)); }
	inline String_t* get_FriendlyName_9() const { return ___FriendlyName_9; }
	inline String_t** get_address_of_FriendlyName_9() { return &___FriendlyName_9; }
	inline void set_FriendlyName_9(String_t* value)
	{
		___FriendlyName_9 = value;
		Il2CppCodeGenWriteBarrier(&___FriendlyName_9, value);
	}

	inline static int32_t get_offset_of_PhysicalAddress_10() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t2710684728, ___PhysicalAddress_10)); }
	inline ByteU5BU5D_t58506160* get_PhysicalAddress_10() const { return ___PhysicalAddress_10; }
	inline ByteU5BU5D_t58506160** get_address_of_PhysicalAddress_10() { return &___PhysicalAddress_10; }
	inline void set_PhysicalAddress_10(ByteU5BU5D_t58506160* value)
	{
		___PhysicalAddress_10 = value;
		Il2CppCodeGenWriteBarrier(&___PhysicalAddress_10, value);
	}

	inline static int32_t get_offset_of_PhysicalAddressLength_11() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t2710684728, ___PhysicalAddressLength_11)); }
	inline uint32_t get_PhysicalAddressLength_11() const { return ___PhysicalAddressLength_11; }
	inline uint32_t* get_address_of_PhysicalAddressLength_11() { return &___PhysicalAddressLength_11; }
	inline void set_PhysicalAddressLength_11(uint32_t value)
	{
		___PhysicalAddressLength_11 = value;
	}

	inline static int32_t get_offset_of_Flags_12() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t2710684728, ___Flags_12)); }
	inline uint32_t get_Flags_12() const { return ___Flags_12; }
	inline uint32_t* get_address_of_Flags_12() { return &___Flags_12; }
	inline void set_Flags_12(uint32_t value)
	{
		___Flags_12 = value;
	}

	inline static int32_t get_offset_of_Mtu_13() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t2710684728, ___Mtu_13)); }
	inline uint32_t get_Mtu_13() const { return ___Mtu_13; }
	inline uint32_t* get_address_of_Mtu_13() { return &___Mtu_13; }
	inline void set_Mtu_13(uint32_t value)
	{
		___Mtu_13 = value;
	}

	inline static int32_t get_offset_of_IfType_14() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t2710684728, ___IfType_14)); }
	inline int32_t get_IfType_14() const { return ___IfType_14; }
	inline int32_t* get_address_of_IfType_14() { return &___IfType_14; }
	inline void set_IfType_14(int32_t value)
	{
		___IfType_14 = value;
	}

	inline static int32_t get_offset_of_OperStatus_15() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t2710684728, ___OperStatus_15)); }
	inline int32_t get_OperStatus_15() const { return ___OperStatus_15; }
	inline int32_t* get_address_of_OperStatus_15() { return &___OperStatus_15; }
	inline void set_OperStatus_15(int32_t value)
	{
		___OperStatus_15 = value;
	}

	inline static int32_t get_offset_of_Ipv6IfIndex_16() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t2710684728, ___Ipv6IfIndex_16)); }
	inline int32_t get_Ipv6IfIndex_16() const { return ___Ipv6IfIndex_16; }
	inline int32_t* get_address_of_Ipv6IfIndex_16() { return &___Ipv6IfIndex_16; }
	inline void set_Ipv6IfIndex_16(int32_t value)
	{
		___Ipv6IfIndex_16 = value;
	}

	inline static int32_t get_offset_of_ZoneIndices_17() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t2710684728, ___ZoneIndices_17)); }
	inline UInt32U5BU5D_t2133601851* get_ZoneIndices_17() const { return ___ZoneIndices_17; }
	inline UInt32U5BU5D_t2133601851** get_address_of_ZoneIndices_17() { return &___ZoneIndices_17; }
	inline void set_ZoneIndices_17(UInt32U5BU5D_t2133601851* value)
	{
		___ZoneIndices_17 = value;
		Il2CppCodeGenWriteBarrier(&___ZoneIndices_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t2710684728_marshaled
{
	AlignmentUnion_t3476184838_marshaled ___Alignment_0;
	intptr_t ___Next_1;
	char* ___AdapterName_2;
	intptr_t ___FirstUnicastAddress_3;
	intptr_t ___FirstAnycastAddress_4;
	intptr_t ___FirstMulticastAddress_5;
	intptr_t ___FirstDnsServerAddress_6;
	char* ___DnsSuffix_7;
	char* ___Description_8;
	char* ___FriendlyName_9;
	uint8_t ___PhysicalAddress_10[8];
	uint32_t ___PhysicalAddressLength_11;
	uint32_t ___Flags_12;
	uint32_t ___Mtu_13;
	int32_t ___IfType_14;
	int32_t ___OperStatus_15;
	int32_t ___Ipv6IfIndex_16;
	uint32_t ___ZoneIndices_17[64];
};
