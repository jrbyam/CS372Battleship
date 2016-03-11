#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "NSubstitute_Castle_DynamicProxy_Contributors_Membe1478934447.h"
#include "mscorlib_System_Reflection_InterfaceMapping455787459.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Contributors.InterfaceMembersOnClassCollector
struct  InterfaceMembersOnClassCollector_t296458159  : public MembersCollector_t1478934447
{
public:
	// System.Reflection.InterfaceMapping Castle.DynamicProxy.Contributors.InterfaceMembersOnClassCollector::map
	InterfaceMapping_t455787459  ___map_7;
	// System.Boolean Castle.DynamicProxy.Contributors.InterfaceMembersOnClassCollector::onlyProxyVirtual
	bool ___onlyProxyVirtual_8;

public:
	inline static int32_t get_offset_of_map_7() { return static_cast<int32_t>(offsetof(InterfaceMembersOnClassCollector_t296458159, ___map_7)); }
	inline InterfaceMapping_t455787459  get_map_7() const { return ___map_7; }
	inline InterfaceMapping_t455787459 * get_address_of_map_7() { return &___map_7; }
	inline void set_map_7(InterfaceMapping_t455787459  value)
	{
		___map_7 = value;
	}

	inline static int32_t get_offset_of_onlyProxyVirtual_8() { return static_cast<int32_t>(offsetof(InterfaceMembersOnClassCollector_t296458159, ___onlyProxyVirtual_8)); }
	inline bool get_onlyProxyVirtual_8() const { return ___onlyProxyVirtual_8; }
	inline bool* get_address_of_onlyProxyVirtual_8() { return &___onlyProxyVirtual_8; }
	inline void set_onlyProxyVirtual_8(bool value)
	{
		___onlyProxyVirtual_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
