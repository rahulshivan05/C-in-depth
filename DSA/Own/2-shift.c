#include <stdio.h>
#define N 5

int main(int argc, char const *argv[])
{
    int a[N] = {1, 2, 3, 4, 5}, pos = 0, dir = 0, temp = 0;

    // Taking array element from the user

    // printf("Enter %d integer numbers\n", N);
    // for (int i = 0; i < N; i++)
    // {
    //     scanf("%d", &a[i]);
    // }

    printf("Enter the number of positions to shift\n");
    scanf("%d", &pos);

    printf("Enter the direction of shifting.......\n");
    printf("LEFT: 1 and RIGHT: 0\n");
    scanf("%d", &dir);

    while (pos)
    {
        if (dir)
        {
            temp = a[0];
            for (int i = 0; i < N - 1; i++)
            {
                a[i] = a[i + 1];
            }

            a[N - 1] = temp;
        }
        else
        {
            temp = a[N - 1];
            for (int i = N - 1; i > 0; i--)
            {
                a[i] = a[i - 1];
            }

            a[0] = temp;
        }

        pos--;
    }

    printf("Array after shift operation .......\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d\n", a[i]);
    }

    printf("\n");

    return 0;
}
