#include <stdio.h>

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = start - 1;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return -1;
}

int main(int argc, char const *argv[])
{
    int even[] = {2, 4, 6, 8, 12, 18};
    int odd[] = {3, 8, 11, 14, 16};

    int size = (sizeof(even[0] / sizeof(even)));
    printf("%d\n", size);

    return 0;
}
