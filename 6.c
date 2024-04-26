#include <stdio.h>

// Varaible definition
extern int a, b;
extern int c;
extern float f;

/*
int main(int argc, char const *argv[])
{
    // Variable definition
    int a, b;
    int c;
    float f;

    // Actual initilization
    a = 10;
    b = 20;
    c = a + b;

    printf("Value of c: %d\n", c);

    f = 70.0 / 3.0;
    printf("Value of f: %f\n", f);

    return 0;
}
*/

// +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
// 2nd Example
//
// +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+

// Function Declaration
int func();

int main(int argc, char const *argv[])
{
    // Function call
    int i = func();
    return 0;
}

// Function definition
int func()
{
    return 0;
}
