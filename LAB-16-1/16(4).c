#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter The Value Of A:");
	scanf("%d",&a);
	printf("Enter The Value Of B:");
	scanf("%d",&b);
	while(a<=b)
	{	
		if(a%2==0)
		{
	 	printf("%d \n",a);
		}
		a++;
	}
}
