#include <stdio.h>

#define MAX 10

int main() {
    char word[MAX] = {'C', 'u', 'r', 'i', 't', 'i', 'b', 'a', '\0'};
    char* p = word;  // Pointer to the first character of the string

    // Print the string using the pointer
    while (*p != '\0') {
        putchar(*p);
        p++;
    }

    return 0;
}
