// 1. Allocate and de-allocate memory for int, char and float variables at run time.
#include<stdio.h>
void main()
{
	int *p;
	char *q;
	float *r;
	
	p=(int*)malloc(sizeof(int));
	q=(char*)malloc(sizeof(char));
	r=(float*)malloc(sizeof(float));
	
	printf("Enter A Number:\n");
	scanf("%d",p);
	printf("Enter Number is :%d\n",*p);
	
	printf("\nEnter A Character:\n");
	scanf(" %c",q);
	printf("Enter Character is :%c\n",*q);
	
	printf("\nEnter A Float Number:\n");
	scanf("%f",r);
	printf("Enter Float Number is :%f\n",*r);
	
	free(p);
	free(q);
	free(r);
}
