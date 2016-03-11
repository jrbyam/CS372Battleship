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
struct sockaddr_in_t2016519209;
struct sockaddr_in_t2016519209_marshaled;

extern "C" void sockaddr_in_t2016519209_marshal(const sockaddr_in_t2016519209& unmarshaled, sockaddr_in_t2016519209_marshaled& marshaled);
extern "C" void sockaddr_in_t2016519209_marshal_back(const sockaddr_in_t2016519209_marshaled& marshaled, sockaddr_in_t2016519209& unmarshaled);
extern "C" void sockaddr_in_t2016519209_marshal_cleanup(sockaddr_in_t2016519209_marshaled& marshaled);
