﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Net.NetworkInformation.UnicastIPAddressInformation>
struct List_1_t2302191073;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnicastIPAddressInformationCollection
struct  UnicastIPAddressInformationCollection_t293211686  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.Net.NetworkInformation.UnicastIPAddressInformation> System.Net.NetworkInformation.UnicastIPAddressInformationCollection::list
	List_1_t2302191073 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(UnicastIPAddressInformationCollection_t293211686, ___list_0)); }
	inline List_1_t2302191073 * get_list_0() const { return ___list_0; }
	inline List_1_t2302191073 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t2302191073 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier(&___list_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
