#include <stdio.h>

int fibonacci (int n) {
    if ( n ==0 | n == 1)
        return n;
    else
        return fibonacci( n-1) + fibonacci(n-2);
}

int main() {
    printf("Fibonacci(30): %d\n", fibonacci(30));
    return 0;
}