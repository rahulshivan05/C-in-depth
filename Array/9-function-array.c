// Program that uses a general function that works on arrays of different sizes

#include <stdio.h>

int add(int arr[], int n)
{
    int i = 0, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int a[5] = {2, 4, 6, 8, 10};
    int b[8] = {1, 3, 5, 7, 9, 11, 13, 15};
    int c[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a_size = sizeof(a) / sizeof(a[0]);
    int b_size = sizeof(b) / sizeof(b[0]);
    int c_size = sizeof(c) / sizeof(c[0]);
    printf("sum of elements of array a: %d\n", add(a, a_size));
    printf("sum of elements of array b: %d\n", add(b, b_size));
    printf("sum of elements of array c: %d\n", add(c, c_size));

    return 0;
}
