#include <stdio.h>

int main() {
    int n;
    double h = 0.0;

    printf("Input the numbers of terms you want for the harmonic series (min of 2): \n");
    scanf("%i", &n);

    while (n < 2) {
        printf("Please enter a value greater than or equal to 2: \n");
        scanf("%i", &n);
    }

    for (n; ; n--) {
        h += 1.0 / n;
        if (n == 1) {
            printf("The sum of h results in %.5lf",n ,h);
            break;
        }
    }
    return 0;
}
