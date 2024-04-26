// Program to reverse the elements of an array

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int j = 0, temp;

    for (int i = 0, j = 9; i < j; i++, j--)
    {
        temp = arr[i];
        // printf("%d ", temp); // 1,2,3,4,5
        arr[i] = arr[j];
        // printf("\n%d ", arr[i]); // 10,9,8,7,6
        arr[j] = temp;
        // printf("%d ", arr[j]); // 1,2,3,4,5
    }

    printf("After reversing the array is : ");
    for (int i = 0; i < 10; i++)
        printf("%d  ", arr[i]);
    printf("\n");

    return 0;
}
