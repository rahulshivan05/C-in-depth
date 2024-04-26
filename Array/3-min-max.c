// program to find the maximum and minimum number in an array

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] = {-10, 10, 0, 20, -2, 50, 100, 20, -1, 10, 11};
    int min, max, i;
    min = max = arr[0];

    for (i = 0; i < 10; i++)
    {
        if (arr[i] < min)
        {

            min = arr[i];
        }

        if (arr[i] > max)
        {

            max = arr[i];
        }
    }

    printf("Minimum %d\n", min);
    printf("Maximum %d\n", max);

    return 0;
}
