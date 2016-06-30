#include<stdio.h>
int main( )
{
int  x,y,z;
printf("Enter x\n");
scanf("%d",&x);
printf("Enter y\n");
scanf("%d",&y);
printf("Enter z\n");
scanf("%d",&z);
if ( (x<y)&&(x<z) )
printf("L1 has the minimal seating capacity\n");
else if(y<z)
printf("L2 has the minimal seating capacity\n");
else 
printf("L3 has the minimal seating capacity");
return 0;
}
