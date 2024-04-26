// Program that finds the larger of two numbers

#include <stdio.h>

int max(int, int); // Function declaration

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("Maximun of %d and %d is : %d\n", a, b, max(a, b));
    return 0;
}

int max(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
