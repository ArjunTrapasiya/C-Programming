#include<stdio.h>
void main()
{
	float unit,bill;
	printf("Enter Unit Number:");
	scanf("%f",&unit);
	if (unit>250)
	{
		bill=(50*0.5)+(100*0.75)+(100*1.2)+(unit-250)*1.5;	
	}
	else if (unit>150)
	{
		bill=(50*0.5)+(100*0.75)+(unit-150)*1.2;	
	}
	else if (unit>50)
	{
		bill=(50*0.5)+(unit-50)*0.75;
	}
	else if (unit<50)
	{
		bill=unit*0.75;
	}
	else
	bill=bill+bill*0.2;
	printf("bill %f",bill);
}
