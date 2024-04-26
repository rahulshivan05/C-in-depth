// Program to print the value of array elements using pointer and subscript notation

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5] = {5, 10, 15, 20, 25};
    for (int i = 0; i < 5; i++)
    {
        printf("Value of arr[%d] = ", i);
        printf("%d\t", arr[i]);
        printf("%d\t", *(arr + i));
        printf("%d\t", *(i + arr));
        printf("%d\t", i[arr]);
        printf("Address of arr[%d] = %u\n", i, &arr[i]);
    }

    return 0;
}
