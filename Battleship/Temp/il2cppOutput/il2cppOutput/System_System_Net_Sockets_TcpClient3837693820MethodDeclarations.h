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

// System.Net.Sockets.TcpClient
struct TcpClient_t3837693820;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.String
struct String_t;
// System.AsyncCallback
struct AsyncCallback_t1363551830;
// System.Object
struct Il2CppObject;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t1815209918;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily1632127208.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Net.Sockets.TcpClient::.ctor()
extern "C"  void TcpClient__ctor_m1793758638 (TcpClient_t3837693820 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::System.IDisposable.Dispose()
extern "C"  void TcpClient_System_IDisposable_Dispose_m1529033393 (TcpClient_t3837693820 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Init(System.Net.Sockets.AddressFamily)
extern "C"  void TcpClient_Init_m1684374668 (TcpClient_t3837693820 * __this, int32_t ___family, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Close()
extern "C"  void TcpClient_Close_m3504618180 (TcpClient_t3837693820 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::EndConnect(System.IAsyncResult)
extern "C"  void TcpClient_EndConnect_m169997278 (TcpClient_t3837693820 * __this, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.TcpClient::BeginConnect(System.String,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TcpClient_BeginConnect_m3355120706 (TcpClient_t3837693820 * __this, String_t* ___host, int32_t ___port, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Dispose(System.Boolean)
extern "C"  void TcpClient_Dispose_m635923618 (TcpClient_t3837693820 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Finalize()
extern "C"  void TcpClient_Finalize_m4277961716 (TcpClient_t3837693820 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
extern "C"  NetworkStream_t1815209918 * TcpClient_GetStream_m1239965747 (TcpClient_t3837693820 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::CheckDisposed()
extern "C"  void TcpClient_CheckDisposed_m940490713 (TcpClient_t3837693820 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
