#include <stdio.h>

int main() {
    char name[10]; // character array with 10 positions
    printf("Enter a name: ");
    scanf("%s", name); // no & needed
    printf("name = %s\n", name);
    return 0;
}
