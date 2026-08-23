#include <stdio.h>
void main()
{
	int Distance;
	int Milage;
	int Fuelprice;
	printf("Enetr The Value Of Distance=");
	scanf("%d",&Distance);
	printf("Enetr The Value Of Milage=");
	scanf("%d",&Milage);
	printf("Enetr The Value Of Fuel price=");
	scanf("%d",&Fuelprice);
	int Finalcost=((Distance/Milage)*Fuelprice);
	printf("%d",Finalcost);	
}
