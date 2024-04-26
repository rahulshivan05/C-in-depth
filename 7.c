#include <stdio.h>

/*
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main2(int argc, char const *argv[])
{
    // printf("Hello\tWorld\n\n");

    int area;
    area = LENGTH * WIDTH;
    printf("Value of area : %d", area);
    printf("%c", NEWLINE);
    return 0;
}
*/

// +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
// 2nd Example
//
// +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+

int main(int argc, char const *argv[])
{
    /* code */
    const int LENGTH = 10;
    const int WIDTH = 5;
    const char NEWLINE = '\n';

    int area;
    area = LENGTH * WIDTH;
    printf("Value of area is : %d", area);
    printf("%c", NEWLINE);

    return 0;
}
