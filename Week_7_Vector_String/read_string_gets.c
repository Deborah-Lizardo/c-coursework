#include <stdio.h>

int main() {
    char text[10];
    gets(text); //  Dangerous: no size limit!
    puts(text);
}
