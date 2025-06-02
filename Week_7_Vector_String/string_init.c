#include <stdio.h>

int main() {
    char name[10];
    name[0] = 'A';
    name[1] = 'n';
    name[2] = 'a';
    name[3] = '\0';  // Null terminator to end the string

    printf("%s\n", name);
    printf("name: %zu bytes\n", sizeof(name));  // Always prints 10

    char title[] = {'R', 'o', 'd', 'a', ' ', 'V', 'i', 'v', 'a', '\0'};
    printf("%s\n", title);

    char author[] = "Chico Buarque";
    printf("%s\n", author);
    printf("author: %zu bytes\n", sizeof(author));  // Includes null terminator

    return 0;
}
