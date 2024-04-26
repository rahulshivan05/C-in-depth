/**
 * When working with Pointer in C.
 * Then Knows some basic things
 * 1. When you want to Pointer to point to int then you have to make pointer to int
 * example 1
 * int a; // integer
 * int *p; // pointer to integet
 *
 * example 2
 * char a; // character
 * char *p0; // pointer to character
 *
 * example 3
 * double d;
 * double *p1;
 */

#include <stdio.h>

inline int __cdecl printf(const char *const _Format, ...);

int main()
{
    /*
    int a = 0;
    int *p = NULL;
    p = &a; // &a --> adress of a
    printf("%d\n", p);
    printf("%d\n", *p); // *p --> value at address pointed by p
    printf("%d\n", &a);
    */

    // Example 2
    /*
    int a;
    int *p;
    a = 10;
    p = &a; // &a --> Address of a
    printf("Address of P is: %d\n", p);
    printf("Value at P is: %d\n", *p);

    int b = 20;
    *p = b; // Will the address in p Change to point b
    printf("Address of P is: %d\n", p);
    printf("Value at P is: %d\n", *p);
    */

    // Pointer Arithmetic
    int a = 10; // initilization with declaration
    int *p = &a;

    printf("Address of p: %d\n", p);
    printf("Value at Address p is: %d\n", *p);
    printf("Size of integer is %d bytes\n", sizeof(int));
    printf("Size of Pointer(p) is %d bytes\n", sizeof(p));
    printf("Address of p+1 is: %d\n", p + 1);
    printf("Value at address *p+1 is: %d\n", *(p + 1));
    printf("Value at address *p+2 is: %d\n", *(p + 2));
    printf("Value at address *p+3 is: %d\n", *(p + 3));
    return 0;
}