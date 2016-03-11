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

#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters707291260.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.NewArrayExpression
struct  NewArrayExpression_t2728973813  : public Expression_t707291260
{
public:
	// System.Type Castle.DynamicProxy.Generators.Emitters.SimpleAST.NewArrayExpression::arrayType
	Type_t * ___arrayType_0;
	// System.Int32 Castle.DynamicProxy.Generators.Emitters.SimpleAST.NewArrayExpression::size
	int32_t ___size_1;

public:
	inline static int32_t get_offset_of_arrayType_0() { return static_cast<int32_t>(offsetof(NewArrayExpression_t2728973813, ___arrayType_0)); }
	inline Type_t * get_arrayType_0() const { return ___arrayType_0; }
	inline Type_t ** get_address_of_arrayType_0() { return &___arrayType_0; }
	inline void set_arrayType_0(Type_t * value)
	{
		___arrayType_0 = value;
		Il2CppCodeGenWriteBarrier(&___arrayType_0, value);
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(NewArrayExpression_t2728973813, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
