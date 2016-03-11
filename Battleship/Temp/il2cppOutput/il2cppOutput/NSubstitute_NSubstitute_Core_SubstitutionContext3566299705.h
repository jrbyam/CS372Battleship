#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NSubstitute.Core.ISubstituteFactory
struct ISubstituteFactory_t3278511150;
// NSubstitute.Core.SequenceNumberGenerator
struct SequenceNumberGenerator_t2013183440;
// NSubstitute.Core.RobustThreadLocal`1<NSubstitute.Core.ICallRouter>
struct RobustThreadLocal_1_t3317072964;
// NSubstitute.Core.RobustThreadLocal`1<System.Collections.Generic.IList`1<NSubstitute.Core.Arguments.IArgumentSpecification>>
struct RobustThreadLocal_1_t3567139651;
// NSubstitute.Core.RobustThreadLocal`1<System.Func`2<NSubstitute.Core.ICall,System.Object[]>>
struct RobustThreadLocal_1_t675528460;
// NSubstitute.Core.RobustThreadLocal`1<NSubstitute.Core.Query>
struct RobustThreadLocal_1_t2175047804;
// NSubstitute.Core.ISubstitutionContext
struct ISubstitutionContext_t3786902352;
// System.Func`1<System.Collections.Generic.IList`1<NSubstitute.Core.Arguments.IArgumentSpecification>>
struct Func_1_t2429288213;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Core.SubstitutionContext
struct  SubstitutionContext_t3566299705  : public Il2CppObject
{
public:
	// NSubstitute.Core.ISubstituteFactory NSubstitute.Core.SubstitutionContext::_substituteFactory
	Il2CppObject * ____substituteFactory_0;
	// NSubstitute.Core.SequenceNumberGenerator NSubstitute.Core.SubstitutionContext::_sequenceNumberGenerator
	SequenceNumberGenerator_t2013183440 * ____sequenceNumberGenerator_1;
	// NSubstitute.Core.RobustThreadLocal`1<NSubstitute.Core.ICallRouter> NSubstitute.Core.SubstitutionContext::_lastCallRouter
	RobustThreadLocal_1_t3317072964 * ____lastCallRouter_2;
	// NSubstitute.Core.RobustThreadLocal`1<System.Collections.Generic.IList`1<NSubstitute.Core.Arguments.IArgumentSpecification>> NSubstitute.Core.SubstitutionContext::_argumentSpecifications
	RobustThreadLocal_1_t3567139651 * ____argumentSpecifications_3;
	// NSubstitute.Core.RobustThreadLocal`1<System.Func`2<NSubstitute.Core.ICall,System.Object[]>> NSubstitute.Core.SubstitutionContext::_getArgumentsForRaisingEvent
	RobustThreadLocal_1_t675528460 * ____getArgumentsForRaisingEvent_4;
	// NSubstitute.Core.RobustThreadLocal`1<NSubstitute.Core.Query> NSubstitute.Core.SubstitutionContext::_currentQuery
	RobustThreadLocal_1_t2175047804 * ____currentQuery_5;

public:
	inline static int32_t get_offset_of__substituteFactory_0() { return static_cast<int32_t>(offsetof(SubstitutionContext_t3566299705, ____substituteFactory_0)); }
	inline Il2CppObject * get__substituteFactory_0() const { return ____substituteFactory_0; }
	inline Il2CppObject ** get_address_of__substituteFactory_0() { return &____substituteFactory_0; }
	inline void set__substituteFactory_0(Il2CppObject * value)
	{
		____substituteFactory_0 = value;
		Il2CppCodeGenWriteBarrier(&____substituteFactory_0, value);
	}

	inline static int32_t get_offset_of__sequenceNumberGenerator_1() { return static_cast<int32_t>(offsetof(SubstitutionContext_t3566299705, ____sequenceNumberGenerator_1)); }
	inline SequenceNumberGenerator_t2013183440 * get__sequenceNumberGenerator_1() const { return ____sequenceNumberGenerator_1; }
	inline SequenceNumberGenerator_t2013183440 ** get_address_of__sequenceNumberGenerator_1() { return &____sequenceNumberGenerator_1; }
	inline void set__sequenceNumberGenerator_1(SequenceNumberGenerator_t2013183440 * value)
	{
		____sequenceNumberGenerator_1 = value;
		Il2CppCodeGenWriteBarrier(&____sequenceNumberGenerator_1, value);
	}

