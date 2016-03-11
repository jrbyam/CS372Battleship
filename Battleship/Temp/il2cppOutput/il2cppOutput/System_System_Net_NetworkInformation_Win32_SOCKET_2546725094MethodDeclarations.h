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

// System.Net.IPAddress
struct IPAddress_t3220500535;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_Win32_SOCKET_2546725094.h"

// System.Net.IPAddress System.Net.NetworkInformation.Win32_SOCKET_ADDRESS::GetIPAddress()
extern "C"  IPAddress_t3220500535 * Win32_SOCKET_ADDRESS_GetIPAddress_m1306901485 (Win32_SOCKET_ADDRESS_t2546725094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Win32_SOCKET_ADDRESS_t2546725094;
struct Win32_SOCKET_ADDRESS_t2546725094_marshaled;

extern "C" void Win32_SOCKET_ADDRESS_t2546725094_marshal(const Win32_SOCKET_ADDRESS_t2546725094& unmarshaled, Win32_SOCKET_ADDRESS_t2546725094_marshaled& marshaled);
extern "C" void Win32_SOCKET_ADDRESS_t2546725094_marshal_back(const Win32_SOCKET_ADDRESS_t2546725094_marshaled& marshaled, Win32_SOCKET_ADDRESS_t2546725094& unmarshaled);
extern "C" void Win32_SOCKET_ADDRESS_t2546725094_marshal_cleanup(Win32_SOCKET_ADDRESS_t2546725094_marshaled& marshaled);
