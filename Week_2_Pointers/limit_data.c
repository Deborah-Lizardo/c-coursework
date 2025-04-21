#include <float.h>
#include <stdio.h>
#include <limits.h>

int main(){
    printf("Max int:  %i\n", INT_MAX);
    printf("Min int: %i\n", INT_MIN);
    printf("Short max: %hd\n", SHRT_MAX);
    printf("Short min: %hd\n", SHRT_MIN);
    printf("Long max: %ld\n", LONG_MAX);
    printf("Long min: %ld\n", LONG_MIN);
    printf("Float max: %f\n", FLT_MAX);
    printf("Float min: %f\n", FLT_MIN);
    printf("Double max: %.6e\n", DBL_MAX);   // Maximum value for double in scientific notation
    printf("Double min: %.6e\n", DBL_MIN);   // Minimum value for double in scientific notation
    printf("Long double max: %.6Le\n", LDBL_MAX);   // Maximum value for long double in scientific notation
    printf("Long double min: %.6Le\n", LDBL_MIN);   // Minimum value for long double in scientific notation
    return 0;
}
