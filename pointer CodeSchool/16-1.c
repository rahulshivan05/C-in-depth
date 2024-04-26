// Function pointer's and callback's --> Real world example

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// for qsort
int compareb(const void *a, const void *b)
{
    int A = *((int *)a); // typecasting to int* and getting value
    int B = *((int *)b);
    return abs(A) - abs(B);
}

int compare(int a, int b)
{
    if (a > b)
        return -1;
    else
        return 1;
}

int absolute_compare(int a, int b)
{
    if (abs(a) > abs(b))
        return 1;
    return -1;
}

void BubbleSort(int *A, int n, int (*compare)(int, int))
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (compare(A[j], A[j + 1]) > 0) // compare A[j] with A[j+1] and SWAP if needed
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    // int i, a[] = {3, 2, 1, 5, 6, 4};
    // BubbleSort(a, 6, compare);

    int i, a[] = {-31, 22, -1, 50, -6, 4};
    // BubbleSort(a, 6, absolute_compare);
    qsort(a, 6, sizeof(int), compareb);
    for (i = 0; i < 6; i++)
        printf("%d ", a[i]);
    return 0;
}
