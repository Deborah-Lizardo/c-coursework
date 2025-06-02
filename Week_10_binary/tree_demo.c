#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    char name [30];
    int age;
    float height;
} Person;

typedef knot_age knot_age;
struct knot_age{
    int idade;
    Person* people;
    knot* left;
    knot* right;

} knot_age;
//cada no chama de no idade

typedef knot_height knot_height;

struct knot_height {
    float height;
    Person* people;
    knot* left;
    knot* right;

};
//qual agoritmo de construção da arvore que re4presenta os dados?
// duvida direitp maior e esquerdo menor 

int main() {
    return 0;
}