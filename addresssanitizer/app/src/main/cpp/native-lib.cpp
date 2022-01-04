#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_frank_addresssanitizer_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {

    auto p = malloc(7);
    p = 0; // The memory is leaked here.

    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}