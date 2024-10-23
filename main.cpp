// main.cpp

#include <iostream>
#include "measured_color.h"
#include "libmeasurer.h"

// Forward declaration of SetCallback and CallCallback
extern "C" void SetCallback(CallbackFunc cb);
extern "C" void CallCallback(MeasuredColor mc);

// C++ Callback Function
extern "C" void MeasuredColorCallback(MeasuredColor mc) {
    std::cout << "C++ Callback: Color: " << mc.color << ", Value: " << mc.value << std::endl;
}

int main() {
    // Register the callback function with the C library
    SetCallback(MeasuredColorCallback);

    // Create MeasuredColor instances
    MeasuredColor mc1 { GREEN, 10.0f };
    MeasuredColor mc2 { BLUE, 100.0f };
    MeasuredColor mc3 { YELLOW, 1000.0f };

    // Call the Go function
    ProcessMeasuredColor(mc1);
    ProcessMeasuredColor(mc2);
    ProcessMeasuredColor(mc3);

    return 0;
}

