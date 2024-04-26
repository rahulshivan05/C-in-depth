#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr1, *ptr2;
    ptr1 = (int *)malloc(5 * sizeof(int)); // allocate memory for 5 integers
    ptr2 = (int *)calloc(5, sizeof(int));  // allocate memory for 5 integers and initialize to zero

    printf("Memory allocated with malloc():\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ptr1[i]); // output arbitrary data
    }
    printf("\n");

    printf("Memory allocated with calloc():\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ptr2[i]); // output zeros
    }
    printf("\n");

    free(ptr1);
    free(ptr2);
    return 0;
}
