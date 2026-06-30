// 3. Find even and odd numbers  using pointer.
#include<stdio.h>
void main()
{
	int n,*ptr;
	ptr=&n;
	printf("Enter The Number:");
	scanf("%d",&n);
	
	if(n%2==0)
	printf("Number %d Is Even",*ptr);
	else
	printf("Number %d Is Odd",*ptr);
}
