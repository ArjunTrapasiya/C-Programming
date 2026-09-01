#include<stdio.h>
void main()
{	
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a+b<=c||a+c<=b||b+c<=a){
	printf("not a triangle\n");
	}
	if(a==b&& b==c){
	printf("equilateral triangle\n");	
	}
	else if (a==b||b==c||a==c){
	printf("isosceles\n");
	}
	else{
		printf("scalene\n");
	}
	if(a*a+b*b==c*c||a*a+c*c==b*b|| b*b+c*c==a*a){
		printf("right angled\n");
	}
}
