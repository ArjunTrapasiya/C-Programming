// Generate a Fibonacci series of N given numbers using the function name fibbo().
#include<stdio.h>
void fibbo(int a,int b);
void main()
{
	int a=0;
	int b=1;
	
	fibbo(a,b);
}
void fibbo(int a,int b)
{
	int next,n;
	int i;
	printf("How Many Time Fibonacci Series Get:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("%d ",a);
		next=a+b;
		a=b;
		b=next;
	}
}

