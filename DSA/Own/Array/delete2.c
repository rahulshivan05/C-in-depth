#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[] = {1, 3, 8, 9}, k = 2;
    int size = (sizeof(a) / sizeof(a[0]));

    for (int i = k; i < size; i++)
    {
        // a[i] = a[i + 1];
        a[i - 1] = a[i];
    }
    size -= 1;

    // print all element

    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}
