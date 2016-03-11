#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IDictionary`2<System.Reflection.Assembly,System.Boolean>
struct IDictionary_2_t3550208770;
// System.Object
struct Il2CppObject;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_t634911258;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.StrongNameUtil
struct  StrongNameUtil_t2020571378  : public Il2CppObject
{
public:

public:
};

struct StrongNameUtil_t2020571378_StaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<System.Reflection.Assembly,System.Boolean> Castle.DynamicProxy.Generators.Emitters.StrongNameUtil::signedAssemblyCache
	Il2CppObject* ___signedAssemblyCache_0;
	// System.Object Castle.DynamicProxy.Generators.Emitters.StrongNameUtil::lockObject
	Il2CppObject * ___lockObject_1;
	// System.Boolean Castle.DynamicProxy.Generators.Emitters.StrongNameUtil::<CanStrongNameAssembly>k__BackingField
	bool ___U3CCanStrongNameAssemblyU3Ek__BackingField_2;
	// System.Func`2<System.Type,System.Boolean> Castle.DynamicProxy.Generators.Emitters.StrongNameUtil::CS$<>9__CachedAnonymousMethodDelegate1
	Func_2_t634911258 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_3;

public:
	inline static int32_t get_offset_of_signedAssemblyCache_0() { return static_cast<int32_t>(offsetof(StrongNameUtil_t2020571378_StaticFields, ___signedAssemblyCache_0)); }
	inline Il2CppObject* get_signedAssemblyCache_0() const { return ___signedAssemblyCache_0; }
	inline Il2CppObject** get_address_of_signedAssemblyCache_0() { return &___signedAssemblyCache_0; }
	inline void set_signedAssemblyCache_0(Il2CppObject* value)
	{
		___signedAssemblyCache_0 = value;
		Il2CppCodeGenWriteBarrier(&___signedAssemblyCache_0, value);
	}

	inline static int32_t get_offset_of_lockObject_1() { return static_cast<int32_t>(offsetof(StrongNameUtil_t2020571378_StaticFields, ___lockObject_1)); }
	inline Il2CppObject * get_lockObject_1() const { return ___lockObject_1; }
	inline Il2CppObject ** get_address_of_lockObject_1() { return &___lockObject_1; }
	inline void set_lockObject_1(Il2CppObject * value)
	{
		___lockObject_1 = value;
		Il2CppCodeGenWriteBarrier(&___lockObject_1, value);
	}

	inline static int32_t get_offset_of_U3CCanStrongNameAssemblyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(StrongNameUtil_t2020571378_StaticFields, ___U3CCanStrongNameAssemblyU3Ek__BackingField_2)); }
	inline bool get_U3CCanStrongNameAssemblyU3Ek__BackingField_2() const { return ___U3CCanStrongNameAssemblyU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CCanStrongNameAssemblyU3Ek__BackingField_2() { return &___U3CCanStrongNameAssemblyU3Ek__BackingField_2; }
	inline void set_U3CCanStrongNameAssemblyU3Ek__BackingField_2(bool value)
	{
		___U3CCanStrongNameAssemblyU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_3() { return static_cast<int32_t>(offsetof(StrongNameUtil_t2020571378_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_3)); }
	inline Func_2_t634911258 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_3() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_3; }
	inline Func_2_t634911258 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_3() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_3; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_3(Func_2_t634911258 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_3 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
