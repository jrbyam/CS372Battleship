#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// System.Collections.Generic.IList`1<Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference>
struct IList_1_t3161393647;

#include "NSubstitute_Castle_DynamicProxy_Contributors_Proxy4170014707.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Contributors.ClassProxyInstanceContributor
struct  ClassProxyInstanceContributor_t1320128843  : public ProxyInstanceContributor_t4170014707
{
public:
	// System.Boolean Castle.DynamicProxy.Contributors.ClassProxyInstanceContributor::delegateToBaseGetObjectData
	bool ___delegateToBaseGetObjectData_3;
	// System.Boolean Castle.DynamicProxy.Contributors.ClassProxyInstanceContributor::implementISerializable
	bool ___implementISerializable_4;
	// System.Reflection.ConstructorInfo Castle.DynamicProxy.Contributors.ClassProxyInstanceContributor::serializationConstructor
	ConstructorInfo_t3542137334 * ___serializationConstructor_5;
	// System.Collections.Generic.IList`1<Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference> Castle.DynamicProxy.Contributors.ClassProxyInstanceContributor::serializedFields
	Il2CppObject* ___serializedFields_6;

public:
	inline static int32_t get_offset_of_delegateToBaseGetObjectData_3() { return static_cast<int32_t>(offsetof(ClassProxyInstanceContributor_t1320128843, ___delegateToBaseGetObjectData_3)); }
	inline bool get_delegateToBaseGetObjectData_3() const { return ___delegateToBaseGetObjectData_3; }
	inline bool* get_address_of_delegateToBaseGetObjectData_3() { return &___delegateToBaseGetObjectData_3; }
	inline void set_delegateToBaseGetObjectData_3(bool value)
	{
		___delegateToBaseGetObjectData_3 = value;
	}

	inline static int32_t get_offset_of_implementISerializable_4() { return static_cast<int32_t>(offsetof(ClassProxyInstanceContributor_t1320128843, ___implementISerializable_4)); }
	inline bool get_implementISerializable_4() const { return ___implementISerializable_4; }
	inline bool* get_address_of_implementISerializable_4() { return &___implementISerializable_4; }
	inline void set_implementISerializable_4(bool value)
	{
		___implementISerializable_4 = value;
	}

	inline static int32_t get_offset_of_serializationConstructor_5() { return static_cast<int32_t>(offsetof(ClassProxyInstanceContributor_t1320128843, ___serializationConstructor_5)); }
	inline ConstructorInfo_t3542137334 * get_serializationConstructor_5() const { return ___serializationConstructor_5; }
	inline ConstructorInfo_t3542137334 ** get_address_of_serializationConstructor_5() { return &___serializationConstructor_5; }
	inline void set_serializationConstructor_5(ConstructorInfo_t3542137334 * value)
	{
		___serializationConstructor_5 = value;
		Il2CppCodeGenWriteBarrier(&___serializationConstructor_5, value);
	}

	inline static int32_t get_offset_of_serializedFields_6() { return static_cast<int32_t>(offsetof(ClassProxyInstanceContributor_t1320128843, ___serializedFields_6)); }
	inline Il2CppObject* get_serializedFields_6() const { return ___serializedFields_6; }
	inline Il2CppObject** get_address_of_serializedFields_6() { return &___serializedFields_6; }
	inline void set_serializedFields_6(Il2CppObject* value)
	{
		___serializedFields_6 = value;
		Il2CppCodeGenWriteBarrier(&___serializedFields_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
