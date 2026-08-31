#include<stdio.h>
void main()
{
	float a,b;
	char c;
	printf("Enter +,-,*,/");
	scanf("%c",&c);
	printf("Enter Two Number:");
	scanf("%f %f",&a,&b);
	if (c=='+')
	{printf("Addition %f",a+b);}
	if (c=='-')
	{printf("Subtraction %f",a-b);}
	if (c=='*')
	{printf("Multiplication %f",a*b);}
	if (c=='/')
	{printf("Division %f",a/b);}
}
