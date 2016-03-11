#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.Core.Logging.ILogger
struct ILogger_t1490187963;
// System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>
struct ICollection_1_t3927052663;
// System.Collections.Generic.IDictionary`2<System.Reflection.PropertyInfo,Castle.DynamicProxy.Generators.MetaProperty>
struct IDictionary_2_t3880924513;
// System.Collections.Generic.IDictionary`2<System.Reflection.EventInfo,Castle.DynamicProxy.Generators.MetaEvent>
struct IDictionary_2_t891880963;
// System.Collections.Generic.IDictionary`2<System.Reflection.MethodInfo,Castle.DynamicProxy.Generators.MetaMethod>
struct IDictionary_2_t3814674161;
// System.Type
struct Type_t;
// System.Func`2<System.Reflection.ParameterInfo,System.Type>
struct Func_2_t898877598;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Contributors.MembersCollector
struct  MembersCollector_t1478934447  : public Il2CppObject
{
public:
	// Castle.Core.Logging.ILogger Castle.DynamicProxy.Contributors.MembersCollector::logger
	Il2CppObject * ___logger_0;
	// System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo> Castle.DynamicProxy.Contributors.MembersCollector::checkedMethods
	Il2CppObject* ___checkedMethods_1;
	// System.Collections.Generic.IDictionary`2<System.Reflection.PropertyInfo,Castle.DynamicProxy.Generators.MetaProperty> Castle.DynamicProxy.Contributors.MembersCollector::properties
	Il2CppObject* ___properties_2;
	// System.Collections.Generic.IDictionary`2<System.Reflection.EventInfo,Castle.DynamicProxy.Generators.MetaEvent> Castle.DynamicProxy.Contributors.MembersCollector::events
	Il2CppObject* ___events_3;
	// System.Collections.Generic.IDictionary`2<System.Reflection.MethodInfo,Castle.DynamicProxy.Generators.MetaMethod> Castle.DynamicProxy.Contributors.MembersCollector::methods
	Il2CppObject* ___methods_4;
	// System.Type Castle.DynamicProxy.Contributors.MembersCollector::type
	Type_t * ___type_5;

public:
	inline static int32_t get_offset_of_logger_0() { return static_cast<int32_t>(offsetof(MembersCollector_t1478934447, ___logger_0)); }
	inline Il2CppObject * get_logger_0() const { return ___logger_0; }
	inline Il2CppObject ** get_address_of_logger_0() { return &___logger_0; }
	inline void set_logger_0(Il2CppObject * value)
	{
		___logger_0 = value;
		Il2CppCodeGenWriteBarrier(&___logger_0, value);
	}

	inline static int32_t get_offset_of_checkedMethods_1() { return static_cast<int32_t>(offsetof(MembersCollector_t1478934447, ___checkedMethods_1)); }
	inline Il2CppObject* get_checkedMethods_1() const { return ___checkedMethods_1; }
	inline Il2CppObject** get_address_of_checkedMethods_1() { return &___checkedMethods_1; }
	inline void set_checkedMethods_1(Il2CppObject* value)
	{
		___checkedMethods_1 = value;
		Il2CppCodeGenWriteBarrier(&___checkedMethods_1, value);
	}

	inline static int32_t get_offset_of_properties_2() { return static_cast<int32_t>(offsetof(MembersCollector_t1478934447, ___properties_2)); }
	inline Il2CppObject* get_properties_2() const { return ___properties_2; }
	inline Il2CppObject** get_address_of_properties_2() { return &___properties_2; }
	inline void set_properties_2(Il2CppObject* value)
	{
		___properties_2 = value;
		Il2CppCodeGenWriteBarrier(&___properties_2, value);
	}

	inline static int32_t get_offset_of_events_3() { return static_cast<int32_t>(offsetof(MembersCollector_t1478934447, ___events_3)); }
	inline Il2CppObject* get_events_3() const { return ___events_3; }
	inline Il2CppObject** get_address_of_events_3() { return &___events_3; }
	inline void set_events_3(Il2CppObject* value)
	{
		___events_3 = value;
		Il2CppCodeGenWriteBarrier(&___events_3, value);
	}

	inline static int32_t get_offset_of_methods_4() { return static_cast<int32_t>(offsetof(MembersCollector_t1478934447, ___methods_4)); }
	inline Il2CppObject* get_methods_4() const { return ___methods_4; }
	inline Il2CppObject** get_address_of_methods_4() { return &___methods_4; }
	inline void set_methods_4(Il2CppObject* value)
	{
		___methods_4 = value;
		Il2CppCodeGenWriteBarrier(&___methods_4, value);
	}

	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(MembersCollector_t1478934447, ___type_5)); }
	inline Type_t * get_type_5() const { return ___type_5; }
	inline Type_t ** get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(Type_t * value)
	{
		___type_5 = value;
		Il2CppCodeGenWriteBarrier(&___type_5, value);
	}
};

struct MembersCollector_t1478934447_StaticFields
{
public:
	// System.Func`2<System.Reflection.ParameterInfo,System.Type> Castle.DynamicProxy.Contributors.MembersCollector::CS$<>9__CachedAnonymousMethodDelegate1
	Func_2_t898877598 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_6;

public:
	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_6() { return static_cast<int32_t>(offsetof(MembersCollector_t1478934447_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_6)); }
	inline Func_2_t898877598 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_6() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_6; }
	inline Func_2_t898877598 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_6() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_6; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_6(Func_2_t898877598 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_6 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
