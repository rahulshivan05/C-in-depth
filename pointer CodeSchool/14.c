// Pointers as function returns

#include <stdio.h>

int add(int *a, int *b) // called function
{
    printf("Address of (a) in add() = %d\n", &a);
    printf("Value in a of add (address of a of main) = %d\n", a);
    printf("Value at address stored in a of Add = %d\n", *a);

    int c = *a + *b; // a and b both are the local variable of add() function
    return c;
}

int main(int argc, char const *argv[])
{
    int a = 2, b = 4; // a and b both are the local variable of main() function
    printf("Address of (a) in main() = %d\n", &a);

    // (a) and (b) are copied to the calling function. called Call by value
    // int c = add(a, b);

    int c = add(&a, &b); // call by refrence

    printf("Sum = %d\n", c);

    return 0;
}
