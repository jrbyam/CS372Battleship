#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.Emit.FieldBuilder
struct FieldBuilder_t2184649998;

#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter1588091119.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference
struct  FieldReference_t994901333  : public Reference_t1588091119
{
public:
	// System.Reflection.FieldInfo Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference::field
	FieldInfo_t * ___field_1;
	// System.Reflection.Emit.FieldBuilder Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference::fieldbuilder
	FieldBuilder_t2184649998 * ___fieldbuilder_2;
	// System.Boolean Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference::isStatic
	bool ___isStatic_3;

public:
	inline static int32_t get_offset_of_field_1() { return static_cast<int32_t>(offsetof(FieldReference_t994901333, ___field_1)); }
	inline FieldInfo_t * get_field_1() const { return ___field_1; }
	inline FieldInfo_t ** get_address_of_field_1() { return &___field_1; }
	inline void set_field_1(FieldInfo_t * value)
	{
		___field_1 = value;
		Il2CppCodeGenWriteBarrier(&___field_1, value);
	}

	inline static int32_t get_offset_of_fieldbuilder_2() { return static_cast<int32_t>(offsetof(FieldReference_t994901333, ___fieldbuilder_2)); }
	inline FieldBuilder_t2184649998 * get_fieldbuilder_2() const { return ___fieldbuilder_2; }
	inline FieldBuilder_t2184649998 ** get_address_of_fieldbuilder_2() { return &___fieldbuilder_2; }
	inline void set_fieldbuilder_2(FieldBuilder_t2184649998 * value)
	{
		___fieldbuilder_2 = value;
		Il2CppCodeGenWriteBarrier(&___fieldbuilder_2, value);
	}

	inline static int32_t get_offset_of_isStatic_3() { return static_cast<int32_t>(offsetof(FieldReference_t994901333, ___isStatic_3)); }
	inline bool get_isStatic_3() const { return ___isStatic_3; }
	inline bool* get_address_of_isStatic_3() { return &___isStatic_3; }
	inline void set_isStatic_3(bool value)
	{
		___isStatic_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
