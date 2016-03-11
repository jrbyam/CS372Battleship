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

// System.Net.NetworkInformation.Win32NetworkInterface2
struct Win32NetworkInterface2_t1719223622;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t2710684728;
struct Win32_IP_ADAPTER_ADDRESSES_t2710684728_marshaled;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Net.NetworkInformation.NetworkInterface[]
struct NetworkInterfaceU5BU5D_t4138344264;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO
struct Win32_IP_ADAPTER_INFO_t4060083948;
struct Win32_IP_ADAPTER_INFO_t4060083948_marshaled;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO[]
struct Win32_IP_ADAPTER_INFOU5BU5D_t4071724005;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES[]
struct Win32_IP_ADAPTER_ADDRESSESU5BU5D_t881740777;
// System.Net.NetworkInformation.IPInterfaceProperties
struct IPInterfaceProperties_t665993951;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_Win32_IP_ADAP2710684728.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IFR2617189434.h"
#include "System_System_Net_NetworkInformation_NetworkInterf4245866719.h"
#include "System_System_Net_NetworkInformation_OperationalSt2581172862.h"

// System.Void System.Net.NetworkInformation.Win32NetworkInterface2::.ctor(System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES)
extern "C"  void Win32NetworkInterface2__ctor_m134395154 (Win32NetworkInterface2_t1719223622 * __this, Win32_IP_ADAPTER_ADDRESSES_t2710684728 * ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32NetworkInterface2::GetAdaptersInfo(System.Byte[],System.Int32&)
extern "C"  int32_t Win32NetworkInterface2_GetAdaptersInfo_m3202614712 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___info, int32_t* ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32NetworkInterface2::GetAdaptersAddresses(System.UInt32,System.UInt32,System.IntPtr,System.Byte[],System.Int32&)
extern "C"  int32_t Win32NetworkInterface2_GetAdaptersAddresses_m3922364808 (Il2CppObject * __this /* static, unused */, uint32_t ___family, uint32_t ___flags, IntPtr_t ___reserved, ByteU5BU5D_t58506160* ___info, int32_t* ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32NetworkInterface2::GetIfEntry(System.Net.NetworkInformation.Win32_MIB_IFROW&)
extern "C"  int32_t Win32NetworkInterface2_GetIfEntry_m2863289629 (Il2CppObject * __this /* static, unused */, Win32_MIB_IFROW_t2617189434 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.NetworkInterface[] System.Net.NetworkInformation.Win32NetworkInterface2::ImplGetAllNetworkInterfaces()
extern "C"  NetworkInterfaceU5BU5D_t4138344264* Win32NetworkInterface2_ImplGetAllNetworkInterfaces_m793525145 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO System.Net.NetworkInformation.Win32NetworkInterface2::GetAdapterInfoByIndex(System.Int32)
extern "C"  Win32_IP_ADAPTER_INFO_t4060083948 * Win32NetworkInterface2_GetAdapterInfoByIndex_m3237348882 (Il2CppObject * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO[] System.Net.NetworkInformation.Win32NetworkInterface2::GetAdaptersInfo()
extern "C"  Win32_IP_ADAPTER_INFOU5BU5D_t4071724005* Win32NetworkInterface2_GetAdaptersInfo_m3146642583 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES[] System.Net.NetworkInformation.Win32NetworkInterface2::GetAdaptersAddresses()
extern "C"  Win32_IP_ADAPTER_ADDRESSESU5BU5D_t881740777* Win32NetworkInterface2_GetAdaptersAddresses_m1975031419 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.Win32NetworkInterface2::GetIPProperties()
extern "C"  IPInterfaceProperties_t665993951 * Win32NetworkInterface2_GetIPProperties_m3493018608 (Win32NetworkInterface2_t1719223622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.Win32NetworkInterface2::get_NetworkInterfaceType()
extern "C"  int32_t Win32NetworkInterface2_get_NetworkInterfaceType_m2745040220 (Win32NetworkInterface2_t1719223622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.Win32NetworkInterface2::get_OperationalStatus()
extern "C"  int32_t Win32NetworkInterface2_get_OperationalStatus_m4035715066 (Win32NetworkInterface2_t1719223622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
