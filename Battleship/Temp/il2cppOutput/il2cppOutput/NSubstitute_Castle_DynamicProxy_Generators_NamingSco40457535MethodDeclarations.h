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

// Castle.DynamicProxy.Generators.NamingScope
struct NamingScope_t40457535;
// Castle.DynamicProxy.Generators.INamingScope
struct INamingScope_t873561430;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void Castle.DynamicProxy.Generators.NamingScope::.ctor()
extern "C"  void NamingScope__ctor_m1964001486 (NamingScope_t40457535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.NamingScope::.ctor(Castle.DynamicProxy.Generators.INamingScope)
extern "C"  void NamingScope__ctor_m3055156732 (NamingScope_t40457535 * __this, Il2CppObject * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.INamingScope Castle.DynamicProxy.Generators.NamingScope::get_ParentScope()
extern "C"  Il2CppObject * NamingScope_get_ParentScope_m2836785410 (NamingScope_t40457535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Castle.DynamicProxy.Generators.NamingScope::GetUniqueName(System.String)
extern "C"  String_t* NamingScope_GetUniqueName_m2127895815 (NamingScope_t40457535 * __this, String_t* ___suggestedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.INamingScope Castle.DynamicProxy.Generators.NamingScope::SafeSubScope()
extern "C"  Il2CppObject * NamingScope_SafeSubScope_m1847353218 (NamingScope_t40457535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
