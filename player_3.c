#include<stdio.h>
#include<conio.h>
void main()
{
int r=0,n;
printf("enter the number:");
scanf("%d",&n);
while(n!=0)
{
 r=r*10;
 r=r+n%10;
 n=n/10;
 }
 printf("reverse number is%d",r);
 getch();
}
