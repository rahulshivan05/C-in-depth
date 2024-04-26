// malloc, calloc, realloc and free

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n = 0;
    printf("Enter size of the array\n");
    scanf("%d", &n);

    // int a[n] = {}; // get the complition error at this point

    int *A = (int *)malloc(n * sizeof(int));
    // int *A = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        A[i] = i + 1;
    }

    // free(A);
    // A[2] = 6;
    // A = NULL; // after free, adjust pointer to NULL

    // int *B = (int *)realloc(A, (n / 2) * sizeof(int));

    // int *B = (int *)realloc(NULL, n * sizeof(int)); // equivalent to malloc

    int *a = (int *)realloc(A, 0); // equivalent to free
    // printf("Prev. block address = %d, new address = %d\n", A, B);

    // printing the array's
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
