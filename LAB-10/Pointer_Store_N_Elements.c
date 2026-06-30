// 2. Store n elements in an array and print the elements using pointer.
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
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(ptr+i));
	}
}
