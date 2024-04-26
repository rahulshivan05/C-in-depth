// Pointers and Multi-dimensional Array's

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int b[2][3] = {
        2, 3, 6,
        4, 5, 8};
    // int *p = b; // getting compilition error
    int(*p)[3] = b;
    printf("B = %d\n", b);
    printf("*B[0] = %d\n", *b[0]);
    printf("%d\n", *(b + 1));
    return 0;
}
