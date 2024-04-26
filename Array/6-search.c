// Program to search for an item in the array

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5] = {55, 12, 5, 2, 3};
    int item = 0, i;
    printf("Enter the number you want to search ");
    scanf("%d", &item);

    for (i = 0; i < 5; i++)
    {
        if (item == arr[i])
        {
            printf("%d found at position %d", item, i + 1);
            break;
        }
    }
    if (i == 5)
    {
        printf("element %d not found in array\n", item);
    }

    return 0;
}
