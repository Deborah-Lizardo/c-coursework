#include <stdio.h>

int main() {
    int num_1;
    int num_2;

    printf("Input two distinct numbers:\n");
    scanf("%i %i", &num_1, &num_2);

    if (num_1 != num_2) {

        if (num_1 > num_2)
            printf("%i %i\n", num_2, num_1);
        else
            printf("%i %i\n", num_1, num_2);
    } else {
        printf("The numbers must be distinct. Please restart the program and enter different numbers.\n");
    }

    return 0;
}
