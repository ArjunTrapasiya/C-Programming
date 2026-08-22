#include <stdio.h>
void main()
{
	int y,w,d,Day;
	printf("Enter The Value Of  Days=");
	scanf("%d" , &Day);
	y=Day/365;
	w=(Day%365)/7;
	d=(Day%365)%7;
	printf("%d %d %d", y,w,d);	
}	
