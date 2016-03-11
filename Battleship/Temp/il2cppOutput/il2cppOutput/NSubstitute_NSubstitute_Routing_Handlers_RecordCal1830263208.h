#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NSubstitute.Core.ICallStack
struct ICallStack_t3597222632;
// NSubstitute.Core.SequenceNumberGenerator
struct SequenceNumberGenerator_t2013183440;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Routing.Handlers.RecordCallHandler
struct  RecordCallHandler_t1830263208  : public Il2CppObject
{
public:
	// NSubstitute.Core.ICallStack NSubstitute.Routing.Handlers.RecordCallHandler::_callStack
	Il2CppObject * ____callStack_0;
	// NSubstitute.Core.SequenceNumberGenerator NSubstitute.Routing.Handlers.RecordCallHandler::_generator
	SequenceNumberGenerator_t2013183440 * ____generator_1;

public:
	inline static int32_t get_offset_of__callStack_0() { return static_cast<int32_t>(offsetof(RecordCallHandler_t1830263208, ____callStack_0)); }
	inline Il2CppObject * get__callStack_0() const { return ____callStack_0; }
	inline Il2CppObject ** get_address_of__callStack_0() { return &____callStack_0; }
	inline void set__callStack_0(Il2CppObject * value)
	{
		____callStack_0 = value;
		Il2CppCodeGenWriteBarrier(&____callStack_0, value);
	}

	inline static int32_t get_offset_of__generator_1() { return static_cast<int32_t>(offsetof(RecordCallHandler_t1830263208, ____generator_1)); }
	inline SequenceNumberGenerator_t2013183440 * get__generator_1() const { return ____generator_1; }
	inline SequenceNumberGenerator_t2013183440 ** get_address_of__generator_1() { return &____generator_1; }
	inline void set__generator_1(SequenceNumberGenerator_t2013183440 * value)
	{
		____generator_1 = value;
		Il2CppCodeGenWriteBarrier(&____generator_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
