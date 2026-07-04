// 3. Calculate the sum of n numbers entered by the user using calloc ().
#include<stdio.h>
void main()
{

	float *p;
	float *q;
	float *r;
	
	p=(float*)calloc(100,4);
	q=(float*)calloc(100,4);
	r=(float*)calloc(100,4);
	
	printf("Enter The 1st Number:");
	scanf("%f",p);
	printf("Enter The 2st Number:");
	scanf("%f",q);
	printf("Sum Of Two Number:%f\n",*p+*q);
	
	free(p);
	free(q);
	free(r);
}
