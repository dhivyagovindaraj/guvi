#include<stdio.h>
int main()
{
int  a,b,c,e,g,h;
printf("\nEnter the x-coordinate of the left bottom vertex");
scanf("%d",&a);
printf("\nEnter the y-coordinate of the left bottom vertex");
scanf("%d",&b);
printf("\nEnter the length of a side");
scanf("%d",&c);
e=c/2;
g=e+a;
h=e+b;
printf("\nThe centre of the room is at (%d,%d)",g,h);
return 0;
}
