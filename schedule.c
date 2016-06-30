#include<stdio.h>
int main( )
{
char  a[50];
float b;
 float c;
printf("Enter event :\n");
scanf("%s",a);
printf("Enter Start Time :\n");
scanf("%f",&b);
printf("Enter End Time :");
scanf("%f",&c);
printf("\n%s : %.2f AM to %.2f PM",a,b,c);
return 0;    
}
