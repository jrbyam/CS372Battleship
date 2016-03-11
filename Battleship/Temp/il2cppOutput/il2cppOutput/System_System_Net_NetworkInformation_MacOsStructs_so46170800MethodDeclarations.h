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
struct sockaddr_in6_t46170800;
struct sockaddr_in6_t46170800_marshaled;

extern "C" void sockaddr_in6_t46170800_marshal(const sockaddr_in6_t46170800& unmarshaled, sockaddr_in6_t46170800_marshaled& marshaled);
extern "C" void sockaddr_in6_t46170800_marshal_back(const sockaddr_in6_t46170800_marshaled& marshaled, sockaddr_in6_t46170800& unmarshaled);
extern "C" void sockaddr_in6_t46170800_marshal_cleanup(sockaddr_in6_t46170800_marshaled& marshaled);
