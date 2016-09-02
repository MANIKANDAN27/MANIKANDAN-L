#include<stdio.h>
int main()
{
int n,r=0,t;
printf("enter the number:");
scanf("%d",&n);
t=n;
while(t!=0)
{
r=r*10;
r=r+temp%10;
t=t/10;
}
if(n==r)
printf("%d is palindrome",n);
else
printf("%d is not palindrome",n);
return 0;
}
