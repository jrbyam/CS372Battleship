#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;
// System.Collections.Generic.IList`1<System.Attribute>
struct IList_1_t2665185963;
// System.Collections.Generic.IList`1<System.Reflection.Emit.CustomAttributeBuilder>
struct IList_1_t2729413463;
// Castle.DynamicProxy.MixinData
struct MixinData_t2184984786;
// Castle.DynamicProxy.IProxyGenerationHook
struct IProxyGenerationHook_t479444615;
// Castle.DynamicProxy.IInterceptorSelector
struct IInterceptorSelector_t111911746;
// System.Type
struct Type_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.ProxyGenerationOptions
struct  ProxyGenerationOptions_t351299295  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.Object> Castle.DynamicProxy.ProxyGenerationOptions::mixins
	List_1_t1634065389 * ___mixins_1;
	// System.Collections.Generic.IList`1<System.Attribute> Castle.DynamicProxy.ProxyGenerationOptions::attributesToAddToGeneratedTypes
	Il2CppObject* ___attributesToAddToGeneratedTypes_2;
	// System.Collections.Generic.IList`1<System.Reflection.Emit.CustomAttributeBuilder> Castle.DynamicProxy.ProxyGenerationOptions::additionalAttributes
	Il2CppObject* ___additionalAttributes_3;
	// Castle.DynamicProxy.MixinData Castle.DynamicProxy.ProxyGenerationOptions::mixinData
	MixinData_t2184984786 * ___mixinData_4;
	// Castle.DynamicProxy.IProxyGenerationHook Castle.DynamicProxy.ProxyGenerationOptions::<Hook>k__BackingField
	Il2CppObject * ___U3CHookU3Ek__BackingField_5;
	// Castle.DynamicProxy.IInterceptorSelector Castle.DynamicProxy.ProxyGenerationOptions::<Selector>k__BackingField
	Il2CppObject * ___U3CSelectorU3Ek__BackingField_6;
	// System.Type Castle.DynamicProxy.ProxyGenerationOptions::<BaseTypeForInterfaceProxy>k__BackingField
	Type_t * ___U3CBaseTypeForInterfaceProxyU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_mixins_1() { return static_cast<int32_t>(offsetof(ProxyGenerationOptions_t351299295, ___mixins_1)); }
	inline List_1_t1634065389 * get_mixins_1() const { return ___mixins_1; }
	inline List_1_t1634065389 ** get_address_of_mixins_1() { return &___mixins_1; }
	inline void set_mixins_1(List_1_t1634065389 * value)
	{
		___mixins_1 = value;
		Il2CppCodeGenWriteBarrier(&___mixins_1, value);
	}

	inline static int32_t get_offset_of_attributesToAddToGeneratedTypes_2() { return static_cast<int32_t>(offsetof(ProxyGenerationOptions_t351299295, ___attributesToAddToGeneratedTypes_2)); }
	inline Il2CppObject* get_attributesToAddToGeneratedTypes_2() const { return ___attributesToAddToGeneratedTypes_2; }
	inline Il2CppObject** get_address_of_attributesToAddToGeneratedTypes_2() { return &___attributesToAddToGeneratedTypes_2; }
	inline void set_attributesToAddToGeneratedTypes_2(Il2CppObject* value)
	{
		___attributesToAddToGeneratedTypes_2 = value;
		Il2CppCodeGenWriteBarrier(&___attributesToAddToGeneratedTypes_2, value);
	}

	inline static int32_t get_offset_of_additionalAttributes_3() { return static_cast<int32_t>(offsetof(ProxyGenerationOptions_t351299295, ___additionalAttributes_3)); }
	inline Il2CppObject* get_additionalAttributes_3() const { return ___additionalAttributes_3; }
	inline Il2CppObject** get_address_of_additionalAttributes_3() { return &___additionalAttributes_3; }
	inline void set_additionalAttributes_3(Il2CppObject* value)
	{
		___additionalAttributes_3 = value;
		Il2CppCodeGenWriteBarrier(&___additionalAttributes_3, value);
	}

	inline static int32_t get_offset_of_mixinData_4() { return static_cast<int32_t>(offsetof(ProxyGenerationOptions_t351299295, ___mixinData_4)); }
	inline MixinData_t2184984786 * get_mixinData_4() const { return ___mixinData_4; }
	inline MixinData_t2184984786 ** get_address_of_mixinData_4() { return &___mixinData_4; }
	inline void set_mixinData_4(MixinData_t2184984786 * value)
	{
		___mixinData_4 = value;
		Il2CppCodeGenWriteBarrier(&___mixinData_4, value);
	}

	inline static int32_t get_offset_of_U3CHookU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ProxyGenerationOptions_t351299295, ___U3CHookU3Ek__BackingField_5)); }
	inline Il2CppObject * get_U3CHookU3Ek__BackingField_5() const { return ___U3CHookU3Ek__BackingField_5; }
	inline Il2CppObject ** get_address_of_U3CHookU3Ek__BackingField_5() { return &___U3CHookU3Ek__BackingField_5; }
	inline void set_U3CHookU3Ek__BackingField_5(Il2CppObject * value)
	{
		___U3CHookU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CHookU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CSelectorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ProxyGenerationOptions_t351299295, ___U3CSelectorU3Ek__BackingField_6)); }
	inline Il2CppObject * get_U3CSelectorU3Ek__BackingField_6() const { return ___U3CSelectorU3Ek__BackingField_6; }
	inline Il2CppObject ** get_address_of_U3CSelectorU3Ek__BackingField_6() { return &___U3CSelectorU3Ek__BackingField_6; }
	inline void set_U3CSelectorU3Ek__BackingField_6(Il2CppObject * value)
	{
		___U3CSelectorU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSelectorU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3CBaseTypeForInterfaceProxyU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ProxyGenerationOptions_t351299295, ___U3CBaseTypeForInterfaceProxyU3Ek__BackingField_7)); }
	inline Type_t * get_U3CBaseTypeForInterfaceProxyU3Ek__BackingField_7() const { return ___U3CBaseTypeForInterfaceProxyU3Ek__BackingField_7; }
	inline Type_t ** get_address_of_U3CBaseTypeForInterfaceProxyU3Ek__BackingField_7() { return &___U3CBaseTypeForInterfaceProxyU3Ek__BackingField_7; }
	inline void set_U3CBaseTypeForInterfaceProxyU3Ek__BackingField_7(Type_t * value)
	{
		___U3CBaseTypeForInterfaceProxyU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CBaseTypeForInterfaceProxyU3Ek__BackingField_7, value);
	}
};

struct ProxyGenerationOptions_t351299295_StaticFields
{
public:
	// Castle.DynamicProxy.ProxyGenerationOptions Castle.DynamicProxy.ProxyGenerationOptions::Default
	ProxyGenerationOptions_t351299295 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ProxyGenerationOptions_t351299295_StaticFields, ___Default_0)); }
	inline ProxyGenerationOptions_t351299295 * get_Default_0() const { return ___Default_0; }
	inline ProxyGenerationOptions_t351299295 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ProxyGenerationOptions_t351299295 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier(&___Default_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
