// Find the maximum number between two numbers using a function.
#include<stdio.h>
void max(int a,int b);
void main()
{
	int a,b;
	printf("Enter A:");
 	scanf("%d",&a);
	printf("Enter B:");
 	scanf("%d",&b);
 	max(a,b);
}
void max(int a,int b)
{
	if(a>b)
	printf("A is Max");
	else
	printf("B is Max");
}
