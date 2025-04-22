#include <stdio.h>

int main() {
    float fahrenheit_degrees;

    printf("Input a temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit_degrees);

    float celsius_degrees = ((fahrenheit_degrees - 32) * 5) / 9;

    printf("The temperature in Celsius is: %.2f\n", celsius_degrees);

    return 0;
}
