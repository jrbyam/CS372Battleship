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


#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct Win32_SOCKADDR_t3989977747;
struct Win32_SOCKADDR_t3989977747_marshaled;

extern "C" void Win32_SOCKADDR_t3989977747_marshal(const Win32_SOCKADDR_t3989977747& unmarshaled, Win32_SOCKADDR_t3989977747_marshaled& marshaled);
extern "C" void Win32_SOCKADDR_t3989977747_marshal_back(const Win32_SOCKADDR_t3989977747_marshaled& marshaled, Win32_SOCKADDR_t3989977747& unmarshaled);
extern "C" void Win32_SOCKADDR_t3989977747_marshal_cleanup(Win32_SOCKADDR_t3989977747_marshaled& marshaled);
