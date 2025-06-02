#include <stdio.h>

#define MAX 5  // Renamed 'MAX' to keep consistent naming

int main() {
    int quantity[MAX] = {4, 8, 5, 7, 9};
    int* p = quantity;  // Pointer to the first element of 'quantity'


    for (int i = 0; i < MAX; i++) {
        printf("%d\n", *p);  // Dereference the pointer to print the value
        p++;  // Increment the pointer to point to the next element
    }

    return 0;
}
