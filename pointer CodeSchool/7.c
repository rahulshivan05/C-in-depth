// Arrays as function arguments

#include <stdio.h>

int soe(int *a, int size) // "int a[]" or "int *a" --> both the same
{
    int sum = 0;
    // printf("Size of a = %d\n", sizeof(a));
    // printf("Size of a[0] = %d\n", sizeof(a[0]));
    for (int i = 0; i < size; i++)
    {
        sum += a[i]; // a[i] is *(a+1)
    }

    return sum;
}

void Double(int *a, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        a[i] = 2 * a[i];
    }
}

int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);

    // 1st Example
    // int total = soe(a, size); // a can be used for &a[0]
    // printf("Sum of element = %d\n", total);

    // 2nd Example

    Double(a, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
