// Program to find the sum of two numbers

#include <stdio.h>

int sum(int, int); // function declaration

int main(int argc, char const *argv[])
{
    int a, b, s;
    printf("Enter the values for a and b : ");
    scanf("%d %d", &a, &b);
    s = sum(a, b); // function call
    printf("Sum of %d and %d = %d\n", a, b, s);
    return 0;
}

int sum(int x, int y) // function definition
{
    int s = 0;
    s = x + y;
    return s;
}
