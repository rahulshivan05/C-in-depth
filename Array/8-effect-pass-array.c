// Program to understand the effect of passing an array to a function

#include <stdio.h>

void func(int val[])
{
    int sum = 0, i = 0;
    for (i = 0; i < 6; i++)
    {
        val[i] *= val[i];
        sum += val[i];
    }
    printf("The sum of squares = %d\n", sum);
}

int main(int argc, char const *argv[])
{
    int i = 0;
    int arr[] = {1, 2, 3, 4, 5, 6};
    func(arr);

    printf("Contents of array are now: ");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
