#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
int vogal(char c)
{
    c = toupper(c);
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return 1;
    else
        return 0;
