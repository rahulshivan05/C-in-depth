// Program to print the size of printer variable and size of value de-refrenced by that pointer

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a = 'x', *p1 = &a;
    int b = 12, *p2 = &b;
    float c = 12.4, *p3 = &c;
    double d = 18.3, *p4 = &d;
    printf("sizeof(a) = %d, sizeof(*p1) = %d\n", sizeof(a), sizeof(*p1));
    printf("sizeof(b) = %d, sizeof(*p2) = %d\n", sizeof(b), sizeof(*p2));
    return 0;
}
