#include<stdio.h>
void main()
{
	int month;
	printf("Enetr month Number(1-12):");
	scanf("%d",&month);
	if (month==1)
	printf("January");
	if (month==2)
	printf("February");
	if (month==3)
	printf("March");
	if (month==4)
	printf("April");
	if (month==5)
	printf("May");
	if (month==6)
	printf("June");
	if (month==7)
	printf("July");
	if (month==8)
	printf("August");
	if (month==9)
	printf("September");
	if (month==10)
	printf("Octomber");
	if (month==11)
	printf("November");
	if (month==12)
	printf("December");
	if (month!=1 && month!=2 && month!=3 && month!=4 && month!=5 && month!=6 && month!=7 && month!=8 && month!=9 && month!=10 && month!=11 && month!=12)
	printf("Invalid");
}
