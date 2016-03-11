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
struct sockaddr_t527146558;
struct sockaddr_t527146558_marshaled;

extern "C" void sockaddr_t527146558_marshal(const sockaddr_t527146558& unmarshaled, sockaddr_t527146558_marshaled& marshaled);
extern "C" void sockaddr_t527146558_marshal_back(const sockaddr_t527146558_marshaled& marshaled, sockaddr_t527146558& unmarshaled);
extern "C" void sockaddr_t527146558_marshal_cleanup(sockaddr_t527146558_marshaled& marshaled);
