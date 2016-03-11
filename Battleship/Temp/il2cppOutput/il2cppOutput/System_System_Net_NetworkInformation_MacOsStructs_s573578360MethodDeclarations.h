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
struct sockaddr_in_t573578360;
struct sockaddr_in_t573578360_marshaled;

extern "C" void sockaddr_in_t573578360_marshal(const sockaddr_in_t573578360& unmarshaled, sockaddr_in_t573578360_marshaled& marshaled);
extern "C" void sockaddr_in_t573578360_marshal_back(const sockaddr_in_t573578360_marshaled& marshaled, sockaddr_in_t573578360& unmarshaled);
extern "C" void sockaddr_in_t573578360_marshal_cleanup(sockaddr_in_t573578360_marshaled& marshaled);
