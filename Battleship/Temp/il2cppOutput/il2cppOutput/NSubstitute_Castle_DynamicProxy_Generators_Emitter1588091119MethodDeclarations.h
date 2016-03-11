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

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression
struct Expression_t707291260;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter1588091119.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference::.ctor()
extern "C"  void Reference__ctor_m562440968 (Reference_t1588091119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference::.ctor(Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference)
extern "C"  void Reference__ctor_m2772120769 (Reference_t1588091119 * __this, Reference_t1588091119 * ___owner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference::get_OwnerReference()
extern "C"  Reference_t1588091119 * Reference_get_OwnerReference_m703728755 (Reference_t1588091119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference::set_OwnerReference(Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference)
extern "C"  void Reference_set_OwnerReference_m778760728 (Reference_t1588091119 * __this, Reference_t1588091119 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference::Generate(System.Reflection.Emit.ILGenerator)
extern "C"  void Reference_Generate_m2458237304 (Reference_t1588091119 * __this, ILGenerator_t3869071517 * ___gen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference::ToExpression()
extern "C"  Expression_t707291260 * Reference_ToExpression_m1612884280 (Reference_t1588091119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
