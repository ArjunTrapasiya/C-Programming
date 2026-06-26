// Count simple interest using a function.
#include<stdio.h>
void interest(float p,float r,float n);
void main()
{
	float p,r,n;
	printf("Enter The Prize:");
	scanf("%f",&p);
	printf("Enter The Rate Of Interest:");
	scanf("%f",&r);
	printf("Enter The Number Of year:");
	scanf("%f",&n);
	interest(p,r,n);
}
void interest(float p,float r,float n)
{
	float rate;
	rate=(p*r*n)/100;
	printf("Simple Interest Is:%f",rate);
}

