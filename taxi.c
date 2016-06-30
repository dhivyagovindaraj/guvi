#include<stdio.h>
int main( )
{
  int x,y;
  float a,b;
  printf("\nEnter cents :");
  scanf("%d",&x);
  printf("\nEnter taxi fare (in Dollars) :");
  scanf("%d",&y);
  a=x-y*100;
   b=a/100;
   printf("\nBalance : $%.2f",b);
    return 0;
    }
