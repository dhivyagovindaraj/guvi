#include<stdio.h>
int main( )
{
char name[50],n1[50];
int t1,t2;
double c1,c2;  
 printf("\nTicket 1 :");
  printf("\nEnter Ticket Number :");
  scanf("%d",&t1);
  printf("\nEnter Name :");
  scanf("%s",name);
  printf("\nEnter Ticket Cost :");
  scanf("%lf",&c1);
  printf("\nTicket 2 :");
  printf("\nEnter Ticket Number :");
  scanf("%d",&t2);
  printf("\nEnter Name :");
  scanf("%s",n1);
  printf("\nEnter Ticket Cost :");
  scanf("%lf",&c2);
  printf("\nTicket Details :");
  printf("\nTicket 1 :");
  printf("\nNumber : %d",t1);
  printf("\nName : %s",name);
  printf("\nCost : %.2f",c1);
  printf("\nTicket 2 :");
  printf("\nNumber : %d",t2);
  printf("\nName : %s",n1);
  printf("\nCost : %.2f",c2);
  return 0;
}
