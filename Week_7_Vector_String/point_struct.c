#include <stdio.h>
typedef
struct
{
    float x; // First coordinate (x)
    float y; // Second coordinate (y)
}
Ponto; // 'Ponto' is the name of the structure

int main()
{
    // First initialization method (using direct values)
    Ponto p1 = { 2.5, 8.0 };
    printf("p1: (%.2f, %.2f)\n", p1.x, p1.y);

    // Second initialization method (named initialization)
    Ponto p2 = (Ponto) { .x = 2.5, .y = 8.0 };
    printf("p2: (%.2f, %.2f)\n", p2.x, p2.y);

    // Third initialization method (swapping x and y values)
    p2 = (Ponto) { .y = 8.0, .x = 2.5 };
    printf("p2: (%.2f, %.2f)\n", p2.x, p2.y);

    return 0;
}

