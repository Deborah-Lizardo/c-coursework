#include <stdio.h>
#include <string.h>

int main()
{
    // The main string where we will search
    char* sentence = "good morning";
    printf("address of the sentence: %p\n", sentence); // Prints the address of the string "sentence"

    // The substring we want to find within the main string
    char* key = "morning";
    printf("address of the key: %p\n", key); // Prints the address of the substring "key"

    // The strstr function locates the substring "key" within the main string "sentence"
    char* location = strstr(sentence, key); // Finds the key within the sentence

    if (location == NULL)
        puts("not found"); // If the substring is not found, print "not found"
    else
    {
        // If the substring is found, print the address and index where it starts
        printf("key found at address: %p\n", location);
        printf("key found at index: %d\n", location - sentence); // Calculates the difference of the addresses
    }

    return 0;
}
