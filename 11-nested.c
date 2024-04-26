#include <stdio.h>

int main()
{
    /*
    // local variable definition
    int i, j;

    for (i = 2; i < 100; i++)
    {
        for (j = 2; j <= (i / j); j++)
        {
            // if factor found, not prime
            if (!(i % j))
                break;
        }
        if (j > (i / j))
            printf("%d is prime\n", i);
    }
    */

    // 2nd Exapmle

    /*

    int i, j;

    for (i = 2; i < 100; i++)
    {
        for (j = 2; j <= (i / j); j++)
            if (!(i % j))
                break; // if factor found, not prime
        if (j > (i / j))
            printf("%d is prime\n", i);
    }
    */

    //    3rd Example

    /*
    int a = 10;
    while (a < 20)
    {
        printf("Value of a: %d\n", a);
        a++;
        if (a > 15)
        {
            break;
        }
    }
    */

    //    4th Example

    /*
    int a = 10;
    do
    {
        if (a == 15)
        {
            a = a + 1;
            continue;
        }
        printf("value of a: %d\n", a);
        a++;
    } while (a < 20);
    */

    // 5th Example
    /*
    int a = 10;
LOOP:
    do
    {
        if (a == 15)
        {
            a = a + 1;
            goto LOOP;
        }
        printf("value of a: %d\n", a);
        a++;

    } while (a < 20);
    */

    // 6th example
    // infinite loop

    for (;;)
    {
        printf("This loop will run forever.\n");
    }

    return 0;
}