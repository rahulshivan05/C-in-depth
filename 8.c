#include <stdio.h>
#include "8-.c"

/*
// Function declaration
void func(void);

static int count = 5; // Global variable

int main(int argc, char const *argv[])
{
    while (count--)
    {
        func();
    }
    return 0;
}

// Function definition
void func(void)
{
    static int i = 5; // local static variable
    i++;
    printf("i is %d and count is %d\n", i, count);
}

*/

// +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
// 2nd Exapmle
// Extern storage class
//
// +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+

/* you can compile this code by using */
// 1. gcc 8.c 8-.c -o 8.exe
// Include the "8-.c" in your main project
// 2. #include "8-.c"
int count;
extern void write_extern();

int main(int argc, char const *argv[])
{
    // I am define the function in 8-.c

    write_extern();
    return 0;
}
