#include<stdio.h>
int main()
{
int x,y;
printf("Enter the cost of travel by luxury bus\n");
scanf("%d",&x);
printf("Enter the cost of travel by share auto\n");
scanf("%d",&y);
if(x>y)
{
printf("Minimal cost travel is by auto");
}
else
{
printf("Minimal cost travel is by bus");
}  
return 0;
}
