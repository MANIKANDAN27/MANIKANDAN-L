#include<stdio.h>
#include<conio.h>
void main()
{
 int n,s=0,i;
 printf("enter the n value:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 s=s+i;
 }
 printf("sum of n natural number is %d",s);
 getch();
}
