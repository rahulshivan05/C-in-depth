#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5], sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value for arr[%d] ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);

    // printf("The array elements are : \n");
    // for (int i = 0; i < 5; i++)
    //     printf("%d\t", arr[i]);

    return 0;
}
