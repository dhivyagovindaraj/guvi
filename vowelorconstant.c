#include<stdio.h>
int main()
{
char n;
printf("Enter a character");
scanf("%c",&n);
if(((n>=65)&&(n<=90))||((n>=97)&&(n<=122))) 
{
if((n=='a')||(n=='A')||(n=='e')||(n=='E')||(n=='i')||(n=='I')||(n=='o')||(n=='O')||(n=='u')||(n=='U'))
printf("\nVowel");
else  
printf("\nConsonant");
}
else  
  printf("\nNot an alphabet");
return 0;
}
