#include<stdio.h>
void main()
{
	int n,d,sum=0;
	printf("Enter The Number:");
	scanf("%d",&n);
	int i=n;
	while(n!=0)
	{
		d=n%10;
		sum+=d;
		n/=10;
	}
	printf("Sum=%d",sum);	
}
