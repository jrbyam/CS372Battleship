#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression
struct Expression_t707291260;

#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters428098323.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.AssignArrayStatement
struct  AssignArrayStatement_t3967096777  : public Statement_t428098323
{
public:
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference Castle.DynamicProxy.Generators.Emitters.SimpleAST.AssignArrayStatement::targetArray
	Reference_t1588091119 * ___targetArray_0;
	// System.Int32 Castle.DynamicProxy.Generators.Emitters.SimpleAST.AssignArrayStatement::targetPosition
	int32_t ___targetPosition_1;
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Generators.Emitters.SimpleAST.AssignArrayStatement::value
	Expression_t707291260 * ___value_2;

public:
	inline static int32_t get_offset_of_targetArray_0() { return static_cast<int32_t>(offsetof(AssignArrayStatement_t3967096777, ___targetArray_0)); }
	inline Reference_t1588091119 * get_targetArray_0() const { return ___targetArray_0; }
	inline Reference_t1588091119 ** get_address_of_targetArray_0() { return &___targetArray_0; }
	inline void set_targetArray_0(Reference_t1588091119 * value)
	{
		___targetArray_0 = value;
		Il2CppCodeGenWriteBarrier(&___targetArray_0, value);
	}

	inline static int32_t get_offset_of_targetPosition_1() { return static_cast<int32_t>(offsetof(AssignArrayStatement_t3967096777, ___targetPosition_1)); }
	inline int32_t get_targetPosition_1() const { return ___targetPosition_1; }
	inline int32_t* get_address_of_targetPosition_1() { return &___targetPosition_1; }
	inline void set_targetPosition_1(int32_t value)
	{
		___targetPosition_1 = value;
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(AssignArrayStatement_t3967096777, ___value_2)); }
	inline Expression_t707291260 * get_value_2() const { return ___value_2; }
	inline Expression_t707291260 ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(Expression_t707291260 * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier(&___value_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
