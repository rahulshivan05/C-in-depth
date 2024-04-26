// Program to print address of variable using address operator

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age = 10;
    float sal = 1500.50;
    printf("Value of age = %d, Address of age = %u\n", age, &age);
    printf("Value of sal = %f, Address of sal = %u\n", sal, &sal);
    return 0;
}
