#include <stdio.h>

int main() {
    int quantity;
    float price;
    int stock[10];
    char word[10];

    // Print memory addresses
    printf("%lu\n", (unsigned long) word); // Memory address of word array
    printf("%lu\n", (unsigned long) stock); // Memory address of stock array
    printf("%lu\n", (unsigned long) &price); // Memory address of price variable
    printf("%lu\n", (unsigned long) &quantity); // Memory address of quantity variable

    return 0;
}
