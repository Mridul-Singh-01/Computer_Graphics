#include <graphics.h>
#include <conio.h>
#include <stdio.h>
int main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    float dx, dy, steps;
    int x0, x1, y0, y1, xi, yi;
    setbkcolor(WHITE);
    x0 = 100, y0 = 200, x1 = 500, y1 = 300;
    dx = (float)(x1 - x0);
    dy = (float)(y1 - y0);
    if (dx >= dy)
    {
        steps = abs(dx);
    }
    else
    {
        steps = abs(dy);
    }
    xi = dx / steps;
    yi = dy / steps;
    for (int i = 1; i <= steps; i++)
    {
        putpixel(x0, y0, RED);
        x0 = x0 + xi;
        y0 = y0 + yi;
    }
    getch();
    closegraph();
    return 0;
}
