// Program for input and output of string using gets() and puts()

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[10];
    printf("Enter string: ");
    gets(str);
    printf("\nString is: ");
    puts(str);

    return 0;
}
