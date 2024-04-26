// Pointer's as function arguments
// call by refrence

#include <stdio.h>

// when i use void increment then doesn't happing any thing

int increment2(int);
void increment(int);

void increment3(int *p)
{
    *p = *p + 1;
}

int main(int argc, char const *argv[])
{
    int a = 10;
    increment3(&a);
    printf("a = %d\n", a);
    // printf("Address of main (a): %d\n", &a);
    // printf("befor increment a = %d\n", a);
    // printf("After incriment a = %d\n", increment(a));

    return 0;
}

int increment2(int a)
{
    printf("Address of a: %d\n", &a);
    return a = a + 1;
}

void increment(int a)
{
    printf("Address of a: %d\n", &a);
    a = a + 1;
}