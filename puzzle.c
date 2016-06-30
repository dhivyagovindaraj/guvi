#include<stdio.h>
#include<math.h>
int main()
{
int a,b,days=0;
scanf("%d%d",&a,&b);
if(a==0||b==0)
{
printf("%d",days);
}
else
{
days=1+(a/2)+(b/2);
printf("%d",days);
}
return 0;
}
