#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main()
{
int x,y,x_mid,y_mid,radius,dp;
int g_mode,g_driver=DETECT;
initgraph(&g_driver,&g_mode,(char*)"");
x_mid=300;
y_mid=200;
radius=150;
x=0;
y=radius;
dp=1-radius;
do
{
putpixel(x_mid+x,y_mid+y,YELLOW);
putpixel(x_mid+y,y_mid+x,YELLOW);
putpixel(x_mid-y,y_mid+x,YELLOW);
putpixel(x_mid-x,y_mid+y,YELLOW);
putpixel(x_mid-x,y_mid-y,YELLOW);
putpixel(x_mid-y,y_mid-x,YELLOW);
putpixel(x_mid+y,y_mid-x,YELLOW);
putpixel(x_mid+x,y_mid-y,YELLOW);
if(dp<0)
    {
dp+=(2*x)+1;
}
else
{
y=y-1;
dp+=(2*x)-(2*y)+1;
}
x=x+1;
}
while(y>x);
getch();
return 0;
}
