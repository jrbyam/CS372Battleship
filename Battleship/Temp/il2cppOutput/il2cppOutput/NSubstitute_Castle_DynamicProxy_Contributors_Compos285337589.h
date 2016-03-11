#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.Generators.INamingScope
struct INamingScope_t873561430;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t3245061321;
// Castle.Core.Logging.ILogger
struct ILogger_t1490187963;
// System.Collections.Generic.ICollection`1<Castle.DynamicProxy.Generators.MetaProperty>
struct ICollection_1_t3141683111;
// System.Collections.Generic.ICollection`1<Castle.DynamicProxy.Generators.MetaEvent>
struct ICollection_1_t990115842;
// System.Collections.Generic.ICollection`1<Castle.DynamicProxy.Generators.MetaMethod>
struct ICollection_1_t2755774451;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Contributors.CompositeTypeContributor
struct  CompositeTypeContributor_t285337589  : public Il2CppObject
{
public:
	// Castle.DynamicProxy.Generators.INamingScope Castle.DynamicProxy.Contributors.CompositeTypeContributor::namingScope
	Il2CppObject * ___namingScope_0;
	// System.Collections.Generic.ICollection`1<System.Type> Castle.DynamicProxy.Contributors.CompositeTypeContributor::interfaces
	Il2CppObject* ___interfaces_1;
	// Castle.Core.Logging.ILogger Castle.DynamicProxy.Contributors.CompositeTypeContributor::logger
	Il2CppObject * ___logger_2;
	// System.Collections.Generic.ICollection`1<Castle.DynamicProxy.Generators.MetaProperty> Castle.DynamicProxy.Contributors.CompositeTypeContributor::properties
	Il2CppObject* ___properties_3;
	// System.Collections.Generic.ICollection`1<Castle.DynamicProxy.Generators.MetaEvent> Castle.DynamicProxy.Contributors.CompositeTypeContributor::events
	Il2CppObject* ___events_4;
	// System.Collections.Generic.ICollection`1<Castle.DynamicProxy.Generators.MetaMethod> Castle.DynamicProxy.Contributors.CompositeTypeContributor::methods
	Il2CppObject* ___methods_5;

public:
	inline static int32_t get_offset_of_namingScope_0() { return static_cast<int32_t>(offsetof(CompositeTypeContributor_t285337589, ___namingScope_0)); }
	inline Il2CppObject * get_namingScope_0() const { return ___namingScope_0; }
	inline Il2CppObject ** get_address_of_namingScope_0() { return &___namingScope_0; }
	inline void set_namingScope_0(Il2CppObject * value)
	{
		___namingScope_0 = value;
		Il2CppCodeGenWriteBarrier(&___namingScope_0, value);
	}

	inline static int32_t get_offset_of_interfaces_1() { return static_cast<int32_t>(offsetof(CompositeTypeContributor_t285337589, ___interfaces_1)); }
	inline Il2CppObject* get_interfaces_1() const { return ___interfaces_1; }
	inline Il2CppObject** get_address_of_interfaces_1() { return &___interfaces_1; }
	inline void set_interfaces_1(Il2CppObject* value)
	{
		___interfaces_1 = value;
		Il2CppCodeGenWriteBarrier(&___interfaces_1, value);
	}

	inline static int32_t get_offset_of_logger_2() { return static_cast<int32_t>(offsetof(CompositeTypeContributor_t285337589, ___logger_2)); }
	inline Il2CppObject * get_logger_2() const { return ___logger_2; }
	inline Il2CppObject ** get_address_of_logger_2() { return &___logger_2; }
	inline void set_logger_2(Il2CppObject * value)
	{
		___logger_2 = value;
		Il2CppCodeGenWriteBarrier(&___logger_2, value);
	}

	inline static int32_t get_offset_of_properties_3() { return static_cast<int32_t>(offsetof(CompositeTypeContributor_t285337589, ___properties_3)); }
	inline Il2CppObject* get_properties_3() const { return ___properties_3; }
	inline Il2CppObject** get_address_of_properties_3() { return &___properties_3; }
	inline void set_properties_3(Il2CppObject* value)
	{
		___properties_3 = value;
		Il2CppCodeGenWriteBarrier(&___properties_3, value);
	}

	inline static int32_t get_offset_of_events_4() { return static_cast<int32_t>(offsetof(CompositeTypeContributor_t285337589, ___events_4)); }
	inline Il2CppObject* get_events_4() const { return ___events_4; }
	inline Il2CppObject** get_address_of_events_4() { return &___events_4; }
	inline void set_events_4(Il2CppObject* value)
	{
		___events_4 = value;
		Il2CppCodeGenWriteBarrier(&___events_4, value);
	}

	inline static int32_t get_offset_of_methods_5() { return static_cast<int32_t>(offsetof(CompositeTypeContributor_t285337589, ___methods_5)); }
	inline Il2CppObject* get_methods_5() const { return ___methods_5; }
	inline Il2CppObject** get_address_of_methods_5() { return &___methods_5; }
	inline void set_methods_5(Il2CppObject* value)
	{
		___methods_5 = value;
		Il2CppCodeGenWriteBarrier(&___methods_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
