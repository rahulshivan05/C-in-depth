#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 0, item = 0, flag = 0, i = 0;

    // Taking array element from the user
    printf("Enter the size of the array.\n");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at %d position\n", i);
        scanf("%d", &a[i]);
    }
    printf("\n\n");

    // Taking the item which user are want to find in the array
    printf("Enter the item you want to find in the array.\n");
    scanf("%d", &item);

    // Searching the item in the array using for loop
    // for (i = 0; i < n; i++)
    // {
    //     if (a[i] == item)
    //     {
    //         flag = 1;
    //         break;
    //     }
    // }

    // searching in the array using while loop

    while (i < n)
    {
        if (a[i] == item)
        {
            flag = 1;
            break;
        }
        i++;
    }

    // if element found in the array then flag = 1 else 0.
    if (flag == 1)
    {
        printf("\n%d is found at position %d", item, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", item);
    }

    return 0;
}
