#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isVowel;
    char letter;

    printf("Enter a letter: ");
    letter = getchar();

    // Convert letter to lowercase
    letter = (letter >= 'A' && letter <= 'Z') ? letter + 32 : letter;
    // Check if the letter is a vowel
    switch (letter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            isVowel = true;
        break;
        default:
            isVowel = false;
    }
    // Output if it's a vowel or consonant
    if (isVowel)
        printf("Vowel\n");
    else
        printf("Consonant\n");
    return 0;
}
