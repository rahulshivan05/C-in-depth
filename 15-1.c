#include <stdio.h>

const int MAX = 3;

int main(int argc, char const *argv[])
{
    int var[] = {10, 100, 200};
    int *ptr = NULL;

    /*
    ptr = var;

    for (int i = 0; i < MAX; i++)
    {
        printf("Address of var[%d] = %x\n", i, ptr);
        printf("Value of var[%d] = %d\n", i, *ptr);

        // Move to the next location
        ptr++;
    }
    */

    /* Decrement a Pointer */
    /*

    // Let us have array address in pointer
    ptr = &var[MAX - 1];
    for (int i = MAX; i > 0; i--)
    {
        printf("Address of var[%d] = %x\n", i, ptr);
        printf("Value of var[%d] = %d\n", i, *ptr);

        // Move to the previous location
        ptr--;
    }
    */

    //    3rd Example
    /*
    ptr = var;
    int i = 0;
    while (ptr <= &var[MAX - 1])
    {
        printf("Address of var[%d] = %x\n", i, ptr);
        printf("Address of var[%d] = %d\n", i, *ptr);

        ptr++;
        i++;
    }
    */

    // 4th Example

    int *ptr2[MAX] = NULL;

    for (int i = 0; i < MAX; i++)
    {
        // assign the address of integer
        ptr2[i] = &var[i];
    }

    for (int i = 0; i < MAX; i++)
    {
        printf("Value of var[%d] = %d\n", i, *ptr2[i]);
    }

    return 0;
}
