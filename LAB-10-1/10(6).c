#include <stdio.h>
void main()
{
	float SellingPrice;
	float CostPrice;
	float Profit,prc;
	printf("Enetr The Value Of SellingPrice=");
	scanf("%f",&SellingPrice);
	printf("Enter The Value Of CostPrice=");
	scanf("%f",&CostPrice);
	Profit=SellingPrice-CostPrice;
	prc=Profit/CostPrice*100;
	printf("%f",prc);
}
