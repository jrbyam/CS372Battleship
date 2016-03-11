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

// System.Net.NetworkInformation.Win32UnicastIPAddressInformation
struct Win32UnicastIPAddressInformation_t3280441581;
// System.Net.IPAddress
struct IPAddress_t3220500535;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_Win32_IP_ADAPT701960026.h"

// System.Void System.Net.NetworkInformation.Win32UnicastIPAddressInformation::.ctor(System.Int32,System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS)
extern "C"  void Win32UnicastIPAddressInformation__ctor_m2603270156 (Win32UnicastIPAddressInformation_t3280441581 * __this, int32_t ___ifIndex, Win32_IP_ADAPTER_UNICAST_ADDRESS_t701960026  ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.NetworkInformation.Win32UnicastIPAddressInformation::get_Address()
extern "C"  IPAddress_t3220500535 * Win32UnicastIPAddressInformation_get_Address_m1553422288 (Win32UnicastIPAddressInformation_t3280441581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.NetworkInformation.Win32UnicastIPAddressInformation::get_IPv4Mask()
extern "C"  IPAddress_t3220500535 * Win32UnicastIPAddressInformation_get_IPv4Mask_m2540196503 (Win32UnicastIPAddressInformation_t3280441581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
