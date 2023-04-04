#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main()
{
    int gd=DETECT, gm, error, x0, y0, x1, y1;
    initgraph(&gd, &gm, (char*)"");
    x0=100;
    y0=100;
    x1=200;
    y1=200;
    int dx, dy, p, x, y;
    dx = x1 - x0;
    dy = y1 - y0;
    x = x0;
    y = y0;
    p = 2 * dy - dx;
    while (x < x1)
    {
        if (p >= 0)
        {
            putpixel(x, y, RED);
            y = y + 1;
            p = p + 2 * dy - 2 * dx;
        }
        else
        {
            putpixel(x, y, RED);
            p = p + 2 * dy;
        }
        x = x + 1;
    }
    return 0;
}
