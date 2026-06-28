// 3. Calculate sum of two numbers using pointer.
#include<stdio.h>
void main()
{
	float a,*x, b,*y, c,*z;
	x=&a;
	y=&b;
	z=&c;
	
	printf("Enter A Number:");
	scanf("%f",&a);
	printf("Enter Another Number:");
	scanf("%f",&b);
	
	*z=*x+*y;
	
	printf("Sum: %f",*z);
}
