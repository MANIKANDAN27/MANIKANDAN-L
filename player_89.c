#include<stdio.h>
long fact(int);
int main()
{
int i,n,c;
printf("enter the n value:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(c=0;c<=(n-i-2);c++)
printf(" ");
for(c=0;c<=i;c++)
printf("%d",fact(i)/(fact(c)*fact(i-c)));
printf("\n");
}
long fact(int n)
{
int c;
long r=1;
for(c=1;c<=n;c++)
r=r*c;
return (r);
}

