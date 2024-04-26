#include <stdio.h>

#define MAX_SIZE 10

void insertElement(int arr[], int index, int element)
{
    int i;
    for (i = MAX_SIZE - 1; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = element;
}

int main()
{
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5};
    int index = 2;
    int element = 6;

    insertElement(arr, index, element);

    int i;
    for (i = 0; i < MAX_SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
