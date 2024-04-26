// Program to understand formal and actual arguments

#include <stdio.h>

int multiply(int x, int y)
{
    int p = 0;
    p = x * y;
    return p;
}

int sum(int x, int y)
{
    return x + y;
}

int main(int argc, char const *argv[])
{
    int m = 6, n = 3;
    printf("%d\t", multiply(m, n));
    printf("%d\t", multiply(15, 4));
    printf("%d\t", multiply(m + n, m - n));
    printf("%d\t", multiply(6, sum(m, n)));
    return 0;
}
