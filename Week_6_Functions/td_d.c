#include <stdio.h>


enum day {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

// Typedef for the enum 'day'
typedef enum day day;

int main() {
    // Declare a variable of type 'day'
    day today = MONDAY;

    // Print the value of today (represented by its integer value)
    printf("Today is day number %d\n", today);

    return 0;
}
