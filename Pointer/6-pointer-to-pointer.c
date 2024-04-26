// Program to understand pointer to pointer
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 5;
    int *pa;
    int **ppa;
    pa = &a;
    ppa = &pa;
    printf("Address of a = %u\n", &a);
    printf("Value of pa = Address of a = %u\n", pa);
    printf("Value of *pa = Value of a = %u\n", *pa);
    printf("Address of pa = %u\n", &pa);
    printf("Value of ppa = Address of pa = %u\n", ppa);
    printf("Value of *ppa = Address of pa = %u\n", *ppa);
    printf("Value of **ppa = Address of a = %u\n", **ppa);
    printf("Address of ppa = %u\n", &ppa);
    return 0;
}
