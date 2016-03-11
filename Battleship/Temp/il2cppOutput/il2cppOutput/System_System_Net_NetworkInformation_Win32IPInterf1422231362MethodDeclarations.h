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

// System.Net.NetworkInformation.Win32IPInterfaceProperties2
struct Win32IPInterfaceProperties2_t1422231362;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t2710684728;
struct Win32_IP_ADAPTER_ADDRESSES_t2710684728_marshaled;
// System.Net.NetworkInformation.UnicastIPAddressInformationCollection
struct UnicastIPAddressInformationCollection_t293211686;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_Win32_IP_ADAP2710684728.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IFR2617189434.h"

// System.Void System.Net.NetworkInformation.Win32IPInterfaceProperties2::.ctor(System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES,System.Net.NetworkInformation.Win32_MIB_IFROW,System.Net.NetworkInformation.Win32_MIB_IFROW)
extern "C"  void Win32IPInterfaceProperties2__ctor_m2845566044 (Win32IPInterfaceProperties2_t1422231362 * __this, Win32_IP_ADAPTER_ADDRESSES_t2710684728 * ___addr, Win32_MIB_IFROW_t2617189434  ___mib4, Win32_MIB_IFROW_t2617189434  ___mib6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.Win32IPInterfaceProperties2::get_UnicastAddresses()
extern "C"  UnicastIPAddressInformationCollection_t293211686 * Win32IPInterfaceProperties2_get_UnicastAddresses_m152433399 (Win32IPInterfaceProperties2_t1422231362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
