#include <stdio.h>

const int RED = 0;
const int GREEN = 1;
const int YELLOW = 2;

int main()
{
    int primaryLight = GREEN;
    int secondaryLight = RED;

    printf("%d %d\n", primaryLight, secondaryLight);

    if (primaryLight == GREEN)
        puts("Allowed to pass through the primary traffic light.");
    else if (primaryLight == RED)
        puts("Required to stop at the primary traffic light.");
    else
        puts("Primary traffic light is about to change, be cautious!");

    return 0;
}
