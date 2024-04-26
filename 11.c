#include <stdio.h>
int main()
{
    /*
    // local variable definition
    int a = 10;
    // while loop execution
    while (a < 20)
    {
        printf("value of a: %d\n", a);
        a++;
    }
    */

    /* do loop execution */
    int a = 10;
    do
    {
        printf("value of a: %d\n", a);
        ++a;
    } while (a < 20);

    return 0;
}
