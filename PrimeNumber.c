#include<stdio.h>
void main()
{
	int i,j,n,a=0;
	printf("Enter The Number:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		if((n%i)==0)
		{
			a=a+1;
		}
	}
	if(a==2)
	{
		printf("Number Is Prime");
	}
	else
	printf("Number Is Not Prime");
		
}
