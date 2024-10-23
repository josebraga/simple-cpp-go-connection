// callbacks.c

#include "measured_color.h"

CallbackFunc callback = 0;

void SetCallback(CallbackFunc cb) {
    callback = cb;
}

void CallCallback(MeasuredColor mc) {
    if (callback != 0) {
        callback(mc);
    }
}

