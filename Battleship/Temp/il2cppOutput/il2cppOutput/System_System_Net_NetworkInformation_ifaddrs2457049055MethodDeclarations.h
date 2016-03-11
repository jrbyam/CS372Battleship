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
struct ifaddrs_t2457049055;
struct ifaddrs_t2457049055_marshaled;

extern "C" void ifaddrs_t2457049055_marshal(const ifaddrs_t2457049055& unmarshaled, ifaddrs_t2457049055_marshaled& marshaled);
extern "C" void ifaddrs_t2457049055_marshal_back(const ifaddrs_t2457049055_marshaled& marshaled, ifaddrs_t2457049055& unmarshaled);
extern "C" void ifaddrs_t2457049055_marshal_cleanup(ifaddrs_t2457049055_marshaled& marshaled);
