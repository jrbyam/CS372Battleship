#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.ICollection`1<Castle.DynamicProxy.Generators.MetaMethod>
struct ICollection_1_t2755774451;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.TypeElementCollection`1<Castle.DynamicProxy.Generators.MetaMethod>
struct  TypeElementCollection_1_t4136108290  : public Il2CppObject
{
public:
	// System.Collections.Generic.ICollection`1<TElement> Castle.DynamicProxy.Generators.TypeElementCollection`1::items
	Il2CppObject* ___items_0;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(TypeElementCollection_1_t4136108290, ___items_0)); }
	inline Il2CppObject* get_items_0() const { return ___items_0; }
	inline Il2CppObject** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(Il2CppObject* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier(&___items_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
