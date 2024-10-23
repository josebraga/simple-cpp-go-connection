// measurer.go

package main

/*
#cgo CFLAGS: -I.
#include "measured_color.h"
*/
import "C"
import (
	"fmt"
)

//export ProcessMeasuredColor
func ProcessMeasuredColor(mc C.MeasuredColor) {
	fmt.Printf("Go: Received MeasuredColor - Color: %d, Value: %f\n", mc.color, mc.value)

	// Modify the MeasuredColor value
	mc.value += 10.0

	// Call the C function to invoke the C++ callback
	C.CallCallback(mc)
}

func main() {}
