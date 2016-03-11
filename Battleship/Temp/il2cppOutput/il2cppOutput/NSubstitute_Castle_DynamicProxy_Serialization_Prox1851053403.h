#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.ModuleScope
struct ModuleScope_t3833971791;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Object
struct Il2CppObject;
// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Serialization.ProxyObjectReference
struct  ProxyObjectReference_t1851053403  : public Il2CppObject
{
public:
	// System.Runtime.Serialization.SerializationInfo Castle.DynamicProxy.Serialization.ProxyObjectReference::info
	SerializationInfo_t2995724695 * ___info_1;
	// System.Runtime.Serialization.StreamingContext Castle.DynamicProxy.Serialization.ProxyObjectReference::context
	StreamingContext_t986364934  ___context_2;
	// System.Type Castle.DynamicProxy.Serialization.ProxyObjectReference::baseType
	Type_t * ___baseType_3;
	// System.Type[] Castle.DynamicProxy.Serialization.ProxyObjectReference::interfaces
	TypeU5BU5D_t3431720054* ___interfaces_4;
	// System.Object Castle.DynamicProxy.Serialization.ProxyObjectReference::proxy
	Il2CppObject * ___proxy_5;
	// Castle.DynamicProxy.ProxyGenerationOptions Castle.DynamicProxy.Serialization.ProxyObjectReference::proxyGenerationOptions
	ProxyGenerationOptions_t351299295 * ___proxyGenerationOptions_6;
	// System.Boolean Castle.DynamicProxy.Serialization.ProxyObjectReference::isInterfaceProxy
	bool ___isInterfaceProxy_7;
	// System.Boolean Castle.DynamicProxy.Serialization.ProxyObjectReference::delegateToBase
	bool ___delegateToBase_8;

public:
	inline static int32_t get_offset_of_info_1() { return static_cast<int32_t>(offsetof(ProxyObjectReference_t1851053403, ___info_1)); }
	inline SerializationInfo_t2995724695 * get_info_1() const { return ___info_1; }
	inline SerializationInfo_t2995724695 ** get_address_of_info_1() { return &___info_1; }
	inline void set_info_1(SerializationInfo_t2995724695 * value)
	{
		___info_1 = value;
		Il2CppCodeGenWriteBarrier(&___info_1, value);
	}

	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(ProxyObjectReference_t1851053403, ___context_2)); }
	inline StreamingContext_t986364934  get_context_2() const { return ___context_2; }
	inline StreamingContext_t986364934 * get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(StreamingContext_t986364934  value)
	{
		___context_2 = value;
	}

	inline static int32_t get_offset_of_baseType_3() { return static_cast<int32_t>(offsetof(ProxyObjectReference_t1851053403, ___baseType_3)); }
	inline Type_t * get_baseType_3() const { return ___baseType_3; }
	inline Type_t ** get_address_of_baseType_3() { return &___baseType_3; }
	inline void set_baseType_3(Type_t * value)
	{
		___baseType_3 = value;
		Il2CppCodeGenWriteBarrier(&___baseType_3, value);
	}

	inline static int32_t get_offset_of_interfaces_4() { return static_cast<int32_t>(offsetof(ProxyObjectReference_t1851053403, ___interfaces_4)); }
	inline TypeU5BU5D_t3431720054* get_interfaces_4() const { return ___interfaces_4; }
	inline TypeU5BU5D_t3431720054** get_address_of_interfaces_4() { return &___interfaces_4; }
	inline void set_interfaces_4(TypeU5BU5D_t3431720054* value)
	{
		___interfaces_4 = value;
		Il2CppCodeGenWriteBarrier(&___interfaces_4, value);
	}

	inline static int32_t get_offset_of_proxy_5() { return static_cast<int32_t>(offsetof(ProxyObjectReference_t1851053403, ___proxy_5)); }
	inline Il2CppObject * get_proxy_5() const { return ___proxy_5; }
	inline Il2CppObject ** get_address_of_proxy_5() { return &___proxy_5; }
	inline void set_proxy_5(Il2CppObject * value)
	{
		___proxy_5 = value;
		Il2CppCodeGenWriteBarrier(&___proxy_5, value);
	}

	inline static int32_t get_offset_of_proxyGenerationOptions_6() { return static_cast<int32_t>(offsetof(ProxyObjectReference_t1851053403, ___proxyGenerationOptions_6)); }
	inline ProxyGenerationOptions_t351299295 * get_proxyGenerationOptions_6() const { return ___proxyGenerationOptions_6; }
	inline ProxyGenerationOptions_t351299295 ** get_address_of_proxyGenerationOptions_6() { return &___proxyGenerationOptions_6; }
	inline void set_proxyGenerationOptions_6(ProxyGenerationOptions_t351299295 * value)
	{
		___proxyGenerationOptions_6 = value;
		Il2CppCodeGenWriteBarrier(&___proxyGenerationOptions_6, value);
	}

	inline static int32_t get_offset_of_isInterfaceProxy_7() { return static_cast<int32_t>(offsetof(ProxyObjectReference_t1851053403, ___isInterfaceProxy_7)); }
	inline bool get_isInterfaceProxy_7() const { return ___isInterfaceProxy_7; }
	inline bool* get_address_of_isInterfaceProxy_7() { return &___isInterfaceProxy_7; }
	inline void set_isInterfaceProxy_7(bool value)
	{
		___isInterfaceProxy_7 = value;
	}

	inline static int32_t get_offset_of_delegateToBase_8() { return static_cast<int32_t>(offsetof(ProxyObjectReference_t1851053403, ___delegateToBase_8)); }
	inline bool get_delegateToBase_8() const { return ___delegateToBase_8; }
	inline bool* get_address_of_delegateToBase_8() { return &___delegateToBase_8; }
	inline void set_delegateToBase_8(bool value)
	{
		___delegateToBase_8 = value;
	}
};

struct ProxyObjectReference_t1851053403_StaticFields
{
public:
	// Castle.DynamicProxy.ModuleScope Castle.DynamicProxy.Serialization.ProxyObjectReference::scope
	ModuleScope_t3833971791 * ___scope_0;

public:
	inline static int32_t get_offset_of_scope_0() { return static_cast<int32_t>(offsetof(ProxyObjectReference_t1851053403_StaticFields, ___scope_0)); }
	inline ModuleScope_t3833971791 * get_scope_0() const { return ___scope_0; }
	inline ModuleScope_t3833971791 ** get_address_of_scope_0() { return &___scope_0; }
	inline void set_scope_0(ModuleScope_t3833971791 * value)
	{
		___scope_0 = value;
		Il2CppCodeGenWriteBarrier(&___scope_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
