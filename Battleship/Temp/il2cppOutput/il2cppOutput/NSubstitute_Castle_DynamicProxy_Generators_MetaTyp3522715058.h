#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.ICollection`1<Castle.DynamicProxy.Generators.MetaEvent>
struct ICollection_1_t990115842;
// System.Collections.Generic.ICollection`1<Castle.DynamicProxy.Generators.MetaMethod>
struct ICollection_1_t2755774451;
// System.Collections.Generic.ICollection`1<Castle.DynamicProxy.Generators.MetaProperty>
struct ICollection_1_t3141683111;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.MetaType
struct  MetaType_t3522715058  : public Il2CppObject
{
public:
	// System.Collections.Generic.ICollection`1<Castle.DynamicProxy.Generators.MetaEvent> Castle.DynamicProxy.Generators.MetaType::events
	Il2CppObject* ___events_0;
	// System.Collections.Generic.ICollection`1<Castle.DynamicProxy.Generators.MetaMethod> Castle.DynamicProxy.Generators.MetaType::methods
	Il2CppObject* ___methods_1;
	// System.Collections.Generic.ICollection`1<Castle.DynamicProxy.Generators.MetaProperty> Castle.DynamicProxy.Generators.MetaType::properties
	Il2CppObject* ___properties_2;

public:
	inline static int32_t get_offset_of_events_0() { return static_cast<int32_t>(offsetof(MetaType_t3522715058, ___events_0)); }
	inline Il2CppObject* get_events_0() const { return ___events_0; }
	inline Il2CppObject** get_address_of_events_0() { return &___events_0; }
	inline void set_events_0(Il2CppObject* value)
	{
		___events_0 = value;
		Il2CppCodeGenWriteBarrier(&___events_0, value);
	}

	inline static int32_t get_offset_of_methods_1() { return static_cast<int32_t>(offsetof(MetaType_t3522715058, ___methods_1)); }
	inline Il2CppObject* get_methods_1() const { return ___methods_1; }
	inline Il2CppObject** get_address_of_methods_1() { return &___methods_1; }
	inline void set_methods_1(Il2CppObject* value)
	{
		___methods_1 = value;
		Il2CppCodeGenWriteBarrier(&___methods_1, value);
	}

	inline static int32_t get_offset_of_properties_2() { return static_cast<int32_t>(offsetof(MetaType_t3522715058, ___properties_2)); }
	inline Il2CppObject* get_properties_2() const { return ___properties_2; }
	inline Il2CppObject** get_address_of_properties_2() { return &___properties_2; }
	inline void set_properties_2(Il2CppObject* value)
	{
		___properties_2 = value;
		Il2CppCodeGenWriteBarrier(&___properties_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
