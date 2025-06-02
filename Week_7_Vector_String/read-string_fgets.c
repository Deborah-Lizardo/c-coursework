#include <stdio.h>

int main() {
    char text[10];
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    puts(text);
    return 0;
}
