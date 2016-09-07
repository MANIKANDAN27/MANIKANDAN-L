#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],s=0,i,n;
printf("enter the n value:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
 s=s+a[i];
}
printf("the average no is%d",s/n);
getch();}
}
