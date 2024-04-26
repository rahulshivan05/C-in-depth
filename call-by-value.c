#include <stdio.h>

// function definition to swap the values
void swap(int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
    printf("Value of 1st: %d\n", x);
    printf("Value of 2nd: %d\n", y);
}

int main()
{

    // Local variable definition
    int a = 100;
    int b = 200;

    printf("Before swap, value of a: %d\n", a);
    printf("Before swap, value of b: %d\n", b);

    // Calling the function to swap the values
    swap(a, b);
    // printf("Before swap, value of a: %d\n", a);
    // printf("Before swap, value of b: %d\n", b);

    return 0;
}