#include <stdio.h>

int main(){
    int a = 10;

    printf("address of a: %p\n", &a);
    printf("size of a: %zu\n", sizeof(a));

    int* p = &a;

    printf("value of p: %p\n", p);
    printf("value pointed by p: %d\n", *p);
    printf("address of p: %p\n", &p);
    printf("size of p: %zu\n", sizeof(p));

    return 0;
}
