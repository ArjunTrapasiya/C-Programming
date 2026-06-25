#include<stdio.h>
void main()
{
	 int n,f,s,rev;
	 printf("Enter The Number:");
	 scanf("%d",&n);
	 printf("Reverse Number Is:");
	 while(n!=0)
	 {
	 	int digit=n%10;
	 	printf("%d",digit);
	 	n=n/10;
	 }
}
