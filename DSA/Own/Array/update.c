#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[] = {1, 3, 8, 9}, k = 2, n = 4, item = 57;

    a[k - 1] = item;
    printf("All array elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}
