#include <stdio.h>
#define NUM 6

int main(int argc, char const *argv[])
{
    int j = 0;
    // Original Array
    int arr[NUM] = {2, 5, 6, 14, 15, 20};

    // Travesal
    printf("Printing the Array\n");
    for (int i = 0; i < NUM; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    while (j < NUM)
    {
        if (arr[j] == 14)
        {
            break;
        }
        j++;
    }

    printf("Found element %d at position %d\n", 14, j + 1);

    return 0;
}
