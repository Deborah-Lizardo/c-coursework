#include <stdio.h>

int summation(int n) {
    int result = 0;
    if (n == 0) {
        result = 0;
    } else if (n > 0) {
        result = n + summation(n - 1);  // Sum positive numbers recursively
    } else {  // n < 0
        result = n + summation(n + 1);  // Sum negative numbers recursively
    }
    return result;
}

int main() {
    int y = summation(4);
    printf("%d\n", y);  // Output the summation of positive numbers from 4 to 0
    printf("%d\n", summation(-4));  // Output the summation of negative numbers from -4 to 0
    return 0;
}
