// Program to find HCF and LCM

#include <stdio.h>

int m = 0, n = 0;
int main(int argc, char const *argv[])
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("HCF of %d and %d is %d\n", x, y, hcf(x, y));
    m = x;
    n = y;
    printf("LCM of %d and %d is %d\n", x, y, lcm(x, y));

    return 0;
}

int hcf(int a, int b)
{
    if (a == b)
        return (b);
    else if (a < b)
        hcf(a, b - a);
    else
        hcf(a - b, b);
}

int lcm(int a, int b)
{
    if (a == b)
        return (b);
    else if (a < b)
        lcm(a + m, b);
    else
        lcm(a, b + n);
}