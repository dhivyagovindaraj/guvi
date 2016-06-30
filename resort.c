#include<stdio.h>
int main()
{
int x1,y1,x2,y2;
float z,x;
printf ("\nEnter x1");
scanf("%d",&x1);
printf("\nEnter y1");
scanf("%d",&y1);
printf("\nEnter x2");
scanf("%d",&x2);
printf("\nEnter y2");
scanf("%d",&y2);
z=(x1+x2)/2.0;
x=(y1+y2)/2.0;
printf("\nResort is located at (%0.1f , %0.1f)",z,x);
return 0;
}
