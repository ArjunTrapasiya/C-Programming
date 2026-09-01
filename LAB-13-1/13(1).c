#include<stdio.h>
void main()
{
	int Day;
	printf("Enetr Day Number(1-7):");
	scanf("%d",&Day);
	if (Day==1)
	printf("Monday");
	if (Day==2)
	printf("Tuesday");
	if (Day==3)
	printf("Wednesday");
	if (Day==4)
	printf("Thrusday");
	if (Day==5)
	printf("Friday");
	if (Day==6)
	printf("Saturday");
	if (Day==7)
	printf("Sunday");
	if (Day!=1 && Day!=2 && Day!=3 && Day!=4 && Day!=5 && Day!=6 && Day!=7)
	printf("Invalid");
}
