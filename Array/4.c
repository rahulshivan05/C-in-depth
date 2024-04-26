#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 7, arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (i = 7; i >= 0; i--)
    {
        printf("%d\t", --arr[--i]); // 6   4   2   0
    }

    return 0;
}
