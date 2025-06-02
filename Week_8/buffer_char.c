#include <stdio.h>
#include <stdlib.h>
#define NUM_ELEMENTS 10

int main() {
    const size_t ELEMENT_SIZE = sizeof(int);
    const size_t NUM_BYTES = NUM_ELEMENTS * ELEMENT_SIZE;
    int* buffer = (int*) malloc(NUM_BYTES);

    buffer[4] = 500;
    printf("element at position 4: %d\n", buffer[4]);

    int* p = buffer + 4;
    *p = 800;

    printf("element at position 4: %d\n", *(buffer + 4));

    free(buffer);

    return 0;
}
