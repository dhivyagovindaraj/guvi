#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,n1,n2,n3,p,q,r;
scanf("%d",&n);
scanf("%d",&n1);
scanf("%d",&n2);
scanf("%d",&n3);
p=abs(n-n1);
q=abs(n-n2);
r=abs(n-n3);
if(p<q&&p<r)
{
printf("%d",n1);
}
else if(q<r)
{
printf("%d",n2);
}  
else
{
printf("%d",n3);
}
return 0;
}
