﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_SystemException3155420757.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.BadImageFormatException
struct  BadImageFormatException_t560515671  : public SystemException_t3155420757
{
public:
	// System.String System.BadImageFormatException::fileName
	String_t* ___fileName_11;
	// System.String System.BadImageFormatException::fusionLog
	String_t* ___fusionLog_12;

public:
	inline static int32_t get_offset_of_fileName_11() { return static_cast<int32_t>(offsetof(BadImageFormatException_t560515671, ___fileName_11)); }
	inline String_t* get_fileName_11() const { return ___fileName_11; }
	inline String_t** get_address_of_fileName_11() { return &___fileName_11; }
	inline void set_fileName_11(String_t* value)
	{
		___fileName_11 = value;
		Il2CppCodeGenWriteBarrier(&___fileName_11, value);
	}

	inline static int32_t get_offset_of_fusionLog_12() { return static_cast<int32_t>(offsetof(BadImageFormatException_t560515671, ___fusionLog_12)); }
	inline String_t* get_fusionLog_12() const { return ___fusionLog_12; }
	inline String_t** get_address_of_fusionLog_12() { return &___fusionLog_12; }
	inline void set_fusionLog_12(String_t* value)
	{
		___fusionLog_12 = value;
		Il2CppCodeGenWriteBarrier(&___fusionLog_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif