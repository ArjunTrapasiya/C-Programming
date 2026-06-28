// 5. Swap two arrays using pointers.
#include<stdio.h>
void main()
{
	int a[20],*p1, b[20],*p2, c[20],*temp;
	p1=&a;
	p2=&b;
	temp=&c;
	int i,n,m;
	
	// 1st array print and scan
	printf("Enter Size Of 1st Array:");
	scanf("%d",&n);
	printf("\nEnter %d Numbers\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",(p1+i));
	}
	
	printf("\n1st Array Value:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",*(p1+i));
	}
	
	// 2st array print and scan
	printf("\n");
	printf("\nEnter Size Of 2st Array:");
	scanf("%d",&n);
	printf("\nEnter %d Numbers\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",(p2+i));
	}
	
	printf("\n2st Array Value:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",*(p2+i));
	}
	
	// swap 
	
	for(i=0;i<n;i++)
	{
	temp=*(p1+i);
	*(p1+i)=*(p2+i);
	*(p2+i)=temp;
	}

	
	printf("\n");
	printf("\n After Swap Array 1 Value:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",*(p1+i));
	}
	
	printf("\n");
	printf("\n After Swap Array 2 Value:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",*(p2+i));
	}
	
}
