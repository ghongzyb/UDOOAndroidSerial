/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_udoo_udooseriallibrary_UdooSerialPort */

#ifndef _Included_org_udoo_udooseriallibrary_UdooSerialPort
#define _Included_org_udoo_udooseriallibrary_UdooSerialPort
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_udoo_udooseriallibrary_UdooSerialPort
 * Method:    open
 * Signature: (Ljava/lang/String;II)Ljava/io/FileDescriptor;
 */
JNIEXPORT jobject JNICALL Java_org_udoo_udooseriallibrary_UdooSerialPort_open
  (JNIEnv *, jclass, jstring, jint, jint);

/*
 * Class:     org_udoo_udooseriallibrary_UdooSerialPort
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_udoo_udooseriallibrary_UdooSerialPort_close
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
