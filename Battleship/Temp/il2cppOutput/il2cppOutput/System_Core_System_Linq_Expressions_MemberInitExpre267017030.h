#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Linq.Expressions.NewExpression
struct NewExpression_t300312156;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>
struct ReadOnlyCollection_1_t2774078739;

#include "System_Core_System_Linq_Expressions_Expression647304412.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberInitExpression
struct  MemberInitExpression_t267017030  : public Expression_t647304412
{
public:
	// System.Linq.Expressions.NewExpression System.Linq.Expressions.MemberInitExpression::new_expression
	NewExpression_t300312156 * ___new_expression_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding> System.Linq.Expressions.MemberInitExpression::bindings
	ReadOnlyCollection_1_t2774078739 * ___bindings_3;

public:
	inline static int32_t get_offset_of_new_expression_2() { return static_cast<int32_t>(offsetof(MemberInitExpression_t267017030, ___new_expression_2)); }
	inline NewExpression_t300312156 * get_new_expression_2() const { return ___new_expression_2; }
	inline NewExpression_t300312156 ** get_address_of_new_expression_2() { return &___new_expression_2; }
	inline void set_new_expression_2(NewExpression_t300312156 * value)
	{
		___new_expression_2 = value;
		Il2CppCodeGenWriteBarrier(&___new_expression_2, value);
	}

	inline static int32_t get_offset_of_bindings_3() { return static_cast<int32_t>(offsetof(MemberInitExpression_t267017030, ___bindings_3)); }
	inline ReadOnlyCollection_1_t2774078739 * get_bindings_3() const { return ___bindings_3; }
	inline ReadOnlyCollection_1_t2774078739 ** get_address_of_bindings_3() { return &___bindings_3; }
	inline void set_bindings_3(ReadOnlyCollection_1_t2774078739 * value)
	{
		___bindings_3 = value;
		Il2CppCodeGenWriteBarrier(&___bindings_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
