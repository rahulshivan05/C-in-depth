// Program of sorting using selection sort

#include <stdio.h>
#define SIZE 10

int main(int argc, char const *argv[])
{
    int arr[SIZE];
    int i, j, temp;
    printf("Enter elements of the array: \n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < SIZE; i++)
    {
        for (j = i + 1; j < SIZE; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array is: \n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
