#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct element element;
struct element {
    int value;
    element* next;
};

void print(element* p) {
    while (p) {
        printf("%d   ", p->value);
        p = p->next;
    }
    putchar('\n');  // Correct newline output
}

void find_location(element* array, element* new_element, element** before, element** after) {
    element* p = array;
    bool found = false;
    element* q = NULL;

    while (p != NULL && !found) {
        if (p->value > new_element->value) {
            found = true;
            *after = p;  // Set the 'after' pointer to current element
            *before = q; // 'before' is the element just before 'after'
        } else {
            q = p;
            p = p->next;
        }
    }

    // If no position found, the new element should be placed at the end
    if (!found) {
        *before = q;
        *after = NULL;
    }
}

void insert(element** array, element* new_element) {
    if (*array == NULL) {
        *array = new_element;  // If the list is empty, make the new element the head
    } else {
        element* before = NULL;
        element* after = NULL;
        find_location(*array, new_element, &before, &after);

        // Insert at the beginning
        if (before == NULL) {
            new_element->next = *array;
            *array = new_element;  // New element becomes the head of the list
        }
        // Insert at the end
        else if (after == NULL) {
            before->next = new_element;
            new_element->next = NULL;  // Make sure the new element is the last one
        }
        // Insert in the middle
        else {
            new_element->next = after;
            before->next = new_element;
        }
    }
}

int main() {
    element* L = NULL;  // Head of the list
    element* p = (element*) calloc(1, sizeof(element));
    p->value = 4;
    p->next = NULL;

    // Insert 4 as the first element
    insert(&L, p);

    // Now insert a new element with value 7
    p = (element*) calloc(1, sizeof(element));
    p->value = 7;
    p->next = NULL;
    insert(&L, p);

    // Print the list
    print(L);  // Output should be: 4   7

    // Insert a new element with value 5
    p = (element*) calloc(1, sizeof(element));
    p->value = 8; // /mais um teste, 5 tem q estar no meio //proximo exercicoi byscar esss elemntos de um arquivo 
    p->next = NULL;
    insert(&L, p);

    // Print the list again
    print(L);  // Output should be: 4   5   7

    return 0;
}
