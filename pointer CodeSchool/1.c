#include <stdio.h>

int main()
{
    int a = 5;
    int *p = &a;
    printf("Value of a is: %d\n", a);
    printf("Value at *p is: %d\n", *p);
    printf("Address of a is: %d\n", &a);
    printf("print p is: %d\n", p);
    printf("Address of p is: %d\n", &p);

    *p = 8;
    printf("Value of a is: %d\n", a);
    printf("Value at *p is: %d\n", *p);
    return 0;
}