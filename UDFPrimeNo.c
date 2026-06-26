// Find given number is prime or not using a function.
#include<stdio.h>
void prime(int a);
void main()
{
	int a;
	printf("Enter A:");
 	scanf("%d",&a);
 	prime(a);
}
void prime(int a)
{
	int flag,i;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		flag=flag+1;
	}
	if(flag==2)
	printf("Number Is Prime");
	else
	printf("Number Is Not Prime");
}
