#include <stdio.h>

int main() {
    double base;
    double height;

    printf("Insert the size of the base triangle: ");
    scanf("%lf", &base);

    printf("Insert the size of the height triangle: ");
    scanf("%lf", &height);

    double area = base * height / 2;

    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}
