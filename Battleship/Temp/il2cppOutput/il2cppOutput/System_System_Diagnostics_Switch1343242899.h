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
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t2792775730;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Switch
struct  Switch_t1343242899  : public Il2CppObject
{
public:
	// System.String System.Diagnostics.Switch::name
	String_t* ___name_0;
	// System.String System.Diagnostics.Switch::description
	String_t* ___description_1;
	// System.Int32 System.Diagnostics.Switch::switchSetting
	int32_t ___switchSetting_2;
	// System.String System.Diagnostics.Switch::value
	String_t* ___value_3;
	// System.String System.Diagnostics.Switch::defaultSwitchValue
	String_t* ___defaultSwitchValue_4;
	// System.Boolean System.Diagnostics.Switch::initialized
	bool ___initialized_5;
	// System.Collections.Specialized.StringDictionary System.Diagnostics.Switch::attributes
	StringDictionary_t2792775730 * ___attributes_6;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Switch_t1343242899, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(Switch_t1343242899, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier(&___description_1, value);
	}

	inline static int32_t get_offset_of_switchSetting_2() { return static_cast<int32_t>(offsetof(Switch_t1343242899, ___switchSetting_2)); }
	inline int32_t get_switchSetting_2() const { return ___switchSetting_2; }
	inline int32_t* get_address_of_switchSetting_2() { return &___switchSetting_2; }
	inline void set_switchSetting_2(int32_t value)
	{
		___switchSetting_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(Switch_t1343242899, ___value_3)); }
	inline String_t* get_value_3() const { return ___value_3; }
	inline String_t** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(String_t* value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier(&___value_3, value);
	}

	inline static int32_t get_offset_of_defaultSwitchValue_4() { return static_cast<int32_t>(offsetof(Switch_t1343242899, ___defaultSwitchValue_4)); }
	inline String_t* get_defaultSwitchValue_4() const { return ___defaultSwitchValue_4; }
	inline String_t** get_address_of_defaultSwitchValue_4() { return &___defaultSwitchValue_4; }
	inline void set_defaultSwitchValue_4(String_t* value)
	{
		___defaultSwitchValue_4 = value;
		Il2CppCodeGenWriteBarrier(&___defaultSwitchValue_4, value);
	}

	inline static int32_t get_offset_of_initialized_5() { return static_cast<int32_t>(offsetof(Switch_t1343242899, ___initialized_5)); }
	inline bool get_initialized_5() const { return ___initialized_5; }
	inline bool* get_address_of_initialized_5() { return &___initialized_5; }
	inline void set_initialized_5(bool value)
	{
		___initialized_5 = value;
	}

	inline static int32_t get_offset_of_attributes_6() { return static_cast<int32_t>(offsetof(Switch_t1343242899, ___attributes_6)); }
	inline StringDictionary_t2792775730 * get_attributes_6() const { return ___attributes_6; }
	inline StringDictionary_t2792775730 ** get_address_of_attributes_6() { return &___attributes_6; }
	inline void set_attributes_6(StringDictionary_t2792775730 * value)
	{
		___attributes_6 = value;
		Il2CppCodeGenWriteBarrier(&___attributes_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
