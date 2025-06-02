#include <stdio.h>
#include <string.h>

void reverse_print(const char *p) {
    // Get the length of the string
    int length = strlen(p);

    // Loop through the string from the last character to the first
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", p[i]);  // Print the character at position i
    }
}

int main() {
    const char *str = "Hello, World!";  // Define the string (const)
    reverse_print(str);  // Call the reverse_print function
    return 0;
}