	inline static int32_t get_offset_of__lastCallRouter_2() { return static_cast<int32_t>(offsetof(SubstitutionContext_t3566299705, ____lastCallRouter_2)); }
	inline RobustThreadLocal_1_t3317072964 * get__lastCallRouter_2() const { return ____lastCallRouter_2; }
	inline RobustThreadLocal_1_t3317072964 ** get_address_of__lastCallRouter_2() { return &____lastCallRouter_2; }
	inline void set__lastCallRouter_2(RobustThreadLocal_1_t3317072964 * value)
	{
		____lastCallRouter_2 = value;
		Il2CppCodeGenWriteBarrier(&____lastCallRouter_2, value);
	}

	inline static int32_t get_offset_of__argumentSpecifications_3() { return static_cast<int32_t>(offsetof(SubstitutionContext_t3566299705, ____argumentSpecifications_3)); }
	inline RobustThreadLocal_1_t3567139651 * get__argumentSpecifications_3() const { return ____argumentSpecifications_3; }
	inline RobustThreadLocal_1_t3567139651 ** get_address_of__argumentSpecifications_3() { return &____argumentSpecifications_3; }
	inline void set__argumentSpecifications_3(RobustThreadLocal_1_t3567139651 * value)
	{
		____argumentSpecifications_3 = value;
		Il2CppCodeGenWriteBarrier(&____argumentSpecifications_3, value);
	}

	inline static int32_t get_offset_of__getArgumentsForRaisingEvent_4() { return static_cast<int32_t>(offsetof(SubstitutionContext_t3566299705, ____getArgumentsForRaisingEvent_4)); }
	inline RobustThreadLocal_1_t675528460 * get__getArgumentsForRaisingEvent_4() const { return ____getArgumentsForRaisingEvent_4; }
	inline RobustThreadLocal_1_t675528460 ** get_address_of__getArgumentsForRaisingEvent_4() { return &____getArgumentsForRaisingEvent_4; }
	inline void set__getArgumentsForRaisingEvent_4(RobustThreadLocal_1_t675528460 * value)
	{
		____getArgumentsForRaisingEvent_4 = value;
		Il2CppCodeGenWriteBarrier(&____getArgumentsForRaisingEvent_4, value);
	}

	inline static int32_t get_offset_of__currentQuery_5() { return static_cast<int32_t>(offsetof(SubstitutionContext_t3566299705, ____currentQuery_5)); }
	inline RobustThreadLocal_1_t2175047804 * get__currentQuery_5() const { return ____currentQuery_5; }
	inline RobustThreadLocal_1_t2175047804 ** get_address_of__currentQuery_5() { return &____currentQuery_5; }
	inline void set__currentQuery_5(RobustThreadLocal_1_t2175047804 * value)
	{
		____currentQuery_5 = value;
		Il2CppCodeGenWriteBarrier(&____currentQuery_5, value);
	}
};

struct SubstitutionContext_t3566299705_StaticFields
{
public:
	// NSubstitute.Core.ISubstitutionContext NSubstitute.Core.SubstitutionContext::<Current>k__BackingField
	Il2CppObject * ___U3CCurrentU3Ek__BackingField_6;
	// System.Func`1<System.Collections.Generic.IList`1<NSubstitute.Core.Arguments.IArgumentSpecification>> NSubstitute.Core.SubstitutionContext::CS$<>9__CachedAnonymousMethodDelegate1
	Func_1_t2429288213 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_7;

public:
	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SubstitutionContext_t3566299705_StaticFields, ___U3CCurrentU3Ek__BackingField_6)); }
	inline Il2CppObject * get_U3CCurrentU3Ek__BackingField_6() const { return ___U3CCurrentU3Ek__BackingField_6; }
	inline Il2CppObject ** get_address_of_U3CCurrentU3Ek__BackingField_6() { return &___U3CCurrentU3Ek__BackingField_6; }
	inline void set_U3CCurrentU3Ek__BackingField_6(Il2CppObject * value)
	{
		___U3CCurrentU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCurrentU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_7() { return static_cast<int32_t>(offsetof(SubstitutionContext_t3566299705_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_7)); }
	inline Func_1_t2429288213 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_7() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_7; }
	inline Func_1_t2429288213 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_7() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_7; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_7(Func_1_t2429288213 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_7 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
