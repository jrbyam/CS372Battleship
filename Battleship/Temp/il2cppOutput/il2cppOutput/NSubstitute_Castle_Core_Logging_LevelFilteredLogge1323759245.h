#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_MarshalByRefObject2055500882.h"
#include "NSubstitute_Castle_Core_Logging_LoggerLevel4090103606.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.Core.Logging.LevelFilteredLogger
struct  LevelFilteredLogger_t1323759245  : public MarshalByRefObject_t2055500882
{
public:
	// Castle.Core.Logging.LoggerLevel Castle.Core.Logging.LevelFilteredLogger::level
	int32_t ___level_1;
	// System.String Castle.Core.Logging.LevelFilteredLogger::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_level_1() { return static_cast<int32_t>(offsetof(LevelFilteredLogger_t1323759245, ___level_1)); }
	inline int32_t get_level_1() const { return ___level_1; }
	inline int32_t* get_address_of_level_1() { return &___level_1; }
	inline void set_level_1(int32_t value)
	{
		___level_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(LevelFilteredLogger_t1323759245, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
