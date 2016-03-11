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

#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3512213983.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.CodeBuilders.ConstructorCodeBuilder
struct  ConstructorCodeBuilder_t822167367  : public AbstractCodeBuilder_t3512213983
{
public:
	// System.Type Castle.DynamicProxy.Generators.Emitters.CodeBuilders.ConstructorCodeBuilder::baseType
	Type_t * ___baseType_4;

public:
	inline static int32_t get_offset_of_baseType_4() { return static_cast<int32_t>(offsetof(ConstructorCodeBuilder_t822167367, ___baseType_4)); }
	inline Type_t * get_baseType_4() const { return ___baseType_4; }
	inline Type_t ** get_address_of_baseType_4() { return &___baseType_4; }
	inline void set_baseType_4(Type_t * value)
	{
		___baseType_4 = value;
		Il2CppCodeGenWriteBarrier(&___baseType_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
