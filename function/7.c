// Program to understand the use of return statement

#include <stdio.h>

void funct(int, float);

int main(int argc, char const *argv[])
{
    int age = 0;
    float ht = 0;
    printf("Enter age and height : ");
    scanf("%d %f", &age, &ht);
    funct(age, ht);
    return 0;
}

void funct(int age, float ht)
{
    if (age > 25)
    {
        printf("Age should be less than 25\n");
        return;
    }
    if (ht < 5)
    {
        printf("Height should be less than 5\n");
        return;
    }
    printf("Selected\n");
}