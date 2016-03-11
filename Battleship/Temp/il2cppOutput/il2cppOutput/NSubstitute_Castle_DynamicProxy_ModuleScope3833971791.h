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
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t1058295580;
// System.Collections.Generic.Dictionary`2<Castle.DynamicProxy.Generators.CacheKey,System.Type>
struct Dictionary_2_t3268207725;
// Castle.Core.Internal.Lock
struct Lock_t4015335261;
// System.Object
struct Il2CppObject;
// Castle.DynamicProxy.Generators.INamingScope
struct INamingScope_t873561430;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.ModuleScope
struct  ModuleScope_t3833971791  : public Il2CppObject
{
public:
	// System.Reflection.Emit.ModuleBuilder Castle.DynamicProxy.ModuleScope::moduleBuilderWithStrongName
	ModuleBuilder_t1058295580 * ___moduleBuilderWithStrongName_2;
	// System.Reflection.Emit.ModuleBuilder Castle.DynamicProxy.ModuleScope::moduleBuilder
	ModuleBuilder_t1058295580 * ___moduleBuilder_3;
	// System.String Castle.DynamicProxy.ModuleScope::strongAssemblyName
	String_t* ___strongAssemblyName_4;
	// System.String Castle.DynamicProxy.ModuleScope::weakAssemblyName
	String_t* ___weakAssemblyName_5;
	// System.String Castle.DynamicProxy.ModuleScope::strongModulePath
	String_t* ___strongModulePath_6;
	// System.String Castle.DynamicProxy.ModuleScope::weakModulePath
	String_t* ___weakModulePath_7;
	// System.Collections.Generic.Dictionary`2<Castle.DynamicProxy.Generators.CacheKey,System.Type> Castle.DynamicProxy.ModuleScope::typeCache
	Dictionary_2_t3268207725 * ___typeCache_8;
	// Castle.Core.Internal.Lock Castle.DynamicProxy.ModuleScope::cacheLock
	Lock_t4015335261 * ___cacheLock_9;
	// System.Object Castle.DynamicProxy.ModuleScope::moduleLocker
	Il2CppObject * ___moduleLocker_10;
	// System.Boolean Castle.DynamicProxy.ModuleScope::savePhysicalAssembly
	bool ___savePhysicalAssembly_11;
	// System.Boolean Castle.DynamicProxy.ModuleScope::disableSignedModule
	bool ___disableSignedModule_12;
	// Castle.DynamicProxy.Generators.INamingScope Castle.DynamicProxy.ModuleScope::namingScope
	Il2CppObject * ___namingScope_13;

public:
	inline static int32_t get_offset_of_moduleBuilderWithStrongName_2() { return static_cast<int32_t>(offsetof(ModuleScope_t3833971791, ___moduleBuilderWithStrongName_2)); }
	inline ModuleBuilder_t1058295580 * get_moduleBuilderWithStrongName_2() const { return ___moduleBuilderWithStrongName_2; }
	inline ModuleBuilder_t1058295580 ** get_address_of_moduleBuilderWithStrongName_2() { return &___moduleBuilderWithStrongName_2; }
	inline void set_moduleBuilderWithStrongName_2(ModuleBuilder_t1058295580 * value)
	{
		___moduleBuilderWithStrongName_2 = value;
		Il2CppCodeGenWriteBarrier(&___moduleBuilderWithStrongName_2, value);
	}

	inline static int32_t get_offset_of_moduleBuilder_3() { return static_cast<int32_t>(offsetof(ModuleScope_t3833971791, ___moduleBuilder_3)); }
	inline ModuleBuilder_t1058295580 * get_moduleBuilder_3() const { return ___moduleBuilder_3; }
	inline ModuleBuilder_t1058295580 ** get_address_of_moduleBuilder_3() { return &___moduleBuilder_3; }
	inline void set_moduleBuilder_3(ModuleBuilder_t1058295580 * value)
	{
		___moduleBuilder_3 = value;
		Il2CppCodeGenWriteBarrier(&___moduleBuilder_3, value);
	}

	inline static int32_t get_offset_of_strongAssemblyName_4() { return static_cast<int32_t>(offsetof(ModuleScope_t3833971791, ___strongAssemblyName_4)); }
	inline String_t* get_strongAssemblyName_4() const { return ___strongAssemblyName_4; }
	inline String_t** get_address_of_strongAssemblyName_4() { return &___strongAssemblyName_4; }
	inline void set_strongAssemblyName_4(String_t* value)
	{
		___strongAssemblyName_4 = value;
		Il2CppCodeGenWriteBarrier(&___strongAssemblyName_4, value);
	}

	inline static int32_t get_offset_of_weakAssemblyName_5() { return static_cast<int32_t>(offsetof(ModuleScope_t3833971791, ___weakAssemblyName_5)); }
	inline String_t* get_weakAssemblyName_5() const { return ___weakAssemblyName_5; }
	inline String_t** get_address_of_weakAssemblyName_5() { return &___weakAssemblyName_5; }
	inline void set_weakAssemblyName_5(String_t* value)
	{
		___weakAssemblyName_5 = value;
		Il2CppCodeGenWriteBarrier(&___weakAssemblyName_5, value);
	}

	inline static int32_t get_offset_of_strongModulePath_6() { return static_cast<int32_t>(offsetof(ModuleScope_t3833971791, ___strongModulePath_6)); }
	inline String_t* get_strongModulePath_6() const { return ___strongModulePath_6; }
	inline String_t** get_address_of_strongModulePath_6() { return &___strongModulePath_6; }
	inline void set_strongModulePath_6(String_t* value)
	{
		___strongModulePath_6 = value;
		Il2CppCodeGenWriteBarrier(&___strongModulePath_6, value);
	}

