#include <jni.h>
#include "DemoC.h"
#include <stdio.h>


JNIEXPORT void JNICALL Java_DemoC_sayHello(JNIEnv *env,jobject obj){
	  
	   printf("Hello World!");
       return;
  }