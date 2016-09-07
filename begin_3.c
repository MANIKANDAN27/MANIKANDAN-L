#include<stdio.h>
#include<conio.h>
void main()
{
 char c;
 printf("enter the character:");
 scanf("%c",&c);
 if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
 printf("given char is vowel");
 else
 printf("given char is consonant");
 getch();
}
