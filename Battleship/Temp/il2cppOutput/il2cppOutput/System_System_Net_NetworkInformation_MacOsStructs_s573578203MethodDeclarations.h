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
struct sockaddr_dl_t573578203;
struct sockaddr_dl_t573578203_marshaled;

extern "C" void sockaddr_dl_t573578203_marshal(const sockaddr_dl_t573578203& unmarshaled, sockaddr_dl_t573578203_marshaled& marshaled);
extern "C" void sockaddr_dl_t573578203_marshal_back(const sockaddr_dl_t573578203_marshaled& marshaled, sockaddr_dl_t573578203& unmarshaled);
extern "C" void sockaddr_dl_t573578203_marshal_cleanup(sockaddr_dl_t573578203_marshaled& marshaled);
