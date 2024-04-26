#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 5, j = 0, n1 = 5;
    int a[] = {1, 3, 8, 10, 20};

    int item, flag;
    printf("Enter the item you want to find in the array.\n");
    scanf("%d", &item);

    for (j = 0; j < n1; j++)
    {

        if (a[j] != item)
        {
            flag = 0;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf(" found");
    }
    else
    {
        printf(" not found");
    }
    return 0;
}
