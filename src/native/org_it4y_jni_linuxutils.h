/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_it4y_jni_linuxutils */

#ifndef _Included_org_it4y_jni_linuxutils
#define _Included_org_it4y_jni_linuxutils
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_it4y_jni_linuxutils
 * Method:    setbooleanSockOption
 * Signature: (IIIZ)V
 */
JNIEXPORT void JNICALL Java_org_it4y_jni_linuxutils_setbooleanSockOption
  (JNIEnv *, jclass, jint, jint, jint, jboolean);

/*
 * Class:     org_it4y_jni_linuxutils
 * Method:    setintSockOption
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_org_it4y_jni_linuxutils_setintSockOption
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     org_it4y_jni_linuxutils
 * Method:    setstringSockOption
 * Signature: (IIILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_it4y_jni_linuxutils_setstringSockOption
  (JNIEnv *, jclass, jint, jint, jint, jstring);

/*
 * Class:     org_it4y_jni_linuxutils
 * Method:    getbooleanSockOption
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_org_it4y_jni_linuxutils_getbooleanSockOption
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     org_it4y_jni_linuxutils
 * Method:    getintSockOption
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_org_it4y_jni_linuxutils_getintSockOption
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     org_it4y_jni_linuxutils
 * Method:    getstringSockOption
 * Signature: (III)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_it4y_jni_linuxutils_getstringSockOption
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     org_it4y_jni_linuxutils
 * Method:    getsockname
 * Signature: (I)Lorg/it4y/jni/libc/sockaddr_in;
 */
JNIEXPORT jobject JNICALL Java_org_it4y_jni_linuxutils_getsockname
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_it4y_jni_linuxutils
 * Method:    gettcpinfo
 * Signature: (ILorg/it4y/jni/libc/tcp_info;)I
 */
JNIEXPORT jint JNICALL Java_org_it4y_jni_linuxutils_gettcpinfo
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     org_it4y_jni_linuxutils
 * Method:    getLocalHost
 * Signature: ()Ljava/net/InetSocketAddress;
 */
JNIEXPORT jobject JNICALL Java_org_it4y_jni_linuxutils_getLocalHost
  (JNIEnv *, jclass);

/*
 * Class:     org_it4y_jni_linuxutils
 * Method:    rtnl_open
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_org_it4y_jni_linuxutils_rtnl_1open
  (JNIEnv *, jclass, jbyteArray, jint);

/*
 * Class:     org_it4y_jni_linuxutils
 * Method:    rtnl_close
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_org_it4y_jni_linuxutils_rtnl_1close
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     org_it4y_jni_linuxutils
 * Method:    rtnl_wilddump_request
 * Signature: ([BII)I
 */
JNIEXPORT jint JNICALL Java_org_it4y_jni_linuxutils_rtnl_1wilddump_1request
  (JNIEnv *, jclass, jbyteArray, jint, jint);

/*
 * Class:     org_it4y_jni_linuxutils
 * Method:    rtnl_send
 * Signature: ([BLjava/nio/ByteBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_org_it4y_jni_linuxutils_rtnl_1send
  (JNIEnv *, jclass, jbyteArray, jobject, jint);

/*
 * Class:     org_it4y_jni_linuxutils
 * Method:    rtnl_dump_request
 * Signature: ([BILjava/nio/ByteBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_org_it4y_jni_linuxutils_rtnl_1dump_1request
  (JNIEnv *, jclass, jbyteArray, jint, jobject, jint);

/*
 * Class:     org_it4y_jni_linuxutils
 * Method:    rtnl_listen
 * Signature: ([BLjava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_org_it4y_jni_linuxutils_rtnl_1listen
  (JNIEnv *, jclass, jbyteArray, jobject);

#ifdef __cplusplus
}
#endif
#endif
