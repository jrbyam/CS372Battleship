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
struct sockaddr_ll_t2016519300;
struct sockaddr_ll_t2016519300_marshaled;

extern "C" void sockaddr_ll_t2016519300_marshal(const sockaddr_ll_t2016519300& unmarshaled, sockaddr_ll_t2016519300_marshaled& marshaled);
extern "C" void sockaddr_ll_t2016519300_marshal_back(const sockaddr_ll_t2016519300_marshaled& marshaled, sockaddr_ll_t2016519300& unmarshaled);
extern "C" void sockaddr_ll_t2016519300_marshal_cleanup(sockaddr_ll_t2016519300_marshaled& marshaled);
