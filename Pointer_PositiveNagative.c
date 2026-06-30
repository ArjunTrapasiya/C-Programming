// 4. Print positive and negative numbers in array using pointers.
#include<stdio.h>
void main()
{	int i,n;
	int arr[n],*ptr;
	ptr=arr;
	
	printf("Enter The Number:");
	scanf("%d",&n);
	printf("\n");
	printf("Enter The %d Number:\n",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	
	printf("\n");
	
	printf("Positive Number Given Below:\n");
	for(i=0;i<n;i++)
	{
		if(*(ptr+i)>0)
		printf("%d\n",*(ptr+i));
	}
	
	printf("\nNagative Number Given Below:\n");
	for(i=0;i<n;i++)
	{
		if(*(ptr+i)<0)
		printf("%d\n",*(ptr+i));
	}
}
