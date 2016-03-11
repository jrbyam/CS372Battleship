#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Linq.Expressions.EmitContext
struct EmitContext_t3183126624;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1133177622;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberExpression/<Emit>c__AnonStorey27
struct  U3CEmitU3Ec__AnonStorey27_t3485557309  : public Il2CppObject
{
public:
	// System.Linq.Expressions.EmitContext System.Linq.Expressions.MemberExpression/<Emit>c__AnonStorey27::ec
	EmitContext_t3183126624 * ___ec_0;
	// System.Linq.Expressions.MemberExpression System.Linq.Expressions.MemberExpression/<Emit>c__AnonStorey27::<>f__this
	MemberExpression_t1133177622 * ___U3CU3Ef__this_1;

public:
	inline static int32_t get_offset_of_ec_0() { return static_cast<int32_t>(offsetof(U3CEmitU3Ec__AnonStorey27_t3485557309, ___ec_0)); }
	inline EmitContext_t3183126624 * get_ec_0() const { return ___ec_0; }
	inline EmitContext_t3183126624 ** get_address_of_ec_0() { return &___ec_0; }
	inline void set_ec_0(EmitContext_t3183126624 * value)
	{
		___ec_0 = value;
		Il2CppCodeGenWriteBarrier(&___ec_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_1() { return static_cast<int32_t>(offsetof(U3CEmitU3Ec__AnonStorey27_t3485557309, ___U3CU3Ef__this_1)); }
	inline MemberExpression_t1133177622 * get_U3CU3Ef__this_1() const { return ___U3CU3Ef__this_1; }
	inline MemberExpression_t1133177622 ** get_address_of_U3CU3Ef__this_1() { return &___U3CU3Ef__this_1; }
	inline void set_U3CU3Ef__this_1(MemberExpression_t1133177622 * value)
	{
		___U3CU3Ef__this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
