#include <stdio.h>
	void main()
	{
	 float price;
	 float tax;
	 float taxamount;
	 printf(" Enter Value of price and tax");
	 scanf("%f %f", &price, &tax);
	 taxamount=price*tax/100;
	 printf("%f tax amount", taxamount);
	}
