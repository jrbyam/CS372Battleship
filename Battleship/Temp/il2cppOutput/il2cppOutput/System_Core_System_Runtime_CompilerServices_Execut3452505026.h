#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Linq.Expressions.CompilationContext
struct CompilationContext_t1096990896;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ExecutionScope
struct  ExecutionScope_t3452505026  : public Il2CppObject
{
public:
	// System.Object[] System.Runtime.CompilerServices.ExecutionScope::Globals
	ObjectU5BU5D_t11523773* ___Globals_0;
	// System.Linq.Expressions.CompilationContext System.Runtime.CompilerServices.ExecutionScope::context
	CompilationContext_t1096990896 * ___context_1;
	// System.Int32 System.Runtime.CompilerServices.ExecutionScope::compilation_unit
	int32_t ___compilation_unit_2;

public:
	inline static int32_t get_offset_of_Globals_0() { return static_cast<int32_t>(offsetof(ExecutionScope_t3452505026, ___Globals_0)); }
	inline ObjectU5BU5D_t11523773* get_Globals_0() const { return ___Globals_0; }
	inline ObjectU5BU5D_t11523773** get_address_of_Globals_0() { return &___Globals_0; }
	inline void set_Globals_0(ObjectU5BU5D_t11523773* value)
	{
		___Globals_0 = value;
		Il2CppCodeGenWriteBarrier(&___Globals_0, value);
	}

	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(ExecutionScope_t3452505026, ___context_1)); }
	inline CompilationContext_t1096990896 * get_context_1() const { return ___context_1; }
	inline CompilationContext_t1096990896 ** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(CompilationContext_t1096990896 * value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier(&___context_1, value);
	}

	inline static int32_t get_offset_of_compilation_unit_2() { return static_cast<int32_t>(offsetof(ExecutionScope_t3452505026, ___compilation_unit_2)); }
	inline int32_t get_compilation_unit_2() const { return ___compilation_unit_2; }
	inline int32_t* get_address_of_compilation_unit_2() { return &___compilation_unit_2; }
	inline void set_compilation_unit_2(int32_t value)
	{
		___compilation_unit_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
