#include <stdio.h>

void reverse_print (char * p) {
    if (*p != '\0') {
        printf("%c", * p);
        reverse_print( p + 1);
    }
}

int main() {
    char *str = "Hello, World!";  // define a string "Hello, World!" and store its address in str
    reverse_print(str);  // Call the reverse_print function
    return 0;
}

