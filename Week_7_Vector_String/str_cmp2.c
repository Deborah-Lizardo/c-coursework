#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "Heidegger";  // First philosopher's name
    char key[] = "Heidegger"; // Second philosopher's name (same as 'name')

    // Compare 'name' and 'key' (both are "Heidegger")
    int result = strcmp(name, key);
    printf("%d\n", result); // Output: 0 because they are identical

    // Compare 'name' with "Hegel"
    result = strcmp(name, "Hegel");
    printf("%d\n", result); // Output: positive value because "Heidegger" > "Hegel"

    // Compare 'name' with "Nietzsche"
    result = strcmp(name, "Nietzsche");
    printf("%d\n", result); // Output: positive value because "Heidegger" > "Nietzsche"

    // Check if 'name' and 'key' are equal and print appropriate message
    if (strcmp(name, key) == 0) {
        puts("Strings are equal");  // Message if strings are equal
    } else {
        puts("Strings are different"); // Message if strings are different
    }

    return 0;
}
