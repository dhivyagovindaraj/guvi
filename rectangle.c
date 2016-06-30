include<stdio.h>
int main()
{
int x,y,i,b;
scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&i);
scanf("%d",&b);
printf("%d,%d\n",x,y);
printf("%d,%d\n",x,(y+b));
printf("%d,%d\n",(x+i),(y+b));       
printf("%d,%d\n",(x+i),y);
return 0;
}
