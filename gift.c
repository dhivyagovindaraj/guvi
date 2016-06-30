#include<stdio.h>
int main()
{
char r;
scanf("%c",&r);
if(r>=65&&r<=90)
{
printf("upper case");
}
else if(r>=97&&r<=122)
{
printf("lower case");
}
else if(r>=48&&r<=57)
{
printf("digit");
}
else
{
printf("damaged");
}  
 return 0; 
}
