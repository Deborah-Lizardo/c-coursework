#include <stdio.h>
enum Day {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};

int main() {
    enum Day weekday;
    printf("Enter a day of the week [0 to 6]: ");
    scanf("%d", &weekday);

    switch(weekday) {
        case MONDAY: case TUESDAY: case WEDNESDAY: case THURSDAY: case FRIDAY:
            puts("work"); break;
        case SATURDAY:
            puts("shopping"); break;
        case SUNDAY:
            puts("rest"); break;
        default:
            puts("ERROR!");
    }

    return 0;
}
