#include<stdio.h>
void main()
{
 	 int n,i,table;
	 printf("Enter The Number:");
	 scanf("%d",&n);
	 for(i=1;i<=10;i++)
	 {
	 	table=i*n;
	 	printf("%d*%d=%d\n",n,i,table);
	 }	 		
}
