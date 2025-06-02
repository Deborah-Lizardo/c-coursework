#include <stdio.h>
typedef
struct
{
    char title[80];
    int year;
}
Book;

int main()
{
    Book x;
    printf("Enter a title (without spaces): ");
    scanf("%s", x.title);
    printf("Enter a year: ");
    scanf("%d", &(x.year));
    printf("Book: %s (%d).\n", x.title, x.year);
    return 0;
}