	inline static int32_t get_offset_of_weakModulePath_7() { return static_cast<int32_t>(offsetof(ModuleScope_t3833971791, ___weakModulePath_7)); }
	inline String_t* get_weakModulePath_7() const { return ___weakModulePath_7; }
	inline String_t** get_address_of_weakModulePath_7() { return &___weakModulePath_7; }
	inline void set_weakModulePath_7(String_t* value)
	{
		___weakModulePath_7 = value;
		Il2CppCodeGenWriteBarrier(&___weakModulePath_7, value);
	}

	inline static int32_t get_offset_of_typeCache_8() { return static_cast<int32_t>(offsetof(ModuleScope_t3833971791, ___typeCache_8)); }
	inline Dictionary_2_t3268207725 * get_typeCache_8() const { return ___typeCache_8; }
	inline Dictionary_2_t3268207725 ** get_address_of_typeCache_8() { return &___typeCache_8; }
	inline void set_typeCache_8(Dictionary_2_t3268207725 * value)
	{
		___typeCache_8 = value;
		Il2CppCodeGenWriteBarrier(&___typeCache_8, value);
	}

	inline static int32_t get_offset_of_cacheLock_9() { return static_cast<int32_t>(offsetof(ModuleScope_t3833971791, ___cacheLock_9)); }
	inline Lock_t4015335261 * get_cacheLock_9() const { return ___cacheLock_9; }
	inline Lock_t4015335261 ** get_address_of_cacheLock_9() { return &___cacheLock_9; }
	inline void set_cacheLock_9(Lock_t4015335261 * value)
	{
		___cacheLock_9 = value;
		Il2CppCodeGenWriteBarrier(&___cacheLock_9, value);
	}

	inline static int32_t get_offset_of_moduleLocker_10() { return static_cast<int32_t>(offsetof(ModuleScope_t3833971791, ___moduleLocker_10)); }
	inline Il2CppObject * get_moduleLocker_10() const { return ___moduleLocker_10; }
	inline Il2CppObject ** get_address_of_moduleLocker_10() { return &___moduleLocker_10; }
	inline void set_moduleLocker_10(Il2CppObject * value)
	{
		___moduleLocker_10 = value;
		Il2CppCodeGenWriteBarrier(&___moduleLocker_10, value);
	}

	inline static int32_t get_offset_of_savePhysicalAssembly_11() { return static_cast<int32_t>(offsetof(ModuleScope_t3833971791, ___savePhysicalAssembly_11)); }
	inline bool get_savePhysicalAssembly_11() const { return ___savePhysicalAssembly_11; }
	inline bool* get_address_of_savePhysicalAssembly_11() { return &___savePhysicalAssembly_11; }
	inline void set_savePhysicalAssembly_11(bool value)
	{
		___savePhysicalAssembly_11 = value;
	}

	inline static int32_t get_offset_of_disableSignedModule_12() { return static_cast<int32_t>(offsetof(ModuleScope_t3833971791, ___disableSignedModule_12)); }
	inline bool get_disableSignedModule_12() const { return ___disableSignedModule_12; }
	inline bool* get_address_of_disableSignedModule_12() { return &___disableSignedModule_12; }
	inline void set_disableSignedModule_12(bool value)
	{
		___disableSignedModule_12 = value;
	}

	inline static int32_t get_offset_of_namingScope_13() { return static_cast<int32_t>(offsetof(ModuleScope_t3833971791, ___namingScope_13)); }
	inline Il2CppObject * get_namingScope_13() const { return ___namingScope_13; }
	inline Il2CppObject ** get_address_of_namingScope_13() { return &___namingScope_13; }
	inline void set_namingScope_13(Il2CppObject * value)
	{
		___namingScope_13 = value;
		Il2CppCodeGenWriteBarrier(&___namingScope_13, value);
	}
};

struct ModuleScope_t3833971791_StaticFields
{
public:
	// System.String Castle.DynamicProxy.ModuleScope::DEFAULT_FILE_NAME
	String_t* ___DEFAULT_FILE_NAME_0;
	// System.String Castle.DynamicProxy.ModuleScope::DEFAULT_ASSEMBLY_NAME
	String_t* ___DEFAULT_ASSEMBLY_NAME_1;

public:
	inline static int32_t get_offset_of_DEFAULT_FILE_NAME_0() { return static_cast<int32_t>(offsetof(ModuleScope_t3833971791_StaticFields, ___DEFAULT_FILE_NAME_0)); }
	inline String_t* get_DEFAULT_FILE_NAME_0() const { return ___DEFAULT_FILE_NAME_0; }
	inline String_t** get_address_of_DEFAULT_FILE_NAME_0() { return &___DEFAULT_FILE_NAME_0; }
	inline void set_DEFAULT_FILE_NAME_0(String_t* value)
	{
		___DEFAULT_FILE_NAME_0 = value;
		Il2CppCodeGenWriteBarrier(&___DEFAULT_FILE_NAME_0, value);
	}

	inline static int32_t get_offset_of_DEFAULT_ASSEMBLY_NAME_1() { return static_cast<int32_t>(offsetof(ModuleScope_t3833971791_StaticFields, ___DEFAULT_ASSEMBLY_NAME_1)); }
	inline String_t* get_DEFAULT_ASSEMBLY_NAME_1() const { return ___DEFAULT_ASSEMBLY_NAME_1; }
	inline String_t** get_address_of_DEFAULT_ASSEMBLY_NAME_1() { return &___DEFAULT_ASSEMBLY_NAME_1; }
	inline void set_DEFAULT_ASSEMBLY_NAME_1(String_t* value)
	{
		___DEFAULT_ASSEMBLY_NAME_1 = value;
		Il2CppCodeGenWriteBarrier(&___DEFAULT_ASSEMBLY_NAME_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
