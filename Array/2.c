#include <stdio.h>
#define SIZE 5

int main(int argc, char const *argv[])
{
    int arr[SIZE], even = 0, odd = 0;
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter the value for arr[%d] : ", i);
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers = %d, Odd numbers = %d\n", even, odd);

    return 0;
}
