// Program to print the reverse of a positive number

#include <stdio.h>

void reverse(long int);

int main(int argc, char const *argv[])
{
    long int num = 0;
    printf("Enter number : ");
    scanf("%ld", &num);

    reverse(num);
    printf("\n");
    return 0;
}

void reverse(long int n)
{
    int rem = 0;
    if (n == 0)
        return;
    else
    {
        rem = n % 10;
        printf("%d", rem);
        n /= 10;
        reverse(n);
    }
}