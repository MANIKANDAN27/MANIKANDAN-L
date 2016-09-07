#include<stdio.h>
#include<conio.h>
void main()
{
int s,e,i;
printf("enter the start and end interval:");
scanf("%d%d",&s,&e);
for(i=s;i<=e;i++)
{
 if(i%2==1)
 printf("%d",i);
}
getch();
}
