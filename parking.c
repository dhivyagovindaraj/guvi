#include<stdio.h>
int main()
{
int a1,a2,a3,a4,a;
scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a);
if(a<a1)
printf("B1");
else if(a<a1+a2)
printf("B2");
else if(a<a1+a2+a3)
printf("B3");
else if(a<a1+a2+a3+a4)
printf("B4");
else
printf("EXT");
return 0;
}
