// 2. Calculate the sum of n numbers entered by the user using malloc (). 
#include<stdio.h>
void main()
{
	float *p;
	float *q;
	float *r;
	
	p=(float*)malloc(sizeof(float));
	q=(float*)malloc(sizeof(float));
	r=(float*)malloc(sizeof(float));
	
	printf("Enter The 1st Number:");
	scanf("%f",p);
	printf("Enter The 2st Number:");
	scanf("%f",q);
	printf("Sum Of Two Number:%f\n",*p+*q);
	
	free(p);
	free(q);
	free(r);
}
