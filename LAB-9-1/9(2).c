#include <stdio.h>
	void main()
{
	float p,r,t;
	float interest;
	printf("Enter value Of p=");
	scanf("%f",&p);
	printf("Enter value of r=");
	scanf("%f",&r);
	printf("Enter value of t=");
	scanf("%f",&t);
    interest=(p*r*t)/100;
    printf("%f",interest);
}
