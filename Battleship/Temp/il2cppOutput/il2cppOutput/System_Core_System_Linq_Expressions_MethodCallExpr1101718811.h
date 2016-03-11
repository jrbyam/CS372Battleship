#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Linq.Expressions.Expression
struct Expression_t647304412;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3810449760;

#include "System_Core_System_Linq_Expressions_Expression647304412.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MethodCallExpression
struct  MethodCallExpression_t1101718811  : public Expression_t647304412
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.MethodCallExpression::obj
	Expression_t647304412 * ___obj_2;
	// System.Reflection.MethodInfo System.Linq.Expressions.MethodCallExpression::method
	MethodInfo_t * ___method_3;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.MethodCallExpression::arguments
	ReadOnlyCollection_1_t3810449760 * ___arguments_4;

public:
	inline static int32_t get_offset_of_obj_2() { return static_cast<int32_t>(offsetof(MethodCallExpression_t1101718811, ___obj_2)); }
	inline Expression_t647304412 * get_obj_2() const { return ___obj_2; }
	inline Expression_t647304412 ** get_address_of_obj_2() { return &___obj_2; }
	inline void set_obj_2(Expression_t647304412 * value)
	{
		___obj_2 = value;
		Il2CppCodeGenWriteBarrier(&___obj_2, value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(MethodCallExpression_t1101718811, ___method_3)); }
	inline MethodInfo_t * get_method_3() const { return ___method_3; }
	inline MethodInfo_t ** get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(MethodInfo_t * value)
	{
		___method_3 = value;
		Il2CppCodeGenWriteBarrier(&___method_3, value);
	}

	inline static int32_t get_offset_of_arguments_4() { return static_cast<int32_t>(offsetof(MethodCallExpression_t1101718811, ___arguments_4)); }
	inline ReadOnlyCollection_1_t3810449760 * get_arguments_4() const { return ___arguments_4; }
	inline ReadOnlyCollection_1_t3810449760 ** get_address_of_arguments_4() { return &___arguments_4; }
	inline void set_arguments_4(ReadOnlyCollection_1_t3810449760 * value)
	{
		___arguments_4 = value;
		Il2CppCodeGenWriteBarrier(&___arguments_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
