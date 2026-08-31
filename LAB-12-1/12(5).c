#include<stdio.h>
void main()
{
	float a,b,c,d,e;
	printf("Enter The Value Of a=");
	scanf("%f",&a);
	printf("Enter The Value Of b=");
	scanf("%f",&b);
	printf("Enter The Value Of c=");
	scanf("%f",&c);
	printf("Enter The Value Of d=");
	scanf("%f",&d);
	printf("Enter The Value Of e=");
	scanf("%f",&e);
	 float percentage=(a+b+c+d+e)/500*100;
	printf("%f",percentage);
	if (percentage<=35)
	printf("Fail");
	if (percentage>35 && percentage<45)
	printf("Pass Class");
	if (percentage>=45 && percentage<60)
	printf("Second Class");
	if (percentage>=60 && percentage<70)
	printf("First Class");
	if (percentage>=70)
	printf("Distin");
}
