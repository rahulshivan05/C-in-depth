#include <stdio.h>

// function decalaration and definition
void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;

    // printf("Value at 1st: %d\n", x);
    // printf("Value at 2nd: %d\n", y);
}

int main(int argc, char const *argv[])
{
    // define local varialbe
    int a = 20;
    int b = 5;
    printf("The value of x before swap:%d\n", a);
    printf("The value of y before swap:%d\n", b);

    swap(&a, &b);

    printf("The value of x before swap:%d\n", a);
    printf("The value of y before swap:%d\n", b);

    return 0;
}
