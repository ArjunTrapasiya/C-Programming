// 4. Write a program that demonstrates the use of realloc ().
#include<stdio.h>
void main()
{
	int *p;
	
	p=(int*)malloc(sizeof(int));
	p=(int*)realloc(p,2*sizeof(int));
	printf("Enter The 1st Number:");
	scanf("%d",(p));
	printf("Enter The 2nd Number");
	scanf("%d",(p+1));
	
	printf("Sum=%d",*(p) + *(p+1));
}

