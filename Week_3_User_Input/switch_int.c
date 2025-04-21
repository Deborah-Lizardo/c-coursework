#include <stdio.h>

int main() {
    int k;
    printf("Enter an integer to see its translation in German: \n");
    scanf("%d", &k);

    switch (k) {
        case 1:
            printf("Nummer eins\n");
            break;
        case 2:
            printf("Nummer zwei\n");
            break;
        case 3:
            printf("Nummer drei\n");
            break;
        default:
            printf("Nummer ist unbekannt.\n");
    }
    return 0;
}
