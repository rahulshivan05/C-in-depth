// Program to convert a decimal number to binary number

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, rem, arr[15], i = 0, j;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        arr[i] = num % 2; // store the remainder in array
        num /= 2;
        i++;
    }

    printf("%d", i);
    // printf("Binary number : ");
    // for (j = i - 1; j >= 0; j--)
    // {
    //     printf("%d", arr[j]);
    // }
    // printf("\n");

    return 0;
}
