// 4. Copy one array to another using pointers.
#include<stdio.h>
void main()
{
	int i,n,a[10],*p1, b[10],*p2;
	p1=&a;
	p2=&b;
	printf("Enter Size Of Array:");
	scanf("%d",&n);
	printf("\nEnter %d Numbers\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",(p1+i));
	}
	
	printf("\nMain Array Value:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",*(p1+i));
	}
	
	for(i=0;i<n;i++)
	{
		*(p2+i)=*(p1+i);
	}
	
	printf("\n");
	printf("\nCopy Array Value:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",*(p2+i));
	}
	
}
