// Program for input and output of strings using scanf() & printf()

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[10] = "Anpara";
    printf("String is: %s\n", str);
    printf("Enter new value for string: ");
    // in here you can use (&) or not both working
    scanf("%s", &str);
    printf("String is: %s\n", str);
    return 0;
}
