#include <stdio.h>

int main() {
    int vowels = 0, consonants = 0, hyphens = 0;
    char word[80];

    printf("Enter a word: ");
    scanf("%s", word);  // Reads a word (no spaces)

    for (int i = 0; word[i] != '\0'; i++) {
        switch (word[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowels++;
                break;
            case '-':
                hyphens++;
                break;
            default:
                consonants++;
        }
    }

    printf("Vowels: %d, Consonants: %d, Hyphens: %d\n", vowels, consonants, hyphens);
    return 0;
}
