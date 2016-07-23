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

// MediaPlayerCtrl/VideoError
struct VideoError_t247668236;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_MediaPlayerCtrl_MEDIAPLAYER_ERRO1475309647.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void MediaPlayerCtrl/VideoError::.ctor(System.Object,System.IntPtr)
extern "C"  void VideoError__ctor_m490812083 (VideoError_t247668236 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl/VideoError::Invoke(MediaPlayerCtrl/MEDIAPLAYER_ERROR,MediaPlayerCtrl/MEDIAPLAYER_ERROR)
extern "C"  void VideoError_Invoke_m1533335827 (VideoError_t247668236 * __this, int32_t ___errorCode0, int32_t ___errorCodeExtra1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult MediaPlayerCtrl/VideoError::BeginInvoke(MediaPlayerCtrl/MEDIAPLAYER_ERROR,MediaPlayerCtrl/MEDIAPLAYER_ERROR,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * VideoError_BeginInvoke_m3506343324 (VideoError_t247668236 * __this, int32_t ___errorCode0, int32_t ___errorCodeExtra1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediaPlayerCtrl/VideoError::EndInvoke(System.IAsyncResult)
extern "C"  void VideoError_EndInvoke_m145225283 (VideoError_t247668236 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
