#include <stdio.h>

int main() {
    char l1, l2, l3;

    printf("Input three distinct letters:\n");
    scanf(" %c %c %c", &l1, &l2, &l3);

    if (l1 == l2 || l2 == l3 || l3 == l1) {
        printf("The letters must be distinct. Please restart the program and enter different letters.\n");
    } else {
        if (l1 < l2 && l1 < l3) {
            if (l2 < l3)
                printf("%c %c %c\n", l1, l2, l3);
            else
                printf("%c %c %c\n", l1, l3, l2);
        }
        else if (l2 < l1 && l2 < l3) {
            if (l1 < l3)
                printf("%c %c %c\n", l2, l1, l3);
            else
                printf("%c %c %c\n", l2, l3, l1);
        }
        else {
            if (l1 < l2)
                printf("%c %c %c\n", l3, l1, l2);
            else
                printf("%c %c %c\n", l3, l2, l1);
        }
    }
    return 0;
}
