#include<stdio.h>
int main( )
{
int height;
printf("Enter the height of the shot\n");
scanf("%d",&height);
if(height<50)
printf(":-(Aim High");
else if(height>90)
printf(":-(Aim Low");
else
printf("Hurray !!!");
return 0;
}
