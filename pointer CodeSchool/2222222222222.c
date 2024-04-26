#include <stdio.h>
#include "graphics.h"
#include <conio.h>

void main()
{
    int gdriver = DETECT, gmode;
    int x1 = 200, y1 = 200;
    int x2 = 300, y2 = 300;

    initgraph(&gdriver, &gmode, "C:\\Users\\rohit\\Desktop\\Dev");
    line(x1, y1, x2, y2);
    getch();
    closegraph();
}
