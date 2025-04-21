#include <stdio.h>
int main(){
    int a = 1, b = 2, c = 3;

    printf("address of a: %p\n", &a);
    printf("address of b: %p\n", &b);
    printf("address of c: %p\n", &c);

    int* p = &c;

    printf("p: %p\n", p);
    printf("content of p: %d\n", *p);

    p = p + 1;

    printf("p: %p\n", p);
    printf("content of p: %d\n", *p);

    p = p + 1;

    printf("p: %p\n", p);
    printf("content of p: %d\n", *p);

    return 0;
}
