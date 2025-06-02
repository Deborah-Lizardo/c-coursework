#include <stdio.h>

typedef enum dia {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
} day;

int main() {
    day D;

    printf("Enter a number (0-6) corresponding to the day of the week:\n");
    printf("0 - MONDAY, 1 - TUESDAY, 2 - WEDNESDAY, 3 - THURSDAY, 4 - FRIDAY, 5 - SATURDAY, 6 - SUNDAY\n");

    scanf("%d", &D);

    switch (D) {
        case MONDAY:
            printf("It's Monday\n");
            break;
        case TUESDAY:
            printf("It's Tuesday\n");
            break;
        case WEDNESDAY:
            printf("It's Wednesday\n");
            break;
        case THURSDAY:
            printf("It's Thursday\n");
            break;
        case FRIDAY:
            printf("It's Friday\n");
            break;
    }

    return 0;
}