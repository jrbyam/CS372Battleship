﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.NetworkInformation.UnicastIPAddressInformationImplCollection
struct UnicastIPAddressInformationImplCollection_t865127782;

#include "System_System_Net_NetworkInformation_UnicastIPAddre293211686.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnicastIPAddressInformationImplCollection
struct  UnicastIPAddressInformationImplCollection_t865127782  : public UnicastIPAddressInformationCollection_t293211686
{
public:
	// System.Boolean System.Net.NetworkInformation.UnicastIPAddressInformationImplCollection::is_readonly
	bool ___is_readonly_2;

public:
	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(UnicastIPAddressInformationImplCollection_t865127782, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}
};

struct UnicastIPAddressInformationImplCollection_t865127782_StaticFields
{
public:
	// System.Net.NetworkInformation.UnicastIPAddressInformationImplCollection System.Net.NetworkInformation.UnicastIPAddressInformationImplCollection::Empty
	UnicastIPAddressInformationImplCollection_t865127782 * ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(UnicastIPAddressInformationImplCollection_t865127782_StaticFields, ___Empty_1)); }
	inline UnicastIPAddressInformationImplCollection_t865127782 * get_Empty_1() const { return ___Empty_1; }
	inline UnicastIPAddressInformationImplCollection_t865127782 ** get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(UnicastIPAddressInformationImplCollection_t865127782 * value)
	{
		___Empty_1 = value;
		Il2CppCodeGenWriteBarrier(&___Empty_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif