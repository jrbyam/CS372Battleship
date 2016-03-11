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
// System.Collections.Generic.List`1<System.Net.IPEndPoint>
struct List_1_t2062955551;
// System.Func`2<System.Net.NetworkInformation.UnicastIPAddressInformation,System.Boolean>
struct Func_2_t3076724765;
// System.Func`2<System.Net.NetworkInformation.UnicastIPAddressInformation,System.String>
struct Func_2_t3834208326;
// System.Comparison`1<System.Net.NetworkInformation.UnicastIPAddressInformation>
struct Comparison_1_t4208906980;
// System.Func`2<System.Net.IPEndPoint,UnityTest.NetworkResultSender>
struct Func_2_t2270796263;
// System.Func`2<System.Net.IPEndPoint,System.String>
struct Func_2_t1447119696;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityTest.TestRunnerConfigurator
struct  TestRunnerConfigurator_t3601617748  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.Net.IPEndPoint> UnityTest.TestRunnerConfigurator::m_IPEndPointList
	List_1_t2062955551 * ___m_IPEndPointList_3;
	// System.Boolean UnityTest.TestRunnerConfigurator::<isBatchRun>k__BackingField
	bool ___U3CisBatchRunU3Ek__BackingField_4;
	// System.Boolean UnityTest.TestRunnerConfigurator::<sendResultsOverNetwork>k__BackingField
	bool ___U3CsendResultsOverNetworkU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_m_IPEndPointList_3() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t3601617748, ___m_IPEndPointList_3)); }
	inline List_1_t2062955551 * get_m_IPEndPointList_3() const { return ___m_IPEndPointList_3; }
	inline List_1_t2062955551 ** get_address_of_m_IPEndPointList_3() { return &___m_IPEndPointList_3; }
	inline void set_m_IPEndPointList_3(List_1_t2062955551 * value)
	{
		___m_IPEndPointList_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_IPEndPointList_3, value);
	}

	inline static int32_t get_offset_of_U3CisBatchRunU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t3601617748, ___U3CisBatchRunU3Ek__BackingField_4)); }
	inline bool get_U3CisBatchRunU3Ek__BackingField_4() const { return ___U3CisBatchRunU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisBatchRunU3Ek__BackingField_4() { return &___U3CisBatchRunU3Ek__BackingField_4; }
	inline void set_U3CisBatchRunU3Ek__BackingField_4(bool value)
	{
		___U3CisBatchRunU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsendResultsOverNetworkU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t3601617748, ___U3CsendResultsOverNetworkU3Ek__BackingField_5)); }
	inline bool get_U3CsendResultsOverNetworkU3Ek__BackingField_5() const { return ___U3CsendResultsOverNetworkU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsendResultsOverNetworkU3Ek__BackingField_5() { return &___U3CsendResultsOverNetworkU3Ek__BackingField_5; }
	inline void set_U3CsendResultsOverNetworkU3Ek__BackingField_5(bool value)
	{
		___U3CsendResultsOverNetworkU3Ek__BackingField_5 = value;
	}
};

