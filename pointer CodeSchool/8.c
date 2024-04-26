// Character Arrays and Pointer part-1

#include <stdio.h>
#include <string.h>

void print(char *c)
{
    int i = 0;
    // while (c[i] != '\0')
    // {
    //     printf("%c", c[i]);
    //     i++;
    // }

    // 2nd type

    while (*c != '\0')
    {
        printf("%c", *c);
        c++;
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    // char c[5];
    // c[0] = 'J';
    // c[1] = 'O';
    // c[2] = 'H';
    // c[3] = 'N';
    // c[4] = '\0';

    // 2nd Example

    // char c2[5] = "JOHN";
    // int len = strlen(c2);

    // printf("%s\n", c2);
    // printf("Length is = %d\n", len);
    // printf("Size in bytes = %d\n", sizeof(c2));

    // 3rd Example

    char c[] = "Hello";
    c[0] = 'A'; // change the first element of c[]
    printf("Hello World\n");
    print(c);

    return 0;
}
