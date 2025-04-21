#include <stdio.h>
#include <math.h>
int main() {
    double r;
    double vol;

    for (r = 0; r <= 6.0; r+=2){
        vol = 4.0/3.0 * M_PI * pow(r, 3.0);
        printf("The volume for radius %.1lf m is %.3lf m**3.\n", r, vol);
    }
    return 0;
}