#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Actual variable declaration
    int var = 20;

    // pointer variable declaration
    int *ip = NULL;

    printf("The value at *ip is: %x\n", ip);

    // Store address of var in pointer variable
    // ip = &var;

    // printf("Address of var variable: %x\n", &var);

    // address stored in pointer variable
    // printf("Address stored in ip variable: %x\n", ip);

    // Access the value using the pointer
    // printf("Value of *ip variable: %d\n", *ip);
    return 0;
}
