#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the numbers:");
scanf("%d%d",&a,&b);
t=a;
a=b;
b=t;
printf("after swapping%d\n%d",a,b);
getch();
}
