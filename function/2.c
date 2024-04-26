// Program to draw a line

#include <stdio.h>

void drawline(void); // function declaration

int main(int argc, char const *argv[])
{
    drawline(); // function call

    return 0;
}

void drawline(void) // function definition
{
    int i = 0;
    for (i = 1; i <= 80; i++)
    {
        printf("-");
    }
}