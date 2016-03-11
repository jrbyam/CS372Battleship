#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t2949654135;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.MethodFinder
struct  MethodFinder_t380962618  : public Il2CppObject
{
public:

public:
};

struct MethodFinder_t380962618_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> Castle.DynamicProxy.Generators.MethodFinder::cachedMethodInfosByType
	Dictionary_2_t2949654135 * ___cachedMethodInfosByType_0;
	// System.Object Castle.DynamicProxy.Generators.MethodFinder::lockObject
	Il2CppObject * ___lockObject_1;

public:
	inline static int32_t get_offset_of_cachedMethodInfosByType_0() { return static_cast<int32_t>(offsetof(MethodFinder_t380962618_StaticFields, ___cachedMethodInfosByType_0)); }
	inline Dictionary_2_t2949654135 * get_cachedMethodInfosByType_0() const { return ___cachedMethodInfosByType_0; }
	inline Dictionary_2_t2949654135 ** get_address_of_cachedMethodInfosByType_0() { return &___cachedMethodInfosByType_0; }
	inline void set_cachedMethodInfosByType_0(Dictionary_2_t2949654135 * value)
	{
		___cachedMethodInfosByType_0 = value;
		Il2CppCodeGenWriteBarrier(&___cachedMethodInfosByType_0, value);
	}

	inline static int32_t get_offset_of_lockObject_1() { return static_cast<int32_t>(offsetof(MethodFinder_t380962618_StaticFields, ___lockObject_1)); }
	inline Il2CppObject * get_lockObject_1() const { return ___lockObject_1; }
	inline Il2CppObject ** get_address_of_lockObject_1() { return &___lockObject_1; }
	inline void set_lockObject_1(Il2CppObject * value)
	{
		___lockObject_1 = value;
		Il2CppCodeGenWriteBarrier(&___lockObject_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
