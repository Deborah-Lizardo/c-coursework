#include <stdio.h>
#include <stdbool.h>

int main()
{
    short a = 10;
    double b = 45.9;
    char c = '$';
    bool d = true;

    short *p1 = &a;
    double *p2 = &b;
    char *p3 = &c;
    bool *p4 = &d;

    printf("Adress and value of variable a: %p\n", &a);
    printf("%d\n",*p1);

    printf("Adress and value of variable b: %p\n", &b);
    printf("%lf\n", *p2);

    printf("Adress and value of variable c: %p\n",&c);
    printf("%c\n", *p3);

    printf("Adress and value of variable d: %p\n", &d);
    printf("%d\n", *p4);

    return 0;
}
