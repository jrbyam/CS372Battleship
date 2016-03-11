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

// System.Net.NetworkInformation.UnixNetworkInterface
struct UnixNetworkInterface_t2637897901;
// System.String
struct String_t;
// System.Net.IPAddress
struct IPAddress_t3220500535;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Net_IPAddress3220500535.h"
#include "System_System_Net_NetworkInformation_NetworkInterf4245866719.h"

// System.Void System.Net.NetworkInformation.UnixNetworkInterface::.ctor(System.String)
extern "C"  void UnixNetworkInterface__ctor_m2598046585 (UnixNetworkInterface_t2637897901 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.UnixNetworkInterface::AddAddress(System.Net.IPAddress)
extern "C"  void UnixNetworkInterface_AddAddress_m572371121 (UnixNetworkInterface_t2637897901 * __this, IPAddress_t3220500535 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.UnixNetworkInterface::SetLinkLayerInfo(System.Int32,System.Byte[],System.Net.NetworkInformation.NetworkInterfaceType)
extern "C"  void UnixNetworkInterface_SetLinkLayerInfo_m3644544527 (UnixNetworkInterface_t2637897901 * __this, int32_t ___index, ByteU5BU5D_t58506160* ___macAddress, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.UnixNetworkInterface::get_NetworkInterfaceType()
extern "C"  int32_t UnixNetworkInterface_get_NetworkInterfaceType_m2128657539 (UnixNetworkInterface_t2637897901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
