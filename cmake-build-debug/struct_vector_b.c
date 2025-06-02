#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Part 1 – Constants and Book Type Definition
#define MAX_BOOKS 10
#define MAX_TITLE 80

typedef struct {
    char title[MAX_TITLE]; // Book title
    int year;              // Publication year
} Book;

int main() {
    // Part 2 – Opening the File and Initial Reading
    FILE* file = fopen("cmake-build-debug/Books.txt", "r");
    if (file == NULL) {
        perror("ERROR");
        exit(1);
    }

    Book books[MAX_BOOKS];
    char c;       // Used to discard characters from the input
    int quantity; // Number of books

    // Read the number of books from the file
    fscanf(file, "%d", &quantity);

    // Discard everything until the newline character (LF)
    do {
        c = fgetc(file);
    } while (c != '\n');

    // Part 3 – Reading the Books from the File
    for (int i = 0; i < quantity; i++) {
        // Read the book title (one line)
        fgets(books[i].title, MAX_TITLE, file);

        // Remove carriage return or newline characters
        int CRLF = strcspn(books[i].title, "\r\n");
        books[i].title[CRLF] = '\0';

        // Read the publication year
        fscanf(file, "%d", &(books[i].year));

        // Discard everything until the newline character
        do {
            c = fgetc(file);
        } while (c != '\n');
    }

    fclose(file);

    // Part 4 – Displaying the Stored Books
    puts("STORED VALUES:");
    for (int i = 0; i < quantity; i++) {
        printf("Book: %s (%d).\n", books[i].title, books[i].year);
    }

    return 0;
}
