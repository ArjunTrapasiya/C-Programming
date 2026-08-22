#include <stdio.h>
void main()
{
	int h,m,s,t;
	printf("Enter the Value of  time in second=");
	scanf("%d" , &t);
	h=t/3600;
	m=(t%3600)/60;
	s=t%60;
	printf("%d %d %d" , h,m,s);
}
