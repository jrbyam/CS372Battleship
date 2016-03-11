#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.MetaTypeElement
struct  MetaTypeElement_t902406576  : public Il2CppObject
{
public:
	// System.Type Castle.DynamicProxy.Generators.MetaTypeElement::sourceType
	Type_t * ___sourceType_0;

public:
	inline static int32_t get_offset_of_sourceType_0() { return static_cast<int32_t>(offsetof(MetaTypeElement_t902406576, ___sourceType_0)); }
	inline Type_t * get_sourceType_0() const { return ___sourceType_0; }
	inline Type_t ** get_address_of_sourceType_0() { return &___sourceType_0; }
	inline void set_sourceType_0(Type_t * value)
	{
		___sourceType_0 = value;
		Il2CppCodeGenWriteBarrier(&___sourceType_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
