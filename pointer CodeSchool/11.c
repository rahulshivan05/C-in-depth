// Pointers and multi-dimensional arrays

#include <stdio.h>

void Func(int *a) // Argument: 1-D Array of integer's
{
}

void Func2(int (*a)[3]) // Argument: 2-D Array of integer's
{
}

void Func3(int (*a)[2][2]) // Argument: 3-D Array of integer's
{
}

int main(int argc, char const *argv[])
{

    int c[3][2][2] = {{2, 5, 7, 9},    // c[0][0]
                      {3, 4, 6, 1},    // c[1][0]
                      {0, 8, 11, 13}}; // c[2][0]

    // or Another way is
    int c1[3][2][2] = {
        {{2, 5}, {7, 9}},  // c[0][0]
        {{3, 4}, {6, 1}},  // c[1][0]
        {{0, 8}, {11, 13}} // c[2][0]
    };

    // int(*p)[2][2] = c;
    // // c[i][j][k] = *(c[i][j] + k) = *(*(c[i] + j) + k) = *(*(*(c + i) + j) + k)
    // printf("%d %d %d %d\n", c, *c, c[0], &c[0][0]);
    // printf("*(c[0][1] + 1) = %d\n", *(c[0][1] + 1)); // c[0][1][1]
    // printf("*(c[1] + 1) = %d\n", *c[1] + 1);         // c[1][1] or &c[1][1][0]
    // printf("*(c[0][0] + 1) = %d\n", *(c[0][0] + 1));

    // For 1-D Array
    int a[2] = {1, 2};
    Func(a);

    // for 2-D Array
    int b[2][3] = {
        {2, 4, 6},
        {5, 7, 8}}; // b return's int (*)[3]
    Func2(a);       // a returns pointer to int --> int *

    // for multi-dimensional Array

    return 0;
}
