#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Diagnostics.Switch
struct Switch_t1343242899;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Diagnostics.Switch::.ctor(System.String,System.String)
extern "C"  void Switch__ctor_m3284789865 (Switch_t1343242899 * __this, String_t* ___displayName, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Switch::.ctor(System.String,System.String,System.String)
extern "C"  void Switch__ctor_m1788880613 (Switch_t1343242899 * __this, String_t* ___displayName, String_t* ___description, String_t* ___defaultSwitchValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.Switch::get_DisplayName()
extern "C"  String_t* Switch_get_DisplayName_m4179887802 (Switch_t1343242899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Switch::get_SwitchSetting()
extern "C"  int32_t Switch_get_SwitchSetting_m3328204054 (Switch_t1343242899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Switch::set_SwitchSetting(System.Int32)
extern "C"  void Switch_set_SwitchSetting_m321636419 (Switch_t1343242899 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.Switch::get_Value()
extern "C"  String_t* Switch_get_Value_m3075860926 (Switch_t1343242899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Switch::OnValueChanged()
extern "C"  void Switch_OnValueChanged_m3648238577 (Switch_t1343242899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Switch::GetConfigFileSetting()
extern "C"  void Switch_GetConfigFileSetting_m567374667 (Switch_t1343242899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Switch::OnSwitchSettingChanged()
extern "C"  void Switch_OnSwitchSettingChanged_m2889701446 (Switch_t1343242899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
