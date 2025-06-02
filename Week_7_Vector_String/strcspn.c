#include <stdio.h>
#include <string.h>

int main() {
    int pos;
    pos = strcspn("Terra", "e");     // 1
    printf("pos = %d\n", pos);

    pos = strcspn("Terra", "r");     // 2
    printf("pos = %d\n", pos);

    pos = strcspn("Terra", "x");     // 5 (not found)
    printf("pos = %d\n", pos);

    pos = strcspn("Terra", "aeiou"); // 1 (first vowel)
    printf("pos = %d\n", pos);

    return 0;
}
