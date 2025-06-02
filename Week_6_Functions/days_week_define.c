#include <stdio.h>

#define SONNTAG 0
#define MONTAG 1
#define DIENSTAG 2
#define MITTWOCH 3
#define DONNERSTAG 4
#define FREITAG 5
#define SAMSTAG 6

int main() {
    int day;

    const char* days[] = {
        "Sonntag",
        "Montag",
        "Dienstag",
        "Mittwoch",
        "Donnerstag",
        "Freitag",
        "Samstag"
    };

    while (1) {
        printf("Enter the day of the week (0 for Sonntag, 1 for Montag, ..., 6 for Samstag):\n");
        scanf("%i", &day);

        if (day >= 0 && day <= 6) {
            break;
        } else {
            printf("Invalid input. Please enter a number between 0 and 6.\n");
        }
    }

    printf("It is %s.\n", days[day]);

    return 0;
}
