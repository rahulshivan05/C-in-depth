// Function pointer's and callback's

#include <stdio.h>

void A()
{
    printf("Hello\n");
}

void B(void (*ptr)()) // function pointer as argument
{
    ptr(); // call-back function that "ptr" points to
}

int main(int argc, char const *argv[])
{
    /* 1. Way */
    // void (*p)() = A;
    // p();

    /* 2nd Way */
    B(A); // A is the callback function.

    return 0;
}
