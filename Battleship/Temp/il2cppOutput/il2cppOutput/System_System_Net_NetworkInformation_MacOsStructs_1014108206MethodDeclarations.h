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
struct ifaddrs_t1014108206;
struct ifaddrs_t1014108206_marshaled;

extern "C" void ifaddrs_t1014108206_marshal(const ifaddrs_t1014108206& unmarshaled, ifaddrs_t1014108206_marshaled& marshaled);
extern "C" void ifaddrs_t1014108206_marshal_back(const ifaddrs_t1014108206_marshaled& marshaled, ifaddrs_t1014108206& unmarshaled);
extern "C" void ifaddrs_t1014108206_marshal_cleanup(ifaddrs_t1014108206_marshaled& marshaled);
