#ifndef MEASURED_COLOR_H
#define MEASURED_COLOR_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    BLUE,
    GREEN,
    YELLOW
} Color;

typedef struct {
    Color color;
    float value;
} MeasuredColor;

typedef void (*CallbackFunc)(MeasuredColor);

void SetCallback(CallbackFunc cb);
void CallCallback(MeasuredColor mc);

#ifdef __cplusplus
}
#endif

#ifndef MEASURED_COLOR_H
#define MEASURED_COLOR_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    BLUE,
    GREEN,
    YELLOW
} Color;

typedef struct {
    Color color;
    float value;
} MeasuredColor;

typedef void (*CallbackFunc)(MeasuredColor);

void SetCallback(CallbackFunc cb);
void CallCallback(MeasuredColor mc);

#ifdef __cplusplus
}
#endif

#endif // MEASURED_COLOR_H
#endif // MEASURED_COLOR_H

