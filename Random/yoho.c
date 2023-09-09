#include<stdio.h>

#include<conio.h>
#include<stdlib.h> #include<math.h> 
void main( )
{
int x1,y1,x2,y2,i, step, xn, yn,dx,dy;
 int gdriver=DETECT, gmode;
     clrscr();
initgraph(&gdriver, &gmode, “C:\\TURBOC3\\BGI”);
printf(“Enter the starting coordinates”);
scanf(“%d%d”, &x1, &y1);
printf(“Enter the end coordinates”);
scanf(“%d%d”, &x2, &y2);
dx= x2-x1;
dy = y2-y1;
if (abs (dx)>abs (dy))
{
step=abs(dx);
}
else
{
step = abs(dy);
}
xn = dx/step;
yn =  dy/step;

for(i=1; i<=step; i++)
{
putpixel(x1,y1, LIGHTBLUE);
delay(200);
x1=x1+xn;
y1=y1+yn;
}
getch();
closegraph();
}
