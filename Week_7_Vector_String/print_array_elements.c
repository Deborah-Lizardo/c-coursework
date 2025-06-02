#include <stdio.h>

#define MAX 5

int main() {
    int quantity[MAX] = {4, 8, 5, 7, 9};

    // Print each element of the array
    for (int i = 0; i < MAX; i++) {
        printf("%d\n", quantity[i]);
    }

    return 0;
}

