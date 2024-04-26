// Pointers and Dynamic memory

#include <stdio.h>
#include <stdlib.h>

/*
int total = 0;

int square(int x)
{
    return x * x;
}

int SquareOfSum(int x, int y)
{
    int z = square(x + y);
    return z;
}

int main(int argc, char const *argv[])
{
    int a = 4, b = 8;
    total = SquareOfSum(a, b);
    printf("Output = %d\n", total);
    return 0;
}
*/

// Second example

int main(int argc, char const *argv[])
{
    int a = 10;                     // goes on the stack
    int *p = NULL;                  // pointer to integer goes to also in stack
    p = (int *)malloc(sizeof(int)); // allocate 4 bytes in the heap
    *p = 10;                        // allocate 10 to *p. that in the heap section
    free(p);                        // de-allocate the heap memory reserved by the malloc
    p = (int *)malloc(sizeof(int)); // again allocate 4 bytes memory in the heap section
    *p = 20;                        // now in this time i am change the value of *p = 20
    return 0;
}
