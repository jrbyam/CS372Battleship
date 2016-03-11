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

// System.Net.NetworkInformation.UnixIPInterfaceProperties
struct UnixIPInterfaceProperties_t3513683511;
// System.Net.NetworkInformation.UnixNetworkInterface
struct UnixNetworkInterface_t2637897901;
// System.Collections.Generic.List`1<System.Net.IPAddress>
struct List_1_t4017459504;
// System.Net.NetworkInformation.UnicastIPAddressInformationCollection
struct UnicastIPAddressInformationCollection_t293211686;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_UnixNetworkIn2637897901.h"

// System.Void System.Net.NetworkInformation.UnixIPInterfaceProperties::.ctor(System.Net.NetworkInformation.UnixNetworkInterface,System.Collections.Generic.List`1<System.Net.IPAddress>)
extern "C"  void UnixIPInterfaceProperties__ctor_m619735875 (UnixIPInterfaceProperties_t3513683511 * __this, UnixNetworkInterface_t2637897901 * ___iface, List_1_t4017459504 * ___addresses, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.UnixIPInterfaceProperties::.cctor()
extern "C"  void UnixIPInterfaceProperties__cctor_m4285222720 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::get_UnicastAddresses()
extern "C"  UnicastIPAddressInformationCollection_t293211686 * UnixIPInterfaceProperties_get_UnicastAddresses_m1335207788 (UnixIPInterfaceProperties_t3513683511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
