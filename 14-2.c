#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate and return random numbers

int *getRandom()
{
    static int r[10];
    int i = 0;

    // set the seed
    srand((unsigned)time(NULL));
    for (i = 0; i < 10; i++)
    {
        r[i] = rand();
        printf("r[%d] = %d\n", i, r[i]);
    }

    return r;
}

// main function to call above definition function

int main()
{
    // A Pointer to an int
    int *p;
    int i = 0;

    p = getRandom();
    for (i = 0; i < 10; i++)
    {
        printf("*(p+%d) : %d\n", i, *(p + 1));
    }

    return 0;
}