// 2. Demonstrate int, float, double and char pointer.
#include<stdio.h>
void main()
{
	int a,*p;
	float b,*q;
	char c,*r;
	double d,*s;
	p=&a;
	q=&b;
	r=&c;
	s=&d;
	
	printf("Enter Int Value For a:");
	scanf("%d",&a);
	printf("\nValue Of A: %d",*p);
	printf("\nAddress Of A: %d",p);
	
	printf("\n");
	printf("\nEnter Float Value For b:");
	scanf("%f",&b);
	printf("\nValue Of B: %f",*q);
	printf("\nAddress Of B: %u",q);
	
	
	printf("\n");
	printf("\nEnter Character Value For c:");
	scanf(" %c",&c);
	printf("\nValue Of C: %c",*r);
	printf("\nAddress Of C: %u",r);
	
	printf("\n");
	printf("\nEnter Double Value For d:");
	scanf("%lf",&d);
	printf("\nValue Of D: %lf",*s);
	printf("\nAddress Of D: %u",s);
}
