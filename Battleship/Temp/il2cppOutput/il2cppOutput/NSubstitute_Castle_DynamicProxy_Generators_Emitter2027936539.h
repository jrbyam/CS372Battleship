#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t765486855;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t685103793;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[]
struct ArgumentReferenceU5BU5D_t2172782151;
// Castle.DynamicProxy.Generators.Emitters.CodeBuilders.MethodCodeBuilder
struct MethodCodeBuilder_t3159038912;
// System.Func`2<System.Reflection.ParameterInfo,System.Type[]>
struct Func_2_t1551367717;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.MethodEmitter
struct  MethodEmitter_t2027936539  : public Il2CppObject
{
public:
	// System.Reflection.Emit.MethodBuilder Castle.DynamicProxy.Generators.Emitters.MethodEmitter::builder
	MethodBuilder_t765486855 * ___builder_0;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] Castle.DynamicProxy.Generators.Emitters.MethodEmitter::genericTypeParams
	GenericTypeParameterBuilderU5BU5D_t685103793* ___genericTypeParams_1;
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference[] Castle.DynamicProxy.Generators.Emitters.MethodEmitter::arguments
	ArgumentReferenceU5BU5D_t2172782151* ___arguments_2;
	// Castle.DynamicProxy.Generators.Emitters.CodeBuilders.MethodCodeBuilder Castle.DynamicProxy.Generators.Emitters.MethodEmitter::codebuilder
	MethodCodeBuilder_t3159038912 * ___codebuilder_3;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(MethodEmitter_t2027936539, ___builder_0)); }
	inline MethodBuilder_t765486855 * get_builder_0() const { return ___builder_0; }
	inline MethodBuilder_t765486855 ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(MethodBuilder_t765486855 * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier(&___builder_0, value);
	}

	inline static int32_t get_offset_of_genericTypeParams_1() { return static_cast<int32_t>(offsetof(MethodEmitter_t2027936539, ___genericTypeParams_1)); }
	inline GenericTypeParameterBuilderU5BU5D_t685103793* get_genericTypeParams_1() const { return ___genericTypeParams_1; }
	inline GenericTypeParameterBuilderU5BU5D_t685103793** get_address_of_genericTypeParams_1() { return &___genericTypeParams_1; }
	inline void set_genericTypeParams_1(GenericTypeParameterBuilderU5BU5D_t685103793* value)
	{
		___genericTypeParams_1 = value;
		Il2CppCodeGenWriteBarrier(&___genericTypeParams_1, value);
	}

	inline static int32_t get_offset_of_arguments_2() { return static_cast<int32_t>(offsetof(MethodEmitter_t2027936539, ___arguments_2)); }
	inline ArgumentReferenceU5BU5D_t2172782151* get_arguments_2() const { return ___arguments_2; }
	inline ArgumentReferenceU5BU5D_t2172782151** get_address_of_arguments_2() { return &___arguments_2; }
	inline void set_arguments_2(ArgumentReferenceU5BU5D_t2172782151* value)
	{
		___arguments_2 = value;
		Il2CppCodeGenWriteBarrier(&___arguments_2, value);
	}

	inline static int32_t get_offset_of_codebuilder_3() { return static_cast<int32_t>(offsetof(MethodEmitter_t2027936539, ___codebuilder_3)); }
	inline MethodCodeBuilder_t3159038912 * get_codebuilder_3() const { return ___codebuilder_3; }
	inline MethodCodeBuilder_t3159038912 ** get_address_of_codebuilder_3() { return &___codebuilder_3; }
	inline void set_codebuilder_3(MethodCodeBuilder_t3159038912 * value)
	{
		___codebuilder_3 = value;
		Il2CppCodeGenWriteBarrier(&___codebuilder_3, value);
	}
};

struct MethodEmitter_t2027936539_StaticFields
{
public:
	// System.Func`2<System.Reflection.ParameterInfo,System.Type[]> Castle.DynamicProxy.Generators.Emitters.MethodEmitter::CS$<>9__CachedAnonymousMethodDelegate2
	Func_2_t1551367717 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_4;
	// System.Func`2<System.Reflection.ParameterInfo,System.Type[]> Castle.DynamicProxy.Generators.Emitters.MethodEmitter::CS$<>9__CachedAnonymousMethodDelegate3
	Func_2_t1551367717 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_5;

public:
	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_4() { return static_cast<int32_t>(offsetof(MethodEmitter_t2027936539_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_4)); }
	inline Func_2_t1551367717 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_4() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_4; }
	inline Func_2_t1551367717 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_4() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_4; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_4(Func_2_t1551367717 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_4 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_4, value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_5() { return static_cast<int32_t>(offsetof(MethodEmitter_t2027936539_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_5)); }
	inline Func_2_t1551367717 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_5() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_5; }
	inline Func_2_t1551367717 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_5() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_5; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate3_5(Func_2_t1551367717 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_5 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
