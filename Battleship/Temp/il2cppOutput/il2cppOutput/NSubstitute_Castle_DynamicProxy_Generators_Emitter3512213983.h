#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;
// System.Collections.Generic.List`1<Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference>
struct List_1_t2385050088;
// System.Collections.Generic.List`1<Castle.DynamicProxy.Generators.Emitters.SimpleAST.Statement>
struct List_1_t1225057292;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.CodeBuilders.AbstractCodeBuilder
struct  AbstractCodeBuilder_t3512213983  : public Il2CppObject
{
public:
	// System.Reflection.Emit.ILGenerator Castle.DynamicProxy.Generators.Emitters.CodeBuilders.AbstractCodeBuilder::generator
	ILGenerator_t3869071517 * ___generator_0;
	// System.Collections.Generic.List`1<Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference> Castle.DynamicProxy.Generators.Emitters.CodeBuilders.AbstractCodeBuilder::ilmarkers
	List_1_t2385050088 * ___ilmarkers_1;
	// System.Collections.Generic.List`1<Castle.DynamicProxy.Generators.Emitters.SimpleAST.Statement> Castle.DynamicProxy.Generators.Emitters.CodeBuilders.AbstractCodeBuilder::stmts
	List_1_t1225057292 * ___stmts_2;
	// System.Boolean Castle.DynamicProxy.Generators.Emitters.CodeBuilders.AbstractCodeBuilder::isEmpty
	bool ___isEmpty_3;

public:
	inline static int32_t get_offset_of_generator_0() { return static_cast<int32_t>(offsetof(AbstractCodeBuilder_t3512213983, ___generator_0)); }
	inline ILGenerator_t3869071517 * get_generator_0() const { return ___generator_0; }
	inline ILGenerator_t3869071517 ** get_address_of_generator_0() { return &___generator_0; }
	inline void set_generator_0(ILGenerator_t3869071517 * value)
	{
		___generator_0 = value;
		Il2CppCodeGenWriteBarrier(&___generator_0, value);
	}

	inline static int32_t get_offset_of_ilmarkers_1() { return static_cast<int32_t>(offsetof(AbstractCodeBuilder_t3512213983, ___ilmarkers_1)); }
	inline List_1_t2385050088 * get_ilmarkers_1() const { return ___ilmarkers_1; }
	inline List_1_t2385050088 ** get_address_of_ilmarkers_1() { return &___ilmarkers_1; }
	inline void set_ilmarkers_1(List_1_t2385050088 * value)
	{
		___ilmarkers_1 = value;
		Il2CppCodeGenWriteBarrier(&___ilmarkers_1, value);
	}

	inline static int32_t get_offset_of_stmts_2() { return static_cast<int32_t>(offsetof(AbstractCodeBuilder_t3512213983, ___stmts_2)); }
	inline List_1_t1225057292 * get_stmts_2() const { return ___stmts_2; }
	inline List_1_t1225057292 ** get_address_of_stmts_2() { return &___stmts_2; }
	inline void set_stmts_2(List_1_t1225057292 * value)
	{
		___stmts_2 = value;
		Il2CppCodeGenWriteBarrier(&___stmts_2, value);
	}

	inline static int32_t get_offset_of_isEmpty_3() { return static_cast<int32_t>(offsetof(AbstractCodeBuilder_t3512213983, ___isEmpty_3)); }
	inline bool get_isEmpty_3() const { return ___isEmpty_3; }
	inline bool* get_address_of_isEmpty_3() { return &___isEmpty_3; }
	inline void set_isEmpty_3(bool value)
	{
		___isEmpty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
