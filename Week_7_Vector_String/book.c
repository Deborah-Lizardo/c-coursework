#include <stdio.h>
#include <string.h>
// Define the Book structure:
struct Book
{
    char title[80];
    int year;
};

int main()
{
    struct Book x;
    strcpy(x.title, "One Hundred Years of Solitude");
    x.year = 1967;
    printf("Book: %s (%d).\n", x.title, x.year);

    struct Book y = { "Blindness", 1995};
    printf("Book: %s (%d).\n", y.title, y.year);

    y.year = 2005;
    // y.title = "The Intermittence of Death";
    strcpy(y.title, "The Intermittence of Death");
    printf("Book: %s (%d).\n", y.title, y.year);

    return 0;
}
