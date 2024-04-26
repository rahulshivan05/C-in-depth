#include <stdio.h>

int main()
{
    // in Integer binary convert
    // Integer takes 4 bytes
    // 1025 --> 00000000 00000000 00000100 00000001
    int a = 1025;
    int *p = &a;
    printf("Size of Integer is %d bytes.\n", sizeof(int));
    printf("Address = %d,\t Value = %d\n", p, *p);
    printf("Address = %d,\t Value = %d\n", p + 1, *(p + 1));

    char *p0; // making pointer to character
    // gives the compilition error because we put pointer to int to pointer to char that's not possible
    // p0 = p;

    // But in Char takes only 1 bytes
    // 1025 = 00000001
    // TypeCasting the pointer
    p0 = (char *)p;
    printf("Size of Char is %d bytes.\n", sizeof(char));
    printf("Address = %d,\t Value = %d\n", p0, *p0);
    // Value gives 4 because next byte --> 00000100
    printf("Address = %d,\t Value = %d\n", p0 + 1, *(p0 + 1));

    /*
    Generic Pointer is (Void)
    */

    return 0;
}