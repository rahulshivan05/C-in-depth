// Program that finds whether a number is even or odd

#include <stdio.h>

void find(int); // function declaration

int main()
{
    int num = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    find(num); // function call
    return 0;
}

void find(int n)
{
    if (n % 2 == 0)
    {
        printf("%d is even\n", n);
    }
    else
    {
        printf("%d is odd\n", n);
    }
}