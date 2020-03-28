// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/mediasoup/droid/SendTransport

#ifndef org_mediasoup_droid_SendTransport_JNI
#define org_mediasoup_droid_SendTransport_JNI

#include <jni.h>

#include "../include/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_mediasoup_droid_SendTransport[];
const char kClassPath_org_mediasoup_droid_SendTransport[] = "org/mediasoup/droid/SendTransport";

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_mediasoup_droid_SendTransport_00024Listener[];
const char kClassPath_org_mediasoup_droid_SendTransport_00024Listener[] =
    "org/mediasoup/droid/SendTransport$Listener";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_mediasoup_droid_SendTransport_clazz(nullptr);
#ifndef org_mediasoup_droid_SendTransport_clazz_defined
#define org_mediasoup_droid_SendTransport_clazz_defined
inline jclass org_mediasoup_droid_SendTransport_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_mediasoup_droid_SendTransport,
      &g_org_mediasoup_droid_SendTransport_clazz);
}
#endif
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_mediasoup_droid_SendTransport_00024Listener_clazz(nullptr);
#ifndef org_mediasoup_droid_SendTransport_00024Listener_clazz_defined
#define org_mediasoup_droid_SendTransport_00024Listener_clazz_defined
inline jclass org_mediasoup_droid_SendTransport_00024Listener_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_mediasoup_droid_SendTransport_00024Listener,
      &g_org_mediasoup_droid_SendTransport_00024Listener_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace mediasoupclient {

static jlong JNI_SendTransport_GetNativeTransport(JNIEnv* env, jlong transport);

JNI_GENERATOR_EXPORT jlong Java_org_mediasoup_droid_SendTransport_nativeGetNativeTransport(
    JNIEnv* env,
    jclass jcaller,
    jlong transport) {
  return JNI_SendTransport_GetNativeTransport(env, transport);
}

static base::android::ScopedJavaLocalRef<jobject> JNI_SendTransport_Produce(JNIEnv* env, jlong
    transport,
    const base::android::JavaParamRef<jobject>& listener,
    jlong track,
    const base::android::JavaParamRef<jobjectArray>& encodings,
    const base::android::JavaParamRef<jstring>& codecOptions,
    const base::android::JavaParamRef<jstring>& appData);

JNI_GENERATOR_EXPORT jobject Java_org_mediasoup_droid_SendTransport_nativeProduce(
    JNIEnv* env,
    jclass jcaller,
    jlong transport,
    jobject listener,
    jlong track,
    jobjectArray encodings,
    jstring codecOptions,
    jstring appData) {
  return JNI_SendTransport_Produce(env, transport, base::android::JavaParamRef<jobject>(env,
      listener), track, base::android::JavaParamRef<jobjectArray>(env, encodings),
      base::android::JavaParamRef<jstring>(env, codecOptions),
      base::android::JavaParamRef<jstring>(env, appData)).Release();
}

static void JNI_SendTransport_FreeTransport(JNIEnv* env, jlong transport);

JNI_GENERATOR_EXPORT void Java_org_mediasoup_droid_SendTransport_nativeFreeTransport(
    JNIEnv* env,
    jclass jcaller,
    jlong transport) {
  return JNI_SendTransport_FreeTransport(env, transport);
}


static std::atomic<jmethodID> g_org_mediasoup_droid_SendTransport_00024Listener_onProduce(nullptr);
static base::android::ScopedJavaLocalRef<jstring> Java_Listener_onProduce(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& transport,
    const base::android::JavaRef<jstring>& kind,
    const base::android::JavaRef<jstring>& rtpParameters,
    const base::android::JavaRef<jstring>& appData) {
  jclass clazz = org_mediasoup_droid_SendTransport_00024Listener_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_mediasoup_droid_SendTransport_00024Listener_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onProduce",
"(Lorg/mediasoup/droid/Transport;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
          &g_org_mediasoup_droid_SendTransport_00024Listener_onProduce);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          call_context.base.method_id, transport.obj(), kind.obj(), rtpParameters.obj(),
              appData.obj()));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID> g_org_mediasoup_droid_SendTransport_Constructor(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_SendTransport_Constructor(JNIEnv* env, jlong
    nativeTransport) {
  jclass clazz = org_mediasoup_droid_SendTransport_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_mediasoup_droid_SendTransport_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "<init>",
          "(J)V",
          &g_org_mediasoup_droid_SendTransport_Constructor);

  jobject ret =
      env->NewObject(clazz,
          call_context.base.method_id, nativeTransport);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_mediasoup_droid_SendTransport_getNativeOwnedSendTransport(nullptr);
static jlong Java_SendTransport_getNativeOwnedSendTransport(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_mediasoup_droid_SendTransport_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_mediasoup_droid_SendTransport_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getNativeOwnedSendTransport",
          "()J",
          &g_org_mediasoup_droid_SendTransport_getNativeOwnedSendTransport);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

}  // namespace mediasoupclient

#endif  // org_mediasoup_droid_SendTransport_JNI