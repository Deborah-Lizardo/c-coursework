#include <stdio.h>
#include <string.h>
#define MAX 10

int main() {
    char text[MAX];
    fgets(text, MAX, stdin);

    int CRLF = strcspn(text, "\r\n");
    text[CRLF] = '\0';

    printf("Length: %d\n", strlen(text));
    puts(text);

    char last = text[strlen(text) - 1];
    printf("Last character: %c\n", last);

    return 0;
}
