#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.AlignmentUnion
#pragma pack(push, tp, 1)
struct  AlignmentUnion_t3476184838 
{
public:
	union
	{
		struct
		{
			// System.UInt64 System.Net.NetworkInformation.AlignmentUnion::Alignment
			uint64_t ___Alignment_0;
		};
		struct
		{
			// System.Int32 System.Net.NetworkInformation.AlignmentUnion::Length
			int32_t ___Length_1;
		};
		struct
		{
			char ___IfIndex_2_OffsetPadding[4];
			// System.Int32 System.Net.NetworkInformation.AlignmentUnion::IfIndex
			int32_t ___IfIndex_2;
		};
	};

public:
	inline static int32_t get_offset_of_Alignment_0() { return static_cast<int32_t>(offsetof(AlignmentUnion_t3476184838, ___Alignment_0)); }
	inline uint64_t get_Alignment_0() const { return ___Alignment_0; }
	inline uint64_t* get_address_of_Alignment_0() { return &___Alignment_0; }
	inline void set_Alignment_0(uint64_t value)
	{
		___Alignment_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(AlignmentUnion_t3476184838, ___Length_1)); }
	inline int32_t get_Length_1() const { return ___Length_1; }
	inline int32_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int32_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_IfIndex_2() { return static_cast<int32_t>(offsetof(AlignmentUnion_t3476184838, ___IfIndex_2)); }
	inline int32_t get_IfIndex_2() const { return ___IfIndex_2; }
	inline int32_t* get_address_of_IfIndex_2() { return &___IfIndex_2; }
	inline void set_IfIndex_2(int32_t value)
	{
		___IfIndex_2 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Net.NetworkInformation.AlignmentUnion
#pragma pack(push, tp, 1)
struct AlignmentUnion_t3476184838_marshaled
{
	union
	{
		struct
		{
			uint64_t ___Alignment_0;
		};
		struct
		{
			int32_t ___Length_1;
		};
		struct
		{
			char ___IfIndex_2_OffsetPadding[4];
			int32_t ___IfIndex_2;
		};
	};
};
#pragma pack(pop, tp)
