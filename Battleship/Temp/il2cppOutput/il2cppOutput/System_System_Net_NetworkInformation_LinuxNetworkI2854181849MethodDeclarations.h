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

// System.Net.NetworkInformation.LinuxNetworkInterface
struct LinuxNetworkInterface_t2854181849;
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

// System.Void System.Net.NetworkInformation.LinuxNetworkInterface::.ctor(System.String)
extern "C"  void LinuxNetworkInterface__ctor_m567970487 (LinuxNetworkInterface_t2854181849 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.LinuxNetworkInterface::getifaddrs(System.IntPtr&)
extern "C"  int32_t LinuxNetworkInterface_getifaddrs_m3302676784 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___ifap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.LinuxNetworkInterface::freeifaddrs(System.IntPtr)
extern "C"  void LinuxNetworkInterface_freeifaddrs_m1551221938 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ifap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.LinuxNetworkInterface::get_IfacePath()
extern "C"  String_t* LinuxNetworkInterface_get_IfacePath_m1232429454 (LinuxNetworkInterface_t2854181849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.NetworkInterface[] System.Net.NetworkInformation.LinuxNetworkInterface::ImplGetAllNetworkInterfaces()
extern "C"  NetworkInterfaceU5BU5D_t4138344264* LinuxNetworkInterface_ImplGetAllNetworkInterfaces_m4018538936 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.LinuxNetworkInterface::GetIPProperties()
extern "C"  IPInterfaceProperties_t665993951 * LinuxNetworkInterface_GetIPProperties_m1480268679 (LinuxNetworkInterface_t2854181849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.LinuxNetworkInterface::get_OperationalStatus()
extern "C"  int32_t LinuxNetworkInterface_get_OperationalStatus_m101759411 (LinuxNetworkInterface_t2854181849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
