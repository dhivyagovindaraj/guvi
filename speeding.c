#include<stdio.h>
int main()
{
float l,m,n,o,p,q;
scanf("%f",&l);
scanf("%f",&m);
scanf("%f",&n);
o=l/5280;
p=m/3600;
q=o/p;
if(q>55)
{
printf("Speeding");
}
else
{
printf("Not Speeding");
}
return 0;
}
