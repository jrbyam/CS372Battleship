#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NSubstitute.Core.IPropertyHelper
struct IPropertyHelper_t3577953523;
// NSubstitute.Core.IConfigureCall
struct IConfigureCall_t3922690;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Routing.Handlers.PropertySetterHandler
struct  PropertySetterHandler_t324944291  : public Il2CppObject
{
public:
	// NSubstitute.Core.IPropertyHelper NSubstitute.Routing.Handlers.PropertySetterHandler::_propertyHelper
	Il2CppObject * ____propertyHelper_0;
	// NSubstitute.Core.IConfigureCall NSubstitute.Routing.Handlers.PropertySetterHandler::ConfigureCall
	Il2CppObject * ___ConfigureCall_1;

public:
	inline static int32_t get_offset_of__propertyHelper_0() { return static_cast<int32_t>(offsetof(PropertySetterHandler_t324944291, ____propertyHelper_0)); }
	inline Il2CppObject * get__propertyHelper_0() const { return ____propertyHelper_0; }
	inline Il2CppObject ** get_address_of__propertyHelper_0() { return &____propertyHelper_0; }
	inline void set__propertyHelper_0(Il2CppObject * value)
	{
		____propertyHelper_0 = value;
		Il2CppCodeGenWriteBarrier(&____propertyHelper_0, value);
	}

	inline static int32_t get_offset_of_ConfigureCall_1() { return static_cast<int32_t>(offsetof(PropertySetterHandler_t324944291, ___ConfigureCall_1)); }
	inline Il2CppObject * get_ConfigureCall_1() const { return ___ConfigureCall_1; }
	inline Il2CppObject ** get_address_of_ConfigureCall_1() { return &___ConfigureCall_1; }
	inline void set_ConfigureCall_1(Il2CppObject * value)
	{
		___ConfigureCall_1 = value;
		Il2CppCodeGenWriteBarrier(&___ConfigureCall_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
