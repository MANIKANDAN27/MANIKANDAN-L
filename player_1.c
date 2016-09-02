#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
printf("enter the string:");
gets(a);
strrev(a);
printf("reversed string is %s",a);
return 0;
}
