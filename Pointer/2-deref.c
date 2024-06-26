// Progrma to derefrence pointer variables

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 87;
    float b = 4.5;
    int *p1 = &a;
    float *p2 = &b;

    printf("Value of p1 = Address of a = %u\n", p1);
    printf("Value of p2 = Address of b = %u\n", p2);
    printf("Address of p1 = %u\n", &p1);
    printf("Address of p2 = %u\n", &p2);
    printf("Value of a = %d  %d  %d\n", a, *p1, *(&a));
    printf("Value of b = %f  %f  %f\n", b, *p2, *(&b));
    return 0;
}
