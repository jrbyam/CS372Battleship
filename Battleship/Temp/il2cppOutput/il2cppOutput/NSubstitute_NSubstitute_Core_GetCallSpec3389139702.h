#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NSubstitute.Core.ICallStack
struct ICallStack_t3597222632;
// NSubstitute.Core.IPendingSpecification
struct IPendingSpecification_t2338154748;
// NSubstitute.Core.ICallSpecificationFactory
struct ICallSpecificationFactory_t1908120021;
// NSubstitute.Core.ICallActions
struct ICallActions_t741748509;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Core.GetCallSpec
struct  GetCallSpec_t3389139702  : public Il2CppObject
{
public:
	// NSubstitute.Core.ICallStack NSubstitute.Core.GetCallSpec::_callStack
	Il2CppObject * ____callStack_0;
	// NSubstitute.Core.IPendingSpecification NSubstitute.Core.GetCallSpec::_pendingSpecification
	Il2CppObject * ____pendingSpecification_1;
	// NSubstitute.Core.ICallSpecificationFactory NSubstitute.Core.GetCallSpec::_callSpecificationFactory
	Il2CppObject * ____callSpecificationFactory_2;
	// NSubstitute.Core.ICallActions NSubstitute.Core.GetCallSpec::_callActions
	Il2CppObject * ____callActions_3;

public:
	inline static int32_t get_offset_of__callStack_0() { return static_cast<int32_t>(offsetof(GetCallSpec_t3389139702, ____callStack_0)); }
	inline Il2CppObject * get__callStack_0() const { return ____callStack_0; }
	inline Il2CppObject ** get_address_of__callStack_0() { return &____callStack_0; }
	inline void set__callStack_0(Il2CppObject * value)
	{
		____callStack_0 = value;
		Il2CppCodeGenWriteBarrier(&____callStack_0, value);
	}

	inline static int32_t get_offset_of__pendingSpecification_1() { return static_cast<int32_t>(offsetof(GetCallSpec_t3389139702, ____pendingSpecification_1)); }
	inline Il2CppObject * get__pendingSpecification_1() const { return ____pendingSpecification_1; }
	inline Il2CppObject ** get_address_of__pendingSpecification_1() { return &____pendingSpecification_1; }
	inline void set__pendingSpecification_1(Il2CppObject * value)
	{
		____pendingSpecification_1 = value;
		Il2CppCodeGenWriteBarrier(&____pendingSpecification_1, value);
	}

	inline static int32_t get_offset_of__callSpecificationFactory_2() { return static_cast<int32_t>(offsetof(GetCallSpec_t3389139702, ____callSpecificationFactory_2)); }
	inline Il2CppObject * get__callSpecificationFactory_2() const { return ____callSpecificationFactory_2; }
	inline Il2CppObject ** get_address_of__callSpecificationFactory_2() { return &____callSpecificationFactory_2; }
	inline void set__callSpecificationFactory_2(Il2CppObject * value)
	{
		____callSpecificationFactory_2 = value;
		Il2CppCodeGenWriteBarrier(&____callSpecificationFactory_2, value);
	}

	inline static int32_t get_offset_of__callActions_3() { return static_cast<int32_t>(offsetof(GetCallSpec_t3389139702, ____callActions_3)); }
	inline Il2CppObject * get__callActions_3() const { return ____callActions_3; }
	inline Il2CppObject ** get_address_of__callActions_3() { return &____callActions_3; }
	inline void set__callActions_3(Il2CppObject * value)
	{
		____callActions_3 = value;
		Il2CppCodeGenWriteBarrier(&____callActions_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
