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

// System.Net.NetworkInformation.MacOsNetworkInterface
struct MacOsNetworkInterface_t3797845112;
// System.String
struct String_t;
// System.Net.NetworkInformation.NetworkInterface[]
struct NetworkInterfaceU5BU5D_t4138344264;
// System.Net.NetworkInformation.IPInterfaceProperties
struct IPInterfaceProperties_t665993951;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_System_Net_NetworkInformation_OperationalSt2581172862.h"

// System.Void System.Net.NetworkInformation.MacOsNetworkInterface::.ctor(System.String)
extern "C"  void MacOsNetworkInterface__ctor_m3852067350 (MacOsNetworkInterface_t3797845112 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.MacOsNetworkInterface::getifaddrs(System.IntPtr&)
extern "C"  int32_t MacOsNetworkInterface_getifaddrs_m1559031119 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___ifap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.MacOsNetworkInterface::freeifaddrs(System.IntPtr)
extern "C"  void MacOsNetworkInterface_freeifaddrs_m4102543569 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ifap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.NetworkInterface[] System.Net.NetworkInformation.MacOsNetworkInterface::ImplGetAllNetworkInterfaces()
extern "C"  NetworkInterfaceU5BU5D_t4138344264* MacOsNetworkInterface_ImplGetAllNetworkInterfaces_m2405010745 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.MacOsNetworkInterface::GetIPProperties()
extern "C"  IPInterfaceProperties_t665993951 * MacOsNetworkInterface_GetIPProperties_m144644232 (MacOsNetworkInterface_t3797845112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.MacOsNetworkInterface::get_OperationalStatus()
extern "C"  int32_t MacOsNetworkInterface_get_OperationalStatus_m1571369460 (MacOsNetworkInterface_t3797845112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
