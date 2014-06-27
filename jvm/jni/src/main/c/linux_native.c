#ifdef __linux__

#include "native.h"
#include <stdio.h>

JNIEXPORT void JNICALL Java_example_jni_Util_sayHelloTo(JNIEnv *env, jclass target, jstring name)
{
    char buf[128];
    const char *str = (*env)->GetStringUTFChars(env, name, 0);
    printf("Hello, %s\n", str);
    (*env)->ReleaseStringUTFChars(env, name, str);
}

#endif

