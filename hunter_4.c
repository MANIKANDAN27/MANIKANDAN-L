#include <stdio.h>
#include<conio.h>
void main(void) 
{
	int n,i,k,max=0;
	scanf("%d",&n);
	int a[n],b[1000];
  for(i=0;i<1000;i++)
  {
   b[i]=0;
  }
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		k=a[i];
		b[k]++;
    if(max<a[i])
      max=a[i];
}
 for(i=0;i<=max;i++)
	{
		if(b[i]==1)
		{
		 printf("%d ",i);
        b[i]=0;	
	  }
	}
	getch();
}
