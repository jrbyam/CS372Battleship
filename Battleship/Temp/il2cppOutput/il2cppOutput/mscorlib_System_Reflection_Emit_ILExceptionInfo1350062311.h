﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Emit.ILExceptionBlock[]
struct ILExceptionBlockU5BU5D_t467433051;

#include "mscorlib_System_ValueType4014882752.h"
#include "mscorlib_System_Reflection_Emit_Label1734909569.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILExceptionInfo
struct  ILExceptionInfo_t1350062311 
{
public:
	// System.Reflection.Emit.ILExceptionBlock[] System.Reflection.Emit.ILExceptionInfo::handlers
	ILExceptionBlockU5BU5D_t467433051* ___handlers_0;
	// System.Int32 System.Reflection.Emit.ILExceptionInfo::start
	int32_t ___start_1;
	// System.Int32 System.Reflection.Emit.ILExceptionInfo::len
	int32_t ___len_2;
	// System.Reflection.Emit.Label System.Reflection.Emit.ILExceptionInfo::end
	Label_t1734909569  ___end_3;

public:
	inline static int32_t get_offset_of_handlers_0() { return static_cast<int32_t>(offsetof(ILExceptionInfo_t1350062311, ___handlers_0)); }
	inline ILExceptionBlockU5BU5D_t467433051* get_handlers_0() const { return ___handlers_0; }
	inline ILExceptionBlockU5BU5D_t467433051** get_address_of_handlers_0() { return &___handlers_0; }
	inline void set_handlers_0(ILExceptionBlockU5BU5D_t467433051* value)
	{
		___handlers_0 = value;
		Il2CppCodeGenWriteBarrier(&___handlers_0, value);
	}

	inline static int32_t get_offset_of_start_1() { return static_cast<int32_t>(offsetof(ILExceptionInfo_t1350062311, ___start_1)); }
	inline int32_t get_start_1() const { return ___start_1; }
	inline int32_t* get_address_of_start_1() { return &___start_1; }
	inline void set_start_1(int32_t value)
	{
		___start_1 = value;
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(ILExceptionInfo_t1350062311, ___len_2)); }
	inline int32_t get_len_2() const { return ___len_2; }
	inline int32_t* get_address_of_len_2() { return &___len_2; }
	inline void set_len_2(int32_t value)
	{
		___len_2 = value;
	}

	inline static int32_t get_offset_of_end_3() { return static_cast<int32_t>(offsetof(ILExceptionInfo_t1350062311, ___end_3)); }
	inline Label_t1734909569  get_end_3() const { return ___end_3; }
	inline Label_t1734909569 * get_address_of_end_3() { return &___end_3; }
	inline void set_end_3(Label_t1734909569  value)
	{
		___end_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
