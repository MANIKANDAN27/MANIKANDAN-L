#include<stdio.h>
#include<conio.h>
long gcd(long,long);
int main()
{
 long x,y;
 printf("enter the two integer:");
 scanf("%ld%ld",&x,&y);
 printf("gcd of %ld and %ld is%ld,x,y,gcd(x,y));
 return 0;
}
long gcd(long x,long y)
{
if(x==0)
return y;
}
while(y!=0)
{
if(x>y)
{
x=x-y;
}
else
{
y=y-x;
}
}
return x;
}
