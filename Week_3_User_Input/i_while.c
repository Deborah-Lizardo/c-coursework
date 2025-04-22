#include <stdio.h>
#include <math.h>
int main() {
    double i = 10;

    while (i > 0) {
        i = i - 0.25;
        printf("%2lf", i);
        if (pow(i, 2) + 1 >= 1.45) {
            i = i + 0.20;
        }
        else
            break;
    }
    return 0;
}