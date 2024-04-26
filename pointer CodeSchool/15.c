// Function Pointers

#include <stdio.h>

void PH(char *name)
{
    printf("Hello %s\n", name);
}

int add(int a, int b)
{
    return a + b;
}

// int (*Func)(int, int); // declaring a function pointer

int main(int argc, char const *argv[])
{
    int c = 0;
    int (*p)(int, int) = NULL; // declaring a function pointer
    p = add;                   // function name will return us pointer
    c = (*p)(2, 3);            // de-refrence and executing the function.
    printf("Sum = %d\n", c);

    void (*ptr)(char *);
    ptr = PH;
    ptr("Rahul");
    return 0;
}
