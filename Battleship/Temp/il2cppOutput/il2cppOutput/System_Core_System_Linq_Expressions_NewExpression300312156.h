#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3810449760;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo>
struct ReadOnlyCollection_1_t1711211866;

#include "System_Core_System_Linq_Expressions_Expression647304412.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.NewExpression
struct  NewExpression_t300312156  : public Expression_t647304412
{
public:
	// System.Reflection.ConstructorInfo System.Linq.Expressions.NewExpression::constructor
	ConstructorInfo_t3542137334 * ___constructor_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewExpression::arguments
	ReadOnlyCollection_1_t3810449760 * ___arguments_3;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo> System.Linq.Expressions.NewExpression::members
	ReadOnlyCollection_1_t1711211866 * ___members_4;

public:
	inline static int32_t get_offset_of_constructor_2() { return static_cast<int32_t>(offsetof(NewExpression_t300312156, ___constructor_2)); }
	inline ConstructorInfo_t3542137334 * get_constructor_2() const { return ___constructor_2; }
	inline ConstructorInfo_t3542137334 ** get_address_of_constructor_2() { return &___constructor_2; }
	inline void set_constructor_2(ConstructorInfo_t3542137334 * value)
	{
		___constructor_2 = value;
		Il2CppCodeGenWriteBarrier(&___constructor_2, value);
	}

	inline static int32_t get_offset_of_arguments_3() { return static_cast<int32_t>(offsetof(NewExpression_t300312156, ___arguments_3)); }
	inline ReadOnlyCollection_1_t3810449760 * get_arguments_3() const { return ___arguments_3; }
	inline ReadOnlyCollection_1_t3810449760 ** get_address_of_arguments_3() { return &___arguments_3; }
	inline void set_arguments_3(ReadOnlyCollection_1_t3810449760 * value)
	{
		___arguments_3 = value;
		Il2CppCodeGenWriteBarrier(&___arguments_3, value);
	}

	inline static int32_t get_offset_of_members_4() { return static_cast<int32_t>(offsetof(NewExpression_t300312156, ___members_4)); }
	inline ReadOnlyCollection_1_t1711211866 * get_members_4() const { return ___members_4; }
	inline ReadOnlyCollection_1_t1711211866 ** get_address_of_members_4() { return &___members_4; }
	inline void set_members_4(ReadOnlyCollection_1_t1711211866 * value)
	{
		___members_4 = value;
		Il2CppCodeGenWriteBarrier(&___members_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
