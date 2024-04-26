// Program to insert an item in a sorted array at the proper place by shifting other elements to the right

#include <stdio.h>
#define SIZE 10

int main(int argc, char const *argv[])
{
    int arr[SIZE];
    int i, item;
    printf("Enter elements of the arrat(in sorted order): \n");
    for (i = 0; i < SIZE - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the item to the inserted: ");
    scanf("%d", &item);

    for (i = SIZE - 2; item < arr[i] && i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[i + 1] = item;

    for (i = 0; i < SIZE; i++)
    {
        printf("%d    ", arr[i]);
    }
    printf("\n");

    return 0;
}
