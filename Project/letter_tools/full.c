#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define NUM_LETTERS 26

int counter[NUM_LETTERS];

void count_letter(char ch) {
    if (isalpha(ch)) {
        char upper = toupper(ch);
        int index = upper - 'A';
        counter[index]++;
    }
}

void print_letter_count() {
    for (int i = 0; i < NUM_LETTERS; i++) {
        printf("Letter %c: %d\n", 'A' + i, counter[i]);
    }
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Usage:\n");
        printf("  %s count <input_file>\n", argv[0]);
        printf("  %s convert <input_file> <output_file>\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "count") == 0 && argc == 3) {
        // Mode: count letters
        FILE* file = fopen(argv[2], "r");
        if (file == NULL) {
            perror("Error opening input file");
            return 1;
        }

        // Reset counters
        for (int i = 0; i < NUM_LETTERS; i++) counter[i] = 0;

        char ch;
        while ((ch = fgetc(file)) != EOF) {
            count_letter(ch);
        }

        fclose(file);
        print_letter_count();
    }
    else if (strcmp(argv[1], "convert") == 0 && argc == 4) {
        // Mode: convert to uppercase
        FILE* in_file = fopen(argv[2], "r");
        FILE* out_file = fopen(argv[3], "w");

        if (in_file == NULL || out_file == NULL) {
            perror("Error opening file");
            return 1;
        }

        char ch;
        while ((ch = fgetc(in_file)) != EOF) {
            fputc(toupper(ch), out_file);
        }

        fclose(in_file);
        fclose(out_file);
        printf("File converted successfully to uppercase.\n");
    }
    else {
        printf("Invalid arguments.\n");
        return 1;
    }

    return 0;
}
