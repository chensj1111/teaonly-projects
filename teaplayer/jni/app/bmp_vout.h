#ifndef _BMP_VOUT_H_
#define _BMP_VOUT_H_

#include <jni.h>
#include <android/bitmap.h>
#include "vout.h"


class BmpVideoOutput: public TeaVideoOutput {

public:
    BmpVideoOutput(JNIEnv* jenv, jobject bmp);
    virtual ~BmpVideoOutput();

    virtual void RenderVideoPicture(VideoPicture *target);
    int BitBlt(JNIEnv* jenv, jobject bmp);

private:
    bool isRendered;
    AndroidBitmapInfo  info;
    void *target_fb;
};

#endif
