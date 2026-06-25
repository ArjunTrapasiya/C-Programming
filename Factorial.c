#include<stdio.h>
void main()
{
	int i,n,fact;
	printf("Enter The Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial is:%d",fact);
}
