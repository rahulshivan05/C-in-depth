// Program to understand the postfix/prefix increment/decrement in a pointer variable of base type int

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 5;
    int *p = NULL;
    p = &a;

    printf("Value of p = Address of a = %u\n", p);
    printf("value of p = %u\n", ++p);
    printf("value of p = %u\n", p++);
    printf("value of p = %u\n", --p);
    printf("value of p = %u\n", p--);
    printf("value of p = %u\n", p);
    return 0;
}
