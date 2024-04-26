// Program to print the value and address of array elements by subscripting a pointer variable

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] = {5, 10, 15, 20, 25};
    int *p = NULL;
    p = arr;
    for (int i = 0; i < 5; i++)
    {
        printf("Address of arr[%d] = %u %u  %u  %u\n", i, &arr[i], arr + i, p + i, &p[i]);
        printf("value of arr[%d] = %d %d  %d  %d\n", i, arr[i], *(arr + i), *(p + i), p[i]);
    }

    return 0;
}
