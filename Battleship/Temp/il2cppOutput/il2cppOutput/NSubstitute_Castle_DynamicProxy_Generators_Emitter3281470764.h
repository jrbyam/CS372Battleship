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
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ConstReference
struct ConstReference_t3369897228;

#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters707291260.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.LoadRefArrayElementExpression
struct  LoadRefArrayElementExpression_t3281470764  : public Expression_t707291260
{
public:
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference Castle.DynamicProxy.Generators.Emitters.SimpleAST.LoadRefArrayElementExpression::arrayReference
	Reference_t1588091119 * ___arrayReference_0;
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ConstReference Castle.DynamicProxy.Generators.Emitters.SimpleAST.LoadRefArrayElementExpression::index
	ConstReference_t3369897228 * ___index_1;

public:
	inline static int32_t get_offset_of_arrayReference_0() { return static_cast<int32_t>(offsetof(LoadRefArrayElementExpression_t3281470764, ___arrayReference_0)); }
	inline Reference_t1588091119 * get_arrayReference_0() const { return ___arrayReference_0; }
	inline Reference_t1588091119 ** get_address_of_arrayReference_0() { return &___arrayReference_0; }
	inline void set_arrayReference_0(Reference_t1588091119 * value)
	{
		___arrayReference_0 = value;
		Il2CppCodeGenWriteBarrier(&___arrayReference_0, value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(LoadRefArrayElementExpression_t3281470764, ___index_1)); }
	inline ConstReference_t3369897228 * get_index_1() const { return ___index_1; }
	inline ConstReference_t3369897228 ** get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(ConstReference_t3369897228 * value)
	{
		___index_1 = value;
		Il2CppCodeGenWriteBarrier(&___index_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
