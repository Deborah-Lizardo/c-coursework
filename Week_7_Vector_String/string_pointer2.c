#include <stdio.h>
#include <ctype.h>

int main()
{
    // Declare and initialize the string "drummond"
    char word[] = "drummond";

    // Iterate through each character in the string using a pointer
    for (char* p = word; *p != '\0'; p++)  // Continue until we reach the null terminator
    {
        // Convert the character pointed to by p to uppercase
        *p = toupper(*p);
    }

    printf("%s", word);

    return 0;
}
