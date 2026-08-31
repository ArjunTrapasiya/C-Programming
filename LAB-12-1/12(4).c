#include<stdio.h>
void main()
{
	int a;
	printf("Enter The Number:");
	scanf("%d",&a);
	int b=a%10;
	if (b%2==0)
	{
		printf("Last Digit Is Even");
	}
	else
	{
		printf("Last Digit is Odd");
	}
}
