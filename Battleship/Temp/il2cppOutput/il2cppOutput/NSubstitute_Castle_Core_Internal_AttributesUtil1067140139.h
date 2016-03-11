#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t1025395500;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.Core.Internal.AttributesUtil
struct  AttributesUtil_t1067140139  : public Il2CppObject
{
public:

public:
};

struct AttributesUtil_t1067140139_StaticFields
{
public:
	// System.AttributeUsageAttribute Castle.Core.Internal.AttributesUtil::DefaultAttributeUsage
	AttributeUsageAttribute_t1025395500 * ___DefaultAttributeUsage_0;

public:
	inline static int32_t get_offset_of_DefaultAttributeUsage_0() { return static_cast<int32_t>(offsetof(AttributesUtil_t1067140139_StaticFields, ___DefaultAttributeUsage_0)); }
	inline AttributeUsageAttribute_t1025395500 * get_DefaultAttributeUsage_0() const { return ___DefaultAttributeUsage_0; }
	inline AttributeUsageAttribute_t1025395500 ** get_address_of_DefaultAttributeUsage_0() { return &___DefaultAttributeUsage_0; }
	inline void set_DefaultAttributeUsage_0(AttributeUsageAttribute_t1025395500 * value)
	{
		___DefaultAttributeUsage_0 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultAttributeUsage_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
