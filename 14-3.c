#include <stdio.h>

int main()
{
    // An Array with 5 elements
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    double *p = NULL;

    p = balance;

    // Output each array element's value
    printf("Array values using pointers.\n");
    for (int i = 0; i < 5; i++)
    {
        printf("*(p + %d) : %f\n", i, *(p + 1));
    }

    printf("Array values using balance as address\n");

    for (int i = 0; i < 5; i++)
    {
        printf("*(balance + %d) : %f\n", i, *(balance + i));
    }

    return 0;
}