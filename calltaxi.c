#include<stdio.h>
int main()
{
int w,x,y,z,a,b;
float v;
printf("Enter the driver salary\n");
 scanf("%d",&w);
printf("Enter the car mileage in km per litre\n");
scanf("%d",&x);
printf("Enter the cost of petrol per litre\n");
scanf("%d",&y);
printf("Enter the taxi fare for a km\n");
scanf("%d",&z);
printf("Enter the distance of travel\n");
scanf("%f",&v);
a=(w+(y*v)/x);
if(v<=3)
{
  b=50;
}
else  
{
  b=(50+(v-3.0)*z);
}
if(a<b)
{
   printf("Minimal cost travel is by audi\n");
}
else
{
   printf("Minimal cost travel is by taxi\n");
}
return 0;
}
