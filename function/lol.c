// Program to print Pascal's triangle

#include <stdio.h>

long factorial(int);
long comb(int, int);

int main(int argc, char const *argv[])
{
    int i = 0, j = 0, k = 0;
    printf("Enter number of rows for Pascal's triangle: ");
    scanf("%d", &k);

    for (i = 0; i < k; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%5ld", comb(i, j));
        }
        printf("\n");
    }

    return 0;
}

long comb(int n, int r)
{
    long c = 0;
    c = factorial(n) / (factorial(r) * factorial(n - r));
    return c;
}

long factorial(int k)
{
    long fact = 1;
    while (k > 0)
    {
        fact *= k;
        k--;
    }

    return fact;
}