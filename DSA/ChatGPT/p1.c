#include <stdio.h>
#include <stdlib.h>

void add(int *a, int *b, int *c)
{
    *c = *a + *b;
}

int main()
{
    int a = 5, b = 10, c;

    // Declare pointers to the variables
    int *pa, *pb, *pc;
    pa = &a;
    pb = &b;
    pc = &c;

    // Call the function to add two numbers
    add(pa, pb, pc);

    // Print the result
    printf("%d + %d = %d\n", a, b, c);

    return 0;
}
