#include <stdio.h>

int main(int argc, char const *argv[])
{
    int b[2][3] = {
        {2, 3, 6},
        {4, 5, 8}};
    int(*p)[3] = b;

    printf("b = %d\n", b);
    printf("*b = %d\n", *b);
    printf("&b[0] = %d\n", &b[0]);
    printf("&b[0][0] = %d\n", &b[0][0]);
    printf("b + 1 = %d\n", b + 1); // go to next 12 bytes
    printf("&b[1] = %d\n", &b[1]);
    printf("*(b + 1) = %d\n", *(b + 1));
    printf("b[1] = %d\n", b[1]);
    printf("&b[1][0] = %d\n", &b[1][0]);
    printf("*(b + 1) + 2 = %d\n", *(b + 1) + 2); // goes 8 bytes ago
    printf("(*b+1) = %d\n", (*b + 1));
    printf("b[1] + 2 = %d\n", b[1] + 2);
    printf("&b[1][2] = %d\n", &b[1][2]);
    printf("*(*b + 1) = %d\n", *(*b + 1));
    printf("\nb[0][0] = %d\n", b[0][0]);

    // All are the same in the below code
    // b[i][j] and *(b[i] + j) and *(*(b + i) + j)

    return 0;
}
