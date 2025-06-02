#include <stdio.h>

int is_vowel(char c) {
    c = tolower(c);  // Convert the character to lowercase to handle both uppercase and lowercase vowels
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int number_of_vowels(char* p) {
    int result = 0;
    if (*p != '\0') {
        result = is_vowel(*p) + number_of_vowels(p + 1);  // Recursively count vowels
    }
    return result;
}

int main() {
    int y = number_of_vowels("October");
    printf("%d\n", y);  // Output the number of vowels
    return 0;
}
