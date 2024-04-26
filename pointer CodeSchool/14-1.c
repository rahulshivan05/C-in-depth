// Pointers as function returns --> 2

#include <stdio.h>
#include <stdlib.h>

void phw()
{
    printf("Hello World\n");
}

int *add(int *a, int *b)
{
    int *c = (int *)malloc(sizeof(int));
    *c = (*a) + (*b);
    return c;
}

int main(int argc, char const *argv[])
{
    int a = 2, b = 4;
    int *ptr = add(&a, &b);
    phw();
    printf("Sum = %d\n", *ptr);
    return 0;
}
