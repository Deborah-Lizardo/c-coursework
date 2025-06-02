#include <stdio.h>

#define MAX 10

int main() {
    char word[MAX] = {'C', 'u', 'r', 'i', 't', 'i', 'b', 'a', '\0'};
    int i = 0;

    // Print the string using a loop
    while (word[i] != '\0') {
        putchar(word[i]);  // Print each character
        i++;
    }

    return 0;
}
