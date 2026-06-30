// 1. Swap the values of two numbers using a pointer.
#include<stdio.h>
void main()
{
	int a,*p, b,*q, temp,*r;
	p=&a;
	q=&b;
	
	
	printf("Enter Value Of A:");
	scanf("%d",&a);
	printf("Enter Value Of b:");
	scanf("%d",&b);
	
	printf("\nBefore Swap Value Of A Is: %d",*p);
	printf("\nBefore Swap Value Of B Is: %d\n",*q);
	
	temp=*p;
	*p=*q;
	*q=temp;
	
	printf("\nAfter Swap Value Of A Is: %d",*p);
	printf("\nAfter Swap Value Of B Is: %d",*q);
}
