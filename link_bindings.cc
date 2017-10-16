#include <jni.h>
#include "link_bindings.hpp"

using namespace std;

AbletonLink AL;


JNIEXPORT void JNICALL Java_LinkBindings_enable(JNIEnv *env, jobject thisObj, jboolean enableBool)
{
  AL.setLinkEnable(enableBool);
  return;
}

JNIEXPORT bool JNICALL Java_LinkBindings_isEnabled(JNIEnv *env, jobject thisObj)
{
  return AL.getLinkEnable();;
}


JNIEXPORT double JNICALL Java_LinkBindings_getBeat(JNIEnv *env, jobject thisObj)
{
  return AL.getBeat();
}

JNIEXPORT void JNICALL Java_LinkBindings_setBeat(JNIEnv *env, jobject thisObj, jdouble beat)
{
  AL.setBeat(beat);
  return;
}

JNIEXPORT void JNICALL Java_LinkBindings_setBeatForce(JNIEnv *env, jobject thisObj, jdouble beat)
{
  AL.setBeatForce(beat);
  return;
}

JNIEXPORT double JNICALL Java_LinkBindings_getPhase(JNIEnv *env, jobject thisObj)
{
  return AL.getPhase();
}

JNIEXPORT double JNICALL Java_LinkBindings_getBpm(JNIEnv *env, jobject thisObj)
{
  return AL.getBpm();
}

JNIEXPORT void JNICALL Java_LinkBindings_setBpm(JNIEnv *env, jobject thisObj, jdouble bpm)
{
  AL.setBpm(bpm);
  return;
}

JNIEXPORT size_t JNICALL Java_LinkBindings_getNumPeers(JNIEnv *env, jobject thisObj)
{
  return AL.getNumPeers();
}

JNIEXPORT void JNICALL Java_LinkBindings_setQuantum(JNIEnv *env, jobject thisObj, jdouble quantum)
{
  AL.setQuantum(quantum);
  return;
}

JNIEXPORT double JNICALL Java_LinkBindings_getQuantum(JNIEnv *env, jobject thisObj)
{
  return AL.getQuantum();
}


JNIEXPORT void JNICALL Java_LinkBindings_update(JNIEnv *env, jobject thisObj)
{
  AL.update();
  return;
}
