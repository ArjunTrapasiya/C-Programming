#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter a,b,c:");
	scanf("%d %d %d",&a,&b,&c);
	if (a<b && a>c || a>b && a<c)
	{
		printf("A is Second Largest Number");
	}	
	else if (b<a && b>c || b>a && b<c)
	{
		printf("B is Second Largest Number");
	}
	else
	{
		printf("C is Second Largest Number");
	}
}
