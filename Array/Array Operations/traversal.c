// Program to traverse the array

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int la[] = {1, 3, 5, 7, 8};
    for (int i = 0; i < (sizeof(la) / sizeof(la[0])); i++)
    {
        printf("LA[%d] = %d\n", i, la[i]);
    }

    return 0;
}
