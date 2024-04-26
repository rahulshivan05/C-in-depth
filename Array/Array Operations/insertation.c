// Program to insertation in array

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    n += 1;
    // arr[3] = 12;

    printf("Printing after insertation\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
