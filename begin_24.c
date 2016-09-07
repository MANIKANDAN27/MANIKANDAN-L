#include<stdio.h>
int main()
{
int a=0,l;
printf("enter the number:");
scanf("%d",&l);
while(l!=0)
{
 a=a*10;
 a=a+l%10;
 l=l/10;
 }
 printf("reverse number is%d",a);
 return 0;
}
