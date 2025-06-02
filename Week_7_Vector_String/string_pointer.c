#include <stdio.h>
#include <string.h>

int main() {
    char* city = "Curitiba, PR"; // Pointer to a string
    printf("%s\n", city); // Prints the string stored in the pointer (Curitiba, PR)

    printf("City: %d characters\n", strlen(city)); // Length of the string (excluding '\0')
    printf("City: %d bytes\n", sizeof(city)); // Size of the pointer, not the string

    putchar(city[0]); // Prints the character at index 0 ('C')
    putchar(city[2]); // Prints the character at index 2 ('r')
    putchar(city[4]); // Prints the character at index 4 ('t')

    // Attempting to modify a string literal (not allowed)
    city[0] = 'K'; // ERROR: Cannot modify a string literal

    putchar(city[0]); // Will cause an error (city is pointing to a string literal, which is immutable)

    return 0;
}

