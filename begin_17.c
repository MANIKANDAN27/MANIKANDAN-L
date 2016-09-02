#include<stdio.h>
#include<conio.h>
int main()
{
int n,s=0,t,r;
printf("enter the integer:");
scanf("%d",&n);
t=n;
while(t!=0)
{
r=t%10;
s=s+r*r*r;
t=t/10;
}
if(n==s)
printf("given no is armstrong number");
else
printf("given no is not armstrong number");
return 0;
}
