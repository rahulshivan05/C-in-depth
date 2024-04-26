// in this we find the nCr
// nCr = n!/r!*(n-r)!

#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int a, int b)
{
    int num = factorial(a);
    int deno = factorial(b) * factorial(a - b);
    return num / deno;
}

int main(int argc, char const *argv[])
{
    int n = 0, r = 0;
    printf("Enter the value of n ");
    scanf("%d", &n);
    printf("Enter the value of r ");
    scanf("%d", &r);

    int ans = nCr(n, r);
    printf("nCr is = %d\n", ans);

    return 0;
}
