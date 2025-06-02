#include <stdio.h>
#include <string.h>

int main() {
    char name[20] = "Ana Terra";

    // Printing the string
    printf("String: %s\n", name);

    // Calculating and printing the size of the array (total allocated space)
    printf("Space occupied by the variable: %zu bytes\n", sizeof(name));

    // Calculating and printing the length of the string (number of characters excluding '\0')
    printf("Length of the string: %zu characters\n", strlen(name));

    return 0;
}
