#include <stdio.h>

void func(int arr[])
{
    int i = 5, sum = 0;
    while (i > 2)
    {
        sum = sum + arr[--i];
        // printf("%d\n", --i); // testing only
    }
    printf("Sum = %d\n", sum);
}

int main(int argc, char const *argv[])
{
    int arr[5] = {5, 10, 15, 20, 25};
    func(arr);
    return 0;
}
