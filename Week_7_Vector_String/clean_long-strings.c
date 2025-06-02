#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 10

int main() {
    char sentence[MAX];
    bool enter_not_found = true;

    printf("Enter a sentence: ");
    do {
        fgets(sentence, MAX, stdin);

        int length = strlen(sentence);
        printf("Length = %d\n", length);

        int pos = strcspn(sentence, "\r\n");
        printf("Newline position = %d\n", pos);

        if (pos < length) {
            enter_not_found = false;  // newline was found
            char last = sentence[length - 1];
            printf("Last character: %c (%d)\n", last, last);

            sentence[pos] = '\0';  // remove newline
            printf("Cleaned sentence: %s\n\n", sentence);
        }

    } while (enter_not_found);

    return 0;
}
