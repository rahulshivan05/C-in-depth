// Program to print the value and address of the elements of an array

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5] = {5, 10, 15, 20, 25};
    for (int i = 0; i < 5; i++)
    {
        printf("Value of arr[%d] = %d\t", i, arr[i]);
        printf("Address of arr[%d] = %u\n", i, &arr[i]);
    }

    return 0;
}