struct TestRunnerConfigurator_t3601617748_StaticFields
{
public:
	// System.String UnityTest.TestRunnerConfigurator::integrationTestsNetwork
	String_t* ___integrationTestsNetwork_0;
	// System.String UnityTest.TestRunnerConfigurator::batchRunFileMarker
	String_t* ___batchRunFileMarker_1;
	// System.String UnityTest.TestRunnerConfigurator::testScenesToRun
	String_t* ___testScenesToRun_2;
	// System.Func`2<System.Net.NetworkInformation.UnicastIPAddressInformation,System.Boolean> UnityTest.TestRunnerConfigurator::<>f__am$cache6
	Func_2_t3076724765 * ___U3CU3Ef__amU24cache6_6;
	// System.Func`2<System.Net.NetworkInformation.UnicastIPAddressInformation,System.String> UnityTest.TestRunnerConfigurator::<>f__am$cache7
	Func_2_t3834208326 * ___U3CU3Ef__amU24cache7_7;
	// System.Comparison`1<System.Net.NetworkInformation.UnicastIPAddressInformation> UnityTest.TestRunnerConfigurator::<>f__am$cache8
	Comparison_1_t4208906980 * ___U3CU3Ef__amU24cache8_8;
	// System.Func`2<System.Net.NetworkInformation.UnicastIPAddressInformation,System.String> UnityTest.TestRunnerConfigurator::<>f__am$cache9
	Func_2_t3834208326 * ___U3CU3Ef__amU24cache9_9;
	// System.Func`2<System.Net.IPEndPoint,UnityTest.NetworkResultSender> UnityTest.TestRunnerConfigurator::<>f__am$cacheA
	Func_2_t2270796263 * ___U3CU3Ef__amU24cacheA_10;
	// System.Func`2<System.Net.IPEndPoint,System.String> UnityTest.TestRunnerConfigurator::<>f__am$cacheB
	Func_2_t1447119696 * ___U3CU3Ef__amU24cacheB_11;

public:
	inline static int32_t get_offset_of_integrationTestsNetwork_0() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t3601617748_StaticFields, ___integrationTestsNetwork_0)); }
	inline String_t* get_integrationTestsNetwork_0() const { return ___integrationTestsNetwork_0; }
	inline String_t** get_address_of_integrationTestsNetwork_0() { return &___integrationTestsNetwork_0; }
	inline void set_integrationTestsNetwork_0(String_t* value)
	{
		___integrationTestsNetwork_0 = value;
		Il2CppCodeGenWriteBarrier(&___integrationTestsNetwork_0, value);
	}

	inline static int32_t get_offset_of_batchRunFileMarker_1() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t3601617748_StaticFields, ___batchRunFileMarker_1)); }
	inline String_t* get_batchRunFileMarker_1() const { return ___batchRunFileMarker_1; }
	inline String_t** get_address_of_batchRunFileMarker_1() { return &___batchRunFileMarker_1; }
	inline void set_batchRunFileMarker_1(String_t* value)
	{
		___batchRunFileMarker_1 = value;
		Il2CppCodeGenWriteBarrier(&___batchRunFileMarker_1, value);
	}

	inline static int32_t get_offset_of_testScenesToRun_2() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t3601617748_StaticFields, ___testScenesToRun_2)); }
	inline String_t* get_testScenesToRun_2() const { return ___testScenesToRun_2; }
	inline String_t** get_address_of_testScenesToRun_2() { return &___testScenesToRun_2; }
	inline void set_testScenesToRun_2(String_t* value)
	{
		___testScenesToRun_2 = value;
		Il2CppCodeGenWriteBarrier(&___testScenesToRun_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_6() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t3601617748_StaticFields, ___U3CU3Ef__amU24cache6_6)); }
	inline Func_2_t3076724765 * get_U3CU3Ef__amU24cache6_6() const { return ___U3CU3Ef__amU24cache6_6; }
	inline Func_2_t3076724765 ** get_address_of_U3CU3Ef__amU24cache6_6() { return &___U3CU3Ef__amU24cache6_6; }
	inline void set_U3CU3Ef__amU24cache6_6(Func_2_t3076724765 * value)
	{
		___U3CU3Ef__amU24cache6_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_7() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t3601617748_StaticFields, ___U3CU3Ef__amU24cache7_7)); }
	inline Func_2_t3834208326 * get_U3CU3Ef__amU24cache7_7() const { return ___U3CU3Ef__amU24cache7_7; }
	inline Func_2_t3834208326 ** get_address_of_U3CU3Ef__amU24cache7_7() { return &___U3CU3Ef__amU24cache7_7; }
	inline void set_U3CU3Ef__amU24cache7_7(Func_2_t3834208326 * value)
	{
		___U3CU3Ef__amU24cache7_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_8() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t3601617748_StaticFields, ___U3CU3Ef__amU24cache8_8)); }
	inline Comparison_1_t4208906980 * get_U3CU3Ef__amU24cache8_8() const { return ___U3CU3Ef__amU24cache8_8; }
	inline Comparison_1_t4208906980 ** get_address_of_U3CU3Ef__amU24cache8_8() { return &___U3CU3Ef__amU24cache8_8; }
	inline void set_U3CU3Ef__amU24cache8_8(Comparison_1_t4208906980 * value)
	{
		___U3CU3Ef__amU24cache8_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache9_9() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t3601617748_StaticFields, ___U3CU3Ef__amU24cache9_9)); }
	inline Func_2_t3834208326 * get_U3CU3Ef__amU24cache9_9() const { return ___U3CU3Ef__amU24cache9_9; }
	inline Func_2_t3834208326 ** get_address_of_U3CU3Ef__amU24cache9_9() { return &___U3CU3Ef__amU24cache9_9; }
	inline void set_U3CU3Ef__amU24cache9_9(Func_2_t3834208326 * value)
	{
		___U3CU3Ef__amU24cache9_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache9_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheA_10() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t3601617748_StaticFields, ___U3CU3Ef__amU24cacheA_10)); }
	inline Func_2_t2270796263 * get_U3CU3Ef__amU24cacheA_10() const { return ___U3CU3Ef__amU24cacheA_10; }
	inline Func_2_t2270796263 ** get_address_of_U3CU3Ef__amU24cacheA_10() { return &___U3CU3Ef__amU24cacheA_10; }
	inline void set_U3CU3Ef__amU24cacheA_10(Func_2_t2270796263 * value)
	{
		___U3CU3Ef__amU24cacheA_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheA_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_11() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t3601617748_StaticFields, ___U3CU3Ef__amU24cacheB_11)); }
	inline Func_2_t1447119696 * get_U3CU3Ef__amU24cacheB_11() const { return ___U3CU3Ef__amU24cacheB_11; }
	inline Func_2_t1447119696 ** get_address_of_U3CU3Ef__amU24cacheB_11() { return &___U3CU3Ef__amU24cacheB_11; }
	inline void set_U3CU3Ef__amU24cacheB_11(Func_2_t1447119696 * value)
	{
		___U3CU3Ef__amU24cacheB_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheB_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
